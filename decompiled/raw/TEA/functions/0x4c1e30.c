// name: FUN_004c1e30
// address: 0x4c1e30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004c1e30(void)

{
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x51064c);
  if (DAT_00510005 == '\0') {
    cVar2 = '\0';
    pHVar1 = GetModuleHandleA(s_USER32_005100ad);
    FUN_004c09ac((undefined4 *)&DAT_0051b8dc,(uint *)s_USER32_005100ad,pHVar1,cVar2);
    DAT_00510005 = DAT_00510005 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b8dc;
}

