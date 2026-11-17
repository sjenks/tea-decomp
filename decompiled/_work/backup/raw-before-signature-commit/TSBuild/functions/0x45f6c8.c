// name: FUN_0045f6c8
// address: 0x45f6c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045f6c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return uVar1;
}

