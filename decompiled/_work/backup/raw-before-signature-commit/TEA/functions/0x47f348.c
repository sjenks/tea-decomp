// name: FUN_0047f348
// address: 0x47f348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0047f348(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  int local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  FUN_004dce64(0x502930);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 8);
    if ((uint)(*(int *)(param_1 + 0x18) - (int)puVar2) < param_3) {
      local_3c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar2 = (undefined1 *)FUN_004cc0f0();
      if (puVar2 == (undefined1 *)0x0) {
        local_1c = 8;
        local_8 = &PTR_FUN_004eac74;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0047f57c(*(undefined1 **)(param_1 + 4),param_2,puVar2);
      FUN_0047f650(puVar2 + ((int)param_2 - *(int *)(param_1 + 4)),param_3,param_4);
      FUN_0047f57c(param_2,*(undefined1 **)(param_1 + 8),
                   puVar2 + (int)(param_2 + (param_3 - *(int *)(param_1 + 4))));
      local_1c = 0;
      iVar4 = *(int *)(param_1 + 4);
      iVar1 = *(int *)(param_1 + 8);
      FUN_0047c9bc(param_1,iVar4,iVar1);
      FUN_004cc0bc();
      *(undefined1 **)(param_1 + 0x18) = puVar2 + local_38;
      *(undefined1 **)(param_1 + 8) = puVar2 + param_3 + (iVar1 - iVar4);
      *(undefined1 **)(param_1 + 4) = puVar2;
    }
    else if (param_3 < (uint)((int)puVar2 - (int)param_2)) {
      FUN_0047f57c(puVar2 + -param_3,puVar2,puVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      FUN_0047f610(param_2,puVar2 + -param_3,puVar2);
      param_1 = FUN_0047f630(param_2,param_2 + param_3,param_4);
    }
    else {
      iVar4 = param_3 - ((int)puVar2 - (int)param_2);
      FUN_0047f650(puVar2,iVar4,param_4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar4;
      FUN_0047f57c(param_2,puVar2,param_2 + param_3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar4);
      param_1 = FUN_0047f630(param_2,puVar2,param_4);
    }
    *in_FS_OFFSET = local_2c;
    local_2c = param_1;
  }
  return local_2c;
}

