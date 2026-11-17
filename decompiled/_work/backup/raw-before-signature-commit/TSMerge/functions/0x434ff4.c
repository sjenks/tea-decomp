// name: FUN_00434ff4
// address: 0x434ff4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00434ff4(int *param_1)

{
  undefined4 uVar1;
  
  FUN_0042d338(*param_1,'\0');
  FUN_00434ec0(param_1);
  uVar1 = (**(code **)(param_1[3] + 0x2c))();
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x20;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

