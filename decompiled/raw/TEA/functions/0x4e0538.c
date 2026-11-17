// name: FUN_004e0538
// address: 0x4e0538
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004e0538(int param_1,uint *param_2)

{
  uint uVar1;
  
  if ((param_1 == -1) || ((int)param_2[2] < 0)) {
    param_1 = -1;
  }
  else {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) & 0xffdf;
    if (param_2 + 5 != (uint *)*param_2) {
      uVar1 = param_2[2];
      param_2[2] = uVar1 + 1;
      if ((int)(uVar1 + 1) < 2) {
        *param_2 = (uint)(param_2 + 5);
      }
      else {
        *param_2 = *param_2 - 1;
        if (*param_2 < param_2[1]) {
          *param_2 = *param_2 + 1;
          param_2[2] = param_2[2] - 1;
        }
      }
    }
    *(char *)*param_2 = (char)param_1;
  }
  return param_1;
}

