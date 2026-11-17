// name: FUN_0046bcac
// address: 0x46bcac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046bcac(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_54;
  LONG local_44 [4];
  undefined4 local_34;
  undefined2 local_24;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  FUN_004dce64(0x4fdcac);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  FUN_004a7a6c(*param_1,&local_54);
  ptVar2 = &local_54;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_24 = 0x14;
    FUN_004173c0(local_8,(int)local_44,param_1[0x2e],3,0);
    local_24 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_24 = 0x2c;
    FUN_004173c0(local_c,(int)local_44,*(int *)((int)param_1 + 0x166),0,3);
    local_24 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)FUN_004cc0f0();
  if (local_10 != (int *)0x0) {
    local_24 = 0x44;
    if (param_1[0x85] == 0) {
      iVar1 = param_1[0x85];
    }
    else {
      iVar1 = *(int *)param_1[0x85];
    }
    FUN_004173c0(local_10,(int)local_44,iVar1,3,3);
    local_24 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  *in_FS_OFFSET = local_34;
  return;
}

