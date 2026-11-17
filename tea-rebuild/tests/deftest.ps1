# Compares the definition windows of the original TEA.exe and the rebuilt tea.exe.
#
#   powershell -File tests\deftest.ps1 [-Words quick,fast,...]
#
# For each word: search for it, select it in the first results list that has it, use Edit|Lookup,
# then read the definition window's title, its tree (dictionaries and definition labels, read across
# processes) and the text of the first definition, and compare.
# The rebuild is given the original's open dictionaries and definition dictionary list.
param(
    [string]$Words = "quick,fast,fly-by-night,Baden-Powell,colour,set,TEA,alveary,zymurgy,lead,eye,mother-in-law,Darwin",
    [string]$Out = ""
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
public static class D {
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
    [DllImport("kernel32.dll")] public static extern IntPtr OpenProcess(uint access, bool inherit, uint pid);
    [DllImport("kernel32.dll")] public static extern IntPtr VirtualAllocEx(IntPtr p, IntPtr a, uint size, uint type, uint protect);
    [DllImport("kernel32.dll")] public static extern bool VirtualFreeEx(IntPtr p, IntPtr a, uint size, uint type);
    [DllImport("kernel32.dll")] public static extern bool WriteProcessMemory(IntPtr p, IntPtr a, byte[] b, uint n, out IntPtr w);
    [DllImport("kernel32.dll")] public static extern bool ReadProcessMemory(IntPtr p, IntPtr a, byte[] b, uint n, out IntPtr r);
    [DllImport("kernel32.dll")] public static extern bool CloseHandle(IntPtr h);
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
    public static string Text(IntPtr h) { var s = new StringBuilder(65536); SendBuf(h, 0x000D, (IntPtr)65536, s); return s.ToString(); }
    public static string Cls(IntPtr h) { var s = new StringBuilder(256); GetClassName(h, s, 256); return s.ToString(); }

    // Reads a tree view of a 32-bit process: "label" per item, children indented by two spaces.
    public static List<string> Tree(IntPtr tree, uint pid) {
        var lines = new List<string>();
        IntPtr proc = OpenProcess(0x0008 | 0x0010 | 0x0020 | 0x0400, false, pid);
        IntPtr mem = VirtualAllocEx(proc, IntPtr.Zero, 4096, 0x3000, 0x04);
        try { Walk(tree, proc, mem, SendMessage(tree, 0x110A, IntPtr.Zero, IntPtr.Zero), 0, lines); }
        finally { VirtualFreeEx(proc, mem, 0, 0x8000); CloseHandle(proc); }
        return lines;
    }
    static void Walk(IntPtr tree, IntPtr proc, IntPtr mem, IntPtr item, int depth, List<string> lines) {
        for (; item != IntPtr.Zero; item = SendMessage(tree, 0x110A, (IntPtr)1, item)) {
            // TVITEMW for a 32-bit process: mask, hItem, state, stateMask, pszText, cchTextMax, ...
            var tv = new byte[40];
            BitConverter.GetBytes((uint)0x0001).CopyTo(tv, 0);                    // TVIF_TEXT
            BitConverter.GetBytes((uint)item.ToInt64()).CopyTo(tv, 4);
            BitConverter.GetBytes((uint)(mem.ToInt64() + 64)).CopyTo(tv, 16);
            BitConverter.GetBytes((uint)1000).CopyTo(tv, 20);
            IntPtr n;
            WriteProcessMemory(proc, mem, tv, 40, out n);
            SendMessage(tree, 0x113E, IntPtr.Zero, mem);                          // TVM_GETITEMW
            var buf = new byte[2000];
            ReadProcessMemory(proc, (IntPtr)(mem.ToInt64() + 64), buf, 2000, out n);
            string s = Encoding.Unicode.GetString(buf);
            int z = s.IndexOf('\0'); if (z >= 0) s = s.Substring(0, z);
            lines.Add(new string(' ', depth * 2) + s);
            Walk(tree, proc, mem, SendMessage(tree, 0x110A, (IntPtr)4, item), depth + 1, lines);
        }
    }
}
"@
[void][D]::SetThreadDpiAwarenessContext([IntPtr](-4))

function Find-Top($proc, $match) {
    foreach ($h in [D]::Top([uint32]$proc.Id)) { if ([D]::Text($h) -like $match) { return $h } }
    return [IntPtr]::Zero
}
function Find-Class($proc, $cls) {
    foreach ($h in [D]::Top([uint32]$proc.Id)) { if ([D]::Cls($h) -eq $cls) { return $h } }
    return [IntPtr]::Zero
}
function Ctl($parent, [int]$id) {
    foreach ($c in [D]::Children($parent)) { if ([D]::GetDlgCtrlID($c) -eq $id) { return $c } }
    return [IntPtr]::Zero
}
function Child-Class($parent, $cls) {
    foreach ($c in [D]::Children($parent)) { if ([D]::Cls($c) -like $cls) { return $c } }
    return [IntPtr]::Zero
}

function Lookup($proc, $main, [string]$word) {
    # Close any definition window left from the previous word.
    $old = Find-Top $proc "* - Definition*"
    if ($old -ne [IntPtr]::Zero) { [void][D]::SendMessage($old, 0x0010, [IntPtr]::Zero, [IntPtr]::Zero); Start-Sleep -Milliseconds 300 }
    $combo = Ctl $main 4270
    $edit = Child-Class $combo "Edit"
    [void][D]::SendText($edit, 0x000C, [IntPtr]::Zero, "")
    foreach ($ch in $word.ToCharArray()) { [void][D]::SendMessage($edit, 0x0102, [IntPtr][int]$ch, [IntPtr]1) }
    Start-Sleep -Milliseconds 100
    [void][D]::PostMessage($edit, 0x0100, [IntPtr]13, [IntPtr]1)
    Start-Sleep -Milliseconds 300
    for ($k = 0; $k -lt 600; $k++) { if ([D]::IsWindowEnabled($combo) -and [D]::Text((Ctl $main 4280)) -notmatch "Stop|sume") { break }; Start-Sleep -Milliseconds 100 }
    Start-Sleep -Milliseconds 300
    # The first list with a result: select its first entry and look it up.
    for ($i = 0; $i -lt 10; $i++) {
        $header = Ctl $main (6590 + $i)
        if ($header -eq [IntPtr]::Zero) { return $null }
        if ([D]::Text($header) -match '\((\d+)\)$' -and [int]$Matches[1] -gt 0) {
            $list = Ctl $main (4260 + $i)
            $lp = [IntPtr]((6 -shl 16) -bor 30)
            [void][D]::SendMessage($list, 0x0201, [IntPtr]1, $lp)
            [void][D]::SendMessage($list, 0x0202, [IntPtr]0, $lp)
            [void][D]::PostMessage($main, 0x0111, [IntPtr]7490, [IntPtr]::Zero)
            break
        }
    }
    $win = [IntPtr]::Zero
    for ($k = 0; $k -lt 100 -and $win -eq [IntPtr]::Zero; $k++) { Start-Sleep -Milliseconds 100; $win = Find-Top $proc "* - Definition*" }
    if ($win -eq [IntPtr]::Zero) {
        # No definitions: the External Lookup box.
        $box = Find-Top $proc "External Lookup"
        if ($box -ne [IntPtr]::Zero) { [void][D]::PostMessage((Ctl $box 2), 0x00F5, [IntPtr]::Zero, [IntPtr]::Zero); return [pscustomobject]@{ Title = "(none)"; Tree = @(); Text = "" } }
        return $null
    }
    Start-Sleep -Milliseconds 300
    $tree = Child-Class $win "SysTreeView32"
    $rich = Child-Class $win "RichEdit*"
    return [pscustomobject]@{ Title = [D]::Text($win); Tree = [D]::Tree($tree, [uint32]$proc.Id); Text = ([D]::Text($rich) -replace "`r`n", "`n" -replace "`r", "`n") }
}

$key = "HKCU:\Software\Crossword Man\TEA Crossword Helper 2.11"
$dicts = @()
for ($i = 0; $i -lt 10; $i++) { $v = (Get-ItemProperty -Path $key -Name "OpenDictionary$i" -ErrorAction SilentlyContinue)."OpenDictionary$i"; if ($v) { $dicts += $v } }
# The original's definition dictionaries (its default list), for the rebuild's settings file.
$defNames = "Unedited English.tsd;1913 Webster's Unabridged.tsd;Welsh-English Dictionary.tsd;English-Esperanto Dictionary.tsd;1907 Nuttall Encyclopaedia.tsd;1811 Grose's Dictionary.tsd;The New Hacker's Dictionary.tsd;The Cook and Housekeeper's Dictionary.tsd;Flash Dictionary.tsd;Word-book of the Romany.tsd;1910 Biographical Dictionary.tsd;1901 Dictionary of Quotations.tsd;The Devil's Dictionary.tsd"
$defDir = Join-Path $teaDir "Dictionaries"
$defList = ($defNames.Split(";") | ForEach-Object { Join-Path $defDir $_ }) -join ";"
$settings = Join-Path $env:TEMP "tea-deftest.ini"
Set-Content -Path $settings -Encoding Unicode -Value "[DefinitionDictionaries]`r`nCount=1`r`nItem0=$defList`r`n[Windows]`r`nQuickReference=0`r`nStartupTips=0`r`n"
$env:TEA_SETTINGS = $settings

Get-Process -Name TEA -ErrorAction SilentlyContinue | ForEach-Object { $_.CloseMainWindow() | Out-Null }
Start-Sleep 2
$orig = Start-Process -FilePath $originalExe -WorkingDirectory $teaDir -PassThru
$new = Start-Process -FilePath $rebuildExe -ArgumentList ($dicts | ForEach-Object { "`"$_`"" }) -PassThru
Start-Sleep -Seconds 4
foreach ($p in $orig, $new) { foreach ($t in "TEA Quick Reference", "TEA Tip of the Day") { $h = Find-Top $p $t; if ($h -ne [IntPtr]::Zero) { [void][D]::PostMessage($h, 0x0010, [IntPtr]::Zero, [IntPtr]::Zero) } } }
Start-Sleep -Milliseconds 500
$mainA = Find-Class $orig "TEAMainWindow"; $mainB = Find-Class $new "TEAMainWindow"

$report = New-Object System.Collections.Generic.List[string]
$diffs = 0
$wordList = $Words.Split(",")
foreach ($w in $wordList) {
    $a = Lookup $orig $mainA $w
    $b = Lookup $new $mainB $w
    if ($null -eq $a -or $null -eq $b) { $report.Add("FAIL $w (no window from" + $(if ($null -eq $a) { " original" } else { "" }) + $(if ($null -eq $b) { " rebuild" } else { "" }) + ")"); $diffs++; continue }
    $bad = @()
    if ($a.Title -ne $b.Title) { $bad += "title '$($a.Title)' vs '$($b.Title)'" }
    $ta = $a.Tree -join " | "; $tb = $b.Tree -join " | "
    if ($ta -cne $tb) { $bad += "tree:`n    original: $ta`n    rebuild:  $tb" }
    if ($a.Text.Trim() -cne $b.Text.Trim()) { $bad += "text:`n    original: $($a.Text.Trim() -replace "`n", ' / ')`n    rebuild:  $($b.Text.Trim() -replace "`n", ' / ')" }
    if ($bad) { $diffs++; $report.Add("DIFF $w :: " + ($bad -join "`n  ")) } else { $report.Add("ok   $w ($($a.Tree.Count) tree items)") }
}
$report | ForEach-Object { Write-Output $_ }
Write-Output "$($wordList.Count) words, $diffs differ"
if ($Out) { $report | Set-Content -Path $Out -Encoding UTF8 }
$orig.CloseMainWindow() | Out-Null
$new.CloseMainWindow() | Out-Null
