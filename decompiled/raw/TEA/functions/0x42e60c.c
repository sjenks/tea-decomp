// name: FUN_0042e60c
// address: 0x42e60c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042e60c(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar4 = FUN_0042e908(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    uVar5 = FUN_00430548(param_2 + 0xc,*param_5,*(int *)(param_4 + 0x10));
    if ((char)uVar5 == '\0') {
      *(undefined4 **)(param_4 + 0xc) = puVar4;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar4;
      }
      goto LAB_0042e6c0;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar4;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar4;
    *(undefined4 **)(param_2[9] + 0xc) = puVar4;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar4;
  }
LAB_0042e6c0:
  puVar4[1] = param_4;
  puVar6 = puVar4;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar4;
  return param_1;
}

