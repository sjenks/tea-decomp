// name: FUN_00477744
// address: 0x477744
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00477744(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_0043568c(*(HWND *)(*param_1 + 0xc),s_Select_the_folder_where_your_fil_00500242,
                       (int)(param_1 + 0x1a));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (param_1[0x18] == 8) {
      iVar2 = 3;
    }
    else {
      iVar2 = 2;
    }
    FUN_0042116c((int)(param_1 + 0x22),(int)(param_1 + 0x1a));
    FUN_0041717c((int)param_1,*(uint **)(iVar2 * 4 + 0x501418),(uint *)param_1[0x1c]);
  }
  return;
}

