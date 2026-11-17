// name: FUN_004b5ab0
// address: 0x4b5ab0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char __cdecl FUN_004b5ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  cVar2 = '\x01';
  iVar4 = 0;
  while (iVar4 = FUN_004b5d60((undefined4 *)(param_1 + 8),iVar4), iVar4 != 0) {
    if ((cVar2 == '\0') || (cVar2 = FUN_004b5ab0(iVar4,param_2,param_3,param_4), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  local_14 = 0x7ffb;
  local_8 = 0;
  local_10 = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x26); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[5]) {
    if ((param_4 != puVar1) && (cVar3 = (*(code *)**(undefined4 **)*puVar1)(), cVar3 != '\0')) {
      if ((cVar2 == '\0') || (iVar4 = FUN_0048e7e0(*puVar1,(int)&local_14), iVar4 == 0)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
    }
  }
  return cVar2;
}

