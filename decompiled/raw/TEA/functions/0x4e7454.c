// name: FUN_004e7454
// address: 0x4e7454
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __stdcall FUN_004e7454(void)

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
  
  puVar3 = (uint *)FUN_004e633c((uint *)&DAT_00518fc4);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = FUN_004dc9f4(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_004e5abc((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_004e5abc((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_004e5abc((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((cVar1 = *(char *)((int)puVar3 + 3), cVar1 != '-' &&
       ((cVar1 != '+' && (iVar5 = FUN_004e5afc((int)cVar1), iVar5 == 0)))))) ||
     ((iVar5 = FUN_004e5afc((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_004e5afc((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&local_bc);
    if (local_22 == 0) {
      DAT_00518fb8 = 0;
    }
    else {
      DAT_00518fb8 = (uint)(local_14 != L'\0');
    }
    DAT_00518fb4 = (local_bc + local_68) * 0x3c;
    *PTR_DAT_00518fbc = DAT_00518fc7;
    puVar2 = PTR_DAT_00518fc0;
    *PTR_DAT_00518fc0 = DAT_00518fc8;
    return puVar2;
  }
  FUN_004dc844((undefined4 *)PTR_DAT_00518fc0,0,4);
  FUN_004e5b34(PTR_DAT_00518fbc,(byte *)puVar3,3);
  PTR_DAT_00518fbc[3] = 0;
  iVar5 = FUN_004e39d0((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_00518fb4 = iVar5 * 0xe10;
  DAT_00518fb8 = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_004e5abc((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar6 = FUN_004dc9f4((uint *)(iVar7 + (int)puVar3));
  if (pcVar6 < (char *)0x3) {
    return pcVar6;
  }
  iVar5 = FUN_004e5abc((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_004e5abc((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_004e5b34(PTR_DAT_00518fc0,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_00518fc0;
  PTR_DAT_00518fc0[3] = 0;
  DAT_00518fb8 = 1;
  return puVar2;
}

