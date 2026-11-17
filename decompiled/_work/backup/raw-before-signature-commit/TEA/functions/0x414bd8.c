// name: FUN_00414bd8
// address: 0x414bd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414bd8(uint param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff4c;
  uint in_stack_ffffff50;
  byte *pbVar7;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed8c4);
  while( true ) {
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 < 0x11) break;
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = iVar3 >> 5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar3 >> 4 & 1U) != 0);
    }
    uVar6 = iVar5 * 0x10 + param_1;
    iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                         *(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4));
    if (iVar3 < 0) {
      iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = uVar6;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = param_1, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    else {
      iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = param_1;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = uVar6, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    iVar3 = *(int *)(*(int *)(uVar4 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(uVar4 + 8) + -4);
      piVar2 = FUN_004cf7b0(&stack0xffffff4c,uVar6,uVar6);
      pbVar7 = (byte *)(piVar2 + 3);
      FUN_004dc7d4((undefined4 *)pbVar7,*(undefined4 **)(uVar4 + 8),uVar6);
    }
    else {
      pbVar7 = *(byte **)(uVar4 + 8);
      pbVar1 = pbVar7 + -0xc;
      if (pbVar1 != (byte *)&DAT_00513d58) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
      }
    }
    uVar6 = FUN_00414e84(param_1,param_2,in_stack_ffffff4c,in_stack_ffffff50,pbVar7);
    iVar3 = uVar6 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = param_2 - uVar6;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    if (iVar3 >> 4 < iVar5 >> 4) {
      in_stack_ffffff4c = 0x414e52;
      in_stack_ffffff50 = param_1;
      FUN_00414bd8(param_1,uVar6);
      param_1 = uVar6;
    }
    else {
      in_stack_ffffff4c = 0x414e36;
      in_stack_ffffff50 = uVar6;
      FUN_00414bd8(uVar6,param_2);
      param_2 = uVar6;
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

