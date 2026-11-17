// rea decompile_all
// name: FUN_00479518
// address: 0x479518
// body: available
// range: 0x479518-0x479ab6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00479548) */
/* WARNING: Removing unreachable block (ram,0x00479628) */
/* WARNING: Removing unreachable block (ram,0x004795d4) */
/* WARNING: Removing unreachable block (ram,0x0047961b) */
/* WARNING: Removing unreachable block (ram,0x004796bf) */
/* WARNING: Removing unreachable block (ram,0x004796e3) */
/* WARNING: Removing unreachable block (ram,0x004796ee) */
/* WARNING: Removing unreachable block (ram,0x00479712) */
/* WARNING: Removing unreachable block (ram,0x004796fc) */
/* WARNING: Removing unreachable block (ram,0x0047970b) */
/* WARNING: Removing unreachable block (ram,0x00479704) */
/* WARNING: Removing unreachable block (ram,0x00479717) */
/* WARNING: Removing unreachable block (ram,0x0047971b) */
/* WARNING: Removing unreachable block (ram,0x00479769) */
/* WARNING: Removing unreachable block (ram,0x004797a6) */
/* WARNING: Removing unreachable block (ram,0x0047988e) */
/* WARNING: Removing unreachable block (ram,0x0047983a) */
/* WARNING: Removing unreachable block (ram,0x00479881) */
/* WARNING: Removing unreachable block (ram,0x00479925) */
/* WARNING: Removing unreachable block (ram,0x00479949) */
/* WARNING: Removing unreachable block (ram,0x00479954) */
/* WARNING: Removing unreachable block (ram,0x00479978) */
/* WARNING: Removing unreachable block (ram,0x00479962) */
/* WARNING: Removing unreachable block (ram,0x00479971) */
/* WARNING: Removing unreachable block (ram,0x0047996a) */
/* WARNING: Removing unreachable block (ram,0x0047997d) */
/* WARNING: Removing unreachable block (ram,0x00479981) */
/* WARNING: Removing unreachable block (ram,0x004799cf) */

void __cdecl FUN_00479518(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  FUN_004dce64(0x500bc8);
  if (*(int *)(*(int *)(param_3 + 8) + -4) == 0) {
    FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
                 -*(int *)(*(int *)(param_3 + 8) + -4),0);
  }
  else {
    local_c4 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_110 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_111 = 0;
    uVar3 = local_110;
    if (local_c4 < local_110) {
      uVar3 = local_c4;
    }
    FUN_004cfad4(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_00513d58) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (FUN_004349a0(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_004d5a8c(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

