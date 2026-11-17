// name: FUN_00459c44
// address: 0x459c44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00459c44(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0045dcb8(param_1,param_3);
  if (piVar1 != (int *)0x0) {
    FUN_0045c57c((int)param_1,(int)piVar1);
  }
  iVar2 = FUN_0045dc48((int)param_1,param_3);
  param_1[0x1ec] = iVar2;
  if (iVar2 != 0) {
    SetCapture(*(HWND *)(*param_1 + 0xc));
  }
  FUN_004a6b34(*param_1);
  return;
}

