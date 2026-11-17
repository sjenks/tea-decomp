// name: FUN_0041717c
// address: 0x41717c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041717c(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 local_60;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4edf4c);
  FUN_004cf628((int)local_14,*(uint **)(param_1 + 0x50));
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = FUN_004dc9f4(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_2c);
  FUN_0044e83c(local_1c,(int)local_2c,iVar4,iVar5);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0041727c;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_0041727c:
  iVar4 = FUN_004cf628((int)local_3c,param_3);
  FUN_0044ec78((int)local_1c,(int)local_14,iVar4);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00417320;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_00417320:
  FUN_0044e920((int)local_1c,2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_004173ad;
    }
    FUN_004cc0bc();
  }
LAB_004173ad:
  *in_FS_OFFSET = local_60;
  return;
}

