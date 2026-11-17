// name: FUN_0042a5d0
// address: 0x42a5d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0042a5d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int *local_5c;
  int *local_58;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  char local_31;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2764);
  local_9c = param_3;
  local_98 = param_4;
  local_94 = param_5;
  local_2c = *(int *)(param_2 + 0x24);
  if (local_2c != param_5) {
    FUN_0042aec0((int)&local_9c);
  }
  FUN_0042ae70(&local_30,param_5);
  local_31 = '\0';
  local_38 = local_30 + 2;
  piVar6 = local_30;
  if (*local_38 == 0) {
    local_3c = local_30 + 3;
    if (*local_3c == 0) {
      piVar5 = (int *)local_30[1];
      local_40 = local_30;
      local_44 = local_30[1];
      if (*(int *)(param_2 + 0x24) == local_44) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_44;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_44;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_44 + 8) == local_30) {
        *(undefined4 *)(local_44 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_30) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_44;
        }
      }
      else {
        *(undefined4 *)(local_44 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_30) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_44;
        }
      }
      local_31 = '\x01';
    }
    else {
      piVar5 = (int *)local_30[3];
    }
  }
  else {
    local_48 = local_30 + 3;
    if (*local_48 == 0) {
      piVar5 = (int *)local_30[2];
    }
    else {
      for (piVar6 = (int *)local_30[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      piVar5 = (int *)piVar6[3];
    }
  }
  if ((local_31 == '\0') && (piVar6 != local_30)) {
    *(int **)(local_30[2] + 4) = piVar6;
    piVar6[2] = local_30[2];
    if (piVar6 == (int *)local_30[3]) {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = piVar5;
      piVar6[3] = local_30[3];
      *(int **)(local_30[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_30) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(local_30[1] + 8) == local_30) {
      *(int **)(local_30[1] + 8) = piVar6;
    }
    else {
      *(int **)(local_30[1] + 0xc) = piVar6;
    }
    piVar6[1] = local_30[1];
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *local_30;
    *local_30 = iVar1;
    piVar6 = local_30;
  }
  else if (local_31 == '\0') {
    piVar5[1] = piVar6[1];
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_30) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar5;
    }
    else if (*(int **)(local_30[1] + 8) == local_30) {
      *(int **)(local_30[1] + 8) = piVar5;
    }
    else {
      *(int **)(local_30[1] + 0xc) = piVar5;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_30) {
      local_58 = local_30 + 3;
      if (*local_58 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_30[1];
      }
      else {
        uVar3 = FUN_0042ae80((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_30) {
      local_5c = local_30 + 2;
      if (*local_5c == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_30[1];
      }
      else {
        uVar3 = FUN_0042aea0((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((piVar5 != *(int **)(param_2 + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar5 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar5 != 1))
            goto LAB_0042ae04;
            if (piVar5 != *(int **)(piVar5[1] + 8)) break;
            piVar4 = *(int **)(piVar5[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *piVar5 = 0;
              piVar5 = (int *)piVar5[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)piVar5[1] = 0;
                iVar1 = piVar5[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(piVar5[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *piVar5 = 0;
                piVar5 = (int *)piVar5[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(piVar5[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)piVar5[1];
                    *(undefined4 *)piVar5[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = piVar5[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042ae04;
                }
                *piVar4 = 0;
                piVar5 = (int *)piVar5[1];
              }
            }
          }
          piVar4 = *(int **)(piVar5[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *piVar5 = 0;
          piVar5 = (int *)piVar5[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)piVar5[1] = 0;
          iVar1 = piVar5[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(piVar5[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *piVar5 = 0;
        piVar5 = (int *)piVar5[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      piVar5 = (int *)piVar5[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(piVar5[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)piVar5[1];
      *(undefined4 *)piVar5[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = piVar5[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042ae04:
    *piVar5 = 1;
  }
  piVar6[3] = *(int *)(param_2 + 0x18);
  *(int **)(param_2 + 0x18) = piVar6;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_9c;
  param_1[1] = local_98;
  param_1[2] = local_94;
  *in_FS_OFFSET = local_28;
  return param_1;
}

