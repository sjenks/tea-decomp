// name: FUN_004cb19c
// address: 0x4cb19c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004cb19c(void)

{
  undefined *puVar1;
  
  if (DAT_005122f6 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b995,(int)puVar1,s_DragFinish_00512329);
    DAT_005122f6 = DAT_005122f6 + '\x01';
  }
  (*DAT_0051b995)();
  return;
}

