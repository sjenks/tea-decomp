// rea decompile_all
// name: FUN_004e7454
// address: 0x4e7454
// body: available
// range: 0x4e7454-0x4e761b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

