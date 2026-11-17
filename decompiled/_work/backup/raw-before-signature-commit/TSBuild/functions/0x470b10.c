// name: FUN_00470b10
// address: 0x470b10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00470b10(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_0048d894 == (undefined4 *)0x0) {
    if ((DAT_0048d8b4 == (uint *)0x0) &&
       (DAT_0048d8b4 = (uint *)GetEnvironmentStrings(), DAT_0048d8b4 == (uint *)0x0)) {
      FUN_0047009c((uint *)s_GetEnvironmentStrings_failed_0048a9e0);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_0048d8b4;
    while (pcVar1 = FUN_004677a0(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0048d898 = (uint *)FUN_00456e84();
    if (DAT_0048d898 == (uint *)0x0) {
      return 0;
    }
    FUN_00467580(DAT_0048d898,DAT_0048d8b4,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_0048d894; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_004677a0((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0048d89c = iVar8 + 4;
  puVar2 = FUN_004567e0(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_0048d894;
    puVar4 = DAT_0048d898;
    puVar7 = puVar2;
    if (DAT_0048d894 == (undefined4 *)0x0) {
      while (pcVar6 = FUN_004677a0(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_004677a0((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_0048d894 != (undefined4 *)0x0) {
      FUN_00456e94();
    }
    uVar3 = 1;
    DAT_0048d894 = puVar2;
  }
  return uVar3;
}

