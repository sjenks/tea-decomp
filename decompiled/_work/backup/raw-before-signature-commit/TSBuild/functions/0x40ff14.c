// name: FUN_0040ff14
// address: 0x40ff14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040ff14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47629c);
  piVar2 = param_1;
  while (param_1 = piVar2, iVar1 = param_2 + -1, param_2 != 0) {
    piVar2 = param_1 + 0xe;
    param_2 = iVar1;
    if (param_1 != (int *)0x0) {
      param_1[4] = 0;
      param_1[9] = 0;
      param_1[10] = *(int *)(param_3 + 0x28);
      *(undefined1 *)(param_1 + 0xb) = 0;
      param_1[0xc] = *(int *)(param_3 + 0x30);
      param_1[0xd] = *(int *)(param_3 + 0x34);
      *param_1 = 1;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      puVar3 = (undefined4 *)param_1[6];
      if (param_1[6] == 0) {
        if (param_1[7] == param_1[8]) {
          FUN_00410330(param_1);
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
        else {
          puVar3 = (undefined4 *)param_1[7];
          param_1[7] = param_1[7] + 0x28;
        }
      }
      else {
        param_1[6] = *(int *)(param_1[6] + 0xc);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      param_1[9] = (int)puVar3;
      *param_1 = 0x2a;
      *(undefined4 *)param_1[9] = 0;
      puVar3 = FUN_00410104(param_1,*(undefined4 **)(*(int *)(param_3 + 0x24) + 4),
                            (undefined4 *)param_1[9]);
      *(undefined4 **)(param_1[9] + 4) = puVar3;
      if (*(int *)(param_1[9] + 4) == 0) {
        *(int *)(param_1[9] + 8) = param_1[9];
        *(int *)(param_1[9] + 0xc) = param_1[9];
      }
      else {
        uVar4 = FUN_00406e88(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 8) = uVar4;
        uVar4 = FUN_00406ea8(*(int *)(param_1[9] + 4));
        *(undefined4 *)(param_1[9] + 0xc) = uVar4;
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

