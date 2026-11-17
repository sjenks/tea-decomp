// name: FUN_004374fc
// address: 0x4374fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004374fc(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  uint *local_240;
  undefined4 local_1b4;
  undefined1 local_18c [8];
  uint *local_184;
  undefined1 local_17c [8];
  uint *local_174;
  undefined1 local_16c [8];
  int local_164;
  int local_154;
  int local_144;
  int local_134;
  int local_124;
  int local_114;
  
  FUN_00455f04(0x46c96c);
  FUN_004409f4((int)local_16c,param_1,'\0');
  bVar1 = FUN_00440ce8((int)local_16c,8);
  if (!bVar1) {
    uVar7 = 0;
    if (local_114 != 0) {
      if (*(int *)(local_114 + -0xc) != -1) {
        piVar6 = (int *)(local_114 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004375e9;
      }
      FUN_0044b2cc();
      local_114 = 0;
    }
LAB_004375e9:
    if (local_124 != 0) {
      if (*(int *)(local_124 + -0xc) != -1) {
        piVar6 = (int *)(local_124 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00437690;
      }
      FUN_0044b2cc();
      local_124 = 0;
    }
LAB_00437690:
    if (local_134 != 0) {
      if (*(int *)(local_134 + -0xc) != -1) {
        piVar6 = (int *)(local_134 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00437737;
      }
      FUN_0044b2cc();
      local_134 = 0;
    }
LAB_00437737:
    if (local_144 != 0) {
      if (*(int *)(local_144 + -0xc) != -1) {
        piVar6 = (int *)(local_144 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004377de;
      }
      FUN_0044b2cc();
      local_144 = 0;
    }
LAB_004377de:
    if (local_154 != 0) {
      if (*(int *)(local_154 + -0xc) != -1) {
        piVar6 = (int *)(local_154 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00437885;
      }
      FUN_0044b2cc();
      local_154 = 0;
    }
LAB_00437885:
    if (local_164 != 0) {
      if (*(int *)(local_164 + -0xc) != -1) {
        piVar6 = (int *)(local_164 + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00437929;
      }
      FUN_0044b2cc();
    }
LAB_00437929:
    *in_FS_OFFSET = local_1b4;
    return uVar7;
  }
  puVar3 = (uint *)FUN_00440b74((int)local_16c,8);
  FUN_0044d11c((int)local_17c,puVar3);
  puVar3 = (uint *)FUN_00440b74((int)local_16c,0x10);
  FUN_0044d11c((int)local_18c,puVar3);
  puVar3 = local_174;
  bVar1 = FUN_00440ce8((int)local_16c,0x10);
  local_240 = local_184;
  if (!bVar1) {
    local_240 = (uint *)&DAT_0046c39e;
  }
  if ((char)*local_240 == '.') {
    local_240 = (uint *)((int)local_240 + 1);
  }
  puVar4 = (uint *)FUN_0041fd2c(param_2);
  puVar5 = thunk_FUN_00455e2c(puVar4,'.');
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)&DAT_0046c39e;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar7 = FUN_004360e6(puVar3,puVar4);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_004360e6(local_240,puVar5), (char)uVar7 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_0044b2dc();
  if (local_184 != (uint *)0x0) {
    if (local_184[-3] != 0xffffffff) {
      puVar3 = local_184 + -3;
      if (puVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00437b4d;
    }
    FUN_0044b2cc();
    local_184 = (uint *)0x0;
  }
LAB_00437b4d:
  if (local_174 != (uint *)0x0) {
    if (local_174[-3] != 0xffffffff) {
      puVar3 = local_174 + -3;
      if (puVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00437c09;
    }
    FUN_0044b2cc();
    local_174 = (uint *)0x0;
  }
LAB_00437c09:
  if (local_114 != 0) {
    if (*(int *)(local_114 + -0xc) != -1) {
      piVar6 = (int *)(local_114 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437cb6;
    }
    FUN_0044b2cc();
    local_114 = 0;
  }
LAB_00437cb6:
  if (local_124 != 0) {
    if (*(int *)(local_124 + -0xc) != -1) {
      piVar6 = (int *)(local_124 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437d5d;
    }
    FUN_0044b2cc();
    local_124 = 0;
  }
LAB_00437d5d:
  if (local_134 != 0) {
    if (*(int *)(local_134 + -0xc) != -1) {
      piVar6 = (int *)(local_134 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437e04;
    }
    FUN_0044b2cc();
    local_134 = 0;
  }
LAB_00437e04:
  if (local_144 != 0) {
    if (*(int *)(local_144 + -0xc) != -1) {
      piVar6 = (int *)(local_144 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437eab;
    }
    FUN_0044b2cc();
    local_144 = 0;
  }
LAB_00437eab:
  if (local_154 != 0) {
    if (*(int *)(local_154 + -0xc) != -1) {
      piVar6 = (int *)(local_154 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437f52;
    }
    FUN_0044b2cc();
    local_154 = 0;
  }
LAB_00437f52:
  if (local_164 != 0) {
    if (*(int *)(local_164 + -0xc) != -1) {
      piVar6 = (int *)(local_164 + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00437ff6;
    }
    FUN_0044b2cc();
  }
LAB_00437ff6:
  *in_FS_OFFSET = local_1b4;
  return uVar7;
}

