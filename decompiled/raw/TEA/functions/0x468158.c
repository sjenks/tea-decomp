// name: FUN_00468158
// address: 0x468158
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00468158(int *param_1,int param_2,undefined4 *param_3)

{
  if ((param_3[2] == -0x208) && ((uint)param_3[1] < (uint)param_1[0x45])) {
    param_3[3] = (uint)*(ushort *)(param_1[0x44] + 4 + param_3[1] * 0x10);
  }
  FUN_00416964(param_1,param_2,param_3);
  return;
}

