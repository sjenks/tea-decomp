// name: FUN_004b070c
// address: 0x4b070c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_004b070c(HWND param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0050b5c4) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a614c(param_1,0);
    if (LVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar3 + 8);
    }
    piVar4 = FUN_004dd744(LVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_00402e14,0);
    if ((((DAT_0050cd7c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0050cd7c + 0xc) = param_1;
      FUN_004a70e4(*DAT_0050cd7c);
      piVar4 = DAT_0050cd7c;
      DAT_0050cd7c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00487548();
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

