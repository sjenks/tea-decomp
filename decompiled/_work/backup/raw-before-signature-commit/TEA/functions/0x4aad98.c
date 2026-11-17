// name: FUN_004aad98
// address: 0x4aad98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004aad98(int param_1)

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
LAB_004aadca:
    if (*(int *)(param_1 + 0x27) != 0) {
      cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27) + 8) + 0x6c))();
      if (cVar1 != '\0') {
        iVar2 = FUN_0048e7e0(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
        if (iVar2 == 0) goto LAB_004aae00;
      }
    }
    uVar3 = 1;
  }
  else {
    cVar1 = (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 0x3c))();
    if (cVar1 != '\0') goto LAB_004aadca;
LAB_004aae00:
    uVar3 = 0;
  }
  return uVar3;
}

