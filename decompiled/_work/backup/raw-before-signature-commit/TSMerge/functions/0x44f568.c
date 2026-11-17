// name: FUN_0044f568
// address: 0x44f568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044f568(undefined4 *param_1,int *param_2)

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
  
  FUN_00455f04(0x472548);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_0044f1f4(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_0044f1f4(*param_2);
    FUN_0044f200(piVar4);
  }
  cVar1 = FUN_0044f650();
  if (cVar1 != '\0') {
    bVar2 = FUN_0044f65c((undefined *)param_2);
    if (bVar2) {
      FUN_004577dc((int *)&DAT_004746a0);
    }
    bVar2 = FUN_0044f670(param_2);
    if (bVar2) {
      FUN_004577dc((int *)&DAT_004746b8);
    }
  }
  iVar3 = FUN_0044f24c(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_0044f24c(*param_2);
    uVar5 = FUN_0044ef44(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_0044f24c(*param_2);
      FUN_0044f6a8(local_34,piVar4);
    }
  }
  bVar2 = FUN_0044f1e0(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_0044eb78(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

