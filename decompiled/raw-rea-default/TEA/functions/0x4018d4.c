// rea decompile_all
// name: FUN_004018d4
// address: 0x4018d4
// body: available
// range: 0x4018d4-0x401c8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004018d4(int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4ea494);
  FUN_004156f4(param_1);
  pCVar1 = (LPCSTR)FUN_00408c98(param_1[0x18],param_1[0x19]);
  FUN_0041b1ec(param_1 + 0x45,pCVar1);
  FUN_00408d0c(local_24,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0x74,(int)local_24);
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
      if (iVar2 != 0) goto LAB_004019b8;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_004019b8:
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  lpString = (uint *)FUN_004cc180();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)lpString,iVar2 + 1);
  *(CHAR *)((int)lpString + iVar2) = '\0';
  FUN_00408cbc(local_34,param_1[0x18],param_1[0x19]);
  FUN_00401d10((int)local_14,(int)local_34,lpString);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar3 = (int *)(local_2c + -0xc);
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
      if (iVar2 != 0) goto LAB_00401a92;
    }
    FUN_004cc0bc();
    local_2c = 0;
  }
LAB_00401a92:
  FUN_004b0c44(param_1,local_c);
  FUN_004cc0cc();
  FUN_00408d5c(local_44,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0xa3,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar3 = (int *)(local_3c + -0xc);
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
      if (iVar2 != 0) goto LAB_00401b5f;
    }
    FUN_004cc0bc();
    local_3c = 0;
  }
LAB_00401b5f:
  iVar2 = FUN_00408c68(param_1[0x18],param_1[0x19]);
  if (iVar2 != 0) {
    FUN_00408e24(param_1[0x18],param_1[0x19]);
    FUN_0041b24c(param_1 + 0x180);
    FUN_0041b24c(param_1 + 0x1af);
    FUN_0041b24c(param_1 + 0x1de);
    FUN_0041b24c(param_1 + 0x20d);
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar2 = *local_c + 1;
      }
      if (iVar2 != 0) goto LAB_00401c7a;
    }
    FUN_004cc0bc();
  }
LAB_00401c7a:
  *in_FS_OFFSET = local_68;
  return;
}

