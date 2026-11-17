// name: FUN_00453ed8
// address: 0x453ed8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00453ed8(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_004549dc(param_1);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

