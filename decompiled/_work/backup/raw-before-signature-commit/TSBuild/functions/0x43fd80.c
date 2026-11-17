// name: FUN_0043fd80
// address: 0x43fd80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_0043fd80(HWND param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0047eb5c) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_00436e00(param_1,0);
    if (LVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar3 + 8);
    }
    piVar4 = FUN_00468488(LVar3,iVar5,(int *)&DAT_00403c70,(int *)&DAT_0040293c,0);
    if ((((DAT_0047fe3c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0047fe3c + 0xc) = param_1;
      FUN_00437d74(*DAT_0047fe3c);
      piVar4 = DAT_0047fe3c;
      DAT_0047fe3c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_0041b984();
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

