// name: FUN_0047f720
// address: 0x47f720
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047f720(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10c [15];
  undefined4 local_d0 [39];
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x5029c8);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x254) != 0) {
      local_8 = (undefined4 *)FUN_004cc0f0();
      if (local_8 != (undefined4 *)0x0) {
        local_1c = 0x14;
        FUN_00480754(local_10c,param_1);
        puVar5 = local_10c;
        puVar4 = (undefined4 *)(param_1 + 0xb8);
        FUN_00481b70(local_d0,param_1);
        FUN_00481f7c(local_8,local_d0,puVar4,puVar5);
        local_1c = 8;
      }
      iVar1 = *(int *)(param_1 + 0x254);
      piVar2 = *(int **)(iVar1 + 8);
      if (piVar2 == *(int **)(iVar1 + 0x18)) {
        FUN_0047f820(iVar1,piVar2,&local_8);
      }
      else {
        *piVar2 = (int)local_8;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
        local_34 = piVar2;
        local_30 = piVar2;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x224)) = uVar3;
    FUN_0047f9f8(param_1);
    *(undefined4 *)(param_1 + 0x29c) = param_3;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

