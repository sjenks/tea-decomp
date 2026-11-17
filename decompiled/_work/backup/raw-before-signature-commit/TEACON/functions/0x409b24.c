// name: FUN_00409b24
// address: 0x409b24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00409b24(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_0042c488 = *(undefined4 **)(param_1 + 4);
    if (DAT_0042c488 == (undefined4 *)0x0) {
      DAT_0042c484 = 0;
    }
    else {
      *DAT_0042c488 = 0;
    }
    if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 0x14));
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}

