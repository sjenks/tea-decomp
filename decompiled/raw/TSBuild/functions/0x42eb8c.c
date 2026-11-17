// name: FUN_0042eb8c
// address: 0x42eb8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042eb8c(int *param_1,HWND param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ca50);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047ca94;
  *(HWND *)((int)param_1 + 0x61) = param_2;
  pHVar1 = BeginPaint(param_2,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

