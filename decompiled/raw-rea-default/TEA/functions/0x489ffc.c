// rea decompile_all
// name: FUN_00489ffc
// address: 0x489ffc
// body: available
// range: 0x489ffc-0x48a091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00489ffc(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00488700(param_2);
  local_c = *(int *)(param_1 + 0x15);
  local_8 = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_0048a3c4(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    FUN_00488750(local_1c,param_2);
    piVar3 = local_1c;
    FUN_00489f44(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_0048a2b4(*(uint **)(param_1 + 4),param_2,local_14,piVar3,iVar4,iVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar1;
  }
  return uVar2;
}

