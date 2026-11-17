// name: FUN_0043f014
// address: 0x43f014
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f014(undefined4 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_2 + param_3;
  for (; param_2 < pbVar1; param_2 = param_2 + 1) {
    FUN_0043ef88(param_1,(uint)(byte)(&DAT_00519d3c)[*param_2],(&DAT_0051993c)[*param_2]);
  }
  return;
}

