// name: FUN_00430850
// address: 0x430850
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00430850(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_14 = 0x7ff9;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x2b) == 0) {
LAB_00430882:
    if (*(int *)(param_1 + 0x27) != 0) {
      cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27) + 8) + 0x6c))();
      if (cVar1 != '\0') {
        iVar2 = FUN_004179cc(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
        if (iVar2 == 0) goto LAB_004308b8;
      }
    }
    uVar3 = 1;
  }
  else {
    cVar1 = (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 0x3c))();
    if (cVar1 != '\0') goto LAB_00430882;
LAB_004308b8:
    uVar3 = 0;
  }
  return uVar3;
}

