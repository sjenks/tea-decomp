// name: FUN_0048c23c
// address: 0x48c23c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c23c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d5 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b215,(int)puVar1,s_ChooseColorA_0050580a);
    DAT_005057d5 = DAT_005057d5 + '\x01';
  }
  uVar2 = (*DAT_0051b215)();
  return uVar2;
}

