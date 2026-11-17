// name: FUN_004a6be0
// address: 0x4a6be0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6be0(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004a75d0(param_1,FUN_004a6bcc);
    if ((*(byte *)(param_1 + 0x75) & 0x20) != 0) {
      FUN_004ab404(*(int *)(param_1 + 0x6c),param_2);
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffdfff;
      if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0)) {
        SetFocus(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc));
      }
    }
    if (((*(byte *)(param_1 + 0x74) & 1) == 0) &&
       (BVar1 = DestroyWindow(*(HWND *)(param_1 + 0xc)), BVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

