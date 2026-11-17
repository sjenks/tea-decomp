// name: FUN_004bd140
// address: 0x4bd140
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bd140(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0xf] = (int)FUN_004b070c;
  uVar1 = FUN_0048c2dc();
  *(undefined4 *)(*param_1 + 0xc) = uVar1;
  return;
}

