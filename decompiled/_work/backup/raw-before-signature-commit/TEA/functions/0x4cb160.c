// name: FUN_004cb160
// address: 0x4cb160
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004cb160(void)

{
  undefined *puVar1;
  
  if (DAT_005122f5 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b991,(int)puVar1,s_DragAcceptFiles_00512319);
    DAT_005122f5 = DAT_005122f5 + '\x01';
  }
  (*DAT_0051b991)();
  return;
}

