// rea decompile_all
// name: FUN_0041e9dc
// address: 0x41e9dc
// body: available
// range: 0x41e9dc-0x41ea73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0041e9dc(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar4 = 0;
  if ((WPARAM *)*param_1 != (WPARAM *)0x0) {
    FUN_004a76a8(*param_2,0x30,*(WPARAM *)*param_1,0);
    (**(code **)(*(int *)(*param_2 + 8) + 0x68))();
    local_8 = 0x216;
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = 0;
    local_40.bottom = 0;
    FUN_004a7a30(*param_2,&local_40);
    ptVar2 = &local_40;
    pLVar3 = &local_30;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    local_10 = local_28 - local_30;
    local_c = local_24 - local_2c;
    FUN_004a76a8(*param_2,0x47,0,(LPARAM)local_20);
  }
  return;
}

