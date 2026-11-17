// name: FUN_00418a30
// address: 0x418a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00418a30(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_0041f3fc(0x430118);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_00418c18(*param_2);
  if (!bVar1) {
    FUN_00418764(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_00418b9e;
  }
  iVar2 = FUN_00418c2c(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00418c2c(*param_2);
    FUN_00418c38(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_00418bb4(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_00416a80(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_00416920(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_00418c84(*param_2);
        local_30 = FUN_00418c90(piVar3);
        local_34 = FUN_004181e8();
        bVar1 = FUN_00418bc0(&local_30,&local_34);
        if (bVar1) {
LAB_00418b2d:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_00418bd8(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_00418b2d;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x00418b3a;
        piVar3 = (int *)FUN_00418c84(*param_2);
        FUN_00418cec(piVar3);
      } while( true );
    }
  }
  goto LAB_00418b74;
code_r0x00418b3a:
  local_38 = FUN_004181e8();
  bVar1 = FUN_00418bc0(&local_30,&local_38);
  if (bVar1) {
    FUN_00418764(*param_2,2);
  }
  local_10 = local_10 + -1;
  FUN_00409948(&local_8,2);
LAB_00418b74:
  bVar1 = FUN_00418c18(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_00418764(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_00418b9e:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

