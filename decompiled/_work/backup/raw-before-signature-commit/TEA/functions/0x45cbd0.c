// name: FUN_0045cbd0
// address: 0x45cbd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045cbd0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_004dce64(0x4f9c48);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(param_1[0x321] + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    local_34 = uVar3;
    local_30 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    local_8 = (int *)FUN_004cc0f0();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_004671dc(local_8,0,param_1,param_1[0xe],param_2);
      local_1c = 8;
    }
    local_30 = local_8;
    (**(code **)(local_8[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = *local_30;
    }
    piVar2 = (int *)param_1[0x322];
    if (piVar2 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar2,&local_38);
    }
    else {
      *piVar2 = local_38;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *in_FS_OFFSET = local_2c;
  return local_30;
}

