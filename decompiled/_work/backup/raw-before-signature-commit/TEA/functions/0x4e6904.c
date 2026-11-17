// name: FUN_004e6904
// address: 0x4e6904
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e6904(int *param_1,int *param_2)

{
  if ((*(short *)*param_2 == 0x5c) && (((short *)*param_2)[1] == 0x22)) {
    *(undefined2 *)*param_1 = 0x22;
    *param_2 = *param_2 + 4;
  }
  else if ((DAT_00518cc0 == 0) || ((*(short *)*param_2 != 0x5c || (((short *)*param_2)[1] != 0x5c)))
          ) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    *param_2 = *param_2 + 2;
  }
  else {
    *(undefined2 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 4;
  }
  *param_1 = *param_1 + 2;
  return;
}

