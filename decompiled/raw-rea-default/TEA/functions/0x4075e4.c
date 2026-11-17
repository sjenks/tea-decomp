// rea decompile_all
// name: FUN_004075e4
// address: 0x4075e4
// body: available
// range: 0x4075e4-0x407686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040762e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407636 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl FUN_004075e4(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  FUN_004dce64(0x4eb4e0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0x100;
  FUN_004dc9f4(param_2);
  puVar1 = (undefined4 *)FUN_004cc180();
  *param_1 = puVar1;
  uVar2 = 0xffffffff;
  do {
    puVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    puVar5 = (uint *)((int)param_2 + (uint)bVar6 * -2 + 1);
    uVar3 = *param_2;
    param_2 = puVar5;
  } while ((char)uVar3 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)puVar5 - uVar2);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + (uint)bVar6 * -2 + 1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

