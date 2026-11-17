// name: FUN_00495468
// address: 0x495468
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00495468(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  FUN_004dce64(0x5075a0);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00495e60(piVar1);
  }
  if ((param_4 == 0) && ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
    local_34 = param_2 + 0x43;
  }
  else if ((param_4 == 1) && ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
    local_34 = param_2 + 0x4c;
  }
  else {
    local_34 = param_4 * 9 + param_2 + 0x31;
  }
  if (((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 5) ||
     ((*(byte *)((int)param_3 + 5) & 0xf) == 0)) goto LAB_004955ef;
  if (*param_3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    iVar2 = FUN_004952f8((int)param_1,*param_3);
    if (iVar2 == 0) {
      FUN_004cc0bc();
      FUN_004a857c(*param_1,0x7fe4);
    }
    iVar2 = iVar2 + 0x31;
  }
  uVar4 = *(byte *)((int)param_3 + 6) & 0xf;
  if (uVar4 < 4) {
    *piVar1 = iVar2 + (*(byte *)((int)param_3 + 6) & 0xf) * 9;
    goto LAB_004955ef;
  }
  if (uVar4 != 4) {
    if (uVar4 - 5 < 2) {
      *piVar1 = ((*(byte *)((int)param_3 + 6) & 0xf) - 3) * 9 + iVar2;
      piVar1[1] = iVar2 + ((*(byte *)((int)param_3 + 6) & 0xf) - 5) * 9;
      piVar1[5] = -0x10000;
      piVar1[7] = 0x10000;
    }
    goto LAB_004955ef;
  }
  if (param_4 == 0) {
LAB_004955c8:
    *piVar1 = iVar2;
    piVar1[1] = iVar2 + 0x12;
  }
  else if (param_4 == 1) {
LAB_004955d2:
    *piVar1 = iVar2 + 9;
    piVar1[1] = iVar2 + 0x1b;
  }
  else {
    if (param_4 == 2) goto LAB_004955c8;
    if (param_4 == 3) goto LAB_004955d2;
  }
  piVar1[5] = 0x8000;
  piVar1[4] = 0x8000;
LAB_004955ef:
  iVar2 = (int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c;
  if (iVar2 == 0) {
    if (param_4 == 2) {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x28);
    }
    else {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x2c);
    }
    piVar1[7] = piVar1[7] + *piVar5 * 0x10000;
  }
  else if (iVar2 == 1) {
    iVar2 = (*(int *)((int)param_3 + 7) << 0x10) / 100 >> 8;
    piVar1[4] = (piVar1[4] >> 8) * iVar2;
    piVar1[7] = (piVar1[7] >> 8) * iVar2;
    if ((*(byte *)((int)param_3 + 6) & 0xf) - 4 < 3) {
      piVar1[5] = (piVar1[5] >> 8) * iVar2;
    }
  }
  else if (iVar2 - 2U < 4) {
    if ((*(byte *)((int)param_3 + 5) & 0xf0) == 0) {
      iVar2 = *(int *)((int)param_3 + 7);
    }
    else {
      iVar2 = FUN_00495b64((int)param_1,*(int *)((int)param_3 + 7));
    }
    if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 2) {
      iVar2 = -1 - iVar2;
    }
    else if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 3) {
      iVar2 = iVar2 + 1;
    }
    piVar1[7] = piVar1[7] + iVar2 * 0x10000;
  }
  if (*piVar1 == 0) {
    local_30 = 0;
  }
  else if (piVar1[1] == 0) {
    local_30 = 1;
  }
  else {
    local_30 = 2;
  }
  bVar3 = *(byte *)(param_3 + 1) & 0xf;
  if (bVar3 == 4) {
    iVar2 = param_2 + 0x31;
    if (param_4 == 0) {
      iVar2 = param_2 + 0x43;
    }
    else if (param_4 == 1) {
      iVar2 = param_2 + 0x4c;
    }
    else if (param_4 == 2) {
      if ((*(byte *)(param_2 + 9) & 0xf) == 2) {
        iVar2 = param_2 + 0x43;
        local_34 = param_2 + 0x31;
      }
    }
    else if (param_4 == 3) {
      if ((*(byte *)(param_2 + 0x14) & 0xf) == 3) {
        iVar2 = param_2 + 0x4c;
        local_34 = param_2 + 0x31;
      }
      else {
        iVar2 = param_2 + 0x3a;
      }
    }
    piVar1[local_30] = iVar2;
    iVar2 = 0;
    if (local_30 != 0) {
      do {
        piVar1[iVar2 + 4] = piVar1[iVar2 + 4] << 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_30);
    }
    piVar1[7] = piVar1[7] << 1;
    piVar1[local_30 + 4] = -0x10000;
  }
  else if (bVar3 == 5) {
    if ((param_4 == 0) || ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x43;
      if (param_4 == 2) {
        local_34 = param_2 + 0x31;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x31;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0049473d(*(int *)(param_2 + 0x35),local_34,(int)piVar1);
    }
  }
  else if (bVar3 == 6) {
    if ((param_4 == 1) || ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x4c;
      if (param_4 == 3) {
        local_34 = param_2 + 0x3a;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x3a;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0049473d(*(int *)(param_2 + 0x3e),local_34,(int)piVar1);
    }
  }
  *(int **)(local_34 + 4) = piVar1;
  piVar1[3] = local_34;
  piVar1[8] = param_1[7];
  param_1[7] = (int)piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

