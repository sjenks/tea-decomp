// name: FUN_004cb1d4
// address: 0x4cb1d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004cb1d4(void)

{
  undefined *puVar1;
  
  if (DAT_005122f7 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b999,(int)puVar1,s_DragQueryFileA_0051239e);
    DAT_005122f7 = DAT_005122f7 + '\x01';
  }
  (*DAT_0051b999)();
  return;
}

