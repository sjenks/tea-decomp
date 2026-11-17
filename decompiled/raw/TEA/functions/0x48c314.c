// name: FUN_0048c314
// address: 0x48c314
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c314(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d9 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b225,(int)puVar1,s_GetFileTitleA_0050582d);
    DAT_005057d9 = DAT_005057d9 + '\x01';
  }
  uVar2 = (*DAT_0051b225)();
  return uVar2;
}

