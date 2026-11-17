// name: FUN_004b0be0
// address: 0x4b0be0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b0be0(int *param_1,INT_PTR param_2)

{
  if ((((*(byte *)(*param_1 + 0x76) & 0x20) == 0) && ((*(byte *)(*param_1 + 0x76) & 0x10) != 0)) &&
     (*(int *)(*param_1 + 0xc) != 0)) {
    FUN_004a75d0(*param_1,FUN_004a6bcc);
    EndDialog(*(HWND *)(*param_1 + 0xc),param_2);
  }
  else {
    FUN_004a6be0(*param_1,param_2);
  }
  return;
}

