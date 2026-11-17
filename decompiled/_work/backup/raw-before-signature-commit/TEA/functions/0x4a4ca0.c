// name: FUN_004a4ca0
// address: 0x4a4ca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004a4ca0(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0048751c();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_004a4ce0:
    DAT_0050ab94 = RegisterWindowMessageA(s_MSWHEEL_ROLLMSG_0050ac84);
  }
  else {
    puVar1 = FUN_0048751c();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_0048751c();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_004a4ce0;
    }
    DAT_0050ab94 = 0;
  }
  if (DAT_0050b04c == '\0') {
    DAT_0050b04c = '\x01';
    _DAT_0050b01c = DAT_0050ab94;
  }
  return;
}

