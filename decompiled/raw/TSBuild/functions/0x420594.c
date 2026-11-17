// name: FUN_00420594
// address: 0x420594
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00420594(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c67 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6f5,(int)puVar1,s_GetSaveFileNameA_00479d05);
    DAT_00479c67 = DAT_00479c67 + '\x01';
  }
  uVar2 = (*DAT_0048c6f5)();
  return uVar2;
}

