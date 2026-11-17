// name: FUN_004e0394
// address: 0x4e0394
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004e0394(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*param_1;
  *param_1 = *param_1 + 1;
  if (*pbVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*pbVar1;
  }
  return uVar2;
}

