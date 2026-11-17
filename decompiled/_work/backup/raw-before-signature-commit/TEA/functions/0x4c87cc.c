// name: FUN_004c87cc
// address: 0x4c87cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c87cc(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  int *piVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int local_bc [4];
  int local_ac [4];
  int local_9c [4];
  RECT local_8c;
  int local_7c [4];
  RECT local_6c;
  tagPOINT local_5c;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  int local_2c [10];
  
  bVar6 = 0;
  FUN_004dce64(0x511d00);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    local_5c.x = *param_3;
    local_5c.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_5c);
    FUN_004c8154(param_1,&local_5c.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      local_40 = 8;
      FUN_004a8674(local_2c,*(undefined4 *)(*param_1 + 0xc));
      local_34 = local_34 + 2;
      local_40 = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_004c9ad8(local_7c,param_1);
          piVar2 = local_7c;
          pRVar3 = &local_6c;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRVar3->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_004c8fe0(param_1,local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        local_34 = local_34 + -2;
        FUN_004a86dc(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_004c9b28(local_9c,param_1);
        piVar2 = local_9c;
        pRVar3 = &local_8c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_004c93c0(param_1,local_2c,&local_8c,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        local_34 = local_34 + -2;
        FUN_004a86dc(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_004c9b94(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = local_ac;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_004c9490(param_1,local_2c,local_ac,*(char *)((int)param_1 + 0x2e));
        local_bc[0] = 1;
        local_34 = local_34 + -2;
        FUN_004a86dc(local_2c,2);
        *in_FS_OFFSET = local_50;
        return local_bc[0];
      }
      FUN_004a86dc(local_2c,2);
    }
  }
  *in_FS_OFFSET = local_50;
  return 0;
}

