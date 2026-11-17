// name: FUN_004d562c
// address: 0x4d562c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004d562c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return uVar1;
}

