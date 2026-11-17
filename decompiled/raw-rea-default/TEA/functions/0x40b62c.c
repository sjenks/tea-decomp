// rea decompile_all
// name: FUN_0040b62c
// address: 0x40b62c
// body: available
// range: 0x40b62c-0x40b8aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0040b62c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ebe18);
joined_r0x0040b648:
  do {
    do {
      iVar1 = param_2;
      if (iVar1 == param_3) {
        *in_FS_OFFSET = local_2c;
        return;
      }
      param_2 = iVar1 + 0x80;
    } while (iVar1 == 0);
    if (*(int *)(iVar1 + 0x70) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x70) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x70) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b6f3;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 0x70) = 0;
    }
LAB_0040b6f3:
    if (*(int *)(iVar1 + 0x60) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x60) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x60) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b77d;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
LAB_0040b77d:
    FUN_0040b4f0(iVar1 + 0x38,*(int *)(iVar1 + 0x3c),*(int *)(iVar1 + 0x40));
    FUN_004cc0bc();
    FUN_0040b4f0(iVar1 + 0x18,*(int *)(iVar1 + 0x1c),*(int *)(iVar1 + 0x20));
    FUN_004cc0bc();
  } while (*(int *)(iVar1 + 8) == 0);
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
    piVar2 = (int *)(*(int *)(iVar1 + 8) + -0xc);
    if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2 + 1;
    }
    if (iVar3 != 0) goto joined_r0x0040b648;
  }
  FUN_004cc0bc();
  *(undefined4 *)(iVar1 + 8) = 0;
  goto joined_r0x0040b648;
}

