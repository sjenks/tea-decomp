// name: FUN_0040f1b4
// address: 0x40f1b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_0040f1b4(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int local_18 [2];
  uint *local_10;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(param_1[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    local_18[1] = 0xffffffff;
    local_10 = param_3;
    if (param_4 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    if (param_5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    local_18[0] = param_2;
    iVar1 = FUN_0040f194(param_1,uVar2 | uVar4 | (uint)(param_6 == '\0'),(LPARAM)local_18);
    if (-1 < iVar1) {
      pcVar3 = FUN_00455bf0(param_3);
      (**(code **)(param_1[3] + 0x3c))
                (pcVar3 + iVar1,param_1[3],param_3,param_1,pcVar3 + iVar1,iVar1);
    }
  }
  return iVar1;
}

