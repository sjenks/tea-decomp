// name: FUN_00438410
// address: 0x438410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438410(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      FUN_0045681c();
    }
    uVar1 = FUN_0042aea0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return;
}

