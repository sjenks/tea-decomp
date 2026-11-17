// name: FUN_004ae20c
// address: 0x4ae20c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ae20c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) != 0) {
    (**(code **)(*(int *)(param_2 + 0x18) + 4))();
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x35) + 4))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

