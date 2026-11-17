// name: FUN_004e2790
// address: 0x4e2790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e2790(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4)

{
  char *lpLCData;
  undefined4 uVar1;
  int iVar2;
  
  lpLCData = (char *)FUN_004cc734();
  if (lpLCData == (char *)0x0) {
    SetLastError(0xe);
    uVar1 = 0;
  }
  else {
    iVar2 = GetLocaleInfoA(param_1,param_2,lpLCData,param_4 + 1);
    if (iVar2 == 0) {
      FUN_004cc744();
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_004e39d0(lpLCData);
      *param_3 = (short)iVar2;
      FUN_004cc744();
      uVar1 = 1;
    }
  }
  return uVar1;
}

