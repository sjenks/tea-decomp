// name: FUN_004acea4
// address: 0x4acea4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004acea4(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004a76a8(*param_1,0x140,0,0);
  *param_2 = uVar1 & 0xffff;
  *param_3 = uVar1 >> 0x10;
  return uVar1;
}

