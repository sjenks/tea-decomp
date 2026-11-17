// rea decompile_all
// name: FUN_004d2ad0
// address: 0x4d2ad0
// body: available
// range: 0x4d2ad0-0x4d2ad5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __stdcall FUN_004d2ad0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined4 auStack_18 [2];
  int iStack_10;
  int iStack_8;
  
  iVar5 = param_2[9];
  piVar3 = (int *)FUN_004d2bbc((int)param_2);
  iStack_8 = *piVar3;
  while( true ) {
    bVar2 = FUN_004cda78(&iStack_8);
    if (bVar2) break;
    piVar3 = param_3;
    piVar4 = (int *)FUN_004d2a94(iStack_8);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
    iVar1 = iStack_8;
    if (bVar2) {
      piVar3 = (int *)FUN_004cda90(iStack_8);
      iStack_8 = *piVar3;
    }
    else {
      piVar3 = (int *)FUN_004cd864(iStack_8);
      iStack_8 = *piVar3;
      iVar5 = iVar1;
    }
  }
  FUN_004cd870((int)auStack_18,iVar5);
  FUN_004cd89c((int)auStack_28,(int)param_2);
  bVar2 = FUN_004cd9ec((int)auStack_18,(int)auStack_28);
  if (!bVar2) {
    piVar3 = (int *)FUN_004d2a94(iStack_10);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,param_3,piVar3);
    if (!bVar2) {
      puVar6 = auStack_18;
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c((int)auStack_38,(int)param_2);
  puVar6 = auStack_38;
LAB_004d2b9c:
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  return param_1;
}

