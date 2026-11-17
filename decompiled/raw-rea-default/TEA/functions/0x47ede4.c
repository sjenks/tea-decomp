// rea decompile_all
// name: FUN_0047ede4
// address: 0x47ede4
// body: available
// range: 0x47ede4-0x47ef9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0047ede4(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x502858);
  iVar4 = FUN_004d1c6c((int)local_14,param_3,param_4 - (int)param_3);
  if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x1a8)) {
    FUN_0040e240(param_1 + 400,*(int *)(param_1 + 0x198),iVar4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x198);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(iVar4 + 8) + -4);
        piVar5 = FUN_004cf7b0(iVar1,uVar3,uVar3);
        *(int **)(iVar1 + 8) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar1 + 8),*(undefined4 **)(iVar4 + 8),uVar3);
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
        piVar5 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 0x10;
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0047ef8d;
    }
    FUN_004cc0bc();
  }
LAB_0047ef8d:
  *in_FS_OFFSET = local_3c;
  return;
}

