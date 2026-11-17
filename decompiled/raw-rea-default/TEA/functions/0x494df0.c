// rea decompile_all
// name: FUN_00494df0
// address: 0x494df0
// body: available
// range: 0x494df0-0x494f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00494df0(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_004dce64(0x507540);
  if (param_1[6] != 0) {
    FUN_00495b84(param_1);
    *(int *)(param_1[9] + 0x12) = param_1[4] + -1;
    *(int *)(param_1[9] + 0x1b) = param_1[5] + -1;
    uVar3 = FUN_00494708(*param_1);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)param_1[9] = 0;
      *(undefined4 *)(param_1[9] + 9) = 0;
    }
    else {
      iVar4 = GetSystemMetrics(DAT_00509de8);
      iVar5 = GetSystemMetrics(DAT_00509df0);
      *(int *)param_1[9] = -iVar4;
      *(int *)(param_1[9] + 9) = -iVar5;
      *(int *)(param_1[9] + 0x12) = *(int *)(param_1[9] + 0x12) + iVar4;
      *(int *)(param_1[9] + 0x1b) = *(int *)(param_1[9] + 0x1b) + iVar5;
    }
    if ((char)param_1[10] != '\0') {
      *(undefined1 *)(param_1 + 10) = 0;
      for (pcVar2 = (char *)param_1[6]; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x55)) {
        FUN_00495978(param_1,pcVar2);
      }
      FUN_00495374(param_1);
    }
    FUN_00495318((int)param_1);
    iVar5 = 0;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      if (*(int *)(*(int *)(iVar4 + 1) + 0xc) != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    FUN_004949e0(&local_8,iVar5);
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      iVar5 = *(int *)(iVar4 + 1);
      piVar1 = (int *)(iVar4 + 0x31);
      if (*(int *)(iVar5 + 0xc) == 0) {
        *(int *)(iVar5 + 0x20) = *piVar1;
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar4 + 0x3a);
        *(int *)(iVar5 + 0x28) = (*(int *)(iVar4 + 0x43) - *piVar1) + 1;
        *(int *)(iVar5 + 0x2c) = (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1;
      }
      else {
        FUN_00494a40(&local_8,*(HWND *)(iVar5 + 0xc),(HWND)0x0,*piVar1,*(int *)(iVar4 + 0x3a),
                     (*(int *)(iVar4 + 0x43) - *piVar1) + 1,
                     (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1,0x14);
      }
    }
    FUN_00494a94(&local_8,2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

