// rea decompile_all
// name: FUN_0049473d
// address: 0x49473d
// body: available
// range: 0x49473d-0x49492f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049473d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int aiStack_40 [6];
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = FUN_00494722(param_3,*(int *)(param_1 + 0xc));
    local_c = FUN_00494722(param_1,param_2);
    if ((local_8 != -1) && (local_c != -1)) {
      iVar1 = FUN_00495f78(param_3);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_00494722(param_1,*(int *)(param_3 + iVar4 * 4));
          aiStack_40[iVar4] = iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar4 = FUN_00495f78(param_1);
      local_10 = iVar4 + -1;
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          if ((aiStack_40[iVar5] == -1) && (iVar5 != local_8)) {
            iVar2 = iVar2 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      if (iVar2 + iVar4 + -1 < 4) {
        local_14 = *(int *)(local_c * 4 + param_1 + 0x10);
        iVar4 = local_14 >> 8;
        local_18 = iVar4 * (*(int *)(param_3 + 0x1c) >> 8);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_18;
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if (aiStack_40[iVar2] != -1) {
              local_1c = iVar4 * (*(int *)(iVar2 * 4 + param_3 + 0x10) >> 8);
              piVar3 = (int *)(aiStack_40[iVar2] * 4 + param_1 + 0x10);
              *piVar3 = *piVar3 + local_1c;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        *(undefined4 *)(param_1 + local_c * 4) = 0;
        while (local_c = local_c + 1, local_c < 3) {
          if (*(int *)(param_1 + local_c * 4) != 0) {
            *(undefined4 *)(param_1 + -4 + local_c * 4) = *(undefined4 *)(param_1 + local_c * 4);
            *(undefined4 *)(param_1 + local_c * 4) = 0;
            *(undefined4 *)(param_1 + 0xc + local_c * 4) =
                 *(undefined4 *)(param_1 + 0x10 + local_c * 4);
          }
        }
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if ((aiStack_40[iVar2] == -1) && (iVar2 != local_8)) {
              *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_3 + iVar2 * 4);
              local_20 = (int *)(iVar2 * 4 + param_3 + 0x10);
              local_24 = iVar4 * (*local_20 >> 8);
              local_28 = local_24;
              *(int *)(param_1 + 0x10 + local_10 * 4) = local_24;
              local_10 = local_10 + 1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        piVar3 = (int *)(param_1 + 0x1c);
        iVar1 = 0x10000 - local_14 >> 8;
        *piVar3 = *piVar3 / iVar1;
        *piVar3 = *piVar3 << 8;
        iVar4 = 0;
        if (0 < local_10) {
          do {
            piVar3 = (int *)(param_1 + 0x10 + iVar4 * 4);
            *piVar3 = *piVar3 / iVar1;
            *piVar3 = *piVar3 << 8;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_10);
        }
      }
    }
  }
  return;
}

