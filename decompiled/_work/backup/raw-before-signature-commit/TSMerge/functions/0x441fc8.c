// name: FUN_00441fc8
// address: 0x441fc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00441fc8(int *param_1,LPMSG param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND hWnd;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  CHAR local_14 [16];
  
  bVar1 = FUN_0042afd4(*param_1,param_2);
  if (bVar1) {
    uVar4 = CONCAT31(extraout_var,1);
  }
  else {
    if ((((char)param_1[4] != '\0') && (0xff < param_2->message)) && (param_2->message < 0x109)) {
      hWnd = GetParent(param_2->hwnd);
      GetClassNameA(hWnd,local_14,0x10);
      iVar2 = FUN_00455d94(local_14,s_COMBOBOX_0046ea4c);
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

