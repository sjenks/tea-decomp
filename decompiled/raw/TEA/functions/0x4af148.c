// name: FUN_004af148
// address: 0x4af148
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004af148(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_00427ac8,(int *)&DAT_00427b08,0);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)(*(int *)((int)param_1 + 0x35) + 8))(), iVar2 == 0)) {
    iVar2 = FUN_004a768c(param_1[1]);
    if (iVar2 == 0) {
      FUN_004be02c((undefined4 *)*param_1,param_2);
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

