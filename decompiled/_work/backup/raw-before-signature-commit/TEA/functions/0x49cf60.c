// name: FUN_0049cf60
// address: 0x49cf60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049cf60(undefined4 *param_1,RECT *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iMode;
  undefined4 local_30;
  int local_c [2];
  
  FUN_004dce64(0x508f74);
  iMode = 2;
  piVar1 = FUN_0049ced4(local_c,param_2);
  CombineRgn((HRGN)*param_1,(HRGN)*param_1,(HRGN)*piVar1,iMode);
  FUN_0049cf24(local_c,2);
  *in_FS_OFFSET = local_30;
  return param_1;
}

