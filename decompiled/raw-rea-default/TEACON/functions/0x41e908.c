// rea decompile_all
// name: FUN_0041e908
// address: 0x41e908
// body: available
// range: 0x41e908-0x41ea4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0041e908(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_0041f3fc(0x431908);
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  FUN_00416e74((int)local_14,puVar1);
  FUN_004247b0(1,*(uint **)(*param_2 + 8));
  FUN_004247b0(2,*(uint **)(*param_2 + 0x18));
  FUN_004247b0(4,*(uint **)(*param_2 + 0x28));
  FUN_004247b0(0x10,*(uint **)(*param_2 + 0x38));
  FUN_004247b0(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  FUN_00416c68(param_1,puVar1);
  uVar2 = FUN_004247b0(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_0041ea3a;
    }
    FUN_00414f78();
  }
LAB_0041ea3a:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

