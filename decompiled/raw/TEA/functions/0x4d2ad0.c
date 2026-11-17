// name: FUN_004d2ad0
// address: 0x4d2ad0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_004d2ad0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined4 auStack_18 [2];
  int iStack_10;
  int iStack_8;
  
  iVar5 = param_2[9];
  piVar3 = (int *)FUN_004d2bbc((int)param_2);
  iStack_8 = *piVar3;
  while( true ) {
    bVar2 = FUN_004cda78(&iStack_8);
    if (bVar2) break;
    piVar3 = param_3;
    piVar4 = (int *)FUN_004d2a94(iStack_8);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
    iVar1 = iStack_8;
    if (bVar2) {
      piVar3 = (int *)FUN_004cda90(iStack_8);
      iStack_8 = *piVar3;
    }
    else {
      piVar3 = (int *)FUN_004cd864(iStack_8);
      iStack_8 = *piVar3;
      iVar5 = iVar1;
    }
  }
  FUN_004cd870((int)auStack_18,iVar5);
  FUN_004cd89c((int)auStack_28,(int)param_2);
  bVar2 = FUN_004cd9ec((int)auStack_18,(int)auStack_28);
  if (!bVar2) {
    piVar3 = (int *)FUN_004d2a94(iStack_10);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,param_3,piVar3);
    if (!bVar2) {
      puVar6 = auStack_18;
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c((int)auStack_38,(int)param_2);
  puVar6 = auStack_38;
LAB_004d2b9c:
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  return param_1;
}

