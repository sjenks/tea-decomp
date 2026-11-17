// name: FUN_0044a424
// address: 0x44a424
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044a424(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = FUN_0044b944();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_0044b964();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_0044b944();
      FUN_004559d0(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      FUN_0044b954();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  FUN_00455a40((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

