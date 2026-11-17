// rea decompile_all
// name: FUN_004c9a24
// address: 0x4c9a24
// body: available
// range: 0x4c9a24-0x4c9ad4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004c9a24(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  int *piVar4;
  LONG *pLVar5;
  int *piVar6;
  LONG local_44 [4];
  tagRECT local_34;
  int local_24 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  FUN_004a7a30(*param_2,&local_34);
  ptVar2 = &local_34;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  pLVar3 = local_44;
  pLVar5 = local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar5 = *pLVar3;
    pLVar3 = pLVar3 + 1;
    pLVar5 = pLVar5 + 1;
  }
  local_c = local_24[0];
  local_8 = local_24[1];
  local_10 = -local_24[1];
  local_14 = -local_24[0];
  FUN_00494454(local_24,local_14,local_10);
  local_24[0] = local_24[0] + param_2[6];
  local_24[1] = local_24[1] + param_2[7];
  local_24[2] = local_24[2] - param_2[6];
  local_24[3] = local_24[1] + *(int *)((int)param_2 + 0x22);
  piVar4 = local_24;
  piVar6 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  return param_1;
}

