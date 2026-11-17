// rea decompile_all
// name: FUN_0048a629
// address: 0x48a629
// body: available
// range: 0x48a629-0x48a6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HMODULE __stdcall FUN_0048a629(HANDLE param_1,LPCVOID param_2)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR local_360 [260];
  _MEMORY_BASIC_INFORMATION local_25c;
  HMODULE local_23c;
  
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(param_1,param_2,&local_25c,0x1c);
    if (SVar2 == 0) {
      local_23c = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_00504fd3;
      pCVar4 = local_360;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(local_25c.AllocationBase,local_360,0x104);
      FUN_0048ab9c();
      local_23c = local_25c.AllocationBase;
    }
  }
  return local_23c;
}

