// name: FUN_004272e4
// address: 0x4272e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004272e4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6,
            char param_7)

{
  if (param_1[1] == 0) {
    FUN_00426dec(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_00426720((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_00426d38((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

