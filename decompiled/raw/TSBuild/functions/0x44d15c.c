// name: FUN_0044d15c
// address: 0x44d15c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044d15c(int *param_1,LPMSG param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND hWnd;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  CHAR local_14 [16];
  
  bVar1 = FUN_00436168(*param_1,param_2);
  if (bVar1) {
    uVar4 = CONCAT31(extraout_var,1);
  }
  else {
    if ((((char)param_1[4] != '\0') && (0xff < param_2->message)) && (param_2->message < 0x109)) {
      hWnd = GetParent(param_2->hwnd);
      GetClassNameA(hWnd,local_14,0x10);
      iVar2 = FUN_004679a4(local_14,s_COMBOBOX_00482828);
      if (iVar2 == 0) {
        hWnd = GetParent(hWnd);
      }
      if ((hWnd != (HWND)0x0) && (BVar3 = IsDialogMessageA(hWnd,param_2), BVar3 != 0)) {
        return CONCAT31((int3)((uint)BVar3 >> 8),1);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

