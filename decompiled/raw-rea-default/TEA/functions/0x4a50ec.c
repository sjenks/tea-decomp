// rea decompile_all
// name: FUN_004a50ec
// address: 0x4a50ec
// body: available
// range: 0x4a50ec-0x4a5192 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a50ec(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (param_3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_3;
    }
    puVar1 = FUN_004dd744((int)param_3,iVar4,(int *)&DAT_00469dc4,(int *)&DAT_004756a8,0);
    *(undefined4 **)(param_1 + 0x6c) = puVar1;
    if (*(int *)(param_1 + 0xc) == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (pHVar2 == (HWND)0x0) {
      LVar3 = 0;
    }
    else {
      LVar3 = FUN_004a614c(pHVar2,*(LPARAM *)(param_1 + 0x6c));
    }
    FUN_004a5194(param_1,LVar3,(int)param_3);
    FUN_004a70e4(param_1);
    FUN_004a77c8(param_1);
    FUN_004a783c(param_1,'\x01');
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x21;
    FUN_004a5e28(param_1);
  }
  return;
}

