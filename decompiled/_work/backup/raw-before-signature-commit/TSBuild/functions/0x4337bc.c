// name: FUN_004337bc
// address: 0x4337bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004337bc(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (param_1[7] != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)param_1[7] + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_00433832;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_00438338(*(int *)param_1[7],0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_00433832:
  FUN_00436168(*param_1,param_2);
  return;
}

