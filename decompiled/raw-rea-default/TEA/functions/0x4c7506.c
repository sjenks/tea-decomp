// rea decompile_all
// name: FUN_004c7506
// address: 0x4c7506
// body: available
// range: 0x4c7506-0x4c7652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __stdcall FUN_004c7506(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_00499da0(piVar2,iVar1 + 8,4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

