// name: FUN_004c8b34
// address: 0x4c8b34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c8b34(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_004c9638(param_1);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

