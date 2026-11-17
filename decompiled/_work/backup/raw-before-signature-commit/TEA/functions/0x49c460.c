// name: FUN_0049c460
// address: 0x49c460
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049c460(undefined4 *param_1,undefined4 *param_2)

{
  HDC hdc;
  uint color;
  COLORREF local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x24))();
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x5c))();
  local_c = GetTextColor(hdc);
  color = FUN_0048c12c(&local_c);
  SetTextColor((HDC)*param_2,color);
  *param_1 = local_8;
  return param_1;
}

