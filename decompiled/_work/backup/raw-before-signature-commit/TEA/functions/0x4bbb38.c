// name: FUN_004bbb38
// address: 0x4bbb38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004bbb38(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)((uint)in_ECX >> 0x18));
}

