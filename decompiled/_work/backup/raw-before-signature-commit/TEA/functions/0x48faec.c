// name: FUN_0048faec
// address: 0x48faec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0048faec(uint *param_1)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_28;
  
  FUN_004dce64(0x5067c0);
  iVar3 = 0;
  bVar1 = FUN_004875a8();
  if (bVar1) {
    pvVar2 = GetStockObject(0x11);
  }
  else {
    pvVar2 = GetStockObject(0xd);
  }
  FUN_0048f708(param_1,pvVar2,iVar3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

