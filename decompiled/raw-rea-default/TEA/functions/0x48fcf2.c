// rea decompile_all
// name: FUN_0048fcf2
// address: 0x48fcf2
// body: available
// range: 0x48fcf2-0x48fe0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __stdcall FUN_0048fcf2(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  
  bVar5 = 0;
  piVar1 = (int *)(unaff_EBP + 8);
  FUN_004dce64(0x5067ec);
  *(undefined2 *)(unaff_EBP + -0x14) = 8;
  *(undefined ***)*piVar1 = &PTR_FUN_00506a60;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x16) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2a) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 0;
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x1e) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2e) = 1;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x33) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x32) = *(undefined1 *)(iVar2 + 0x33);
  *(undefined4 *)(*piVar1 + 6) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  puVar4 = (undefined4 *)(*piVar1 + 10);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)(*piVar1 + 0x42) = 3;
  *(undefined1 *)(*piVar1 + 0x38) = 0;
  *(undefined1 *)(*piVar1 + 0x39) = 0;
  *(undefined1 *)(*piVar1 + 4) = 0;
  *(undefined1 *)(*piVar1 + 5) = 0;
  *(undefined1 *)(*piVar1 + 0x37) = 1;
  *(undefined1 *)(*piVar1 + 0x36) = 1;
  *(undefined4 *)(*piVar1 + 0x3e) = 0;
  *(undefined4 *)(*piVar1 + 0x3a) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0048ff7c(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

