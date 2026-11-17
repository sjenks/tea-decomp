// name: FUN_004b5cd0
// address: 0x4b5cd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b5cd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004b5d60((undefined4 *)(param_1 + 8),(int)piVar3);
    if (piVar3 == (int *)0x0) {
      uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x24))();
      return uVar2;
    }
    cVar1 = (**(code **)(*piVar3 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

