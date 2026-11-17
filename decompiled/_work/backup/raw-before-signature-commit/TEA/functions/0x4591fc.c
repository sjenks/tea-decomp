// name: FUN_004591fc
// address: 0x4591fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_004591fc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar2 = FUN_004e03c0(param_2,&DAT_004f75f3), iVar2 == 1)) {
    local_c = 0;
    while (*param_2 != '\0') {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 == ',') {
        local_c = local_c + 1;
      }
      if ((param_5 == local_c + -1) && (iVar2 = FUN_004e03c0(param_2,&DAT_004f75f3), iVar2 == 1)) {
        iVar2 = FUN_004e3c04();
        return iVar2;
      }
    }
  }
  iVar2 = FUN_004e3c04();
  iVar3 = FUN_004e3c04();
  return iVar2 - iVar3;
}

