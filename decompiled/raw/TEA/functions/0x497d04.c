// name: FUN_00497d04
// address: 0x497d04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00497d04(int param_1,UINT param_2,char param_3,LPCMENUITEMINFOA param_4)

{
  BOOL BVar1;
  
  BVar1 = SetMenuItemInfoA(*(HMENU *)(param_1 + 4),param_2,(uint)(param_3 != '\0'),param_4);
  return BVar1 != 0;
}

