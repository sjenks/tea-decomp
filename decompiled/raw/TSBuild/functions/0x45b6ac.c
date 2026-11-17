// name: FUN_0045b6ac
// address: 0x45b6ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045b6ac(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar3 = param_3 & 0xffffffdf | 1;
  }
  iVar1 = FUN_0045ae74();
  if (iVar1 == param_1[9]) {
    param_1[1] = param_3;
    FUN_0045ae40((int)param_1,'\0');
    uVar3 = *(uint *)(&DAT_004877ac + (uVar3 & 0xffffff3f) * 4);
    if (uVar3 == 0xffffffff) {
      param_1 = (int *)0x0;
    }
    else {
      if ((param_3 & 8) != 0) {
        if ((param_3 & 0x40) != 0) {
          uVar3 = uVar3 & 0xfffffeff;
        }
        if ((param_3 & 0x80) != 0) {
          uVar3 = uVar3 | 0x400;
        }
      }
      iVar1 = thunk_FUN_00468c7c(param_2,uVar3,param_4);
      param_1[9] = iVar1;
      iVar2 = FUN_0045ae74();
      if (iVar1 == iVar2) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0045681c();
        iVar1 = FUN_004568d0();
        param_1[0x10] = iVar1;
        if ((param_3 & 0x20) != 0) {
          iVar1 = FUN_0045b7b8(param_1,param_1[9],0,2);
          param_1[0xd] = iVar1;
          if (iVar1 == -1) {
            FUN_0045b014(param_1);
            FUN_0045681c();
            param_1[0x10] = 0;
            iVar1 = FUN_0045ae74();
            param_1[9] = iVar1;
            param_1 = (int *)0x0;
          }
        }
      }
    }
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

