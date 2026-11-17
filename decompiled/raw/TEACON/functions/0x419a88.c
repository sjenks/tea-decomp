// name: FUN_00419a88
// address: 0x419a88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00419a88(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_a4;
  int local_8c [3];
  int local_80 [3];
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_0041897c((int)param_1);
  if ((uVar2 & 8) != 0) {
    if ((param_1[9] == 1) || (param_1[9] == 2)) {
      local_c = FUN_004181e8();
      piVar5 = &local_c;
      FUN_004181e8();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*param_1 + 0xc))();
      piStack_a4 = (int *)0x419b0c;
      iVar3 = FUN_00418748(param_1,param_1[9],0,1);
      FUN_00419cd8(local_2c,iVar3);
      piStack_a4 = (int *)0x419b2a;
      iVar3 = FUN_00418748(param_1,param_1[9],0,2);
      FUN_00419cd8(local_38,iVar3);
      iVar3 = 0;
      LVar4 = FUN_00419d58(local_2c);
      piStack_a4 = (int *)0x419b51;
      FUN_00418748(param_1,param_1[9],LVar4,iVar3);
      bVar1 = FUN_00419d64(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_00419cd8(local_50,-1);
        FUN_00419d7c(&piStack_a4,local_20);
        (**(code **)(*param_1 + 0x10))();
        uVar6 = FUN_00419dcc(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)param_1 + 0x29) != '\0') {
        local_14 = FUN_004181e8();
        piVar5 = &local_14;
        FUN_004181e8();
        local_10 = (**(code **)(*param_1 + 0x24))();
        bVar1 = FUN_00418bc0(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_0041897c((int)param_1);
  if (((uVar2 & 4) != 0) && (param_1[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*param_1 + 0xc))();
    piStack_a4 = (int *)0x419c28;
    iVar3 = FUN_00418748(param_1,param_1[9],0,1);
    FUN_00419cd8(local_68,iVar3);
    piStack_a4 = (int *)0x419c46;
    iVar3 = FUN_00418748(param_1,param_1[9],0,2);
    FUN_00419cd8(local_74,iVar3);
    iVar3 = 0;
    LVar4 = FUN_00419d58(local_68);
    piStack_a4 = (int *)0x419c6d;
    FUN_00418748(param_1,param_1[9],LVar4,iVar3);
    bVar1 = FUN_00419d64(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_00419cd8(local_8c,-1);
      FUN_00419d7c(&piStack_a4,local_5c);
      (**(code **)(*param_1 + 0x10))();
      uVar6 = FUN_00419dcc(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

