// name: FUN_00486ff4
// address: 0x486ff4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00486ff4(void)

{
  undefined *puVar1;
  
  if (DAT_00503ef2 == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af74,(int)puVar1,s_CreateUpDownControl_0050428a);
    DAT_00503ef2 = DAT_00503ef2 + '\x01';
  }
  (*DAT_0051af74)();
  return;
}

