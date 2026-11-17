// name: FUN_00423d4c
// address: 0x423d4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG * __cdecl FUN_00423d4c(LONG *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char *c;
  HDC hdc;
  tagSIZE *psizl;
  tagSIZE local_18;
  char *local_10;
  LONG local_c;
  LONG local_8;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  c = FUN_004677a0(param_4);
  local_18.cx = 0;
  local_18.cy = 0;
  psizl = &local_18;
  local_10 = c;
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,(LPCSTR)param_4,(int)c,psizl);
  local_c = local_18.cx;
  local_8 = local_18.cy;
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))();
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

