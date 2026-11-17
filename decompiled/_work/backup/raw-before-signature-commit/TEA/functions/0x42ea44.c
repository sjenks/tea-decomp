// name: FUN_0042ea44
// address: 0x42ea44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0042ea44(int param_1,uint *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_430 [2];
  int local_428;
  undefined4 local_410 [256];
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    local_10 = local_410;
    FUN_004304f0(local_10,param_2,param_3,0);
    FUN_0042eb4c(local_430,param_1 + 0x18,(int *)&local_10);
    bVar4 = *(int *)(param_1 + 0x3c) != local_428;
  }
  else {
    iVar1 = FUN_0042ba08(param_1);
    if (0 < iVar1) {
      for (uVar2 = 0; uVar2 < (uint)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) / 0xc);
          uVar2 = uVar2 + 1) {
        local_8 = (undefined4 *)(uVar2 * 0xc + *(int *)(param_1 + 0x54));
        iVar1 = FUN_00430a68(local_8[1],(byte *)param_2,(int)param_3,*(uint *)(param_1 + 0xe4));
        if (-1 < iVar1) {
          puVar3 = (undefined4 *)*local_8;
          while (local_c = FUN_00430a68((int)puVar3,(byte *)param_2,(int)param_3,
                                        *(uint *)(param_1 + 0xe4)), local_c < 0) {
            puVar3 = (undefined4 *)*puVar3;
          }
          return local_c == 0;
        }
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

