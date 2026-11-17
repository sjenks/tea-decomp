// rea decompile_all
// name: FUN_00409d44
// address: 0x409d44
// body: available
// range: 0x409d44-0x409fda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00409d44(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a8;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  int local_24;
  int local_14;
  
  FUN_004dce64(0x4ebb04);
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7f;
  }
  if (param_2 <= (uint)(iVar3 >> 7)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = iVar3 - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if (param_2 < (uint)(iVar2 >> 7)) {
      iVar5 = param_2 * 0x80 + *(int *)(param_1 + 4);
      iVar1 = FUN_0040b5a8(iVar3,iVar3,iVar5);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7f;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar3 >> 7) * -0x80;
      FUN_0040b62c(param_1,iVar1,iVar2);
    }
    goto LAB_00409fc8;
  }
  iVar3 = FUN_00473df0((int)local_84);
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  FUN_0040a04c(param_1,*(int *)(param_1 + 8),param_2 - (iVar2 >> 7),iVar3);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar4 = (int *)(local_14 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00409e34;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_00409e34:
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00409eb0;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_00409eb0:
  FUN_0040b4f0(local_4c,local_48,local_44);
  FUN_004cc0bc();
  FUN_0040b4f0(local_6c,local_68,local_64);
  FUN_004cc0bc();
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      piVar4 = (int *)(local_7c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00409fc8;
    }
    FUN_004cc0bc();
  }
LAB_00409fc8:
  *in_FS_OFFSET = local_a8;
  return;
}

