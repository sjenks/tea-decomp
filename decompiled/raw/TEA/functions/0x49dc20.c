// name: FUN_0049dc20
// address: 0x49dc20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049dc20(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x5091e4);
  piVar2 = (int *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  puVar3 = FUN_004dd744((int)piVar2,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  bVar1 = false;
  if (param_2 == 2) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(param_1[6] + 0x1c))();
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
      *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
      (**(code **)(param_1[6] + 0x34))();
      bVar1 = true;
    }
  }
  else if (((param_2 == 0) && (puVar3 == (undefined4 *)0x0)) &&
          ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0)) {
    piVar2 = param_1;
    uVar4 = FUN_0049d994(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar4,param_1[6],piVar2,param_1);
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)(*param_1 + 0x14);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + 8);
    }
    puVar3 = FUN_004dd744(iVar5,iVar6,(int *)&DAT_0040299c,(int *)&DAT_00428c70,0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar3[3] + 4))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

