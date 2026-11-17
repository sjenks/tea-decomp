// name: FUN_0041baac
// address: 0x41baac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041baac(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    BVar1 = IsWindow(*(HWND *)(**(int **)((int)param_1 + 0x3b) + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_0041bb22;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_0042d1a4(**(int **)((int)param_1 + 0x3b),0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_0041bb22:
  FUN_0042afd4(*param_1,param_2);
  return;
}

