// name: FUN_004de744
// address: 0x4de744
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004de744(int *param_1,int param_2,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    FUN_004cc744();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_00518c50 = &LAB_004e0fc8;
    if (param_2 == 0) {
      param_2 = FUN_004cc734();
      if (param_2 == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

