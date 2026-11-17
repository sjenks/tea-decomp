// name: FUN_004204a4
// address: 0x4204a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004204a4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c60 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6d9,(int)puVar1,s_FindTextA_00479cab);
    DAT_00479c60 = DAT_00479c60 + '\x01';
  }
  uVar2 = (*DAT_0048c6d9)();
  return uVar2;
}

