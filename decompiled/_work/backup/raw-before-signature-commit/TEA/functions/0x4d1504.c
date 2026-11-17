// name: FUN_004d1504
// address: 0x4d1504
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d1504(undefined4 *param_1,int *param_2,char param_3)

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
  
  FUN_004dce64(0x5145ec);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_004d16ec(*param_2);
  if (!bVar1) {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_004d1672;
  }
  iVar2 = FUN_004d1700(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_004d1688(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_004cf0b8(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_004cecf8(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_004d1758(*param_2);
        local_30 = FUN_004d1764(piVar3);
        local_34 = FUN_004d0a2c();
        bVar1 = FUN_004d1694(&local_30,&local_34);
        if (bVar1) {
LAB_004d1601:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_004d16ac(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_004d1601;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x004d160e;
        piVar3 = (int *)FUN_004d1758(*param_2);
        FUN_004d17c0(piVar3);
      } while( true );
    }
  }
  goto LAB_004d1648;
code_r0x004d160e:
  local_38 = FUN_004d0a2c();
  bVar1 = FUN_004d1694(&local_30,&local_38);
  if (bVar1) {
    FUN_004d1084(*param_2,2);
  }
  local_10 = local_10 + -1;
  FUN_00437eb0(&local_8,2);
LAB_004d1648:
  bVar1 = FUN_004d16ec(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_004d1672:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

