// name: FUN_004cb224
// address: 0x4cb224
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004cb224(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00512303 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b9c9,(int)puVar1,s_ShellExecuteA_005123ba);
    DAT_00512303 = DAT_00512303 + '\x01';
  }
  uVar2 = (*DAT_0051b9c9)();
  return uVar2;
}

