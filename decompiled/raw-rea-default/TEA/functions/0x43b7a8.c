// rea decompile_all
// name: FUN_0043b7a8
// address: 0x43b7a8
// body: available
// range: 0x43b7a8-0x43bb45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0043b7a8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f4b78);
  FUN_0044e83c(local_c,param_2,0,0);
  iVar2 = param_1;
  FUN_004cf628((int)local_1c,(uint *)s_ExpansionAt_004f3db8);
  uVar1 = FUN_0044e94c((int)local_c,(int)local_1c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043b893;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_0043b893:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1,(uint *)s__aeiou__004f41df);
  }
  iVar2 = param_1 + 0x10;
  FUN_004cf628((int)local_2c,(uint *)s_ExpansionHash_004f3dc4);
  uVar1 = FUN_0044e94c((int)local_c,(int)local_2c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043b96a;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_0043b96a:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1 + 0x10,(uint *)s___aeiou__004f41e7);
  }
  puVar5 = &DAT_004fcb84;
  FUN_004cf628((int)local_3c,(uint *)s_VariablesExclusive_004f3dd2);
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_3c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043ba45;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_0043ba45:
  if (cVar4 != '\0') {
    DAT_004fcb84 = 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x20);
  FUN_004cf628((int)local_4c,(uint *)s_IgnoreUnusedPunctuation_004f3de5);
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_4c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043bb18;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
LAB_0043bb18:
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

