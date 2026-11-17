// rea decompile_all
// name: FUN_00488f94
// address: 0x488f94
// body: available
// range: 0x488f94-0x4890e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00488f94(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
    if (*(int *)((int)param_1 + 6) != 0) {
      piVar4 = (int *)0x0;
      for (piVar2 = *(int **)(*(int *)((int)param_1 + 6) + 8);
          (piVar2 != (int *)0x0 && (piVar2 != param_1)); piVar2 = *(int **)((int)piVar2 + 0x3e)) {
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar1 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
        if ((piVar1 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 3)))) {
          piVar4 = (int *)0x0;
        }
        else if (piVar4 == (int *)0x0) {
          piVar4 = piVar1;
        }
      }
      piVar2 = param_1;
      if (piVar4 == (int *)0x0) {
        piVar4 = param_1;
      }
      while (piVar1 = piVar2, *(int *)((int)piVar1 + 0x3e) != 0) {
        piVar2 = *(int **)((int)piVar1 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar2 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
        if ((piVar2 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 3)))) break;
      }
      while( true ) {
        if ((int)((uint)*(byte *)(piVar4 + 0x15) << 0x1c) >> 0x1c == 1) {
          *(byte *)(piVar4 + 0x15) = *(byte *)(piVar4 + 0x15) & 0xf0;
          FUN_004903b8((int)piVar4);
          FUN_00490404((int)piVar4);
        }
        if (piVar1 == piVar4) break;
        piVar2 = *(int **)((int)piVar4 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar4 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
      }
    }
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0 | 1;
  }
  return;
}

