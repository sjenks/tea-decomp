// name: FUN_0042f998
// address: 0x42f998
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042f998(int *param_1)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cce0);
  FUN_0042790c(param_1);
  pHVar1 = CreateRectRgn(0,0,0,0);
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

