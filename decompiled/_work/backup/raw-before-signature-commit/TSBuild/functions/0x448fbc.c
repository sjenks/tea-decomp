// name: FUN_00448fbc
// address: 0x448fbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00448fbc(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0044c224(param_1[0xc],param_3);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    FUN_00448ab4(param_1);
  }
  else {
    param_1[0xd] = 0;
  }
  return 0;
}

