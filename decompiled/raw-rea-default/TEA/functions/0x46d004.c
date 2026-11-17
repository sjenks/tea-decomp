// rea decompile_all
// name: FUN_0046d004
// address: 0x46d004
// body: available
// range: 0x46d004-0x46d2c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046d048) */

void __cdecl FUN_0046d004(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4fdfc8);
  local_c = &DAT_00513d64;
  FUN_0046d2c8((int)local_24,(int)param_1,(int)local_14,param_3);
  iVar4 = param_1[0x2c] * 0x80 + param_1[0x25];
  local_2c = (int *)0x0;
  iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_2c = FUN_004cf7b0(local_34,uVar1,uVar1);
    local_2c = local_2c + 3;
    FUN_004dc7d4(local_2c,*(undefined4 **)(iVar4 + 8),uVar1);
  }
  else {
    local_2c = *(int **)(iVar4 + 8);
    piVar3 = local_2c + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_0046524c(param_1[0xe],*param_1,param_2,(int)local_24,(int)local_34,(int)local_14);
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar3 = local_2c + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d1c7;
    }
    FUN_004cc0bc();
    local_2c = (int *)0x0;
  }
LAB_0046d1c7:
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d23d;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_0046d23d:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d2b6;
    }
    FUN_004cc0bc();
  }
LAB_0046d2b6:
  *in_FS_OFFSET = local_58;
  return;
}

