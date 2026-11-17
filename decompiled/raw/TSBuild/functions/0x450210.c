// name: FUN_00450210
// address: 0x450210
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00450210(void)

{
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  undefined4 local_28;
  
  FUN_00467ba8(0x483298);
  if (DAT_00482c51 == '\0') {
    cVar2 = '\0';
    pHVar1 = GetModuleHandleA(s_USER32_00482cf9);
    FUN_0044ed8c((undefined4 *)&DAT_0048cd68,(uint *)s_USER32_00482cf9,pHVar1,cVar2);
    DAT_00482c51 = DAT_00482c51 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cd68;
}

