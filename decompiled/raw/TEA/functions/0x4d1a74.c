// name: FUN_004d1a74
// address: 0x4d1a74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d1a74(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x514664);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_004d1700(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar4);
  }
  cVar1 = FUN_004d1b5c();
  if (cVar1 != '\0') {
    bVar2 = FUN_004d1b68((undefined *)param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517358);
    }
    bVar2 = FUN_004d1b7c(param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517370);
    }
  }
  iVar3 = FUN_004d1758(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_004d1758(*param_2);
    uVar5 = FUN_004d1450(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_004d1758(*param_2);
      FUN_004d1bb4(local_34,piVar4);
    }
  }
  bVar2 = FUN_004d16ec(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_004d1084(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

