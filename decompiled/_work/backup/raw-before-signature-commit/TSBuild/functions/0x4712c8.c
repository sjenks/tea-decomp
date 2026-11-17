// name: FUN_004712c8
// address: 0x4712c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __stdcall FUN_004712c8(void)

{
  char cVar1;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_bc;
  WCHAR local_68;
  short local_22;
  WCHAR local_14;
  
  puVar3 = (uint *)FUN_00470454((uint *)&DAT_0048aaa8);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = FUN_004677a0(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_0046fbd4((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_0046fbd4((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_0046fbd4((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((cVar1 = *(char *)((int)puVar3 + 3), cVar1 != '-' &&
       ((cVar1 != '+' && (iVar5 = FUN_0046fc14((int)cVar1), iVar5 == 0)))))) ||
     ((iVar5 = FUN_0046fc14((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_0046fc14((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&local_bc);
    if (local_22 == 0) {
      DAT_0048aa9c = 0;
    }
    else {
      DAT_0048aa9c = (uint)(local_14 != L'\0');
    }
    DAT_0048aa98 = (local_bc + local_68) * 0x3c;
    *PTR_DAT_0048aaa0 = DAT_0048aaab;
    puVar2 = PTR_DAT_0048aaa4;
    *PTR_DAT_0048aaa4 = DAT_0048aaac;
    return puVar2;
  }
  FUN_004675f0((undefined4 *)PTR_DAT_0048aaa4,0,4);
  FUN_0046fc4c(PTR_DAT_0048aaa0,(byte *)puVar3,3);
  PTR_DAT_0048aaa0[3] = 0;
  iVar5 = FUN_0046db78((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_0048aa98 = iVar5 * 0xe10;
  DAT_0048aa9c = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_0046fbd4((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar6 = FUN_004677a0((uint *)(iVar7 + (int)puVar3));
  if (pcVar6 < (char *)0x3) {
    return pcVar6;
  }
  iVar5 = FUN_0046fbd4((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_0046fbd4((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_0046fc4c(PTR_DAT_0048aaa4,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_0048aaa4;
  PTR_DAT_0048aaa4[3] = 0;
  DAT_0048aa9c = 1;
  return puVar2;
}

