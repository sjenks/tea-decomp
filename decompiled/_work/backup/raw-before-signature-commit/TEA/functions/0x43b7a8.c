// name: FUN_0043b7a8
// address: 0x43b7a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043b7a8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f4b78);
  FUN_0044e83c(local_c,param_2,0,0);
  iVar2 = param_1;
  FUN_004cf628((int)local_1c,(uint *)s_ExpansionAt_004f3db8);
  uVar1 = FUN_0044e94c((int)local_c,(int)local_1c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043b893;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_0043b893:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1,(uint *)s__aeiou__004f41df);
  }
  iVar2 = param_1 + 0x10;
  FUN_004cf628((int)local_2c,(uint *)s_ExpansionHash_004f3dc4);
  uVar1 = FUN_0044e94c((int)local_c,(int)local_2c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043b96a;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_0043b96a:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1 + 0x10,(uint *)s___aeiou__004f41e7);
  }
  puVar5 = &DAT_004fcb84;
  FUN_004cf628((int)local_3c,(uint *)s_VariablesExclusive_004f3dd2);
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_3c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043ba45;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_0043ba45:
  if (cVar4 != '\0') {
    DAT_004fcb84 = 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x20);
  FUN_004cf628((int)local_4c,(uint *)s_IgnoreUnusedPunctuation_004f3de5);
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_4c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043bb18;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
LAB_0043bb18:
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

