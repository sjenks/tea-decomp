# Differential test of the GUI: drives the original TEA.exe and the rebuilt tea.exe side by side with
# the same patterns and options, and compares what each results list holds.
#
#   powershell -File tests\guitest.ps1 [-Patterns file] [-Only name,name] [-Out results.txt]
#
# Both programs are started (and closed at the end) by the script. The original uses its own saved
# settings, so its open dictionaries decide which ones the rebuild is given; its options must be at
# their defaults. The rebuild runs with a private settings file (TEA_SETTINGS).
#
# For each pattern the script types it into the pattern box, presses Return, waits for the search to
# finish, then in each list clicks, selects all and copies: the clipboard text and the list header
# (" &1 Core English.tsd (4)") are compared byte for byte. The same control and command numbers work
# in both programs, which is why the rebuild keeps the original's.
param(
    [string]$Patterns = "",
    [string]$Only = "",
    [string]$Out = "",
    [int]$TimeoutSeconds = 120,
    [string]$FullTextFile = "",  # patterns for the Full Text Search runs (default: testsulltext.txt)
    [string]$DumpDir = ""        # write both versions of each differing list here
)
$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $PSScriptRoot
$teaDir = Join-Path (Split-Path -Parent $root) "TEA Crossword Helper 2.11"
$originalExe = Join-Path $teaDir "TEA.exe"
$rebuildExe = Join-Path $root "bin\tea.exe"

