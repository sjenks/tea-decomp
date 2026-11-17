// name: FUN_00411570
// address: 0x411570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411570(int param_1,int param_2)

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
  char local_c [8];
  
  FUN_0041f3fc(0x42de6c);
  FUN_0041193c(local_c,param_2,'\0','\0');
  iVar2 = param_1;
  FUN_00416e74((int)local_1c,(uint *)s_ExpansionAt_0042d3d8);
  uVar1 = FUN_00411a4c((int)local_c,(int)local_1c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041165b;
    }
    FUN_00414f78();
    local_14 = 0;
  }
LAB_0041165b:
  if (cVar4 != '\0') {
    FUN_00416c68(param_1,(uint *)s__aeiou__0042d873);
  }
  iVar2 = param_1 + 0x10;
  FUN_00416e74((int)local_2c,(uint *)s_ExpansionHash_0042d3e4);
  uVar1 = FUN_00411a4c((int)local_c,(int)local_2c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00411732;
    }
    FUN_00414f78();
    local_24 = 0;
  }
LAB_00411732:
  if (cVar4 != '\0') {
    FUN_00416c68(param_1 + 0x10,(uint *)s___aeiou__0042d87b);
  }
  puVar5 = &DAT_0042c930;
  FUN_00416e74((int)local_3c,(uint *)s_VariablesExclusive_0042d3f2);
  uVar1 = FUN_00411ac0((int)local_c,(int)local_3c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041180d;
    }
    FUN_00414f78();
    local_34 = 0;
  }
LAB_0041180d:
  if (cVar4 != '\0') {
    DAT_0042c930 = 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x20);
  FUN_00416e74((int)local_4c,(uint *)s_IgnoreUnusedPunctuation_0042d405);
  uVar1 = FUN_00411ac0((int)local_c,(int)local_4c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004118e0;
    }
    FUN_00414f78();
    local_44 = 0;
  }
LAB_004118e0:
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  FUN_00411a20((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

