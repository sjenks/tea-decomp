// name: FUN_00442690
// address: 0x442690
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00442690(uint *param_1,uint *param_2)

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
  
  FUN_00467ba8(0x480748);
  FUN_0044bb88((int)local_16c,param_1,'\0');
  bVar1 = FUN_0044be7c((int)local_16c,8);
  if (!bVar1) {
    uVar7 = 0;
    if (local_114 != 0) {
      if (*(int *)(local_114 + -0xc) != -1) {
        piVar6 = (int *)(local_114 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0044277d;
      }
      FUN_0045680c();
      local_114 = 0;
    }
LAB_0044277d:
    if (local_124 != 0) {
      if (*(int *)(local_124 + -0xc) != -1) {
        piVar6 = (int *)(local_124 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00442824;
      }
      FUN_0045680c();
      local_124 = 0;
    }
LAB_00442824:
    if (local_134 != 0) {
      if (*(int *)(local_134 + -0xc) != -1) {
        piVar6 = (int *)(local_134 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004428cb;
      }
      FUN_0045680c();
      local_134 = 0;
    }
LAB_004428cb:
    if (local_144 != 0) {
      if (*(int *)(local_144 + -0xc) != -1) {
        piVar6 = (int *)(local_144 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00442972;
      }
      FUN_0045680c();
      local_144 = 0;
    }
LAB_00442972:
    if (local_154 != 0) {
      if (*(int *)(local_154 + -0xc) != -1) {
        piVar6 = (int *)(local_154 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00442a19;
      }
      FUN_0045680c();
      local_154 = 0;
    }
LAB_00442a19:
    if (local_164 != 0) {
      if (*(int *)(local_164 + -0xc) != -1) {
        piVar6 = (int *)(local_164 + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_00442abd;
      }
      FUN_0045680c();
    }
LAB_00442abd:
    *in_FS_OFFSET = local_1b4;
    return uVar7;
  }
  puVar3 = (uint *)FUN_0044bd08((int)local_16c,8);
  FUN_00459d78((int)local_17c,puVar3);
  puVar3 = (uint *)FUN_0044bd08((int)local_16c,0x10);
  FUN_00459d78((int)local_18c,puVar3);
  puVar3 = local_174;
  bVar1 = FUN_0044be7c((int)local_16c,0x10);
  local_240 = local_184;
  if (!bVar1) {
    local_240 = (uint *)&DAT_0048017a;
  }
  if ((char)*local_240 == '.') {
    local_240 = (uint *)((int)local_240 + 1);
  }
  puVar4 = (uint *)FUN_0042aea0(param_2);
  puVar5 = thunk_FUN_00467a68(puVar4,'.');
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)&DAT_0048017a;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar7 = FUN_0044127a(puVar3,puVar4);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_0044127a(local_240,puVar5), (char)uVar7 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_0045681c();
  if (local_184 != (uint *)0x0) {
    if (local_184[-3] != 0xffffffff) {
      puVar3 = local_184 + -3;
      if (puVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00442ce1;
    }
    FUN_0045680c();
    local_184 = (uint *)0x0;
  }
LAB_00442ce1:
  if (local_174 != (uint *)0x0) {
    if (local_174[-3] != 0xffffffff) {
      puVar3 = local_174 + -3;
      if (puVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00442d9d;
    }
    FUN_0045680c();
    local_174 = (uint *)0x0;
  }
LAB_00442d9d:
  if (local_114 != 0) {
    if (*(int *)(local_114 + -0xc) != -1) {
      piVar6 = (int *)(local_114 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00442e4a;
    }
    FUN_0045680c();
    local_114 = 0;
  }
LAB_00442e4a:
  if (local_124 != 0) {
    if (*(int *)(local_124 + -0xc) != -1) {
      piVar6 = (int *)(local_124 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00442ef1;
    }
    FUN_0045680c();
    local_124 = 0;
  }
LAB_00442ef1:
  if (local_134 != 0) {
    if (*(int *)(local_134 + -0xc) != -1) {
      piVar6 = (int *)(local_134 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_00442f98;
    }
    FUN_0045680c();
    local_134 = 0;
  }
LAB_00442f98:
  if (local_144 != 0) {
    if (*(int *)(local_144 + -0xc) != -1) {
      piVar6 = (int *)(local_144 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0044303f;
    }
    FUN_0045680c();
    local_144 = 0;
  }
LAB_0044303f:
  if (local_154 != 0) {
    if (*(int *)(local_154 + -0xc) != -1) {
      piVar6 = (int *)(local_154 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004430e6;
    }
    FUN_0045680c();
    local_154 = 0;
  }
LAB_004430e6:
  if (local_164 != 0) {
    if (*(int *)(local_164 + -0xc) != -1) {
      piVar6 = (int *)(local_164 + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0044318a;
    }
    FUN_0045680c();
  }
LAB_0044318a:
  *in_FS_OFFSET = local_1b4;
  return uVar7;
}

