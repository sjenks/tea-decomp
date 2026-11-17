// rea decompile_all
// name: FUN_0042827c
// address: 0x42827c
// body: available
// range: 0x42827c-0x428365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

void __stdcall FUN_0042827c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_00426830(s___CPPexceptionList_00433bd2,s_xx_cpp_00433be5,0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_00426830(&DAT_00433bec,s_xx_cpp_00433bef,0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_00426830(s_xdrPtr_>xdERRaddr____xl_00433bf6,s_xx_cpp_00433c0e,0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_004281f4((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_00435108 == 2) {
    FUN_00427ce5(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

