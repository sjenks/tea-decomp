// name: FUN_004b9d94
// address: 0x4b9d94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b9d94(int *param_1,undefined4 param_2,int param_3)

{
  FUN_004bcffc(param_1[0xc],param_3);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    FUN_004b988c(param_1);
  }
  else {
    param_1[0xd] = 0;
  }
  return 0;
}

