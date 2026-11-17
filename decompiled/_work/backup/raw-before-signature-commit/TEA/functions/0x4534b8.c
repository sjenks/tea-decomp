// name: FUN_004534b8
// address: 0x4534b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004534b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_140;
  undefined4 local_11c [62];
  undefined1 local_24 [8];
  uint *local_1c;
  undefined4 local_14 [4];
  
  FUN_004dce64(0x4f85c8);
  piVar1 = (int *)FUN_00464af0(*(int *)(param_1 + 0x38));
  if (piVar1 == (int *)0x0) {
    *in_FS_OFFSET = local_140;
    return local_140;
  }
  puVar5 = (uint *)piVar1[2];
  FUN_0043c330(local_14,*(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8));
  iVar2 = FUN_0043c428((int)local_14);
  if (iVar2 < 2) {
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    *puVar5 = *puVar5 | 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0xcb4) = 4;
    FUN_00464ba4();
  }
  iVar2 = *(int *)(param_1 + 0x6d0);
  iVar3 = FUN_00466b18(*(int *)(param_1 + 0x38));
  FUN_00408cbc(local_24,iVar3,iVar2);
  iVar2 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_00402fa0(local_11c,local_1c,puVar5,local_14,(undefined4 *)(iVar2 + 0xf0),
               *(undefined4 *)(param_1 + 0xcb4),(undefined4 *)(param_1 + 0xcb8));
  (**(code **)(*piVar1 + 0xc))();
  FUN_004030f4(local_11c,2);
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar2 = *puVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_00453698;
    }
    FUN_004cc0bc();
    local_1c = (uint *)0x0;
  }
LAB_00453698:
  uVar4 = FUN_0043c3a8(local_14,2);
  *in_FS_OFFSET = local_140;
  return uVar4;
}

