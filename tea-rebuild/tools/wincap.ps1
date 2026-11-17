# Window inspection helper for comparing the original TEA.exe with the rebuild.
#
#   wincap.ps1 list  -ProcessName TEA                 list top-level windows of a process
#   wincap.ps1 shot  -ProcessName TEA -Out a.png      capture each visible top-level window (PrintWindow)
#   wincap.ps1 tree  -ProcessName TEA                 list every child control: class, id, text, rect
#
# PrintWindow draws the window into a bitmap even when it is covered, so the desktop is not needed.
param(
    [Parameter(Position = 0)][string]$Action = "list",
    [string]$ProcessName = "TEA",
    [int]$ProcessId = 0,
    [string]$Out = "",
    [string]$Title = "",
    [int]$Id = 0,
    [string]$Text = "",
    [double]$Scale = 1.0
)
$ErrorActionPreference = "Stop"
Add-Type -AssemblyName System.Drawing
Add-Type @"
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
public static class W {
    public delegate bool EnumProc(IntPtr h, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumProc f, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumChildWindows(IntPtr p, EnumProc f, IntPtr l);
    [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr h, out uint pid);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
    [DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern int GetWindowText(IntPtr h, StringBuilder s, int n);
    [DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern int GetClassName(IntPtr h, StringBuilder s, int n);
    [DllImport("user32.dll")] public static extern int GetDlgCtrlID(IntPtr h);
    [DllImport("user32.dll")] public static extern IntPtr GetParent(IntPtr h);
    [DllImport("user32.dll")] public static extern int GetWindowLong(IntPtr h, int i);
    [StructLayout(LayoutKind.Sequential)] public struct RECT { public int L, T, R, B; }
    [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool PrintWindow(IntPtr h, IntPtr hdc, uint flags);
    [DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern IntPtr SendMessage(IntPtr h, uint m, IntPtr w, StringBuilder l);
    [DllImport("user32.dll", CharSet = CharSet.Unicode, EntryPoint = "SendMessageW")] public static extern IntPtr SendText(IntPtr h, uint m, IntPtr w, string l);
    [DllImport("user32.dll")] public static extern IntPtr SendMessage(IntPtr h, uint m, IntPtr w, IntPtr l);
    [DllImport("user32.dll")] public static extern bool PostMessage(IntPtr h, uint m, IntPtr w, IntPtr l);
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
    [DllImport("user32.dll")] public static extern IntPtr SetThreadDpiAwarenessContext(IntPtr c);
    [DllImport("user32.dll")] public static extern uint GetDpiForWindow(IntPtr h);
    public static List<IntPtr> Top(uint pid) {
        var r = new List<IntPtr>();
        EnumWindows((h, l) => { uint p; GetWindowThreadProcessId(h, out p); if (p == pid) r.Add(h); return true; }, IntPtr.Zero);
        return r;
    }
    public static List<IntPtr> Children(IntPtr parent) {
        var r = new List<IntPtr>();
        EnumChildWindows(parent, (h, l) => { r.Add(h); return true; }, IntPtr.Zero);
        return r;
    }
    public static string Text(IntPtr h) {
        var s = new StringBuilder(1024);
        SendMessage(h, 0x000D, (IntPtr)1024, s);   // WM_GETTEXT works across processes for controls
        return s.ToString();
    }
    public static string Cls(IntPtr h) { var s = new StringBuilder(256); GetClassName(h, s, 256); return s.ToString(); }
}
"@

# Work in physical pixels, so DPI-aware windows (the rebuild) are measured and captured whole.
[void][W]::SetThreadDpiAwarenessContext([IntPtr](-4))   # PER_MONITOR_AWARE_V2
if ($ProcessId -eq 0) {
    $p = Get-Process -Name $ProcessName -ErrorAction SilentlyContinue | Select-Object -First 1
    if (-not $p) { Write-Output "no process $ProcessName"; exit 1 }
    $ProcessId = $p.Id
}
$tops = [W]::Top([uint32]$ProcessId) | Where-Object { [W]::IsWindowVisible($_) }
if ($Title) { $tops = $tops | Where-Object { [W]::Text($_) -like $Title } }

function Describe($h) {
    $r = New-Object W+RECT; [void][W]::GetWindowRect($h, [ref]$r)
    $style = [W]::GetWindowLong($h, -16)
    "{0,-10} {1,-24} id={2,-6} style={3:x8} vis={4} rect=({5},{6} {7}x{8}) '{9}'" -f `
        ("0x{0:x}" -f $h.ToInt64()), [W]::Cls($h), [W]::GetDlgCtrlID($h), $style, [int][W]::IsWindowVisible($h), `
        $r.L, $r.T, ($r.R - $r.L), ($r.B - $r.T), ([W]::Text($h) -replace "`r?`n", "\n")
}

function FindCtl([int]$cid) {
    foreach ($h in $tops) { foreach ($c in [W]::Children($h)) { if ([W]::GetDlgCtrlID($c) -eq $cid) { return $c } } }
    throw "no control with id $cid"
}

switch ($Action) {
    "list" { foreach ($h in $tops) { Describe $h } }
    # settext -Id n -Text s : WM_SETTEXT on the control with that id
    "settext" { $c = FindCtl $Id; [void][W]::SendText($c, 0x000C, [IntPtr]::Zero, $Text) }
    # click -Id n : BM_CLICK on a button
    "click" { $c = FindCtl $Id; [void][W]::PostMessage($c, 0x00F5, [IntPtr]::Zero, [IntPtr]::Zero) }
    # cmd -Id n : WM_COMMAND(n) posted to the first matching top-level window (menu commands)
    "cmd" { [void][W]::PostMessage($tops[0], 0x0111, [IntPtr]$Id, [IntPtr]::Zero) }
    # type -Id n -Text s : WM_CHAR for each character, as if typed into that control
    "type" { $c = FindCtl $Id; foreach ($ch in $Text.ToCharArray()) { [void][W]::SendMessage($c, 0x0102, [IntPtr][int]$ch, [IntPtr]1) } }
    # key -Id n -Text vk : WM_KEYDOWN + WM_KEYUP of virtual key vk (decimal) to that control
    "key" { $c = FindCtl $Id; $vk = [int]$Text; [void][W]::PostMessage($c, 0x0100, [IntPtr]$vk, [IntPtr]1); [void][W]::PostMessage($c, 0x0101, [IntPtr]$vk, [IntPtr]0xC0000001) }
    # clickat -Id n -Text "x,y" : left click at client point (x,y) of that control
    "clickat" {
        $c = FindCtl $Id; $xy = $Text.Split(','); $lp = [IntPtr](([int]$xy[1] -shl 16) -bor [int]$xy[0])
        [void][W]::SendMessage($c, 0x0201, [IntPtr]1, $lp); [void][W]::SendMessage($c, 0x0202, [IntPtr]0, $lp)
    }
    "front" { [void][W]::SetForegroundWindow($tops[0]) }
    "close" { foreach ($h in $tops) { [void][W]::PostMessage($h, 0x0010, [IntPtr]::Zero, [IntPtr]::Zero) } }
    "tree" {
        foreach ($h in $tops) {
            Describe $h
            foreach ($c in [W]::Children($h)) { "    " + (Describe $c) }
        }
    }
    "shot" {
        $i = 0
        foreach ($h in $tops) {
            $r = New-Object W+RECT; [void][W]::GetWindowRect($h, [ref]$r)
            $w = $r.R - $r.L; $hh = $r.B - $r.T
            if ($w -le 0 -or $hh -le 0) { continue }
            $bmp = New-Object System.Drawing.Bitmap $w, $hh
            $g = [System.Drawing.Graphics]::FromImage($bmp)
            $hdc = $g.GetHdc()
            [void][W]::PrintWindow($h, $hdc, 2)   # PW_RENDERFULLCONTENT
            $g.ReleaseHdc($hdc); $g.Dispose()
            $name = if ($tops.Count -gt 1 -or $i -gt 0) { $Out -replace '\.png$', "-$i.png" } else { $Out }
            if ($Scale -ne 1.0) {
                $small = New-Object System.Drawing.Bitmap ([int]($w * $Scale)), ([int]($hh * $Scale))
                $g2 = [System.Drawing.Graphics]::FromImage($small)
                $g2.InterpolationMode = [System.Drawing.Drawing2D.InterpolationMode]::HighQualityBicubic
                $g2.DrawImage($bmp, 0, 0, $small.Width, $small.Height); $g2.Dispose(); $bmp.Dispose(); $bmp = $small
            }
            $bmp.Save($name, [System.Drawing.Imaging.ImageFormat]::Png); $bmp.Dispose()
            Write-Output ("{0} <- '{1}'" -f $name, [W]::Text($h))
            $i++
        }
    }
}
