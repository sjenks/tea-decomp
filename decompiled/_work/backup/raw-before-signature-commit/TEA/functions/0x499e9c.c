// name: FUN_00499e9c
// address: 0x499e9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00499e9c(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_00499f04(param_1);
    return uVar1;
  }
  uVar1 = FUN_00499ec0(param_1);
  return uVar1 & 0xffff;
}

