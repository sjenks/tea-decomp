// name: FUN_00405df0
// address: 0x405df0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405df0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  if (param_3 == 0x12b6) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x30);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xa40),(int *)(iVar1 + 0x30),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d86c(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x12ac) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0xb0,*(int *)(param_1 + 0x1f90) + 0x70,(int)param_2);
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x70);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xc10),(int *)(iVar1 + 0x70),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(*(int *)(param_1 + 0x1f90) + 0xb0),
                 (int *)(param_1 + 0x1f88),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3232) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xb0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(iVar1 + 0xb0),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x1644) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xf0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar6 = 0x3ff00000;
    iVar5 = 0;
    iVar4 = 0x3ff00000;
    iVar2 = 0;
    local_8 = FUN_0048c12c(&DAT_0051b198);
    FUN_00419418((int *)(param_1 + 0xfb0),(int *)(iVar1 + 0xf0),(int *)&local_8,iVar2,iVar4,iVar5,
                 iVar6);
  }
  else if (param_3 == 0x3124) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0x170,*(int *)(param_1 + 0x1f90) + 0x130,(int)param_2)
    ;
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x130);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1180),(int *)(iVar1 + 0x130),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(*(int *)(param_1 + 0x1f90) + 0x170),
                 (int *)(*(int *)(param_1 + 0x1f90) + 0x2c),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d9e8(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3138) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x170);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(iVar1 + 0x170),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
  }
  return;
}

