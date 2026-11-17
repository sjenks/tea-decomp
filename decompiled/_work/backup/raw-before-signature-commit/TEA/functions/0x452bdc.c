// name: FUN_00452bdc
// address: 0x452bdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00452bdc(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  *param_3 = 0x65;
  *param_4 = 0;
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  *param_5 = 1;
  if (*(int *)(param_1 + 0x690) == 0) {
    iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x6b4));
    iVar3 = iVar2 + 0x28;
    FUN_00479ab8(iVar3,1,100);
    if ((*(int *)(iVar1 + 0x1b8) != 0) &&
       (iVar1 = *(int *)(iVar1 + 0x1bc), *param_5 = iVar1, iVar1 == 0)) {
      iVar1 = FUN_00479b7c(iVar3);
      *param_5 = iVar1;
    }
    FUN_00479b08(iVar3,param_3,param_4);
    local_c = 0;
    if (*param_4 < *param_3) {
      if (**(char **)(iVar2 + 0x50) == '\x03') {
        local_c = 1;
      }
      else {
        local_c = 2;
      }
    }
    iVar1 = FUN_0041b280((int *)(param_1 + 0x50c));
    iVar2 = FUN_0041b280((int *)(param_1 + 0x2d8));
    FUN_00479ab8(iVar3,iVar2,iVar1);
    FUN_00479b08(iVar3,param_3,param_4);
    if ((*param_4 < *param_3) && (local_c == 0)) {
      local_c = 3;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

