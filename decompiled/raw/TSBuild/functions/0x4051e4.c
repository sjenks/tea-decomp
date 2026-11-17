// name: FUN_004051e4
// address: 0x4051e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004051e4(undefined4 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_2 + param_3;
  for (; param_2 < pbVar1; param_2 = param_2 + 1) {
    FUN_00405158(param_1,(uint)(byte)(&DAT_0048b850)[*param_2],(&DAT_0048b450)[*param_2]);
  }
  return;
}

