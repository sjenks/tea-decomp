// name: FUN_0045d4a8
// address: 0x45d4a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_0045d4a8(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
  piVar3 = (int *)FUN_0045d594((int)param_2);
  iStack_8 = *piVar3;
  while( true ) {
    bVar2 = FUN_004581c8(&iStack_8);
    if (bVar2) break;
    piVar3 = param_3;
    piVar4 = (int *)FUN_0045d46c(iStack_8);
    bVar2 = FUN_0045d490(param_2 + 0xc,piVar4,piVar3);
    iVar1 = iStack_8;
    if (bVar2) {
      piVar3 = (int *)FUN_004581e0(iStack_8);
      iStack_8 = *piVar3;
    }
    else {
      piVar3 = (int *)FUN_00457fb4(iStack_8);
      iStack_8 = *piVar3;
      iVar5 = iVar1;
    }
  }
  FUN_00457fc0((int)auStack_18,iVar5);
  FUN_00457fec((int)auStack_28,(int)param_2);
  bVar2 = FUN_0045813c((int)auStack_18,(int)auStack_28);
  if (!bVar2) {
    piVar3 = (int *)FUN_0045d46c(iStack_10);
    bVar2 = FUN_0045d490(param_2 + 0xc,param_3,piVar3);
    if (!bVar2) {
      puVar6 = auStack_18;
      goto LAB_0045d574;
    }
  }
  FUN_00457fec((int)auStack_38,(int)param_2);
  puVar6 = auStack_38;
LAB_0045d574:
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  return param_1;
}

