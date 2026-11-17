// name: FUN_00443dec
// address: 0x443dec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00443dec(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004453d4((undefined4 *)(param_1 + 0x14),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

