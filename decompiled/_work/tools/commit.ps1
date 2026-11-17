# Commit recovered signatures in the prepared Ghidra project (modifies the project) for the named programs.
param([string[]]$Names)
$env:JAVA_HOME = 'C:\Users\jenks\code\tea-rea\_tools\jdk\jdk-21.0.13'
$env:PATH = "$env:JAVA_HOME\bin;$env:PATH"
$sp = Split-Path -Parent $PSScriptRoot
$gh = 'C:\Users\jenks\code\tea-rea\_tools\ghidra\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat'
$proj = 'C:\Users\jenks\code\tea-rea\decompiled\ghidra-project'
foreach ($n in $Names) {
  $t0 = Get-Date
  & $gh $proj tea -process "$n.exe" -noanalysis -scriptPath "$sp\ghidra-scripts" -postScript TeaCommit.java "$sp\seeds\$n.commit-report.txt" *> "$sp\evidence\$n.commit.log"
  $sum = (Get-Content "$sp\seeds\$n.commit-report.txt" -ErrorAction SilentlyContinue | Select-String -Pattern '^summary').Line
  $saved = (Select-String -Path "$sp\evidence\$n.commit.log" -Pattern 'REPORT: Save succeeded' | Measure-Object).Count
  "[$n] exit=$LASTEXITCODE elapsed=$([int]((Get-Date)-$t0).TotalSeconds)s saved=$saved  $sum"
}
