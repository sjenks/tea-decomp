// name: FUN_00428104
// address: 0x428104
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_00428104(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  FUN_00467ba8(0x47b6c0);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00428230(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (**(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4) < *param_2))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_00420a1c(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    *(char *)(puVar2 + 1) = (char)param_2[1];
    *(undefined1 *)((int)puVar2 + 5) = *(undefined1 *)((int)param_2 + 5);
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *in_FS_OFFSET = uStack_2c;
  return iVar3;
}

