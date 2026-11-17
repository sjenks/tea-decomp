// name: FUN_004a7780
// address: 0x4a7780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7780(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      FUN_004cc0cc();
    }
    uVar1 = FUN_00496d48(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return;
}

