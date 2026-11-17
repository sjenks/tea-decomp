// name: FUN_00414508
// address: 0x414508
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00414508(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  FUN_0041f3fc(0x42e698);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - (int)puVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) < param_3) {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      local_3c = iVar2 >> 2;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar1 = (undefined4 *)FUN_00414fac();
      if (puVar1 == (undefined4 *)0x0) {
        local_1c = 8;
        local_8 = &PTR_FUN_0042b39c;
        local_10 = local_10 + 2;
        FUN_004280a0((uint *)&DAT_00404c94,&local_8,0,&LAB_00404cec,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004136d8(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004147d0(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004136d8(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_00414f78();
      *(undefined4 **)(param_1 + 0x18) = puVar1 + local_38;
      *(undefined4 **)(param_1 + 8) = puVar1 + (iVar2 >> 2) + param_3;
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    else {
      iVar2 = (int)puVar1 - (int)param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (param_3 < (uint)(iVar2 >> 2)) {
        FUN_004136d8(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_004136b4(param_2,puVar1 + -param_3,puVar1);
        FUN_004147b0(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_004147d0(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004136d8(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_004147b0(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

