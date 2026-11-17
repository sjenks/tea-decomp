// name: FUN_004d7320
// address: 0x4d7320
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004d7320(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined1 uVar5;
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [4];
  int iStack_8;
  
  iStack_8 = 0;
  iVar2 = FUN_004cea6c(in_stack_00000008);
  iVar2 = *(int *)(param_1 + 0x14) - iVar2;
  if (0 < iVar2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = iVar2;
      iVar2 = iStack_8;
    }
    for (; iStack_8 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar5 = in_stack_0000000c;
      FUN_004d71e8(auStack_18,*(undefined4 **)(param_1 + 0x278));
      iVar2 = FUN_004d7210(auStack_18);
      FUN_004d7218(iVar2,uVar5);
      iVar2 = iStack_8;
    }
  }
  puVar3 = (undefined1 *)FUN_004cf40c(in_stack_00000008);
  iVar2 = FUN_004cea6c(in_stack_00000008);
  puVar4 = puVar3 + iVar2;
  for (; puVar3 < puVar4; puVar3 = puVar3 + 1) {
    uVar5 = *puVar3;
    FUN_004d71e8(auStack_28,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_28);
    FUN_004d7218(iVar2,uVar5);
  }
  for (; iStack_8 != 0; iStack_8 = iStack_8 + -1) {
    uVar5 = in_stack_0000000c;
    FUN_004d71e8(auStack_38,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_38);
    FUN_004d7218(iVar2,uVar5);
  }
  return;
}

