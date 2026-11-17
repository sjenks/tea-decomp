// name: FUN_00482150
// address: 0x482150
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00482150(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x50306c);
  FUN_004cf628((int)local_14,(uint *)&DAT_00501d63);
  FUN_00437bd4((int)local_24);
  FUN_004d573c((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00482231;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_00482231:
  uVar1 = local_c[-1];
  pcVar3 = FUN_004dc9f4((uint *)s__green_00501d95);
  FUN_004cfad4((int)local_14,uVar1,0,0x501d95,(uint)pcVar3,0,(uint)pcVar3);
  FUN_00437bd4((int)local_34);
  FUN_004d573c((int)local_14,(int)local_34);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar4 = (int *)(local_2c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00482320;
    }
    FUN_004cc0bc();
    local_2c = 0;
  }
LAB_00482320:
  uVar1 = local_c[-1];
  pcVar3 = FUN_004dc9f4((uint *)s__blue_00501d9c);
  FUN_004cfad4((int)local_14,uVar1,0,0x501d9c,(uint)pcVar3,0,(uint)pcVar3);
  FUN_00437bd4((int)local_44);
  FUN_004d573c((int)local_14,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar4 = (int *)(local_3c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0048240f;
    }
    FUN_004cc0bc();
    local_3c = 0;
  }
LAB_0048240f:
  FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004825c1;
    }
    FUN_004cc0bc();
  }
LAB_004825c1:
  *in_FS_OFFSET = local_68;
  return param_1;
}

