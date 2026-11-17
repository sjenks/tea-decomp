// name: FUN_00411748
// address: 0x411748
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411748(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_004ecacc = *(undefined4 **)(param_1 + 4);
    if (DAT_004ecacc == (undefined4 *)0x0) {
      DAT_004ecac8 = 0;
    }
    else {
      *DAT_004ecacc = 0;
    }
    if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 0x14));
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

