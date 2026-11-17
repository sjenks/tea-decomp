// name: FUN_0044d278
// address: 0x44d278
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0044d278(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    iVar4 = (int)param_2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    if (iVar4 >> 4 < 0x11) break;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    puVar2 = FUN_0044d3b8(param_1,param_2);
    iVar4 = (int)puVar2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar3 = (int)param_2 - (int)puVar2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar4 >> 4 < iVar3 >> 4) {
      FUN_0044d278(param_1,puVar2,0,param_4);
      param_1 = puVar2;
    }
    else {
      FUN_0044d278(puVar2,param_2,0,param_4);
      param_2 = puVar2;
    }
  }
  return;
}

