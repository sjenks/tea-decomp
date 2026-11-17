// name: FUN_0042e1ac
// address: 0x42e1ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042e1ac(int *param_1,undefined4 param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46abd0);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0046aca4;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  pHVar1 = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

