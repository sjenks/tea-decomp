// name: FUN_0044507c
// address: 0x44507c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0044507c(void)

{
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  undefined4 local_28;
  
  FUN_00455f04(0x46f4bc);
  if (DAT_0046ee75 == '\0') {
    cVar2 = '\0';
    pHVar1 = GetModuleHandleA(s_USER32_0046ef1d);
    FUN_00443bf8((undefined4 *)&DAT_004772c0,(uint *)s_USER32_0046ef1d,pHVar1,cVar2);
    DAT_0046ee75 = DAT_0046ee75 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004772c0;
}

