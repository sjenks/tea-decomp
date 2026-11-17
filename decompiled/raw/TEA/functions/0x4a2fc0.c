// name: FUN_004a2fc0
// address: 0x4a2fc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a2fc0(int *param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  LOGFONTA local_74;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint *local_14;
  uint local_10 [2];
  uint *local_8;
  
  FUN_004dce64(0x50a6bc);
  FUN_004a5774(*param_1);
  local_8 = (uint *)param_1[6];
  if (local_8 != (uint *)0x0) {
    local_28 = 0x14;
    local_1c = local_1c + -1;
    FUN_00494064(local_8,0);
    FUN_004cc0bc();
  }
  local_28 = 0x20;
  puVar1 = FUN_0048f708(local_10,param_2,0);
  local_1c = local_1c + 2;
  iVar2 = GetObjectA((HANDLE)*puVar1,0x3c,&local_74);
  cVar3 = iVar2 != 0;
  local_1c = local_1c + -2;
  FUN_00494064(local_10,0);
  if (cVar3 != '\0') {
    local_74.lfUnderline = (BYTE)param_1[0xf];
    local_14 = (uint *)FUN_004cc0f0();
    if (local_14 != (uint *)0x0) {
      local_28 = 0x38;
      FUN_0048f7fc(local_14,&local_74);
      local_28 = 0x2c;
    }
    param_1[6] = (int)local_14;
  }
  if (param_3 != '\0') {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  *in_FS_OFFSET = local_38;
  return;
}

