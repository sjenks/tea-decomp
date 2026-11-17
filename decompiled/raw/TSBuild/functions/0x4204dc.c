// name: FUN_004204dc
// address: 0x4204dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004204dc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c61 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6dd,(int)puVar1,s_GetFileTitleA_00479cb5);
    DAT_00479c61 = DAT_00479c61 + '\x01';
  }
  uVar2 = (*DAT_0048c6dd)();
  return uVar2;
}

