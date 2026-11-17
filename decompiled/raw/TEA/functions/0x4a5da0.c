// name: FUN_004a5da0
// address: 0x4a5da0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004a5da0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_5;
  puVar1[2] = param_4;
  puVar1[3] = param_6;
  return;
}

