// name: FUN_00414acc
// address: 0x414acc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414acc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff6c;
  undefined4 in_stack_ffffff70;
  byte *pbVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed888);
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 8) + -4);
      piVar3 = FUN_004cf7b0(&stack0xffffff6c,uVar2,uVar2);
      pbVar5 = (byte *)(piVar3 + 3);
      FUN_004dc7d4((undefined4 *)pbVar5,*(undefined4 **)(param_1 + 8),uVar2);
    }
    else {
      pbVar5 = *(byte **)(param_1 + 8);
      pbVar4 = pbVar5 + -0xc;
      if (pbVar4 != (byte *)&DAT_00513d58) {
        *(int *)pbVar4 = *(int *)pbVar4 + 1;
      }
    }
    FUN_004149d4(param_1,in_stack_ffffff6c,in_stack_ffffff70,pbVar5);
  }
  *in_FS_OFFSET = local_28;
  return;
}

