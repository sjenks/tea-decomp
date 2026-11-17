// name: FUN_00419b20
// address: 0x419b20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00419b20(HWND param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x477ddc);
  if (DAT_00477d50 == '\0') {
    FUN_00419bf0((undefined4 *)&DAT_0048c364);
    DAT_00477d50 = DAT_00477d50 + '\x01';
  }
  if (DAT_0048c368 == (code *)0x0) {
    MessageBoxExA(param_1,s_Help_library_not_found_00477d98,s_Can_t_open_help_00477daf,0x30,0);
    uVar1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    uVar1 = (*DAT_0048c368)();
    *in_FS_OFFSET = local_28;
  }
  return uVar1;
}

