# Export decompiler output for the named programs from the prepared Ghidra project (read-only).
param([string[]]$Names)
$env:JAVA_HOME = 'C:\Users\jenks\code\tea-rea\_tools\jdk\jdk-21.0.13'
$env:PATH = "$env:JAVA_HOME\bin;$env:PATH"
$sp = Split-Path -Parent $PSScriptRoot
$gh = 'C:\Users\jenks\code\tea-rea\_tools\ghidra\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat'
$proj = 'C:\Users\jenks\code\tea-rea\decompiled\ghidra-project'
foreach ($n in $Names) {
  $out = "C:\Users\jenks\code\tea-rea\decompiled\raw\$n"
  $t0 = Get-Date
  & $gh $proj tea -process "$n.exe" -noanalysis -readOnly -scriptPath "$sp\ghidra-scripts" -postScript TeaExport.java $out *> "$sp\evidence\$n.export.log"
  $line = (Select-String -Path "$sp\evidence\$n.export.log" -Pattern 'TeaExport: written' | Select-Object -Last 1).Line
  "[$n] exit=$LASTEXITCODE elapsed=$([int]((Get-Date)-$t0).TotalSeconds)s  $line"
}
