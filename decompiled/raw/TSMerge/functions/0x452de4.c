// name: FUN_00452de4
// address: 0x452de4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00452de4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044fd18((int)param_1);
  if ((char)uVar1 != '\0') {
    piVar2 = FUN_0044e3b8(param_1 + 2);
    if (piVar2 == (int *)0x0) {
      FUN_0044eb78(*param_1,4);
      return;
    }
    FUN_0044e7a0(*param_1,0);
  }
  return;
}

