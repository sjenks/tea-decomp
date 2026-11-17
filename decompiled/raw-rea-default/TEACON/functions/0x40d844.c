// rea decompile_all
// name: FUN_0040d844
// address: 0x40d844
// body: available
// range: 0x40d844-0x40d942 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0040d844(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  uint local_8;
  
  if (DAT_00434680 == 1) {
    local_8 = 0;
    do {
      bVar1 = true;
      piVar5 = &DAT_00434280;
      local_10 = 0;
      do {
        if ((*piVar5 != 0) && (0 < *piVar5 == local_8)) {
          if (bVar1) {
            if (local_8 == 0) {
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2d);
            }
            else {
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2b);
            }
            bVar1 = false;
          }
          if (local_8 == 0) {
            iVar2 = -*piVar5;
          }
          else {
            iVar2 = *piVar5;
          }
          iVar4 = 0;
          if (0 < iVar2) {
            do {
              uVar3 = FUN_00406780(*(int *)(param_1 + 0x112c),*(int *)(param_1 + 0x1130),local_10);
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,(char)uVar3);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
          }
        }
        local_10 = local_10 + 1;
        piVar5 = piVar5 + 1;
      } while (local_10 < 0x100);
      local_8 = local_8 + 1;
    } while ((int)local_8 < 2);
  }
  return;
}

