// name: FUN_0048597c
// address: 0x48597c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048597c(HWND param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x503938);
  if (DAT_005038ac == '\0') {
    FUN_00485a4c((undefined4 *)&DAT_0051aea4);
    DAT_005038ac = DAT_005038ac + '\x01';
  }
  if (DAT_0051aea8 == (code *)0x0) {
    MessageBoxExA(param_1,s_Help_library_not_found_005038f4,s_Can_t_open_help_0050390b,0x30,0);
    uVar1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    uVar1 = (*DAT_0051aea8)();
    *in_FS_OFFSET = local_28;
  }
  return uVar1;
}

