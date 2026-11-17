// rea decompile_all
// name: FUN_004d7320
// address: 0x4d7320
// body: available
// range: 0x4d7320-0x4d7325 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_004d7320(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined1 uVar5;
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [4];
  int iStack_8;
  
  iStack_8 = 0;
  iVar2 = FUN_004cea6c(in_stack_00000008);
  iVar2 = *(int *)(param_1 + 0x14) - iVar2;
  if (0 < iVar2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = iVar2;
      iVar2 = iStack_8;
    }
    for (; iStack_8 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar5 = in_stack_0000000c;
      FUN_004d71e8(auStack_18,*(undefined4 **)(param_1 + 0x278));
      iVar2 = FUN_004d7210(auStack_18);
      FUN_004d7218(iVar2,uVar5);
      iVar2 = iStack_8;
    }
  }
  puVar3 = (undefined1 *)FUN_004cf40c(in_stack_00000008);
  iVar2 = FUN_004cea6c(in_stack_00000008);
  puVar4 = puVar3 + iVar2;
  for (; puVar3 < puVar4; puVar3 = puVar3 + 1) {
    uVar5 = *puVar3;
    FUN_004d71e8(auStack_28,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_28);
    FUN_004d7218(iVar2,uVar5);
  }
  for (; iStack_8 != 0; iStack_8 = iStack_8 + -1) {
    uVar5 = in_stack_0000000c;
    FUN_004d71e8(auStack_38,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_38);
    FUN_004d7218(iVar2,uVar5);
  }
  return;
}

