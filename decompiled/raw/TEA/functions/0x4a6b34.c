// name: FUN_004a6b34
// address: 0x4a6b34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6b34(int param_1)

{
  char cVar1;
  BOOL BVar2;
  tagMSG local_20;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x38))();
    if (cVar1 != '\0') {
      local_20.message = 0;
      SetCapture(*(HWND *)(param_1 + 0xc));
      while (local_20.message != 0x202) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x38))();
        if ((cVar1 == '\0') || ((local_20.message == 0x200 && (((byte)local_20.wParam & 1) == 0))))
        break;
        BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
        if (BVar2 != 0) {
          TranslateMessage(&local_20);
          DispatchMessageA(&local_20);
        }
        (**(code **)(**(int **)(param_1 + 0x44) + 0x3c))();
      }
      ReleaseCapture();
    }
  }
  FUN_004a5774(param_1);
  return;
}

