// name: FUN_0048c3cc
// address: 0x48c3cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c3cc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057dc == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b231,(int)puVar1,s_PrintDlgExA_00505864);
    DAT_005057dc = DAT_005057dc + '\x01';
  }
  uVar2 = (*DAT_0051b231)();
  return uVar2;
}

