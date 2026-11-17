// name: FUN_00444c80
// address: 0x444c80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00444c80(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 uVar3;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  CHAR local_108 [260];
  
  if ((param_2 != (uint *)0x0) && (param_2 == *(uint **)((int)param_1 + 0x2e))) {
    uVar4 = (undefined3)((uint)in_EAX >> 8);
    goto LAB_00444d60;
  }
  FUN_0045681c();
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042aea0(param_2);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar3;
  pcVar6 = s_Unknown_00480e18;
  pCVar7 = local_108;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  if (*(int *)((int)param_1 + 0x2e) == 0) {
LAB_00444cfa:
    iVar5 = FUN_0044f0b4(*(int *)(*(int *)((int)param_1 + 0xe) + 0x20) + 4,0x7ef7,local_108,0x104);
    if ((*(byte *)(*(int *)((int)param_1 + 0xe) + 0x18) & 2) != 0) {
      iVar2 = *(int *)((int)param_1 + 0xe);
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + 1;
      wsprintfA(local_108 + iVar5,&DAT_00480f60,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    uVar3 = FUN_004204dc();
    if ((short)uVar3 != 0) goto LAB_00444cfa;
  }
  uVar3 = (**(code **)(*param_1 + 0x24))();
  uVar4 = (undefined3)((uint)uVar3 >> 8);
LAB_00444d60:
  return CONCAT31(uVar4,1);
}

