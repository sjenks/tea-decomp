// name: FUN_0042d558
// address: 0x42d558
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d558(int *param_1)

{
  int iVar1;
  int local_24 [4];
  int local_14 [4];
  
  KillTimer(*(HWND *)(*param_1 + 0xc),1);
  ReleaseCapture();
  iVar1 = param_1[0x41];
  if (iVar1 != -1) {
    if (param_1[0x44] < iVar1) {
      FUN_0042ed8c(local_24,param_1,param_1[0x44],(param_1[0x41] - param_1[0x44]) + 1,param_1[0x42],
                   param_1[0x42] != 2);
    }
    else {
      FUN_0042ed8c(local_14,param_1,iVar1,(param_1[0x44] - iVar1) + 1,param_1[0x42],
                   param_1[0x42] != 2);
    }
    param_1[0x41] = -1;
  }
  return;
}

