// name: FUN_0049af8c
// address: 0x49af8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049af8c(int *param_1,HWND param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50886c);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_005088b0;
  *(HWND *)((int)param_1 + 0x61) = param_2;
  pHVar1 = BeginPaint(param_2,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

