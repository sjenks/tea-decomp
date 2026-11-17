// name: FUN_00499f48
// address: 0x499f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00499f48(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_00499d4c(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00499f04(param_1);
  }
  return uVar1;
}

