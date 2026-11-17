// name: FUN_00439d54
// address: 0x439d54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00439d54(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x26);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
  }
  return uVar1;
}

