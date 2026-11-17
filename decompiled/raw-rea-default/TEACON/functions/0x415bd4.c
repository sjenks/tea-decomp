// rea decompile_all
// name: FUN_00415bd4
// address: 0x415bd4
// body: available
// range: 0x415bd4-0x415cc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00415bd4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_0042ea88;
  if (DAT_0042eaac < DAT_0042eaa8) {
    uVar4 = DAT_0042ea84;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_0042ea8c; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_00415824(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_0041551c((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_0042eaac = DAT_0042eaac - SVar3;
          FUN_00415534((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_0041551c((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_0042eaac = DAT_0042eaac - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

