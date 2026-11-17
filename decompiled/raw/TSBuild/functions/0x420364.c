// name: FUN_00420364
// address: 0x420364
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00420364(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0xf0000000) == 0x80000000) {
    uVar1 = GetSysColor(*param_1 & 0xffff);
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

