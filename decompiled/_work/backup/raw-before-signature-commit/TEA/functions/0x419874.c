// name: FUN_00419874
// address: 0x419874
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419874(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  byte bVar5;
  int local_1f4;
  int local_1f0;
  int local_1a8 [2];
  undefined4 local_1a0;
  int local_19c [16];
  uint local_15c [6];
  int local_144;
  double local_140;
  double local_138;
  uint local_130;
  undefined4 local_12c;
  undefined2 local_11c;
  int local_110;
  int local_108 [61];
  undefined1 local_14 [8];
  int local_c;
  
  bVar5 = 0;
  FUN_004dce64(0x4ee6c4);
  local_15c[0] = 0;
  local_11c = 0x14;
  FUN_00413990((int)local_14,param_1[0x1f]);
  local_110 = local_110 + 1;
  local_11c = 8;
  local_15c[0] = param_1[8];
  local_1a0 = 0;
  local_1a8[0] = param_1[0x20];
  piVar1 = param_1 + 9;
  piVar3 = local_19c;
  local_130 = local_15c[0];
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  local_11c = 0x20;
  piVar1 = FUN_0048b59c(local_108,0,*param_1,(int)local_1a8,0,local_c,0);
  local_110 = local_110 + 5;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar4 = iVar2 == 1;
  local_110 = local_110 + -5;
  FUN_0048b7dc(local_108,2);
  if (cVar4 != '\0') {
    piVar1 = local_19c;
    piVar3 = &local_1f4;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    }
    FUN_0048c12c(local_15c);
    local_138 = (double)local_1f0 * *(double *)(param_1 + 0x1a);
    local_11c = 8;
    if (local_138 <= 0.0) {
      if (local_138 < 0.0) {
        local_1f0 = FUN_004e3c04();
      }
    }
    else {
      local_1f0 = FUN_004e3c04();
    }
    local_140 = (double)local_1f4 * *(double *)(param_1 + 0x1c);
    if (local_140 <= 0.0) {
      if (local_140 < 0.0) {
        local_1f4 = FUN_004e3c04();
      }
    }
    else {
      local_1f4 = FUN_004e3c04();
    }
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x70))();
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  local_110 = local_110 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00419b0f;
    }
    local_144 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00419b0f:
  *in_FS_OFFSET = local_12c;
  return;
}