Add-Type @"
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
public static class G {
    public delegate bool EnumProc(IntPtr h, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumProc f, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumChildWindows(IntPtr p, EnumProc f, IntPtr l);
    [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr h, out uint pid);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
    [DllImport("user32.dll")] public static extern bool IsWindowEnabled(IntPtr h);
    [DllImport("user32.dll")] public static extern int GetDlgCtrlID(IntPtr h);
    [DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern int GetClassName(IntPtr h, StringBuilder s, int n);
    [DllImport("user32.dll", CharSet = CharSet.Unicode, EntryPoint = "SendMessageW")] public static extern IntPtr SendText(IntPtr h, uint m, IntPtr w, string l);
    [DllImport("user32.dll", CharSet = CharSet.Unicode, EntryPoint = "SendMessageW")] public static extern IntPtr SendBuf(IntPtr h, uint m, IntPtr w, StringBuilder l);
    [DllImport("user32.dll")] public static extern IntPtr SendMessage(IntPtr h, uint m, IntPtr w, IntPtr l);
    [DllImport("user32.dll")] public static extern bool PostMessage(IntPtr h, uint m, IntPtr w, IntPtr l);
    [DllImport("user32.dll")] public static extern IntPtr SetThreadDpiAwarenessContext(IntPtr c);
    [DllImport("user32.dll")] public static extern uint GetClipboardSequenceNumber();
    public static List<IntPtr> Top(uint pid) {
        var r = new List<IntPtr>();
        EnumWindows((h, l) => { uint p; GetWindowThreadProcessId(h, out p); if (p == pid && IsWindowVisible(h)) r.Add(h); return true; }, IntPtr.Zero);
        return r;
    }
    public static List<IntPtr> Children(IntPtr parent) {
        var r = new List<IntPtr>();
        EnumChildWindows(parent, (h, l) => { r.Add(h); return true; }, IntPtr.Zero);
        return r;
    }
    public static string Text(IntPtr h) { var s = new StringBuilder(4096); SendBuf(h, 0x000D, (IntPtr)4096, s); return s.ToString(); }
    public static string Cls(IntPtr h) { var s = new StringBuilder(256); GetClassName(h, s, 256); return s.ToString(); }
}
"@
[void][G]::SetThreadDpiAwarenessContext([IntPtr](-4))

function Find-Main($proc) {
    foreach ($h in [G]::Top([uint32]$proc.Id)) { if ([G]::Cls($h) -eq "TEAMainWindow") { return $h } }
    return [IntPtr]::Zero
}
function Find-Top($proc, $title) {
    foreach ($h in [G]::Top([uint32]$proc.Id)) { if ([G]::Text($h) -eq $title) { return $h } }
    return [IntPtr]::Zero
}
function Ctl($parent, [int]$id) {
    foreach ($c in [G]::Children($parent)) { if ([G]::GetDlgCtrlID($c) -eq $id) { return $c } }
    return [IntPtr]::Zero
}
function Pattern-Edit($main) {
    $combo = Ctl $main 4270
    foreach ($c in [G]::Children($combo)) { if ([G]::Cls($c) -eq "Edit") { return $c } }
    throw "no pattern edit"
}

function Wait-Idle($main) {
    $button = Ctl $main 4280
    $combo = Ctl $main 4270
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    Start-Sleep -Milliseconds 250
    $quiet = 0
    while ((Get-Date) -lt $deadline) {
        $t = [G]::Text($button)
        if ([G]::IsWindowEnabled($combo) -and $t -ne "&Stop" -and $t -ne "Re&sume") { $quiet++ } else { $quiet = 0 }
        if ($quiet -ge 3) { return $true }
        Start-Sleep -Milliseconds 100
    }
    return $false
}

function Run-Pattern($main, [string]$pattern) {
    $edit = Pattern-Edit $main
    [void][G]::SendText($edit, 0x000C, [IntPtr]::Zero, "")
    foreach ($ch in $pattern.ToCharArray()) { [void][G]::SendMessage($edit, 0x0102, [IntPtr][int]$ch, [IntPtr]1) }
    Start-Sleep -Milliseconds 100
    [void][G]::PostMessage($edit, 0x0100, [IntPtr]13, [IntPtr]1)
    [void][G]::PostMessage($edit, 0x0101, [IntPtr]13, [IntPtr]0xC0000001)
    if (-not (Wait-Idle $main)) { return $null }
    $lists = @()
    for ($i = 0; $i -lt 10; $i++) {
        $list = Ctl $main (4260 + $i)
        if ($list -eq [IntPtr]::Zero) { break }
        $header = [G]::Text((Ctl $main (6590 + $i)))
        # The clipboard is never written by this script: the original does not survive finding it
        # busy. Whether a copy happened is told by the clipboard's sequence number.
        $lp = [IntPtr]((6 -shl 16) -bor 30)
        [void][G]::SendMessage($list, 0x0201, [IntPtr]1, $lp)
        [void][G]::SendMessage($list, 0x0202, [IntPtr]0, $lp)
        [void][G]::SendMessage($main, 0x0111, [IntPtr]7510, [IntPtr]::Zero)
        $seq = [G]::GetClipboardSequenceNumber()
        [void][G]::PostMessage($main, 0x0111, [IntPtr]7500, [IntPtr]::Zero)
        $text = ""
        for ($k = 0; $k -lt 20; $k++) {
            Start-Sleep -Milliseconds 50
            if ([G]::GetClipboardSequenceNumber() -ne $seq) {
                Start-Sleep -Milliseconds 50
                for ($r = 0; $r -lt 10; $r++) { try { $text = Get-Clipboard -Raw; break } catch { Start-Sleep -Milliseconds 100 } }
                break
            }
        }
        if ($null -eq $text) { $text = "" }
        $lists += [pscustomobject]@{ Header = $header.Trim(); Text = $text }
    }
    return $lists
}

# Sets options through each program's own Options dialog. $changes: ordered id -> $true/$false for
# check boxes, or id -> "click" for radio buttons. The original disables the controls of tabs that
# are not showing, so each control's tab is selected first (with the arrow keys, which work the same
# in both programs whatever the display scaling).
$tabOf = @{ 4320 = 0; 4330 = 0; 10830 = 0; 14880 = 0
            13850 = 1; 5780 = 1; 12070 = 1; 12071 = 1; 12072 = 1; 12073 = 1; 13350 = 1; 13360 = 1
            14010 = 2; 14020 = 2; 13980 = 2; 13990 = 2; 13991 = 2; 13992 = 2
            6700 = 3; 6710 = 3; 6720 = 3 }
function Select-Tab($dlg, [int]$tab) {
    $tabs = Ctl $dlg 8030
    foreach ($k in 1..5) { [void][G]::SendMessage($tabs, 0x0100, [IntPtr]0x25, [IntPtr]1); [void][G]::SendMessage($tabs, 0x0101, [IntPtr]0x25, [IntPtr]0xC0000001) }
    for ($k = 0; $k -lt $tab; $k++) { [void][G]::SendMessage($tabs, 0x0100, [IntPtr]0x27, [IntPtr]1); [void][G]::SendMessage($tabs, 0x0101, [IntPtr]0x27, [IntPtr]0xC0000001) }
    Start-Sleep -Milliseconds 150
}
function Set-Options($proc, $main, $changes) {
    [void][G]::PostMessage($main, 0x0111, [IntPtr]7560, [IntPtr]::Zero)
    $dlg = [IntPtr]::Zero
    for ($k = 0; $k -lt 50 -and $dlg -eq [IntPtr]::Zero; $k++) { Start-Sleep -Milliseconds 100; $dlg = Find-Top $proc "TEA Options" }
    if ($dlg -eq [IntPtr]::Zero) { throw "no options dialog" }
    # (Enumerated as entries: an ordered dictionary indexed by a number would index by position.)
    foreach ($entry in $changes.GetEnumerator()) {
        $id = [int]$entry.Key
        $c = Ctl $dlg ([int]$id)
        if ($c -eq [IntPtr]::Zero) { throw "no option control $id" }
        for ($try = 0; $try -lt 5 -and -not ([G]::IsWindowEnabled($c) -and [G]::IsWindowVisible($c)); $try++) { Select-Tab $dlg $tabOf[$id] }
        if (-not [G]::IsWindowEnabled($c)) {
            $sel = [G]::SendMessage((Ctl $dlg 8030), 0x130B, [IntPtr]::Zero, [IntPtr]::Zero).ToInt32()   # TCM_GETCURSEL
            throw "option control $id is disabled in $($proc.Path) (tab $sel, wanted $($tabOf[$id]))"
        }
        $want = $entry.Value
        if ($want -is [bool]) {
            $now = [G]::SendMessage($c, 0x00F0, [IntPtr]::Zero, [IntPtr]::Zero).ToInt32() -eq 1
            if ($now -ne $want) { [void][G]::SendMessage($c, 0x00F5, [IntPtr]::Zero, [IntPtr]::Zero) }
            $now = [G]::SendMessage($c, 0x00F0, [IntPtr]::Zero, [IntPtr]::Zero).ToInt32() -eq 1
            if ($now -ne $want) { throw "option control $id did not change" }
        } else {
            [void][G]::SendMessage($c, 0x00F5, [IntPtr]::Zero, [IntPtr]::Zero)
        }
        Start-Sleep -Milliseconds 50
    }
    [void][G]::SendMessage((Ctl $dlg 2), 0x00F5, [IntPtr]::Zero, [IntPtr]::Zero)
    Start-Sleep -Milliseconds 300
}

function Close-Extras($proc) {
    foreach ($t in "TEA Quick Reference", "TEA Tip of the Day") {
        $h = Find-Top $proc $t
        if ($h -ne [IntPtr]::Zero) { [void][G]::PostMessage($h, 0x0010, [IntPtr]::Zero, [IntPtr]::Zero) }
    }
}

# --- start both programs ---
$key = "HKCU:\Software\Crossword Man\TEA Crossword Helper 2.11"
$dicts = @()
for ($i = 0; $i -lt 10; $i++) {
    $v = (Get-ItemProperty -Path $key -Name "OpenDictionary$i" -ErrorAction SilentlyContinue)."OpenDictionary$i"
    if ($v) { $dicts += $v }
}
if (-not $dicts) { throw "the original has no open dictionaries saved" }
Get-Process -Name TEA -ErrorAction SilentlyContinue | Where-Object { $_.Path -eq $originalExe } | ForEach-Object { $_.CloseMainWindow() | Out-Null; Start-Sleep 1 }
$settings = Join-Path $env:TEMP "tea-guitest.ini"
Remove-Item $settings -ErrorAction SilentlyContinue
$env:TEA_SETTINGS = $settings
$orig = Start-Process -FilePath $originalExe -WorkingDirectory $teaDir -PassThru
$new = Start-Process -FilePath $rebuildExe -ArgumentList ($dicts | ForEach-Object { "`"$_`"" }) -PassThru
Start-Sleep -Seconds 4
Close-Extras $orig; Close-Extras $new
Start-Sleep -Milliseconds 500
$mainA = Find-Main $orig; $mainB = Find-Main $new
if ($mainA -eq [IntPtr]::Zero -or $mainB -eq [IntPtr]::Zero) { throw "main windows not found" }

# --- what to run ---
$cases = @()
if ($Patterns) { $list = Get-Content $Patterns | Where-Object { $_ -and -not $_.StartsWith("#") } }
else {
    $list = @("q???k", ";acenrt", "q*k", "1234321", "y*y & *ly", ".l...r.n", ";eiknrr.", ".....;defijnx", "......*;bdeeio.", "...-..-.....",
              "* ..d", ".o.c... ....", "\A....", "*'*'*'*", "(p* | *p) & ;q......", ";tearing & ! *ing*", "##@@##@@##", "...(;orange)", ";rebel(ada)",
              "[xyz]..[abc]", "l[^aeiou]...", "e........;cats", ".......*;rexadigno", "*a*e*i*o*u*", ";opqr*")
}
$optionSets = [ordered]@{
    "defaults"               = [ordered]@{}
    "sort alpha"             = [ordered]@{ 14010 = $true }
    "sort alpha descending"  = [ordered]@{ 14010 = $true; 14020 = $false }
    "sort alpha no groups"   = [ordered]@{ 14010 = $true; 14020 = $true; 13980 = $false }
    "length descending"      = [ordered]@{ 13980 = $true; 13990 = "click" }
    "length ascending"       = [ordered]@{ 13992 = "click" }
    "no lower case"          = [ordered]@{ 13991 = "click"; 14010 = $false; 12070 = $false }
    "no upper case"          = [ordered]@{ 12070 = $true; 12071 = $false }
    "no punctuation"         = [ordered]@{ 12071 = $true; 12072 = $false }
    "no phrases"             = [ordered]@{ 12072 = $true; 12073 = $false }
    "independent"            = [ordered]@{ 12073 = $true; 6710 = "click" }
    "active only"            = [ordered]@{ 6720 = "click" }
    "no annotations/balances"= [ordered]@{ 6700 = "click"; 13850 = $false; 5780 = $false }
}
$reset = [ordered]@{ 13850 = $true; 5780 = $true; 14010 = $false; 13980 = $true; 13991 = "click"; 12070 = $true; 12071 = $true; 12072 = $true; 12073 = $true; 6700 = "click" }

# Full Text Search: definitions containing matching words (tests\fulltext.txt by default).

if (-not $FullTextFile) { $FullTextFile = Join-Path $PSScriptRoot "fulltext.txt" }
$ftsPatterns = Get-Content $FullTextFile | Where-Object { $_ }
if ($DumpDir) { New-Item -ItemType Directory -Force -Path $DumpDir | Out-Null }
$dumpCount = 0

$report = New-Object System.Collections.Generic.List[string]
$total = 0; $diffs = 0
$names = @($optionSets.Keys) + @("full text")
foreach ($name in $names) {
    if ($Only -and -not ($Only.Split(",") -contains $name)) { continue }
    $patternsHere = $list
    if ($name -eq "full text") {
        foreach ($m in $mainA, $mainB) { [void][G]::SendMessage($m, 0x0111, [IntPtr]12770, [IntPtr]::Zero) }
        $patternsHere = $ftsPatterns
    } elseif ($optionSets[$name].Count) { Set-Options $orig $mainA $optionSets[$name]; Set-Options $new $mainB $optionSets[$name] }
    foreach ($p in $patternsHere) {
        $a = Run-Pattern $mainA $p
        $b = Run-Pattern $mainB $p
        $total++
        if ($null -eq $a -or $null -eq $b) { $diffs++; $report.Add("TIMEOUT [$name] $p"); Write-Output "TIMEOUT [$name] $p"; continue }
        $bad = @()
        for ($i = 0; $i -lt [Math]::Max($a.Count, $b.Count); $i++) {
            if ($i -ge $a.Count -or $i -ge $b.Count) { $bad += "list count"; break }
            if ($a[$i].Header -ne $b[$i].Header) { $bad += "header $i '$($a[$i].Header)' vs '$($b[$i].Header)'" }
            if ($a[$i].Text -cne $b[$i].Text) {
                $la = $a[$i].Text -split "`r`n"; $lb = $b[$i].Text -split "`r`n"
                $first = 0; while ($first -lt $la.Count -and $first -lt $lb.Count -and $la[$first] -ceq $lb[$first]) { $first++ }
                $bad += "list $i differs at line $first : '$($la[$first])' vs '$($lb[$first])' ($($la.Count) vs $($lb.Count) lines)"
                if ($DumpDir) {
                    $dumpCount++
                    Set-Content -Path (Join-Path $DumpDir "$dumpCount-original.txt") -Value "[$name] $p list $i`r`n$($a[$i].Text)" -Encoding UTF8
                    Set-Content -Path (Join-Path $DumpDir "$dumpCount-rebuild.txt") -Value "[$name] $p list $i`r`n$($b[$i].Text)" -Encoding UTF8
                }
            }
        }
        if ($bad) { $diffs++; $line = "DIFF [$name] $p :: " + ($bad -join "; "); $report.Add($line); Write-Output $line }
        else {
            $counts = ($a | ForEach-Object { if ($_.Header -match '\((\d+)\)$') { $Matches[1] } else { "-" } }) -join "/"
            $report.Add("ok   [$name] $p ($counts)")
        }
    }
    if ($name -eq "full text") { foreach ($m in $mainA, $mainB) { [void][G]::SendMessage($m, 0x0111, [IntPtr]12760, [IntPtr]::Zero) } }
    elseif ($optionSets[$name].Count) { Set-Options $orig $mainA $reset; Set-Options $new $mainB $reset }
}
Write-Output "$total runs, $diffs differ"
if ($Out) { $report | Set-Content -Path $Out -Encoding UTF8 }
$orig.CloseMainWindow() | Out-Null
$new.CloseMainWindow() | Out-Null
