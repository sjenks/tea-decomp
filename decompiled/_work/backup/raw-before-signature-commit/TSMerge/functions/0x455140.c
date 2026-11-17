// name: FUN_00455140
// address: 0x455140
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00455140(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  uint *puVar5;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  FUN_00455f04(0x473e10);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_004775cc;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_004775d0;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      FUN_0045ed74((uint *)&DAT_0042f564,local_3c,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_0045474c(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        local_24 = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_004775d4 == 0) {
          FUN_00454940();
        }
        local_8[1] = local_8[1] + 1;
        local_18 = local_18 + 1;
        FUN_004552e0((int *)&local_8,piVar4,puVar5);
        local_18 = local_18 + -1;
        local_8[1] = local_8[1] + -1;
        if ((local_8[1] == 0) && (local_10 = local_8, local_8 != (undefined4 *)0x0)) {
          local_c = *local_8;
          local_24 = 0x20;
          (**(code **)*local_8)();
          local_24 = 0x14;
        }
      }
    }
  }
  FUN_004552e0(param_1,piVar3,param_2);
  *in_FS_OFFSET = local_34;
  return piVar3;
}

