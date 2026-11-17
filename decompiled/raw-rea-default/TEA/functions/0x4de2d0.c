// rea decompile_all
// name: FUN_004de2d0
// address: 0x4de2d0
// body: available
// range: 0x4de2d0-0x4de4c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_004de2d0(LPCWSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_005178c0 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_004de33b:
      DVar4 = 1;
      goto LAB_004de35c;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_004de35c;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_004de35c;
      }
      goto LAB_004de357;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_004de357:
      DVar4 = 3;
      goto LAB_004de35c;
    }
    goto LAB_004de33b;
  }
  DVar4 = 5;
LAB_004de35c:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00517338 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_004df280(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_004df280(uVar3);
  }
  else {
    bVar1 = FUN_004ddea8(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004defc4(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_004df280(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

