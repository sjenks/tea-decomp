// name: FUN_0042a954
// address: 0x42a954
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0042a954(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_00410934();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_0042a994:
    DAT_0046a374 = RegisterWindowMessageA(s_MSWHEEL_ROLLMSG_0046a464);
  }
  else {
    puVar1 = FUN_00410934();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_00410934();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_0042a994;
    }
    DAT_0046a374 = 0;
  }
  if (DAT_0046a82c == '\0') {
    DAT_0046a82c = '\x01';
    _DAT_0046a7fc = DAT_0046a374;
  }
  return;
}

