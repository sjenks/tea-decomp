# Build / refresh the prepared Ghidra project for the named programs.
param([string[]]$Names)
$env:JAVA_HOME = 'C:\Users\jenks\code\tea-rea\_tools\jdk\jdk-21.0.13'
$env:PATH = "$env:JAVA_HOME\bin;$env:PATH"
$sp = Split-Path -Parent $PSScriptRoot
$gh = 'C:\Users\jenks\code\tea-rea\_tools\ghidra\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat'
$proj = 'C:\Users\jenks\code\tea-rea\decompiled\ghidra-project'
foreach ($n in $Names) {
  $exe = "C:\Users\jenks\code\tea-rea\TEA Crossword Helper 2.11\$n.exe"
  $t0 = Get-Date
  & $gh $proj tea -import $exe -overwrite -scriptPath "$sp\ghidra-scripts" -postScript TeaPrepare.java "$sp\seeds\$n.entries.txt" "$sp\seeds\$n.prepare-report.txt" *> "$sp\evidence\$n.headless.log"
  $sum = (Get-Content "$sp\seeds\$n.prepare-report.txt" | Select-String -Pattern '^summary').Line
  "[$n] exit=$LASTEXITCODE elapsed=$([int]((Get-Date)-$t0).TotalSeconds)s  $sum"
}
