// name: FUN_0043f348
// address: 0x43f348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043f348(int param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_34;
  
  FUN_00455f04(0x46e2cc);
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = (undefined4 *)FUN_0044b300();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0043ea14(puVar2,param_2,param_3);
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    if (cVar1 == '\0') {
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 4))();
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    bVar3 = *(int *)(param_1 + 4) != 0;
    *in_FS_OFFSET = local_34;
  }
  else {
    bVar3 = false;
    *in_FS_OFFSET = local_34;
  }
  return bVar3;
}

