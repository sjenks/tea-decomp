// rea decompile_all
// name: FUN_004dc844
// address: 0x4dc844
// body: available
// range: 0x4dc844-0x4dc8cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_004dc844(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(param_2,param_2);
  if ((param_3 & 0xfffffffc) == 0) {
    if ((param_3 & 3) != 0) {
      *(undefined1 *)param_1 = param_2;
      bVar4 = (char)(param_3 & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)param_1 + (bVar4 - 1)) = uVar3;
      }
    }
    return param_1;
  }
  *(undefined2 *)param_1 = uVar3;
  puVar1 = (undefined4 *)((int)param_1 + (param_3 - 4));
  *(undefined2 *)((int)param_1 + 2) = uVar3;
  uVar2 = *param_1;
  uVar5 = param_3 >> 3;
  puVar6 = param_1;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return param_1;
  }
  do {
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    if (uVar5 == 1) break;
    puVar6[2] = uVar2;
    puVar6[3] = uVar2;
    if (uVar5 == 2) break;
    puVar6[4] = uVar2;
    puVar6[5] = uVar2;
    if (uVar5 == 3) break;
    puVar6[6] = uVar2;
    puVar6[7] = uVar2;
    if (uVar5 == 4) break;
    puVar6[8] = uVar2;
    puVar6[9] = uVar2;
    if (uVar5 == 5) break;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar2;
    puVar6 = puVar6 + 0xc;
    uVar5 = uVar5 - 6;
  } while (uVar5 != 0);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  return param_1;
}

