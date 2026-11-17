// name: FUN_0045e554
// address: 0x45e554
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __stdcall FUN_0045e554(void)

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
  
  puVar3 = (uint *)FUN_0045d6e0((uint *)&DAT_00476008);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = FUN_00455bf0(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_0045d098((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_0045d098((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_0045d098((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((cVar1 = *(char *)((int)puVar3 + 3), cVar1 != '-' &&
       ((cVar1 != '+' && (iVar5 = FUN_0045d0d8((int)cVar1), iVar5 == 0)))))) ||
     ((iVar5 = FUN_0045d0d8((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_0045d0d8((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&local_bc);
    if (local_22 == 0) {
      DAT_00475ffc = 0;
    }
    else {
      DAT_00475ffc = (uint)(local_14 != L'\0');
    }
    DAT_00475ff8 = (local_bc + local_68) * 0x3c;
    *PTR_DAT_00476000 = DAT_0047600b;
    puVar2 = PTR_DAT_00476004;
    *PTR_DAT_00476004 = DAT_0047600c;
    return puVar2;
  }
  FUN_00455a40((undefined4 *)PTR_DAT_00476004,0,4);
  FUN_0045d110(PTR_DAT_00476000,(byte *)puVar3,3);
  PTR_DAT_00476000[3] = 0;
  iVar5 = FUN_0045b3a0((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_00475ff8 = iVar5 * 0xe10;
  DAT_00475ffc = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_0045d098((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar6 = FUN_00455bf0((uint *)(iVar7 + (int)puVar3));
  if (pcVar6 < (char *)0x3) {
    return pcVar6;
  }
  iVar5 = FUN_0045d098((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_0045d098((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_0045d110(PTR_DAT_00476004,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_00476004;
  PTR_DAT_00476004[3] = 0;
  DAT_00475ffc = 1;
  return puVar2;
}

