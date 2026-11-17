// name: FUN_0044fdb8
// address: 0x44fdb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044fdb8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_5;
  if ((param_2 != 0) && (iVar1 = FUN_00408c68(param_2,param_1[7]), iVar1 != 0)) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
    }
    puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar1,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    FUN_00452bdc((int)puVar2,param_1[7],&local_8,&local_c,&local_10);
    iVar1 = local_c;
    if (0 < local_10) {
      iVar1 = local_8;
    }
    for (; (local_8 <= iVar1 && (iVar1 <= local_c)); iVar1 = iVar1 + local_10) {
      iVar3 = FUN_00408e54(param_1[6],param_1[7],iVar1);
      if (0 < iVar3) {
        if (((0 < local_10) && (iVar1 < param_4)) ||
           ((local_10 < 0 && ((param_4 < iVar1 && (param_4 != 0)))))) {
          param_1[10] = param_1[10] + iVar3;
        }
        param_1[0xc] = param_1[0xc] + iVar3;
        if (param_1[8] == 0) {
          param_1[8] = iVar1;
        }
        param_1[9] = iVar1;
      }
    }
  }
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  return;
}

