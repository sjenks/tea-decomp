// name: FUN_0045a220
// address: 0x45a220
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a220(int *param_1)

{
  if (0 < param_1[0x1ec]) {
    param_1[0x1ec] = 0;
    ReleaseCapture();
    FUN_0045b89c(param_1);
  }
  FUN_004a5774(*param_1);
  return;
}

