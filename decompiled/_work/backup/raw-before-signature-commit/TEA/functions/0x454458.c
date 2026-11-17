// name: FUN_00454458
// address: 0x454458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00454458(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x18] == 0) {
    uVar1 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 0xc);
  }
  return uVar1;
}

