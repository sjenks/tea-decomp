// name: FUN_00443e3c
// address: 0x443e3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00443e3c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR local_34 [28];
  CHAR local_18 [20];
  
  FUN_00443f10(param_1,param_2);
  if (DAT_0046ad80 == 0) {
    pcVar2 = s_GetWindowPtr__X__0046ee64;
    pCVar3 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(local_34,local_18,param_2);
    DAT_0046ad80 = RegisterWindowMessageA(local_34);
  }
  return;
}

