// rea decompile_all
// name: FUN_0040c5c0
// address: 0x40c5c0
// body: available
// range: 0x40c5c0-0x40c7fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0040c5c0(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_474 [250];
  _SYSTEMTIME local_8c;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  _FILETIME local_40;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ebfe8);
  FileTimeToLocalFileTime((FILETIME *)(param_2 + 0x2008),&local_40);
  FileTimeToSystemTime(&local_40,&local_8c);
  GetDateFormatA(0x400,2,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  local_28 = 0x14;
  FUN_004cf628((int)local_14,local_474);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_004d5c40((int)local_14,local_c[-1],0,1,0x20);
  GetTimeFormatA(0x400,0,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  uVar1 = local_c[-1];
  pcVar2 = FUN_004dc9f4(local_474);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)local_474,(uint)pcVar2,0,(uint)pcVar2);
  local_28 = 0x20;
  local_4c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_5c = FUN_004cf7b0(param_1,uVar1,uVar1);
    local_58 = local_5c + 3;
    *(int **)(param_1 + 8) = local_58;
    local_60 = param_1;
    local_68 = local_c;
    local_6c = *(undefined4 **)(param_1 + 8);
    local_64 = uVar1;
    FUN_004dc7d4(local_6c,local_c,uVar1);
  }
  else {
    local_50 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_54 = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
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
      if (iVar3 != 0) goto LAB_0040c7e4;
    }
    local_70 = local_c + -3;
    local_74 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0040c7e4:
  *in_FS_OFFSET = local_38;
  return param_1;
}

