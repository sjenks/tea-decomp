// name: FUN_0044d45c
// address: 0x44d45c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044d45c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x15);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(param_1[3] + 0x20))();
  if (iVar4 == *(int *)((int)param_1 + 0x11)) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  if (*(int *)((int)param_1 + 0x15) == 0) {
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0048c654;
  }
  else {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    iVar4 = *param_1;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) == 0) {
        iVar4 = *(int *)((int)param_1 + 0x15);
        (**(code **)(*(int *)(iVar4 + 8) + 0x10))();
      }
      iVar2 = *(int *)((int)param_1 + 0x15);
      (**(code **)(*(int *)(iVar2 + 8) + 100))(iVar2,*(int *)(iVar2 + 8),iVar4,iVar2,4);
    }
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0048c658;
    FUN_0044daec(param_1,'\x01');
  }
  if ((*(int *)((int)param_1 + 0x15) != 0) && (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) != 0))
  {
    pHVar3 = GetFocus();
    if (pHVar3 == *(HWND *)(*param_1 + 0xc)) {
      SetFocus(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc));
      *(undefined4 *)((int)param_1 + 0x11) = *(undefined4 *)(*(int *)((int)param_1 + 0x15) + 0xc);
    }
  }
  return iVar1;
}

