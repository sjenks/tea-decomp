// name: FUN_0042d78c
// address: 0x42d78c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0042d891) */

void __stdcall FUN_0042d78c(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int aiStack_54 [5];
  undefined *puStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_28;
  int iStack_1c;
  undefined1 auStack_14 [8];
  undefined *puStack_c;
  
  FUN_004dce64(0x4f28d4);
  if (param_1[0x41] != -1) {
    if ((param_2 & 1) == 0) {
      param_1[0x41] = -1;
    }
    else {
      iVar4 = 0;
      if (0 < param_1[0x40]) {
        iVar4 = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = FUN_0042ba08((int)param_1);
        if (iVar1 <= iVar4) {
          iVar4 = FUN_0042ba08((int)param_1);
          iVar4 = iVar4 + -1;
        }
      }
      iVar1 = param_1[0x44];
      if (iVar4 != iVar1) {
        if (iVar4 < iVar1) {
          iVar2 = iVar1 - iVar4;
          iVar1 = iVar4;
        }
        else {
          iVar2 = iVar4 - iVar1;
        }
        aiStack_54[0] = 0;
        aiStack_54[1] = 0;
        aiStack_54[2] = 0;
        aiStack_54[3] = 0;
        uVar3 = FUN_00430290(param_1,iVar1,iVar2 + 1,aiStack_54);
        if ((char)uVar3 != '\0') {
          (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
        }
        param_1[0x44] = iVar4;
      }
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x3c))();
    }
  }
  puStack_c = &DAT_00513d64;
  iStack_1c = iStack_1c + 1;
  uStack_28 = 0x20;
  iStack_3c = 0;
  if (0 < param_1[0x40]) {
    iStack_3c = (*(int *)(*(int *)(*param_1 + 0x44) + 0xc) + *(int *)(param_3 + 4)) / param_1[0x40];
  }
  iVar4 = FUN_0042d9a0((int *)param_1[0x31],(int *)param_1[0x32],&iStack_3c);
  if (iVar4 != param_1[0x32]) {
    puVar5 = FUN_004308e4((int)param_1,iStack_3c);
    FUN_004cf41c((int)auStack_14,(uint *)((int)puVar5 + 9));
  }
  FUN_0045e060(param_1[0x38],(int)auStack_14,*(undefined4 *)(*param_1 + 0xc),param_2,
               (undefined2 *)param_3,0);
  iStack_1c = iStack_1c + -1;
  if (puStack_c != (undefined *)0x0) {
    if (*(int *)(puStack_c + -0xc) != -1) {
      piVar6 = (int *)(puStack_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0042d98e;
    }
    puStack_40 = puStack_c + -0xc;
    FUN_004cc0bc();
  }
LAB_0042d98e:
  *in_FS_OFFSET = uStack_38;
  return;
}

