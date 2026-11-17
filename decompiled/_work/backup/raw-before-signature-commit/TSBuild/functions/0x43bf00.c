// name: FUN_0043bf00
// address: 0x43bf00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043bf00(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  code *pcVar8;
  int local_40;
  short local_3c;
  undefined4 *local_3a;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  bVar7 = 0;
  FUN_00467ba8(0x47f3f8);
  piVar1 = &DAT_0047f3c8;
  piVar6 = &local_40;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar1;
    piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*piVar1;
  piVar1 = (int *)FUN_004396f0();
  local_2c = *piVar1;
  *piVar1 = (int)&local_40;
  if ((param_3 & 0x1000) != 0) {
    param_3 = param_3 & 0xffffefff | 0x2000;
  }
  if ((param_3 & 0x2000) == 0) {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
    }
  }
  else {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
    }
    piVar1 = &local_40;
    pcVar8 = FUN_0043be5c;
    DVar2 = GetCurrentThreadId();
    BVar3 = EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    if (BVar3 == 0) {
      *in_FS_OFFSET = local_28;
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_004568d0();
    local_3a = puVar4;
    FUN_004675f0(puVar4,0,(local_3c + 1) * 4);
    piVar1 = &local_40;
    pcVar8 = FUN_0043be5c;
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    local_3a = puVar4;
  }
  local_18 = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  local_18 = 0;
  piVar1 = (int *)FUN_004396f0();
  *piVar1 = local_2c;
  FUN_0043bea9(&local_40);
  *in_FS_OFFSET = local_28;
  return local_30;
}

