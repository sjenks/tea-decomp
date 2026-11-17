// name: FUN_004a2974
// address: 0x4a2974
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a2974(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (param_1[7] != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)param_1[7] + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_004a29ea;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_004a76a8(*(int *)param_1[7],0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_004a29ea:
  FUN_004a54b4(*param_1,param_2);
  return;
}

