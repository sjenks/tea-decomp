// name: FUN_0048c2ac
// address: 0x48c2ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c2ac(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d7 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b21d,(int)puVar1,s_CommDlgExtendedError_005057f5);
    DAT_005057d7 = DAT_005057d7 + '\x01';
  }
  uVar2 = (*DAT_0051b21d)();
  return uVar2;
}

