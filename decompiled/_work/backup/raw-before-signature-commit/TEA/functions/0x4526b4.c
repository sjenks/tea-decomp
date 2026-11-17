// name: FUN_004526b4
// address: 0x4526b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004526b4(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  undefined4 local_180;
  undefined1 local_15c [8];
  uint *local_154;
  int local_14c;
  int local_148;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  undefined1 local_3c [8];
  uint *local_34;
  uint local_2c [2];
  uint *local_24;
  
  FUN_004dce64(0x4f8374);
  FUN_004c279c(local_2c,0x81a04,(uint *)s_Dictionary_File____tsd____tsd_Al_004f76b7,0,0x4f75e6,
               0x4f76e3,0x1000,0,0);
  puVar2 = FUN_0041238c(param_1[0xe],0);
  FUN_00412434((int)local_3c,(int)puVar2,0);
  FUN_004dcc40(local_24,local_34,(char *)0x104);
  piVar3 = FUN_004c2c5c(&local_14c,0,*param_1,(int)local_2c,0,0x4f76e5,0);
  iVar4 = (**(code **)(piVar3[3] + 0x14))();
  cVar8 = iVar4 == 1;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
  FUN_0048c668(&local_14c,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
  FUN_004a52c0(local_c4,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
  FUN_00489c54(local_cc,0);
  if (cVar8 != '\0') {
    pcVar5 = FUN_004dc9f4(local_24);
    if (pcVar5[(int)local_24 + 1] == '\0') {
      iVar4 = FUN_00464bb4(param_1[0xe],local_24);
      if (iVar4 != 0) {
        FUN_0041251c((int)puVar2,local_24);
      }
    }
    else {
      puVar6 = (uint *)((char *)((int)local_24 + (int)pcVar5) + 1);
      do {
        FUN_004cf628((int)local_15c,local_24);
        FUN_004d5c40((int)local_15c,local_154[-1],0,1,0x5c);
        uVar1 = local_154[-1];
        pcVar5 = FUN_004dc9f4(puVar6);
        FUN_004cfad4((int)local_15c,uVar1,0,(uint)puVar6,(uint)pcVar5,0,(uint)pcVar5);
        iVar4 = FUN_00464bb4(param_1[0xe],local_154);
        if (iVar4 != 0) {
          FUN_0041251c((int)puVar2,local_154);
        }
        pcVar5 = FUN_004dc9f4(puVar6);
        puVar6 = (uint *)((int)puVar6 + (int)(pcVar5 + 1));
        if (local_154 != (uint *)0x0) {
          if (local_154[-3] != 0xffffffff) {
            puVar7 = local_154 + -3;
            if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *puVar7 = *puVar7 - 1;
              iVar4 = *puVar7 + 1;
            }
            if (iVar4 != 0) goto LAB_00452a05;
          }
          FUN_004cc0bc();
          local_154 = (uint *)0x0;
        }
LAB_00452a05:
      } while ((char)*puVar6 != '\0');
    }
  }
  FUN_0045269c(param_1);
  if (local_34 != (uint *)0x0) {
    if (local_34[-3] != 0xffffffff) {
      puVar6 = local_34 + -3;
      if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *puVar6 = *puVar6 - 1;
        iVar4 = *puVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00452a9a;
    }
    FUN_004cc0bc();
    local_34 = (uint *)0x0;
  }
LAB_00452a9a:
  FUN_004c2888((int)local_2c,2);
  *in_FS_OFFSET = local_180;
  return;
}

