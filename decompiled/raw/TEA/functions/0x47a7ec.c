// name: FUN_0047a7ec
// address: 0x47a7ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0047a7ec(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

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
  
  FUN_004dce64(0x500e20);
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
      puVar1 = (undefined4 *)FUN_004cc0f0();
      if (puVar1 == (undefined4 *)0x0) {
        local_1c = 8;
        local_8 = &PTR_FUN_004eac74;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004793ec(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0047aab4(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004793ec(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0045f0c4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_004cc0bc();
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
        FUN_004793ec(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_004793c8(param_2,puVar1 + -param_3,puVar1);
        FUN_0047aa94(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_0047aab4(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004793ec(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_0047aa94(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

