// rea decompile_all
// name: FUN_0045d86c
// address: 0x45d86c
// body: available
// range: 0x45d86c-0x45d935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045d86c(int param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT local_24;
  LONG local_14;
  int local_10;
  int local_8;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((int *)(param_1 + 0x7bc),(undefined4 *)(iVar1 + 0x30));
  FUN_0041e9dc((int *)(param_1 + 0x7bc),(int *)(param_1 + 0x158));
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  FUN_004a7a30(*(int *)(param_1 + 0x158),&local_24);
  ptVar2 = &local_24;
  pLVar3 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  FUN_004a7aa0(*(int *)(param_1 + 0x210),(HWND)0x0,0,0,*(int *)(*(int *)(param_1 + 0x210) + 0x28),
               local_8 - local_10,0x216);
  if (*(int *)(param_1 + 0x68c) != 0) {
    FUN_004a7aa0(**(int **)(param_1 + 0x68c),(HWND)0x0,0,0,
                 *(int *)(**(int **)(param_1 + 0x68c) + 0x28),local_8 - local_10,0x216);
  }
  return;
}

