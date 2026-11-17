// name: FUN_0043fe14
// address: 0x43fe14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043fe14(int param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  uint uVar7;
  uint *local_ec;
  undefined4 in_stack_ffffff18;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x46e55c);
  puVar1 = (uint *)FUN_0043fd34((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_0044cf10(param_1,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x10,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x20,(uint *)&DAT_0046e4b2);
    FUN_00440b04(param_1);
    *in_FS_OFFSET = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_0043fdf0((char *)param_2,(char *)puVar1,&DAT_0046e4a4);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_0044cf10(param_1,(uint *)&DAT_0046e4b2);
    puVar2 = (uint *)FUN_0043fd44((char *)param_2,(char *)puVar1,(int)DAT_0046e4a7);
    if (puVar2 == puVar1) {
      FUN_0044cf10(param_1 + 0x10,(uint *)&DAT_0046e4b2);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      FUN_0044d11c((int)local_54,param_2);
      iVar4 = FUN_0044f8a4((int)local_64,(int)local_54,uVar7,uVar5);
      FUN_0044ce78(param_1 + 0x10,iVar4);
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar6 = (int *)(local_5c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_00440322;
        }
        FUN_0044b2cc();
        local_5c = 0;
      }
LAB_00440322:
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          piVar6 = (int *)(local_4c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004403b7;
        }
        FUN_0044b2cc();
        local_4c = 0;
      }
LAB_004403b7:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x164) = 1;
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    FUN_0044d11c((int)local_14,puVar2);
    iVar4 = FUN_0044f8a4((int)local_24,(int)local_14,uVar7,uVar5);
    FUN_0044ce78(param_1,iVar4);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0043ffcb;
      }
      FUN_0044b2cc();
      local_1c = 0;
    }
LAB_0043ffcb:
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00440060;
      }
      FUN_0044b2cc();
      local_c = 0;
    }
LAB_00440060:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    FUN_0044d11c((int)local_34,puVar2);
    iVar4 = FUN_0044f8a4((int)local_44,(int)local_34,uVar7,uVar5);
    FUN_0044ce78(param_1 + 0x10,iVar4);
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar6 = (int *)(local_3c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00440162;
      }
      FUN_0044b2cc();
      local_3c = 0;
    }
LAB_00440162:
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004401f7;
      }
      FUN_0044b2cc();
      local_2c = 0;
    }
LAB_004401f7:
    param_2 = (uint *)(pcVar3 + 1);
  }
  if (param_3 == '\0') {
    local_ec = (uint *)FUN_0043fd9a((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                    (int)DAT_0046e4af);
    puVar2 = (uint *)FUN_0043fdb8((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                  (uint *)&DAT_0046e4aa);
    if (puVar2 < local_ec) {
      uVar5 = (int)puVar1 - (int)local_ec;
      uVar7 = 0;
      FUN_0044d11c((int)local_74,local_ec);
      iVar4 = FUN_0044f8a4((int)local_84,(int)local_74,uVar7,uVar5);
      FUN_0044ce78(param_1 + 0x40,iVar4);
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          piVar6 = (int *)(local_7c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_00440529;
        }
        FUN_0044b2cc();
        local_7c = 0;
      }
LAB_00440529:
      if (local_6c != 0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          piVar6 = (int *)(local_6c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004405f3;
        }
        FUN_0044b2cc();
        local_6c = 0;
      }
    }
    else {
      FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
      local_ec = puVar1;
    }
LAB_004405f3:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    FUN_0044d11c((int)local_94,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_0044f8a4((int)local_a4,(int)local_94,uVar7,uVar5);
    FUN_0044ce78(param_1 + 0x30,iVar4);
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar6 = (int *)(local_9c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044070c;
      }
      FUN_0044b2cc();
      local_9c = 0;
    }
LAB_0044070c:
    local_ec = puVar2;
    if (local_8c != 0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar6 = (int *)(local_8c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004407e6;
      }
      FUN_0044b2cc();
      local_8c = 0;
    }
  }
  else {
    FUN_0044cf10(param_1 + 0x30,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
    local_ec = puVar1;
  }
LAB_004407e6:
  if (local_ec <= param_2) {
    FUN_0044cf10(param_1 + 0x20,(uint *)&DAT_0046e4b2);
    goto LAB_004409ba;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  FUN_0044d11c((int)local_b4,param_2);
  iVar4 = FUN_0044f8a4((int)local_c4,(int)local_b4,uVar7,uVar5);
  FUN_0044ce78(param_1 + 0x20,iVar4);
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      piVar6 = (int *)(local_bc + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004408fd;
    }
    FUN_0044b2cc();
    local_bc = 0;
  }
LAB_004408fd:
  if (local_ac != 0) {
    if (*(int *)(local_ac + -0xc) != -1) {
      piVar6 = (int *)(local_ac + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004409ba;
    }
    FUN_0044b2cc();
    local_ac = 0;
  }
LAB_004409ba:
  FUN_00440b04(param_1);
  *in_FS_OFFSET = in_stack_ffffff18;
  return in_stack_ffffff18;
}

