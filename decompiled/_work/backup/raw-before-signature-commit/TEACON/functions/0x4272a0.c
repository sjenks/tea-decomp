// name: FUN_004272a0
// address: 0x4272a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004272a0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_004350b4 == (undefined4 *)0x0) {
    if ((DAT_004350d4 == (uint *)0x0) &&
       (DAT_004350d4 = (uint *)GetEnvironmentStrings(), DAT_004350d4 == (uint *)0x0)) {
      FUN_00426acc((uint *)s_GetEnvironmentStrings_failed_0043391c);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_004350d4;
    while (pcVar1 = FUN_0041ef80(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_004350b8 = (uint *)FUN_004155f0();
    if (DAT_004350b8 == (uint *)0x0) {
      return 0;
    }
    FUN_0041eddc(DAT_004350b8,DAT_004350d4,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_004350b4; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_0041ef80((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_004350bc = iVar8 + 4;
  puVar2 = FUN_00414f4c(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_004350b4;
    puVar4 = DAT_004350b8;
    puVar7 = puVar2;
    if (DAT_004350b4 == (undefined4 *)0x0) {
      while (pcVar6 = FUN_0041ef80(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_0041ef80((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_004350b4 != (undefined4 *)0x0) {
      FUN_00415600();
    }
    uVar3 = 1;
    DAT_004350b4 = puVar2;
  }
  return uVar3;
}

