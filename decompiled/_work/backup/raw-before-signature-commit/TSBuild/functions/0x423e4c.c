// name: FUN_00423e4c
// address: 0x423e4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00423e4c(uint *param_1)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ac18);
  iVar3 = 0;
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    pvVar2 = GetStockObject(0x11);
  }
  else {
    pvVar2 = GetStockObject(0xd);
  }
  FUN_00423a68(param_1,pvVar2,iVar3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

