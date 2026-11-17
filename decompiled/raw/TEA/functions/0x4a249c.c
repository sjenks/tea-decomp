// name: FUN_004a249c
// address: 0x4a249c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a249c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  tagRECT local_c8;
  LOGFONTA local_b8;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [12];
  uint *local_24;
  uint local_20 [2];
  uint *local_18;
  uint local_14 [2];
  uint *local_c [2];
  
  FUN_004dce64(0x50a3fc);
  FUN_004a6fd8(*param_1);
  iVar1 = FUN_004a76a8(*(int *)(*param_1 + 0x14),0x31,0,0);
  if (iVar1 == 0) {
    local_68 = 0x2c;
    puVar2 = FUN_0048faec(local_20);
    local_5c = local_5c + 3;
    iVar1 = GetObjectA((HANDLE)*puVar2,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -3;
    FUN_00494064(local_20,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_24 = (uint *)FUN_004cc0f0();
      if (local_24 != (uint *)0x0) {
        local_68 = 0x44;
        FUN_0048f7fc(local_24,&local_b8);
      }
      param_1[6] = (int)local_24;
    }
  }
  else {
    local_68 = 8;
    local_7c = FUN_0048f708(local_14,iVar1,0);
    local_5c = local_5c + 2;
    iVar1 = GetObjectA((HANDLE)*local_7c,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -2;
    FUN_00494064(local_14,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_18 = (uint *)FUN_004cc0f0();
      if (local_18 != (uint *)0x0) {
        local_68 = 0x20;
        FUN_0048f7fc(local_18,&local_b8);
      }
      param_1[6] = (int)local_18;
    }
  }
  local_68 = 0x50;
  FUN_00497298((int *)local_c,0x104);
  local_5c = local_5c + 2;
  local_68 = 0x5c;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  if (*(int *)(param_1[0xd] + -4) == 0) {
    FUN_004cf41c((int)(param_1 + 0xb),local_c[0]);
  }
  pcVar3 = FUN_004dc9f4(local_c[0]);
  if (pcVar3 == (char *)0x0) {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[0xd]);
  }
  FUN_004a31b8(param_1);
  if ((param_1[7] != 0) && (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_004a7988(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
  }
  if (param_1[7] != 0) {
    local_c8.left = 0;
    local_c8.top = 0;
    local_c8.right = 0;
    local_c8.bottom = 0;
    FUN_004a7a6c(*param_1,&local_c8);
    local_68 = 0x68;
    FUN_0049f414(local_54,*(undefined4 *)(*param_1 + 0xc),&local_c8.left,0x3eb,(uint *)0xffffffff);
    local_5c = local_5c + 2;
    local_68 = 0x74;
    FUN_0049f534((int)local_54,(uint *)param_1[0xd],'\x01');
    FUN_004a76a8(*(int *)param_1[7],0x404,0,(LPARAM)local_54);
    local_5c = local_5c + -2;
    FUN_004cc0cc();
    local_68 = 0x5c;
  }
  local_5c = local_5c + -2;
  FUN_00497358(local_c,0);
  *in_FS_OFFSET = local_78;
  return;
}

