// name: FUN_0041e7a4
// address: 0x41e7a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e7a4(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3 - param_1[0xd] >> 0x1f;
  if (2 < (int)((*param_3 - param_1[0xd] ^ uVar1) - uVar1)) {
    param_1[0xf] = 0;
  }
  uVar1 = param_3[1] - param_1[0xe] >> 0x1f;
  if (2 < (int)((param_3[1] - param_1[0xe] ^ uVar1) - uVar1)) {
    param_1[0xf] = 0;
  }
  FUN_004a5774(*param_1);
  return;
}

