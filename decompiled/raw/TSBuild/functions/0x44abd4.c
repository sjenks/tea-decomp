// name: FUN_0044abd4
// address: 0x44abd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044ac2a) */
/* WARNING: Removing unreachable block (ram,0x0044ac66) */

undefined1 __cdecl FUN_0044abd4(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      piVar5 = param_3;
      uVar2 = FUN_0044aa7c((int)param_3);
      if (param_4 == 0) {
        uVar1 = (**(code **)(*param_1 + 0x34))(*param_1,0,piVar5,param_1,param_2,uVar2);
      }
      else {
        if ((*(int *)((int)param_1 + 9) != 0) && (*(uint *)((int)param_1 + 0xd) < uVar2)) {
          FUN_0045681c();
          *(undefined4 *)((int)param_1 + 9) = 0;
        }
        if (*(int *)((int)param_1 + 9) == 0) {
          *(uint *)((int)param_1 + 0xd) = uVar2 * 5;
          uVar3 = FUN_004568d0();
          *(undefined4 *)((int)param_1 + 9) = uVar3;
        }
        for (; param_3[2] != 0; param_3 = param_3 + 3) {
          iVar4 = (**(code **)(&DAT_00482110 + *param_3 * 4))();
          if (iVar4 == -1) {
            return 0;
          }
        }
        uVar1 = (**(code **)(*param_1 + 0x34))();
      }
      return uVar1;
    }
    if ((*piVar5 < 1) || (0x12 < *piVar5)) break;
    if (piVar5[1] < 1) {
      return 0;
    }
    piVar5 = piVar5 + 3;
  }
  return 0;
}

