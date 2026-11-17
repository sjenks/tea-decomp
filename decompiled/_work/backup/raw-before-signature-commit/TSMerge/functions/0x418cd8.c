// name: FUN_00418cd8
// address: 0x418cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00418cd8(uint *param_1)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_28;
  
  FUN_00455f04(0x466e3c);
  iVar3 = 0;
  bVar1 = FUN_004109c0();
  if (bVar1) {
    pvVar2 = GetStockObject(0x11);
  }
  else {
    pvVar2 = GetStockObject(0xd);
  }
  FUN_004188f4(param_1,pvVar2,iVar3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

