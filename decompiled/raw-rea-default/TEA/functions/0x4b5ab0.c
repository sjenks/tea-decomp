// rea decompile_all
// name: FUN_004b5ab0
// address: 0x4b5ab0
// body: available
// range: 0x4b5ab0-0x4b5b64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __cdecl FUN_004b5ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  cVar2 = '\x01';
  iVar4 = 0;
  while (iVar4 = FUN_004b5d60((undefined4 *)(param_1 + 8),iVar4), iVar4 != 0) {
    if ((cVar2 == '\0') || (cVar2 = FUN_004b5ab0(iVar4,param_2,param_3,param_4), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  local_14 = 0x7ffb;
  local_8 = 0;
  local_10 = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x26); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[5]) {
    if ((param_4 != puVar1) && (cVar3 = (*(code *)**(undefined4 **)*puVar1)(), cVar3 != '\0')) {
      if ((cVar2 == '\0') || (iVar4 = FUN_0048e7e0(*puVar1,(int)&local_14), iVar4 == 0)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
    }
  }
  return cVar2;
}

