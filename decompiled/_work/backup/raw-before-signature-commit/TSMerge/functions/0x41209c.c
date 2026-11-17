// name: FUN_0041209c
// address: 0x41209c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041209c(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  HDC local_2c [10];
  
  FUN_00455f04(0x465364);
  FUN_0042e298((int *)local_2c);
  FUN_00416c00(local_2c,param_3,0);
  RealizePalette(local_2c[0]);
  pHVar1 = CreateDIBitmap(local_2c[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  FUN_0042e214((int *)local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

