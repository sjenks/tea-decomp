// rea decompile_all
// name: FUN_0042909c
// address: 0x42909c
// body: available
// range: 0x42909c-0x4291c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0042909c(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *in_FS_OFFSET;
  uint local_5c [6];
  uint *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4f2100);
  FUN_004e0344((undefined1 *)local_5c,(byte *)s___d_004f2071);
  local_28 = 0x14;
  FUN_004cf628((int)local_14,local_5c);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_004d573c((int)local_14,(int)(param_1 + 8));
  if (-1 < param_1[0xc]) {
    FUN_004e0344((undefined1 *)local_5c,(byte *)s___d__004f2077);
    uVar1 = local_c[-1];
    pcVar2 = FUN_004dc9f4(local_5c);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)local_5c,(uint)pcVar2,0,(uint)pcVar2);
  }
  FUN_004a7780(*param_1,local_c);
  local_1c = local_1c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar4 = local_c + -3;
      if (puVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar4 = *puVar4 - 1;
        iVar3 = *puVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004291b7;
    }
    local_44 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004291b7:
  *in_FS_OFFSET = local_38;
  return;
}

