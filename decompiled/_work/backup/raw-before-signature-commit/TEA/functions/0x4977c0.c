// name: FUN_004977c0
// address: 0x4977c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004977c0(int *param_1,undefined4 *param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507cc4);
  FUN_0048d298(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00507d2c;
  pHVar1 = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

