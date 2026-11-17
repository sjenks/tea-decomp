// rea decompile_all
// name: FUN_0044d278
// address: 0x44d278
// body: available
// range: 0x44d278-0x44d3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_0044d278(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    iVar4 = (int)param_2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    if (iVar4 >> 4 < 0x11) break;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      if (cVar1 == '\0') {
        (*(code *)param_4)();
      }
    }
    puVar2 = FUN_0044d3b8(param_1,param_2);
    iVar4 = (int)puVar2 - (int)param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar3 = (int)param_2 - (int)puVar2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar4 >> 4 < iVar3 >> 4) {
      FUN_0044d278(param_1,puVar2,0,param_4);
      param_1 = puVar2;
    }
    else {
      FUN_0044d278(puVar2,param_2,0,param_4);
      param_2 = puVar2;
    }
  }
  return;
}

