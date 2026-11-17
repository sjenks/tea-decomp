// rea decompile_all
// name: FUN_004b54c4
// address: 0x4b54c4
// body: available
// range: 0x4b54c4-0x4b54e5 inclusive
// range: 0x4b54fe-0x4b55be inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004b54c4(int *param_1,undefined4 param_2,int *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint local_14 [4];
  
  switch(param_2) {
  default:
    return (char *)0x0;
  case 1:
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_1;
    }
    puVar1 = FUN_004dd5cc((int)param_1,iVar5,0x4b2920);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    break;
  case 2:
    if (*(int *)((int)param_1 + 0x22) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)FUN_004b5274(*(int *)((int)param_1 + 0x22));
    }
    break;
  case 3:
    iVar3 = 0;
    for (iVar5 = *(int *)((int)param_1 + 0x26); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      iVar3 = iVar3 + 1;
    }
    if (param_4 == (char *)0x0) {
      *param_3 = iVar3;
      return (char *)0x4;
    }
    wsprintfA((LPSTR)local_14,&DAT_0050dea0,iVar3);
    puVar2 = local_14;
    break;
  case 4:
    puVar2 = *(uint **)((int)param_1 + 0x2e);
    break;
  case 5:
    puVar2 = *(uint **)((int)param_1 + 0x1e);
  }
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = FUN_004dc9f4(puVar2);
    }
    if ((int)pcVar4 < (int)param_4) {
      param_4 = pcVar4;
    }
    if (param_4 != (char *)0x0) {
      FUN_004dc7d4(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar4;
}

