// name: FUN_0044a638
// address: 0x44a638
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044a638(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar3 = FUN_00448a24(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    iVar4 = FUN_0043c624(*(byte **)(param_5 + 8),*(int *)(*(int *)(param_5 + 8) + -4),
                         *(byte **)(param_4 + 0x18),*(int *)(*(int *)(param_4 + 0x18) + -4));
    if (iVar4 == 0) {
      uVar5 = FUN_004d40d0(param_5,0,*(uint *)(*(int *)(param_5 + 8) + -4),
                           *(byte **)(param_4 + 0x18),*(uint *)(*(int *)(param_4 + 0x18) + -4));
      if ((int)uVar5 < 0) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      bVar7 = iVar4 < 0;
    }
    if (!bVar7) {
      *(undefined4 **)(param_4 + 0xc) = puVar3;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar3;
      }
      goto LAB_0044a732;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar3;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar3;
    *(undefined4 **)(param_2[9] + 0xc) = puVar3;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar3;
  }
LAB_0044a732:
  puVar3[1] = param_4;
  puVar6 = puVar3;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar4 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar4 + 8) == puVar6[1]) {
      piVar1 = *(int **)(iVar4 + 0xc);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[3]) {
          iVar4 = puVar2[3];
          puVar2[3] = *(undefined4 *)(iVar4 + 8);
          if (*(int *)(iVar4 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          *(undefined4 **)(iVar4 + 8) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[2];
        puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        *(undefined4 **)(iVar4 + 0xc) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[2]) {
          iVar4 = puVar2[2];
          puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
          if (*(int *)(iVar4 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          *(undefined4 **)(iVar4 + 0xc) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[3];
        puVar2[3] = *(undefined4 *)(iVar4 + 8);
        if (*(int *)(iVar4 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        *(undefined4 **)(iVar4 + 8) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar3;
  return param_1;
}

