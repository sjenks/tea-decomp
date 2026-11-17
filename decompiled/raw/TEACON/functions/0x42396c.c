// name: FUN_0042396c
// address: 0x42396c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042396c(LCID param_1,LCTYPE param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,0);
  uVar2 = FUN_004155f0();
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

