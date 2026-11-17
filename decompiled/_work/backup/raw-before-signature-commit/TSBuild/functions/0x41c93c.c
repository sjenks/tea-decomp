// name: FUN_0041c93c
// address: 0x41c93c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_0041c93c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined *param_5)

{
  uint uVar1;
  
  for (uVar1 = *(uint *)(param_4 + 8);
      uVar1 < (uint)(*(int *)(param_4 + 4) * 8 + *(int *)(param_4 + 8)); uVar1 = uVar1 + 8) {
    (*(code *)param_5)();
  }
  return;
}

