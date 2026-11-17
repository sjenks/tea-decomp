// name: FUN_004207a4
// address: 0x4207a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004207a4(int *param_1,undefined4 *param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46824c);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_004682b4;
  pHVar1 = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

