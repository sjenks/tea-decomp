// name: FUN_004050ac
// address: 0x4050ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004050ac(int param_1,RECT *param_2,byte param_3)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),param_2,(uint)param_3);
  return;
}

