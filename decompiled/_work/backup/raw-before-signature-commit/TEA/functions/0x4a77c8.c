// name: FUN_004a77c8
// address: 0x4a77c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a77c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      FUN_004cc0cc();
    }
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (iVar1 < 0) {
      uVar2 = FUN_00496d48((uint *)(s_MSWHEEL_ROLLMSG_0050ac84 + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = FUN_004cc180();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),iVar1 + 1);
    }
  }
  return;
}

