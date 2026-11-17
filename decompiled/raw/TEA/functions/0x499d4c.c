// name: FUN_00499d4c
// address: 0x499d4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00499d4c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[3] < (uint)piVar1[4]) {
      uVar2 = (uint)*(byte *)piVar1[3];
      piVar1[3] = piVar1[3] + 1;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x20))();
    }
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

