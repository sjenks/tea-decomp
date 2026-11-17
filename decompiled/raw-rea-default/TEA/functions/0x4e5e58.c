// rea decompile_all
// name: FUN_004e5e58
// address: 0x4e5e58
// body: available
// range: 0x4e5e58-0x4e5f72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004e5e58(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_00518bd8 == (LPCSTR)0x0) && (DAT_00518bd4 == (code *)0x0)) {
    if (DAT_00518de8 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_004e5c48(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_004e5c48(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_004e5e14();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00518bdc,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_004dc9f4(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00518bdf,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00518bd4 != (code *)0x0) {
    if (DAT_00518bd4 == (code *)0xffffffff) {
      return;
    }
    (*DAT_00518bd4)();
  }
  if (DAT_00518bd8 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_00518bd8 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_00518bd8 == '\0') {
    return;
  }
  FUN_004e5d98(DAT_00518bd8,param_1);
  return;
}

