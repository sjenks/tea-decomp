// name: FUN_004b5d60
// address: 0x4b5d60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b5d60(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x16);
  }
  return uVar1;
}

