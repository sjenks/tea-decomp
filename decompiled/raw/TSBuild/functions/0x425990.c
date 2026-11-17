// name: FUN_00425990
// address: 0x425990
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425990(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
    }
    puVar1 = FUN_00468488(iVar3,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0041d6e8,0);
  }
  while ((iVar3 != 0 && (puVar1 == (undefined4 *)0x0))) {
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 != 0) {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar3 + 8);
      }
      puVar1 = FUN_00468488(iVar3,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0041d6e8,0);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 < 1) {
      FUN_00436d48(puVar1[1],0x11f,0xffff0000,0);
    }
    else {
      FUN_00436d48(puVar1[1],0x11f,param_2,0);
    }
    FUN_00436d48(puVar1[1],0x121,2,0);
  }
  return;
}

