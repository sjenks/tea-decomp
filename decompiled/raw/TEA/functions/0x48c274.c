// name: FUN_0048c274
// address: 0x48c274
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c274(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d6 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b219,(int)puVar1,s_ChooseFontA_00505817);
    DAT_005057d6 = DAT_005057d6 + '\x01';
  }
  uVar2 = (*DAT_0051b219)();
  return uVar2;
}

