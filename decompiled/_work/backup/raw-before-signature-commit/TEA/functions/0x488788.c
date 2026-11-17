// name: FUN_00488788
// address: 0x488788
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00488788(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  HDC local_2c [10];
  
  FUN_004dce64(0x5049e8);
  FUN_004a8760((int *)local_2c);
  FUN_0048d9c0(local_2c,param_3,0);
  RealizePalette(local_2c[0]);
  pHVar1 = CreateDIBitmap(local_2c[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)pHVar1;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  FUN_004a86dc((int *)local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

