// name: FUN_0042bdac
// address: 0x42bdac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bdac(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x20a) {
    param_2->message = 0x115;
    param_2->wParam = (uint)((int)param_2->wParam < 0);
    param_2->lParam = 0;
  }
  FUN_004a54b4(*param_1,param_2);
  return;
}

