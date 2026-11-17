// name: FUN_0042da9c
// address: 0x42da9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0042da9c(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_0042db04(param_1);
    return uVar1;
  }
  uVar1 = FUN_0042dac0(param_1);
  return uVar1 & 0xffff;
}

