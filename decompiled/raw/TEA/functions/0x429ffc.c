// name: FUN_00429ffc
// address: 0x429ffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429ffc(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  FUN_004dce64(0x4f26b8);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
    if (iVar3 == 0) {
      iVar3 = 0x55;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    puVar4 = (undefined4 *)FUN_004cc0f0();
    if (puVar4 == (undefined4 *)0x0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_00429f04(*(undefined4 **)(param_1 + 4),param_2,puVar4);
    if (puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3 != (undefined4 *)0x0) {
      FUN_00430560(puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3,param_3);
    }
    FUN_00429f04(param_2,*(undefined4 **)(param_1 + 8),
                 puVar4 + (((int)param_2 - *(int *)(param_1 + 4)) / 0xc) * 3 + 3);
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 4);
    FUN_00429fb8(param_1,puVar2,puVar1);
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 0x18) = puVar4 + iVar3 * 3;
    *(undefined4 **)(param_1 + 8) = puVar4 + (((int)puVar1 - (int)puVar2) / 0xc) * 3 + 3;
    *(undefined4 **)(param_1 + 4) = puVar4;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      FUN_00430560(local_8,local_8 + -3);
    }
    FUN_0042a220(param_2,*(int **)(param_1 + 8) + -3,*(int **)(param_1 + 8));
    FUN_004305b4(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
  }
  *in_FS_OFFSET = local_34;
  return;
}

