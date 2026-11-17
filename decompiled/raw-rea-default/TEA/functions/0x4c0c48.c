// rea decompile_all
// name: FUN_004c0c48
// address: 0x4c0c48
// body: available
// range: 0x4c0c48-0x4c0cc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c0c48(int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  CHAR local_a4 [80];
  CHAR local_54 [80];
  
  if (param_3 == 0) {
    param_3 = 0x7ffc;
  }
  if (param_4 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    iVar1 = FUN_004c0cd4(param_1,param_4,local_a4,0x50);
    if (iVar1 == 0) {
      pcVar3 = s_OK_to_Resume__00510045;
    }
    else {
      pcVar3 = local_a4;
    }
  }
  iVar1 = FUN_004c0cd4(param_1,param_3,local_54,0x50);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)0x0;
  }
  else {
    pCVar2 = local_54;
  }
  FUN_0048ec48(param_2,pCVar2,pcVar3);
  return;
}

