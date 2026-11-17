// name: FUN_00453fd0
// address: 0x453fd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00453fd0(int *param_1,uint param_2)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_00454f88(param_1);
      return 1;
    }
  }
  return 0;
}

