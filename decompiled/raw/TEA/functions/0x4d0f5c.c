// name: FUN_004d0f5c
// address: 0x4d0f5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d0f5c(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar3 = param_3 & 0xffffffdf | 1;
  }
  iVar1 = FUN_004d0724();
  if (iVar1 == param_1[9]) {
    param_1[1] = param_3;
    FUN_004d06f0((int)param_1,'\0');
    uVar3 = *(uint *)(&DAT_00515a78 + (uVar3 & 0xffffff3f) * 4);
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
      iVar1 = thunk_FUN_004ddf38(param_2,uVar3,param_4);
      param_1[9] = iVar1;
      iVar2 = FUN_004d0724();
      if (iVar1 == iVar2) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004cc0cc();
        iVar1 = FUN_004cc180();
        param_1[0x10] = iVar1;
        if ((param_3 & 0x20) != 0) {
          iVar1 = FUN_004d1068(param_1,param_1[9],0,2);
          param_1[0xd] = iVar1;
          if (iVar1 == -1) {
            FUN_004d08c4(param_1);
            FUN_004cc0cc();
            param_1[0x10] = 0;
            iVar1 = FUN_004d0724();
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

