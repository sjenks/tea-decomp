// name: FUN_0040eb8c
// address: 0x40eb8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040eb8c(HWND param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x464028);
  if (DAT_00463f9c == '\0') {
    FUN_0040ec5c((undefined4 *)&DAT_004768bc);
    DAT_00463f9c = DAT_00463f9c + '\x01';
  }
  if (DAT_004768c0 == (code *)0x0) {
    MessageBoxExA(param_1,s_Help_library_not_found_00463fe4,s_Can_t_open_help_00463ffb,0x30,0);
    uVar1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    uVar1 = (*DAT_004768c0)();
    *in_FS_OFFSET = local_28;
  }
  return uVar1;
}

