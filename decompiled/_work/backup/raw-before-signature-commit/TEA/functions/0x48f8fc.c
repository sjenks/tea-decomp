// name: FUN_0048f8fc
// address: 0x48f8fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG * __cdecl FUN_0048f8fc(LONG *param_1,undefined4 param_2)

{
  int iVar1;
  tagTEXTMETRICA *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagTEXTMETRICA local_88;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  int local_2c [10];
  
  bVar4 = 0;
  FUN_004dce64(0x50672c);
  local_40 = 8;
  FUN_004a8760(local_2c);
  local_34 = local_34 + 3;
  local_40 = 0x14;
  FUN_0048f85c(param_2,&local_88,(int)local_2c);
  ptVar2 = &local_88;
  pLVar3 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->tmHeight;
    ptVar2 = (tagTEXTMETRICA *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_34 = local_34 + -3;
  FUN_004a86dc(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

