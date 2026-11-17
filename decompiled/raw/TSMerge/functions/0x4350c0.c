// name: FUN_004350c0
// address: 0x4350c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004350c0(int *param_1,INT_PTR param_2)

{
  if ((((*(byte *)(*param_1 + 0x76) & 0x20) == 0) && ((*(byte *)(*param_1 + 0x76) & 0x10) != 0)) &&
     (*(int *)(*param_1 + 0xc) != 0)) {
    FUN_0042d0cc(*param_1,FUN_0042c6ec);
    EndDialog(*(HWND *)(*param_1 + 0xc),param_2);
  }
  else {
    FUN_0042c700(*param_1,param_2);
  }
  return;
}

