// name: FUN_0046bff4
// address: 0x46bff4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046bff4(int *param_1)

{
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    *(undefined1 *)((int)param_1 + 0x219) = 0;
    ReleaseCapture();
    FUN_0046c198(param_1);
  }
  FUN_004a5774(*param_1);
  return;
}

