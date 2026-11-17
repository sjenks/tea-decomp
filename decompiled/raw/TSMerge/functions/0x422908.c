// name: FUN_00422908
// address: 0x422908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00422908(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_00422970(param_1);
    return uVar1;
  }
  uVar1 = FUN_0042292c(param_1);
  return uVar1 & 0xffff;
}

