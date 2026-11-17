// name: FUN_0045dd9c
// address: 0x45dd9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0045dd9c(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_00477dc8 == (undefined4 *)0x0) {
    if ((DAT_00477de8 == (uint *)0x0) &&
       (DAT_00477de8 = (uint *)GetEnvironmentStrings(), DAT_00477de8 == (uint *)0x0)) {
      FUN_0045d560((uint *)s_GetEnvironmentStrings_failed_00475f40);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_00477de8;
    while (pcVar1 = FUN_00455bf0(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_00477dcc = (uint *)FUN_0044b944();
    if (DAT_00477dcc == (uint *)0x0) {
      return 0;
    }
    FUN_004559d0(DAT_00477dcc,DAT_00477de8,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_00477dc8; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_00455bf0((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_00477dd0 = iVar8 + 4;
  puVar2 = FUN_0044b2a0(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_00477dc8;
    puVar4 = DAT_00477dcc;
    puVar7 = puVar2;
    if (DAT_00477dc8 == (undefined4 *)0x0) {
      while (pcVar6 = FUN_00455bf0(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_00455bf0((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_00477dc8 != (undefined4 *)0x0) {
      FUN_0044b954();
    }
    uVar3 = 1;
    DAT_00477dc8 = puVar2;
  }
  return uVar3;
}

