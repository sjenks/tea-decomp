// rea decompile_all
// name: FUN_00467ae8
// address: 0x467ae8
// body: available
// range: 0x467ae8-0x467bf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00467ae8(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  DWORD local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  FUN_004dce64(0x4fc6d0);
  local_30 = FUN_00416320(param_1,param_2,param_3,param_4);
  iVar1 = GetDlgCtrlID(param_3);
  if ((((iVar1 == 0x2f44) || ((0x2e85 < iVar1 && (iVar1 < 0x2e9a)))) ||
      ((0x2e99 < iVar1 && (iVar1 < 0x2eae)))) || ((0x2e71 < iVar1 && (iVar1 < 0x2e86)))) {
    if ((0x2e71 < iVar1) && (iVar1 < 0x2e86)) {
      DVar2 = GetSysColor(2);
      SetTextColor(param_2,DVar2);
    }
    DVar2 = GetSysColor(5);
    SetBkColor(param_2,DVar2);
    if (param_1[0x2d] == 0) {
      local_8 = (uint *)FUN_004cc0f0();
      if (local_8 != (uint *)0x0) {
        local_1c = 0x14;
        cVar3 = '\x01';
        local_34 = GetSysColor(5);
        FUN_004ab84c(local_8,&local_34,cVar3);
      }
      param_1[0x2d] = (int)local_8;
    }
    local_30 = *(undefined4 *)param_1[0x2d];
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_30;
}

