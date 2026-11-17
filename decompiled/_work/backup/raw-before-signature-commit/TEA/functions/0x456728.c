// name: FUN_00456728
// address: 0x456728
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00456728(int *param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  HWND pHVar6;
  
  DVar1 = GetTickCount();
  if ((DVar1 < DAT_004f75d4) || (DAT_004f75d4 + 100 < DVar1)) {
    iVar3 = *(int *)(*(int *)(param_1[0x1a] * 4 + param_1[0x1ad]) + 8);
    DAT_004f75d4 = DVar1;
    iVar2 = FUN_0042ba08(iVar3);
    if (*param_2 < iVar2) {
      iVar3 = FUN_0042ba08(iVar3);
      *param_2 = iVar3;
      FUN_0045db98((int)param_1);
    }
  }
  piVar4 = (int *)(*(int *)(*param_1 + 0x6c) + 0x11);
  uVar5 = FUN_00498d7c(piVar4);
  if (param_1[0x19] == 4) {
    (**(code **)(param_1[3] + 0x20))(uVar5,param_1[3],piVar4,param_1,1);
    uVar5 = 1;
  }
  else {
    if (DAT_004f3434 != 0) {
      FUN_0045c6d4((int)param_1,3);
      DAT_004f3434 = 0;
    }
    if (param_1[0x19] == 3) {
      FUN_0045db98((int)param_1);
      pHVar6 = GetFocus();
      if (pHVar6 == *(HWND *)(param_1[0x84] + 0xc)) {
        SetFocus(*(HWND *)(param_1[0x56] + 0xc));
      }
      (**(code **)(param_1[3] + 0xa4))();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

