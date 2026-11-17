// name: FUN_004c3390
// address: 0x4c3390
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004c3390(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  FUN_004dce64(0x510c1c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x122;
    *(int *)((int)param_1 + 0x122) = (int)param_1 + 0x116;
    *(int *)((int)param_1 + 0x126) = (int)param_1 + 0x11a;
    param_1[1] = (int)param_1 + 0x116;
    param_1[2] = (int)param_1 + 0x11a;
    *(undefined4 *)((int)param_1 + 0x112) = 0;
    *(undefined4 *)((int)param_1 + 0x11e) = 0;
    *(undefined ***)((int)param_1 + 0x116) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x11a) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x122),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xf6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xf6;
  FUN_0048c514(param_1,1,param_3,param_7,param_8);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xf6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xf6;
  param_1[3] = (int)&PTR_FUN_00510c90;
  *(undefined ***)param_1[1] = &PTR_LAB_00510cd4;
  *(undefined ***)param_1[2] = &PTR_LAB_00510ce0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00510cec;
  *(undefined4 *)((int)param_1 + 0x10e) = param_4;
  FUN_004dc844(param_1 + 7,0,0x42);
  param_1[7] = 0x42;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = **(uint **)((int)param_1 + 0x10e) | 0x3000;
  param_1[0xc] = param_1[0xc] & 0xfffffbff;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffbfff;
  }
  else {
    *(int *)((int)param_1 + 0x4e) = param_5;
    param_1[0xc] = param_1[0xc] | 0x4000;
  }
  if (param_6 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffff7fff;
  }
  else {
    *(int *)((int)param_1 + 0x52) = param_6;
    param_1[0xc] = param_1[0xc] | 0x8000;
  }
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 8);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0xc);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x10);
  *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x14);
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x18);
  FUN_004dc844((undefined4 *)((int)param_1 + 0x5e),0,0x54);
  *(undefined4 *)((int)param_1 + 0x5e) = 0x54;
  if (*(int *)(*param_1 + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  *(undefined4 *)((int)param_1 + 0x62) = uVar3;
  *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  *(uint *)((int)param_1 + 0x6e) = *(uint *)(*(int *)((int)param_1 + 0x10e) + 0x1c) | 0x42000;
  if (param_6 == 0) {
    *(uint *)((int)param_1 + 0x6e) = *(uint *)((int)param_1 + 0x6e) & 0xffff7fff;
  }
  else {
    *(int *)((int)param_1 + 0xaa) = param_6;
    *(uint *)((int)param_1 + 0x6e) = *(uint *)((int)param_1 + 0x6e) | 0x8000;
  }
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x20);
  *(undefined4 *)((int)param_1 + 0x76) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x24);
  puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x28);
  puVar5 = (undefined4 *)((int)param_1 + 0x7a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x38);
  puVar5 = (undefined4 *)((int)param_1 + 0x8a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_004dc844((undefined4 *)((int)param_1 + 0xb2),0,0x54);
  *(undefined4 *)((int)param_1 + 0xb2) = 0x54;
  if (*(int *)(*param_1 + 0x6c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x6c) + 0x2b);
  }
  if (iVar2 == 0) {
    if (*(int *)(*param_1 + 0x6c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*param_1 + 0x6c) + 0x2b);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x6c) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)(*(int *)(*param_1 + 0x6c) + 0x2b);
    }
    iVar2 = *piVar1;
  }
  if (*(int *)(*param_1 + 0x14) == 0) {
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  *(undefined4 *)((int)param_1 + 0xb6) = uVar3;
  *(undefined4 *)((int)param_1 + 0xea) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  *(undefined4 *)((int)param_1 + 0xc6) = **(undefined4 **)((int)param_1 + 0x10e);
  *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) & 0xfffffbff;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = 0xffffffff;
  if (param_5 == 0) {
    *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) & 0xffffbfff;
    *(undefined4 *)((int)param_1 + 0xea) = 0;
  }
  else {
    *(int *)((int)param_1 + 0xee) = param_5;
    *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) | 0x4000;
    if (param_8 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
    }
    else {
      uVar3 = *(undefined4 *)(param_8 + 8);
    }
    *(undefined4 *)((int)param_1 + 0xea) = uVar3;
  }
  *(undefined4 *)((int)param_1 + 0xd6) = 1;
  *(int *)((int)param_1 + 0xda) = (int)param_1 + 0x106;
  **(uint **)((int)param_1 + 0xda) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 8);
  *(uint *)(*(int *)((int)param_1 + 0xda) + 4) =
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0xc);
  *(uint *)((int)param_1 + 0xde) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x10);
  *(uint *)((int)param_1 + 0xe2) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x14);
  *(uint *)((int)param_1 + 0xe6) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x18);
  *in_FS_OFFSET = local_28;
  return param_1;
}

