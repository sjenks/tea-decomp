// name: FUN_00438410
// address: 0x438410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __cdecl FUN_00438410(int param_1,uint *param_2)

{
  BOOL in_EAX;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      FUN_0045681c();
    }
    in_EAX = FUN_0042aea0(param_2);
    *(BOOL *)(param_1 + 0x10) = in_EAX;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    in_EAX = SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return in_EAX;
}

