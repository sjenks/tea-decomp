// name: FUN_00479484
// address: 0x479484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00479484(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 1;
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  uVar3 = iVar2 >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (iVar2 != 0) {
        iVar1 = FUN_00434aa0(iVar2);
        if (iVar1 <= param_2) {
          iVar2 = FUN_00434abc(iVar2);
          if (param_2 <= iVar2) {
            FUN_00434878(*(int *)(*(int *)(param_1 + 4) + uVar4 * 4),param_2);
            goto LAB_00479506;
          }
        }
        if (uVar3 == 1) {
          local_8 = 0;
        }
      }
LAB_00479506:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return local_8;
}

