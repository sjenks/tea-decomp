// name: FUN_0043e8e8
// address: 0x43e8e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e8e8(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_0041d640,(int *)&DAT_00430bf8,0);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)(*(int *)((int)param_1 + 0x35) + 8))(), iVar2 == 0)) {
    iVar2 = FUN_0043831c(param_1[1]);
    if (iVar2 == 0) {
      FUN_0044d13c((undefined4 *)*param_1,param_2);
    }
    else {
      (**(code **)*param_2)();
      if (*(int *)(iVar2 + 0xc) != 0) {
        IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      }
      (**(code **)(*param_2 + 8))();
    }
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

