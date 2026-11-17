// rea decompile_all
// name: FUN_00437928
// address: 0x437928
// body: available
// range: 0x437928-0x437b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00437928(int param_1,LPFILETIME param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  _SYSTEMTIME local_74;
  int *local_60;
  char *local_5c;
  int *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined1 *local_4c;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4f3cec);
  bVar1 = FUN_004378c0(param_1,0,param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    GetSystemTime(&local_74);
    SystemTimeToFileTime(&local_74,param_2);
  }
  local_28 = 0x14;
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar5 = *(uint *)(*(int *)(param_1 + 8) + -4);
    local_48 = FUN_004cf7b0(local_14,uVar5,uVar5);
    local_4c = local_14;
    local_58 = local_48 + 3;
    local_54 = *(undefined4 **)(param_1 + 8);
    local_50 = uVar5;
    local_44 = local_58;
    local_c = local_58;
    FUN_004dc7d4(local_58,local_54,uVar5);
  }
  else {
    local_3c = *(int **)(param_1 + 8);
    local_40 = local_14;
    piVar4 = local_3c + -3;
    local_c = local_3c;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_1c = local_1c + 1;
  local_28 = 8;
  uVar5 = DAT_005140ac;
  if ((uint)local_c[-1] < DAT_005140ac) {
    uVar5 = local_c[-1];
  }
  local_5c = FUN_00420b88((char *)local_c,'\\',uVar5);
  uVar5 = DAT_005140ac;
  if (local_5c != (char *)0x0) {
    uVar5 = (int)local_5c - (int)local_c;
  }
  if (uVar5 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar5 + 1;
  }
  pcVar2 = FUN_004dc9f4((uint *)s_Backup_of_004f35ea);
  FUN_004cfad4((int)local_14,uVar5,0,0x4f35ea,(uint)pcVar2,0,(uint)pcVar2);
  thunk_FUN_004e0588((LPCSTR)local_c);
  FUN_004df65c(*(LPCSTR *)(param_1 + 8),(LPCSTR)local_c);
  local_1c = local_1c + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar3 != 0) goto LAB_00437b03;
    }
    local_60 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_00437b03:
  *in_FS_OFFSET = local_38;
  return;
}

