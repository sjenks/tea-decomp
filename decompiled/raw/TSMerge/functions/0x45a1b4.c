// name: FUN_0045a1b4
// address: 0x45a1b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045a1b4(LCID param_1,LCTYPE param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,0);
  uVar2 = FUN_0044b944();
  *param_3 = uVar2;
  if (param_3 == (undefined4 *)0x0) {
    SetLastError(0xe);
    uVar2 = 0;
  }
  else {
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,iVar1 + 1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

