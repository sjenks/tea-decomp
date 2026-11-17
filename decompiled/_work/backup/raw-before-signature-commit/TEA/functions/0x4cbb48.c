// name: FUN_004cbb48
// address: 0x4cbb48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004cbb48(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

