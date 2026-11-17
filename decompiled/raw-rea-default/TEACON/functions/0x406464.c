// rea decompile_all
// name: FUN_00406464
// address: 0x406464
// body: available
// range: 0x406464-0x40652c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00406464(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_0041f3fc(0x42b8f8);
  if (param_1 != 0) {
    for (piVar4 = *(int **)(param_1 + 0xc); piVar4 < *(int **)(param_1 + 0x10); piVar4 = piVar4 + 1)
    {
      piVar3 = (int *)FUN_00406564(DAT_0042b5e8,DAT_0042b5ec,piVar4);
      puVar2 = (undefined4 *)*piVar3;
      piVar1 = puVar2 + 0x804;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
        if (piVar3 + 1 != DAT_0042b5ec) {
          FUN_00406584(piVar3 + 1,DAT_0042b5ec,piVar3);
        }
        DAT_0042b5ec = DAT_0042b5ec + -1;
      }
    }
    if (param_1 != 0) {
      FUN_00405280(param_1,3);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

