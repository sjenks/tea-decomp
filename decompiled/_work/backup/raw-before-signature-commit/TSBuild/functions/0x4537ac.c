// name: FUN_004537ac
// address: 0x4537ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004537ac(int *param_1,undefined4 param_2,int param_3)

{
  BOOL BVar1;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar1 == 0)) {
    FUN_00454dc8(&local_14,param_1);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + (local_8 - local_10);
    return 1;
  }
  return 0;
}

