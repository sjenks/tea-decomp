// name: FUN_004a54b4
// address: 0x4a54b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004a54b4(int param_1,LPMSG param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 4))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      if (param_2->hwnd != *(HWND *)(param_1 + 0xc)) {
        BVar2 = IsChild(*(HWND *)(param_1 + 0xc),param_2->hwnd);
        if (BVar2 == 0) goto LAB_004a552e;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_004a76a8(*piVar1,0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_004a552e:
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = TranslateAcceleratorA(*(HWND *)(param_1 + 0xc),*(HACCEL *)(param_1 + 0x4c),param_2);
  }
  return iVar3 != 0;
}

