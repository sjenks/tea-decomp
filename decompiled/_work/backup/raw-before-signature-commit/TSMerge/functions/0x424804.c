// name: FUN_00424804
// address: 0x424804
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00424804(int *param_1)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468f04);
  FUN_0041c798(param_1);
  pHVar1 = CreateRectRgn(0,0,0,0);
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

