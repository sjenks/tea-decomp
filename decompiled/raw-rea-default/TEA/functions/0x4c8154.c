// rea decompile_all
// name: FUN_004c8154
// address: 0x4c8154
// body: available
// range: 0x4c8154-0x4c8342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004c8154(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_004a78f0(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a30(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar6 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_004c9ad8(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_004c9b28(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_004c9b94(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_004c9a24(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

