// name: FUN_004064dc
// address: 0x4064dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004064dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_9c;
  int local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  char local_35;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int *local_8;
  
  FUN_00467ba8(0x4754cc);
  local_b4 = param_3;
  local_b0 = param_4;
  local_ac = param_5;
  local_30 = *(int *)(param_2 + 0x24);
  if (local_30 != param_5) {
    FUN_00406154((int)&local_b4);
  }
  FUN_00406e78(&local_34,param_5);
  local_35 = '\0';
  local_3c = local_34 + 2;
  piVar2 = local_34;
  if (*local_3c == 0) {
    local_40 = local_34 + 3;
    if (*local_40 == 0) {
      piVar4 = (int *)local_34[1];
      local_44 = local_34;
      local_48 = local_34[1];
      if (*(int *)(param_2 + 0x24) == local_48) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == local_34) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      piVar4 = (int *)local_34[3];
    }
  }
  else {
    local_4c = local_34 + 3;
    if (*local_4c == 0) {
      piVar4 = (int *)local_34[2];
    }
    else {
      for (piVar2 = (int *)local_34[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      piVar4 = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != local_34)) {
    *(int **)(local_34[2] + 4) = piVar2;
    piVar2[2] = local_34[2];
    if (piVar2 == (int *)local_34[3]) {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = (int)piVar2;
      }
    }
    else {
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = piVar4;
      piVar2[3] = local_34[3];
      *(int **)(local_34[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(local_34[1] + 8) == local_34) {
      *(int **)(local_34[1] + 8) = piVar2;
    }
    else {
      *(int **)(local_34[1] + 0xc) = piVar2;
    }
    piVar2[1] = local_34[1];
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar2;
    }
    local_50 = local_34;
    local_58 = *piVar2;
    *piVar2 = *local_34;
    *local_34 = local_58;
    local_8c = local_34;
    local_54 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      piVar4[1] = piVar2[1];
      if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_34) {
        *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar4;
      }
      else if (*(int **)(local_34[1] + 8) == local_34) {
        *(int **)(local_34[1] + 8) = piVar4;
      }
      else {
        *(int **)(local_34[1] + 0xc) = piVar4;
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_34) {
        local_5c = local_34 + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_34[1];
        }
        else {
          uVar1 = FUN_00406e88((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_34) {
        local_60 = local_34 + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_34[1];
        }
        else {
          uVar1 = FUN_00406ea8((int)piVar4);
          *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((piVar4 != *(int **)(param_2 + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar4 != 1))
            goto LAB_00406d2e;
            if (piVar4 != *(int **)(piVar4[1] + 8)) break;
            piVar2 = *(int **)(piVar4[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *piVar4 = 0;
              piVar4 = (int *)piVar4[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)piVar4[1] = 0;
                iVar3 = piVar4[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(piVar4[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *piVar4 = 0;
                piVar4 = (int *)piVar4[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(piVar4[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)piVar4[1];
                    *(undefined4 *)piVar4[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = piVar4[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_00406d2e;
                }
                *piVar2 = 0;
                piVar4 = (int *)piVar4[1];
              }
            }
          }
          piVar2 = *(int **)(piVar4[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *piVar4 = 0;
          piVar4 = (int *)piVar4[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)piVar4[1] = 0;
          iVar3 = piVar4[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(piVar4[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *piVar4 = 0;
        piVar4 = (int *)piVar4[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      piVar4 = (int *)piVar4[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(piVar4[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)piVar4[1];
      *(undefined4 *)piVar4[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = piVar4[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_00406d2e:
    *piVar4 = 1;
  }
  local_8c[3] = *(int *)(param_2 + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    local_1c = 0x14;
    local_10 = local_10 + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        local_94 = (int *)(local_8c[6] + -0xc);
        if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else if (local_94 == &DAT_00485bcc) {
          iVar3 = 1;
        }
        else {
          *local_94 = *local_94 + -1;
          iVar3 = *local_94 + 1;
        }
        if (iVar3 != 0) goto LAB_00406e38;
      }
      local_98 = local_8c[6] + -0xc;
      local_9c = local_8c[6] + -0xc;
      local_8 = local_90;
      FUN_0045680c();
      local_8[2] = 0;
    }
  }
LAB_00406e38:
  *(int **)(param_2 + 0x18) = local_8c;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_b4;
  param_1[1] = local_b0;
  param_1[2] = local_ac;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

