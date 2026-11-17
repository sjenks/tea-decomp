// name: FUN_0043bfc8
// address: 0x43bfc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043bfc8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(*(int *)(param_1 + 0x50) + 8);
  if (param_2 == 0x2670) {
    uVar2 = *puVar1 & 0xfffffffe;
  }
  else {
    uVar2 = *puVar1 | 1;
  }
  if (uVar2 != *puVar1) {
    *puVar1 = uVar2;
    (**(code **)(**(int **)(param_1 + 0x54) + 4))();
    (**(code **)(**(int **)(param_1 + 0x54) + 0x24))();
    puVar1[3] = 1;
    puVar1[2] = 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),1);
    (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return;
}

