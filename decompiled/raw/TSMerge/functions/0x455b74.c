// name: FUN_00455b74
// address: 0x455b74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00455b74(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  do {
    iVar2 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if ((iVar2 != 0) || (*param_2 == 0)) {
      return iVar2;
    }
    iVar2 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[1] == 0) {
      return 0;
    }
    iVar2 = (uint)(byte)param_1[2] - (uint)(byte)param_2[2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[2] == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 + 3);
    iVar2 = (uint)(byte)param_1[3] - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (*pbVar1 != 0);
  return 0;
}

