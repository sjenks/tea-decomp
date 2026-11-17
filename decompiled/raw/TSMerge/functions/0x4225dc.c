// name: FUN_004225dc
// address: 0x4225dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_004225dc(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  FUN_00455f04(0x468a10);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00422514(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (*param_2 < **(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4)))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_004159f8(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *in_FS_OFFSET = uStack_2c;
  return iVar3;
}

