// name: FUN_004424e8
// address: 0x4424e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004424e8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
LAB_00442580:
  do {
    while( true ) {
      piVar3 = param_2;
      uVar2 = (**(code **)(*param_2 + 0x28))();
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x4c))
                          (uVar2,*(int *)(param_1 + 8),piVar3,param_1,param_2,0x7efc,3);
      }
      else {
        iVar1 = 6;
      }
      if (iVar1 == 2) {
        return 0;
      }
      if (iVar1 == 6) break;
      if (iVar1 == 7) {
        uVar2 = (**(code **)(*param_2 + 0x18))();
        if ((char)uVar2 != '\0') {
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
        return 0;
      }
    }
    if ((*(char *)((int)param_2 + 0xd) == '\0') && (*(int *)((int)param_2 + 0x2e) == 0)) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x20))();
      if (iVar1 == 0) goto LAB_00442580;
      if (iVar1 != *(int *)((int)param_2 + 0x22)) {
        FUN_00444da8((int)param_2,iVar1);
      }
    }
    uVar2 = (**(code **)(*param_2 + 0x14))();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  } while( true );
}

