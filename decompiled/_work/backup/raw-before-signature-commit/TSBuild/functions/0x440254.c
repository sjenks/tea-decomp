// name: FUN_00440254
// address: 0x440254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440254(int *param_1,INT_PTR param_2)

{
  if ((((*(byte *)(*param_1 + 0x76) & 0x20) == 0) && ((*(byte *)(*param_1 + 0x76) & 0x10) != 0)) &&
     (*(int *)(*param_1 + 0xc) != 0)) {
    FUN_00438260(*param_1,FUN_00437880);
    EndDialog(*(HWND *)(*param_1 + 0xc),param_2);
  }
  else {
    FUN_00437894(*param_1,param_2);
  }
  return;
}

