// name: FUN_004884a0
// address: 0x4884a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004884a0(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50492c);
  FUN_00493fdc(param_1);
  if (param_5 == '\0') {
    pHVar1 = CreateCompatibleBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  else {
    pHVar1 = CreateDiscardableBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

