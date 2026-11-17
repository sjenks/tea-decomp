// name: FUN_004a8674
// address: 0x4a8674
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004a8674(int *param_1,undefined4 param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b414);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0050b4e8;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  pHVar1 = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

