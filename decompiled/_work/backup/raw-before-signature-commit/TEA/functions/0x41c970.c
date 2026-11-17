// name: FUN_0041c970
// address: 0x41c970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0041c970(int *param_1,LPMSG param_2)

{
  char cVar1;
  bool bVar2;
  SHORT SVar3;
  
  if (((param_2->message == 0x100) && (SVar3 = GetKeyState(0x11), SVar3 < 0)) &&
     (param_2->wParam == 0xd)) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    cVar1 = (**(code **)(*(int *)(param_1[6] + 0xc) + 0x78))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0xac))();
  }
  bVar2 = FUN_004a54b4(*param_1,param_2);
  return bVar2;
}

