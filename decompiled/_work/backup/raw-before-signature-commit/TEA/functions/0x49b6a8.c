// name: FUN_0049b6a8
// address: 0x49b6a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0049b6a8(uint *param_1,uint *param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint color;
  HPEN pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5089b8);
  FUN_00493fdc(param_1);
  if (((param_3 == 1) && (param_4 == 0)) &&
     ((*param_2 == DAT_0051b174 || (*param_2 == DAT_0051b198)))) {
    if (*param_2 == DAT_0051b174) {
      pvVar1 = GetStockObject(7);
      *param_1 = (uint)pvVar1;
    }
    else {
      pvVar1 = GetStockObject(6);
      *param_1 = (uint)pvVar1;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    color = FUN_0048c12c(param_2);
    pHVar2 = CreatePen(param_4,param_3,color);
    *param_1 = (uint)pHVar2;
    FUN_00493530((int *)param_1,0x7fe3);
    FUN_00493c34(*param_1,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

