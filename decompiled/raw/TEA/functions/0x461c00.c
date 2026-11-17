// name: FUN_00461c00
// address: 0x461c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00461c00(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint *puVar5;
  undefined4 local_c8;
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
  
  FUN_004dce64(0x4faffc);
  iVar3 = 0;
  if (param_3 < 0x3337) {
    if (param_3 == 0x3336) {
      iVar3 = 1;
    }
    else {
      if (param_3 < 0x1555) {
        if (param_3 == 0x1554) {
          iVar3 = 1;
LAB_00461efc:
          iVar3 = iVar3 + 1;
LAB_00461efd:
          iVar3 = iVar3 + 1;
        }
        else {
          if (param_3 < 0x152d) {
            if (param_3 == 0x152c) {
              iVar3 = 1;
LAB_00461e38:
              iVar3 = iVar3 + 1;
LAB_00461e39:
              iVar3 = iVar3 + 1;
            }
            else if (param_3 != 0x150e) {
              if (param_3 != 0x1518) {
                if (param_3 != 0x1522) goto LAB_004625dd;
                goto LAB_00461e38;
              }
              goto LAB_00461e39;
            }
            piVar4 = *(int **)(param_1 + 0x74 + iVar3 * 4);
            FUN_0041b2b0((int)local_24,piVar4 + 99);
            FUN_004cf384(*piVar4 + 0x18,(int)local_24);
            if (local_1c != 0) {
              if (*(int *)(local_1c + -0xc) != -1) {
                piVar4 = (int *)(local_1c + -0xc);
                if (piVar4 == &DAT_00513d58) {
                  iVar3 = 1;
                }
                else if (piVar4 == &DAT_00513d58) {
                  iVar3 = 1;
                }
                else {
                  *piVar4 = *piVar4 + -1;
                  iVar3 = *piVar4 + 1;
                }
                if (iVar3 != 0) goto LAB_004625dd;
              }
              FUN_004cc0bc();
            }
            goto LAB_004625dd;
          }
          if (param_3 != 0x1536) {
            if (param_3 != 0x1540) {
              if (param_3 != 0x154a) goto LAB_004625dd;
              goto LAB_00461efc;
            }
            goto LAB_00461efd;
          }
        }
        piVar4 = *(int **)(param_1 + 0x74 + iVar3 * 4);
        FUN_0041b2b0((int)local_34,piVar4 + 0x92);
        FUN_004cf384(*piVar4 + 0x28,(int)local_34);
        if (local_2c != 0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar4 = (int *)(local_2c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          FUN_004cc0bc();
        }
        goto LAB_004625dd;
      }
      if (param_3 < 0x15b9) {
        if (param_3 == 0x15b8) {
          iVar3 = 1;
LAB_00462178:
          piVar4 = *(int **)(param_1 + 0x84 + iVar3 * 4);
          FUN_0041b2b0((int)local_64,piVar4 + 0x92);
          FUN_004cf384(*piVar4 + 0x28,(int)local_64);
          if (local_5c != 0) {
            if (*(int *)(local_5c + -0xc) != -1) {
              piVar4 = (int *)(local_5c + -0xc);
              if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar4 = *piVar4 + -1;
                iVar3 = *piVar4 + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            FUN_004cc0bc();
          }
        }
        else {
          if (param_3 != 0x1586) {
            if (param_3 != 0x1590) {
              if (param_3 != 0x15ae) goto LAB_004625dd;
              goto LAB_00462178;
            }
            iVar3 = 1;
          }
          piVar4 = *(int **)(param_1 + 0x84 + iVar3 * 4);
          FUN_0041b2b0((int)local_54,piVar4 + 99);
          FUN_004cf384(*piVar4 + 0x18,(int)local_54);
          if (local_4c != 0) {
            if (*(int *)(local_4c + -0xc) != -1) {
              piVar4 = (int *)(local_4c + -0xc);
              if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar4 = *piVar4 + -1;
                iVar3 = *piVar4 + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            FUN_004cc0bc();
          }
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x15d6) {
        FUN_0041b2b0((int)local_a4,(int *)(param_1 + 0x170));
        FUN_004cf384(*(int *)(param_1 + 0x60) + 0x10,(int)local_a4);
        if (local_9c != 0) {
          if (*(int *)(local_9c + -0xc) != -1) {
            piVar4 = (int *)(local_9c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          FUN_004cc0bc();
        }
        goto LAB_004625dd;
      }
      if (param_3 != 0x332c) goto LAB_004625dd;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x94 + iVar3 * 4);
    piVar4 = puVar1 + 2;
    puVar5 = (uint *)*puVar1;
    FUN_0041b2b0((int)local_74,puVar1 + 0x34);
    FUN_00461484(param_1,(int)local_74,puVar5,piVar4);
    if (local_6c != 0) {
      if (*(int *)(local_6c + -0xc) != -1) {
        piVar4 = (int *)(local_6c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_004625dd;
      }
      FUN_004cc0bc();
    }
    goto LAB_004625dd;
  }
  if (param_3 < 0x33a5) {
    if (param_3 != 0x33a4) {
      if (0x3372 < param_3) {
        if (param_3 != 0x337c) {
          if (param_3 != 0x3386) {
            if (param_3 != 0x339a) goto LAB_004625dd;
            goto LAB_00462332;
          }
          iVar3 = 1;
        }
        puVar1 = *(undefined4 **)(param_1 + 0x84 + iVar3 * 4);
        piVar4 = puVar1 + 2;
        puVar5 = (uint *)*puVar1;
        FUN_0041b2b0((int)local_44,puVar1 + 0x34);
        FUN_00461484(param_1,(int)local_44,puVar5,piVar4);
        if (local_3c != 0) {
          if (*(int *)(local_3c + -0xc) != -1) {
            piVar4 = (int *)(local_3c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          FUN_004cc0bc();
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x3372) {
        iVar3 = 1;
LAB_00461d72:
        iVar3 = iVar3 + 1;
LAB_00461d73:
        iVar3 = iVar3 + 1;
      }
      else if (param_3 != 0x3354) {
        if (param_3 != 0x335e) {
          if (param_3 != 0x3368) goto LAB_004625dd;
          goto LAB_00461d72;
        }
        goto LAB_00461d73;
      }
      puVar1 = *(undefined4 **)(param_1 + 0x74 + iVar3 * 4);
      piVar4 = puVar1 + 2;
      puVar5 = (uint *)*puVar1;
      FUN_0041b2b0((int)local_14,puVar1 + 0x34);
      FUN_00461484(param_1,(int)local_14,puVar5,piVar4);
      if (local_c != 0) {
        if (*(int *)(local_c + -0xc) != -1) {
          piVar4 = (int *)(local_c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar3 = *piVar4 + 1;
          }
          if (iVar3 != 0) goto LAB_004625dd;
        }
        FUN_004cc0bc();
      }
      goto LAB_004625dd;
    }
  }
  else {
    if (param_3 < 0x33e1) {
      if (param_3 == 0x33e0) goto LAB_00462403;
      if (param_3 == 0x33b8) goto LAB_00462331;
      if (param_3 != 0x33c2) {
        if (param_3 != 0x33d6) goto LAB_004625dd;
        goto LAB_00462330;
      }
    }
    else {
      if (param_3 == 0x33fe) {
        iVar3 = 1;
LAB_00462330:
        iVar3 = iVar3 + 1;
LAB_00462331:
        iVar3 = iVar3 + 1;
LAB_00462332:
        puVar1 = *(undefined4 **)(param_1 + 100 + iVar3 * 4);
        piVar4 = puVar1 + 2;
        puVar5 = (uint *)*puVar1;
        FUN_0041b2b0((int)local_84,puVar1 + 0x34);
        FUN_00461484(param_1,(int)local_84,puVar5,piVar4);
        if (local_7c != 0) {
          if (*(int *)(local_7c + -0xc) != -1) {
            piVar4 = (int *)(local_7c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_00462402;
          }
          FUN_004cc0bc();
          local_7c = 0;
        }
      }
      else if (param_3 != 0x3408) goto LAB_004625dd;
LAB_00462402:
      iVar3 = iVar3 + 1;
LAB_00462403:
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 1;
  }
  piVar4 = *(int **)(param_1 + 100 + iVar3 * 4);
  FUN_0041b2b0((int)local_94,piVar4 + 99);
  FUN_004cf384(*piVar4 + 0x18,(int)local_94);
  if (local_8c != 0) {
    if (*(int *)(local_8c + -0xc) != -1) {
      piVar4 = (int *)(local_8c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004625dd;
    }
    FUN_004cc0bc();
  }
LAB_004625dd:
  *in_FS_OFFSET = local_c8;
  return;
}

