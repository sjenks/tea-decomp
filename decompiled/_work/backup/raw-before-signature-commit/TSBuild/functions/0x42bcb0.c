// name: FUN_0042bcb0
// address: 0x42bcb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bcb0(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0047c368;
    if ((*(char *)(param_1 + 2) != '\0') && (param_1[1] != 0)) {
      DestroyMenu((HMENU)param_1[1]);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

