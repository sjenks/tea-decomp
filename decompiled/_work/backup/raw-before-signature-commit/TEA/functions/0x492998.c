// name: FUN_00492998
// address: 0x492998
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492998(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    BVar1 = IsWindow(*(HWND *)(**(int **)((int)param_1 + 0x3b) + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_00492a0e;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_004a76a8(**(int **)((int)param_1 + 0x3b),0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_00492a0e:
  FUN_004a54b4(*param_1,param_2);
  return;
}

