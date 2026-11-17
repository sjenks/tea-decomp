// name: FUN_004d4954
// address: 0x4d4954
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004d4954(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return uVar1;
}

