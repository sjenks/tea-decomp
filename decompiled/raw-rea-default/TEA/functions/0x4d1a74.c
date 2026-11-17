// rea decompile_all
// name: FUN_004d1a74
// address: 0x4d1a74
// body: available
// range: 0x4d1a74-0x4d1b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_004d1a74(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x514664);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_004d1700(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar4);
  }
  cVar1 = FUN_004d1b5c();
  if (cVar1 != '\0') {
    bVar2 = FUN_004d1b68((undefined *)param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517358);
    }
    bVar2 = FUN_004d1b7c(param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517370);
    }
  }
  iVar3 = FUN_004d1758(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_004d1758(*param_2);
    uVar5 = FUN_004d1450(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_004d1758(*param_2);
      FUN_004d1bb4(local_34,piVar4);
    }
  }
  bVar2 = FUN_004d16ec(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_004d1084(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

