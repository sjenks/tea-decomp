// name: FUN_00435ae8
// address: 0x435ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00435ae8(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0041b958();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_00435b28:
    DAT_0047e150 = RegisterWindowMessageA(s_MSWHEEL_ROLLMSG_0047e240);
  }
  else {
    puVar1 = FUN_0041b958();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_0041b958();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_00435b28;
    }
    DAT_0047e150 = 0;
  }
  if (DAT_0047e608 == '\0') {
    DAT_0047e608 = '\x01';
    _DAT_0047e5d8 = DAT_0047e150;
  }
  return;
}

