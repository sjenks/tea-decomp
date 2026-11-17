// name: FUN_0049ced4
// address: 0x49ced4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049ced4(int *param_1,RECT *param_2)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508f50);
  FUN_004934c8(param_1);
  pHVar1 = CreateRectRgnIndirect(param_2);
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

