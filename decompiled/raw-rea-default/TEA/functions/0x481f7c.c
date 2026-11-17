// rea decompile_all
// name: FUN_00481f7c
// address: 0x481f7c
// body: available
// range: 0x481f7c-0x48209a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00481fd7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00481fdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl
FUN_00481f7c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_2c;
  undefined4 *local_8;
  
  bVar3 = 0;
  FUN_004dce64(0x502f60);
  puVar2 = param_1;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0x100;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x2d0;
  for (iVar1 = 0; iVar1 < *(short *)((int)param_1 + 0x1a); iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x33] = *param_3;
    param_3 = param_3 + 1;
  }
  local_8 = (undefined4 *)FUN_004cc0f0();
  if (local_8 != (undefined4 *)0x0) {
    FUN_00481c1c(local_8,param_4);
  }
  puVar2 = (undefined4 *)param_1[0x2a];
  if (puVar2 == (undefined4 *)param_1[0x2e]) {
    FUN_00480144((int)(param_1 + 0x28),puVar2,&local_8);
  }
  else {
    *puVar2 = local_8;
    param_1[0x2a] = param_1[0x2a] + 4;
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

