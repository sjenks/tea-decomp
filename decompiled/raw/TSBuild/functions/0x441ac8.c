// name: FUN_00441ac8
// address: 0x441ac8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00441ac8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))();
        iVar4 = 0;
        if (0 < local_8) {
          do {
            iVar3 = (**(code **)(**(int **)(param_2 + iVar4 * 4) + 0x14))();
            if (iVar2 == iVar3) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_8);
        }
        if ((*(byte *)((int)piVar1 + 0x17) & 0x10) != 0) {
          iVar2 = 0;
          while (iVar2 = FUN_00444ee8(param_4,iVar2), iVar2 != 0) {
            iVar3 = (**(code **)(*piVar1 + 0x10))();
            if (iVar3 != 0) {
              iVar4 = -1;
            }
          }
        }
        if (iVar4 == local_8) {
          *(int **)(param_2 + local_8 * 4) = piVar1;
          local_8 = local_8 + 1;
        }
      }
    }
  }
  return local_8;
}

