// name: FUN_004e69f8
// address: 0x4e69f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004e69f8(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_0051c41c == (undefined4 *)0x0) {
    if ((DAT_0051c43c == (uint *)0x0) &&
       (DAT_0051c43c = (uint *)GetEnvironmentStrings(), DAT_0051c43c == (uint *)0x0)) {
      FUN_004e5f84((uint *)s_GetEnvironmentStrings_failed_00518d38);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_0051c43c;
    while (pcVar1 = FUN_004dc9f4(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0051c420 = (uint *)FUN_004cc734();
    if (DAT_0051c420 == (uint *)0x0) {
      return 0;
    }
    FUN_004dc7d4(DAT_0051c420,DAT_0051c43c,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_0051c41c; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_004dc9f4((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0051c424 = iVar8 + 4;
  puVar2 = FUN_004cc090(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_0051c41c;
    puVar4 = DAT_0051c420;
    puVar7 = puVar2;
    if (DAT_0051c41c == (undefined4 *)0x0) {
      while (pcVar6 = FUN_004dc9f4(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_004dc9f4((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_0051c41c != (undefined4 *)0x0) {
      FUN_004cc744();
    }
    uVar3 = 1;
    DAT_0051c41c = puVar2;
  }
  return uVar3;
}

