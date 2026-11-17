// name: FUN_004095a0
// address: 0x4095a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004095a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_2 - param_1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < param_3) break;
    FUN_0040a094(param_1,param_3 * 0x10 + param_1,param_4);
    param_1 = param_1 + param_3 * 0x10;
  }
  FUN_0040a094(param_1,param_2,param_4);
  return;
}

