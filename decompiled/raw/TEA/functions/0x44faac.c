// name: FUN_0044faac
// address: 0x44faac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044faac(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(piVar1[3] + 0x18))();
    if (param_1 == iVar2) {
      if (piVar1 == (int *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = *piVar1;
      }
    }
  }
  SetActiveWindow(*(HWND *)(param_1 + 0xc));
  return;
}

