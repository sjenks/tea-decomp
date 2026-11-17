// name: FUN_00439aec
// address: 0x439aec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00439aec(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 uVar4;
  int iVar6;
  char *pcVar7;
  CHAR *pCVar8;
  CHAR local_108 [260];
  
  if ((param_2 != (uint *)0x0) && (param_2 == *(uint **)((int)param_1 + 0x2e))) {
    uVar5 = (undefined3)((uint)in_EAX >> 8);
    goto LAB_00439bcc;
  }
  FUN_0044b2dc();
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0041fd2c(param_2);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar4;
  pcVar7 = s_Unknown_0046d03c;
  pCVar8 = local_108;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pCVar8 = pCVar8 + 4;
  }
  if (*(int *)((int)param_1 + 0x2e) == 0) {
LAB_00439b66:
    iVar6 = FUN_00443f20(*(int *)(*(int *)((int)param_1 + 0xe) + 0x20) + 4,0x7ef7,local_108,0x104);
    if ((*(byte *)(*(int *)((int)param_1 + 0xe) + 0x18) & 2) != 0) {
      iVar2 = *(int *)((int)param_1 + 0xe);
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + 1;
      wsprintfA(local_108 + iVar6,&DAT_0046d184,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    sVar3 = FUN_004154b8();
    if (sVar3 != 0) goto LAB_00439b66;
  }
  uVar4 = (**(code **)(*param_1 + 0x24))();
  uVar5 = (undefined3)((uint)uVar4 >> 8);
LAB_00439bcc:
  return CONCAT31(uVar5,1);
}

