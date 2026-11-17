// name: FUN_004bf634
// address: 0x4bf634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bf634(int *param_1,int param_2)

{
  if ((char)param_1[5] != '\0') {
    PostMessageA(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),0x111,
                 param_2 << 0x10 | (uint)*(ushort *)(*param_1 + 0x34),*(LPARAM *)(*param_1 + 0xc));
  }
  return;
}

