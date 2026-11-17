// rea decompile_all
// name: FUN_00413804
// address: 0x413804
// body: available
// range: 0x413804-0x413da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00413834) */
/* WARNING: Removing unreachable block (ram,0x00413914) */
/* WARNING: Removing unreachable block (ram,0x004138c0) */
/* WARNING: Removing unreachable block (ram,0x00413907) */
/* WARNING: Removing unreachable block (ram,0x004139ab) */
/* WARNING: Removing unreachable block (ram,0x004139cf) */
/* WARNING: Removing unreachable block (ram,0x004139da) */
/* WARNING: Removing unreachable block (ram,0x004139fe) */
/* WARNING: Removing unreachable block (ram,0x004139e8) */
/* WARNING: Removing unreachable block (ram,0x004139f7) */
/* WARNING: Removing unreachable block (ram,0x004139f0) */
/* WARNING: Removing unreachable block (ram,0x00413a03) */
/* WARNING: Removing unreachable block (ram,0x00413a07) */
/* WARNING: Removing unreachable block (ram,0x00413a55) */
/* WARNING: Removing unreachable block (ram,0x00413a92) */
/* WARNING: Removing unreachable block (ram,0x00413b7a) */
/* WARNING: Removing unreachable block (ram,0x00413b26) */
/* WARNING: Removing unreachable block (ram,0x00413b6d) */
/* WARNING: Removing unreachable block (ram,0x00413c11) */
/* WARNING: Removing unreachable block (ram,0x00413c35) */
/* WARNING: Removing unreachable block (ram,0x00413c40) */
/* WARNING: Removing unreachable block (ram,0x00413c64) */
/* WARNING: Removing unreachable block (ram,0x00413c4e) */
/* WARNING: Removing unreachable block (ram,0x00413c5d) */
/* WARNING: Removing unreachable block (ram,0x00413c56) */
/* WARNING: Removing unreachable block (ram,0x00413c69) */
/* WARNING: Removing unreachable block (ram,0x00413c6d) */
/* WARNING: Removing unreachable block (ram,0x00413cbb) */

void __cdecl FUN_00413804(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  FUN_0041f3fc(0x42e4f8);
  if (*(int *)(*(int *)(param_3 + 8) + -4) == 0) {
    FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
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
    FUN_00417320(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_0042fab4) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (FUN_0040d844(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_0041acdc(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

