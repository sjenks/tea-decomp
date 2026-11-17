// name: FUN_0046136c
// address: 0x46136c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046136c(int param_1)

{
  int iVar1;
  uint uVar2;
  WPARAM WVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_8;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    piVar4 = (int *)(param_1 + 100);
    do {
      if ((iVar5 == 0) && (*piVar4 != 0)) {
        local_8 = (int *)(*piVar4 + 8);
LAB_004613da:
        iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar5 * 4) + iVar6 * 0x38;
        if (*(int *)(iVar1 + 0x40) == 0) {
          WVar3 = 0;
        }
        else {
          uVar2 = FUN_004d40d0(iVar1 + 0x48,0,*(uint *)(*(int *)(iVar1 + 0x50) + -4),
                               *(byte **)(*(int *)(param_1 + 0x60) + 0x28),
                               *(uint *)(*(int *)(*(int *)(param_1 + 0x60) + 0x28) + -4));
          if (uVar2 == 0) {
            WVar3 = 1;
          }
          else {
            WVar3 = 2;
          }
        }
        FUN_004ac750(local_8,WVar3);
      }
      else {
        if ((iVar5 == 1) && (piVar4[4] != 0)) {
          local_8 = (int *)(piVar4[4] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 3) && (piVar4[0xc] != 0)) {
          local_8 = (int *)(piVar4[0xc] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 2) && (piVar4[8] != 0)) {
          local_8 = (int *)(piVar4[8] + 8);
          goto LAB_004613da;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 4);
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}

