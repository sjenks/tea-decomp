// name: FUN_004bb874
// address: 0x4bb874
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004bb8c9) */
/* WARNING: Removing unreachable block (ram,0x004bb8fe) */

int __cdecl FUN_004bb874(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      uVar1 = FUN_004bb854((int)param_3);
      if (param_4 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x30))();
      }
      else {
        if ((*(int *)((int)param_1 + 9) != 0) && (*(uint *)((int)param_1 + 0xd) < uVar1)) {
          FUN_004cc0cc();
          *(undefined4 *)((int)param_1 + 9) = 0;
        }
        if (*(int *)((int)param_1 + 9) == 0) {
          *(uint *)((int)param_1 + 0xd) = uVar1 * 5;
          uVar3 = FUN_004cc180();
          *(undefined4 *)((int)param_1 + 9) = uVar3;
        }
        iVar2 = (**(code **)(*param_1 + 0x30))();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          for (; param_3[2] != 0; param_3 = param_3 + 3) {
            iVar4 = (**(code **)(&DAT_0050f0c8 + *param_3 * 4))();
            if (iVar4 == -1) {
              return 0;
            }
            iVar2 = iVar2 + iVar4;
          }
        }
      }
      return iVar2;
    }
    if ((*piVar5 < 1) || (0x12 < *piVar5)) break;
    if (piVar5[1] < 1) {
      return 0;
    }
    piVar5 = piVar5 + 3;
  }
  return 0;
}

