// name: FUN_0045050c
// address: 0x45050c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045050c(int *param_1)

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
  
  uVar2 = FUN_0044ef44((int)param_1);
  if ((uVar2 & 8) != 0) {
    if ((param_1[9] == 1) || (param_1[9] == 2)) {
      local_c = FUN_0044e520();
      piVar5 = &local_c;
      FUN_0044e520();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_0044f188(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*param_1 + 0xc))();
      piStack_a4 = (int *)0x450590;
      iVar3 = FUN_0044eb5c(param_1,param_1[9],0,1);
      FUN_0045075c(local_2c,iVar3);
      piStack_a4 = (int *)0x4505ae;
      iVar3 = FUN_0044eb5c(param_1,param_1[9],0,2);
      FUN_0045075c(local_38,iVar3);
      iVar3 = 0;
      LVar4 = FUN_004507dc(local_2c);
      piStack_a4 = (int *)0x4505d5;
      FUN_0044eb5c(param_1,param_1[9],LVar4,iVar3);
      bVar1 = FUN_004507e8(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_0045075c(local_50,-1);
        FUN_00450800(&piStack_a4,local_20);
        (**(code **)(*param_1 + 0x10))();
        uVar6 = FUN_00450850(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)param_1 + 0x29) != '\0') {
        local_14 = FUN_0044e520();
        piVar5 = &local_14;
        FUN_0044e520();
        local_10 = (**(code **)(*param_1 + 0x24))();
        bVar1 = FUN_0044f188(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_0044ef44((int)param_1);
  if (((uVar2 & 4) != 0) && (param_1[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*param_1 + 0xc))();
    piStack_a4 = (int *)0x4506ac;
    iVar3 = FUN_0044eb5c(param_1,param_1[9],0,1);
    FUN_0045075c(local_68,iVar3);
    piStack_a4 = (int *)0x4506ca;
    iVar3 = FUN_0044eb5c(param_1,param_1[9],0,2);
    FUN_0045075c(local_74,iVar3);
    iVar3 = 0;
    LVar4 = FUN_004507dc(local_68);
    piStack_a4 = (int *)0x4506f1;
    FUN_0044eb5c(param_1,param_1[9],LVar4,iVar3);
    bVar1 = FUN_004507e8(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_0045075c(local_8c,-1);
      FUN_00450800(&piStack_a4,local_5c);
      (**(code **)(*param_1 + 0x10))();
      uVar6 = FUN_00450850(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

