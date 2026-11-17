// rea decompile_all
// name: FUN_0046d2c8
// address: 0x46d2c8
// body: available
// range: 0x46d2c8-0x46d86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046d30c) */
/* WARNING: Removing unreachable block (ram,0x0046d368) */
/* WARNING: Removing unreachable block (ram,0x0046d43c) */
/* WARNING: Removing unreachable block (ram,0x0046d3ee) */
/* WARNING: Removing unreachable block (ram,0x0046d42f) */
/* WARNING: Removing unreachable block (ram,0x0046d4d3) */
/* WARNING: Removing unreachable block (ram,0x0046d4f7) */
/* WARNING: Removing unreachable block (ram,0x0046d502) */
/* WARNING: Removing unreachable block (ram,0x0046d542) */
/* WARNING: Removing unreachable block (ram,0x0046d51b) */
/* WARNING: Removing unreachable block (ram,0x0046d53b) */
/* WARNING: Removing unreachable block (ram,0x0046d528) */
/* WARNING: Removing unreachable block (ram,0x0046d547) */
/* WARNING: Removing unreachable block (ram,0x0046d54b) */
/* WARNING: Removing unreachable block (ram,0x0046d599) */

int __cdecl FUN_0046d2c8(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_101 [65];
  uint local_c0;
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4fe0c4);
  local_c = &DAT_00513d64;
  local_54 = local_54 + 1;
  local_60 = 0x2c;
  FUN_00419f9c((int)local_24,*(int **)(param_2 + 0x214),(int)local_14,param_4);
  local_54 = local_54 + 1;
  local_60 = 0x20;
  if ((uint)local_1c[-1] < 0x81) {
    if ((local_1c[-1] != 0) && (param_3 != 0)) {
      FUN_004cf384(param_3,(int)local_14);
    }
  }
  else {
    local_c0 = local_1c[-1];
    local_101[0] = 0;
    uVar3 = DAT_005140ac;
    if (local_c0 <= DAT_005140ac) {
      uVar3 = local_c0;
    }
    FUN_004cfad4((int)local_24,0,uVar3,(uint)local_101,0,0,0);
  }
  local_60 = 0x74;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar3 = local_1c[-1];
    piVar1 = FUN_004cf7b0(param_1,uVar3,uVar3);
    *(int **)(param_1 + 8) = piVar1 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_1c,uVar3);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_1c;
    piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar1 != &DAT_00513d58) {
      *piVar1 = *piVar1 + 1;
    }
  }
  local_60 = 0x8c;
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      piVar1 = local_1c + -3;
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d7be;
    }
    FUN_004cc0bc();
    local_1c = (undefined4 *)0x0;
  }
LAB_0046d7be:
  local_54 = local_54 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d851;
    }
    FUN_004cc0bc();
  }
LAB_0046d851:
  *in_FS_OFFSET = local_70;
  return param_1;
}

