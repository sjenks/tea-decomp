// name: FUN_00434bec
// address: 0x434bec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_00434bec(HWND param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0046ad80) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042bc6c(param_1,0);
    if (LVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar3 + 8);
    }
    piVar4 = FUN_004567e4(LVar3,iVar5,(int *)&DAT_0040467c,(int *)&DAT_00403714,0);
    if ((((DAT_0046c060 != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0046c060 + 0xc) = param_1;
      FUN_0042cbe0(*DAT_0046c060);
      piVar4 = DAT_0046c060;
      DAT_0046c060 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00410960();
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(piVar4[3] + 4))();
      }
    }
  }
  return uVar2;
}

