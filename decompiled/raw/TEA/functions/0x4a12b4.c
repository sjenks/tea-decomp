// name: FUN_004a12b4
// address: 0x4a12b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004a12b4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6,
            char param_7)

{
  if (param_1[1] == 0) {
    FUN_004a0c7c(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_004a05b0((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_004a0bc8((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

