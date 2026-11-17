// name: FUN_00428628
// address: 0x428628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428628(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (param_1[7] != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)param_1[7] + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_0042869e;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_0042d1a4(*(int *)param_1[7],0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_0042869e:
  FUN_0042afd4(*param_1,param_2);
  return;
}

