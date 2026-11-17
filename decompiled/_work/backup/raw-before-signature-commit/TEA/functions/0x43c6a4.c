// name: FUN_0043c6a4
// address: 0x43c6a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043c6a4(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar2 = param_2 + -1, param_2 != 0) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = iVar2;
    if ((&DAT_004f50d8)[bVar1] != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

