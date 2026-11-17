// name: FUN_00438458
// address: 0x438458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438458(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      FUN_0045681c();
    }
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (iVar1 < 0) {
      uVar2 = FUN_0042aea0((uint *)(s_MSWHEEL_ROLLMSG_0047e240 + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = FUN_004568d0();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),iVar1 + 1);
    }
  }
  return;
}

