// name: FUN_00429538
// address: 0x429538
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429538(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  FUN_00429500((int)param_1);
  for (iVar1 = param_1[6]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x55)) {
    *(bool *)(iVar1 + 0x39) = *(int *)(iVar1 + 0x35) == 0;
    *(bool *)(iVar1 + 0x42) = *(int *)(iVar1 + 0x3e) == 0;
    *(bool *)(iVar1 + 0x4b) = *(int *)(iVar1 + 0x47) == 0;
    *(bool *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x50) == 0;
  }
  do {
    bVar5 = false;
    piVar2 = (int *)param_1[7];
    piVar4 = (int *)0x0;
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      uVar6 = FUN_0042a08c(piVar3);
      if ((char)uVar6 == '\0') {
        piVar2 = (int *)piVar3[8];
        piVar4 = piVar3;
      }
      else {
        *(undefined1 *)(piVar3[3] + 8) = 1;
        bVar5 = true;
        if (piVar4 == (int *)0x0) {
          param_1[7] = piVar3[8];
        }
        else {
          piVar4[8] = piVar3[8];
        }
        piVar2 = (int *)piVar3[8];
        if (piVar7 == (int *)0x0) {
          param_1[8] = (int)piVar3;
          piVar7 = piVar3;
        }
        else {
          piVar7[8] = (int)piVar3;
          piVar7 = piVar3;
        }
      }
    }
  } while (bVar5);
  if (param_1[7] != 0) {
    FUN_004391f0(*param_1,0x7fe5);
  }
  return;
}

