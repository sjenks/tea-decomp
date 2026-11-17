// name: FUN_0044a2aa
// address: 0x44a2aa
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044a2aa(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_31;
  undefined4 local_2c;
  
  FUN_00455f04(0x4704d0);
  for (iVar5 = 0; uVar1 = FUN_00424690(param_3), iVar5 < CONCAT22(extraout_var,uVar1);
      iVar5 = iVar5 + 1) {
    iVar2 = FUN_004246a8(param_3);
    if (*(short *)(iVar2 + iVar5 * 2) != -1) {
      FUN_004246a8(param_3);
      uVar3 = (**(code **)(param_2 + 0x10))();
      puVar4 = (undefined4 *)FUN_0044b300();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar3;
        *(undefined1 *)(puVar4 + 1) = local_31;
      }
      if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
        FUN_0044a424(param_1,*(int *)(param_1 + 1) + 1);
      }
      iVar2 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      *(undefined4 **)(*(int *)(param_1 + 9) + iVar2 * 4) = puVar4;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

