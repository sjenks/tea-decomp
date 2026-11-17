// rea decompile_all
// name: FUN_0040a218
// address: 0x40a218
// body: available
// range: 0x40a218-0x40a337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_0040a218(int param_1)

{
  undefined4 *puVar1;
  LPCSTR lpFileName;
  BOOL BVar2;
  DWORD in_ECX;
  bool bVar3;
  DWORD DVar4;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar5;
  DWORD local_8;
  
  local_8 = in_ECX;
  if (*(int *)(param_1 + 0x14) == -1) {
    do {
      pvVar5 = (HANDLE)0x0;
      dwFlagsAndAttributes = 0x80;
      dwCreationDisposition = 3;
      lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      dwShareMode = 3;
      DVar4 = 0x80000000;
      lpFileName = (LPCSTR)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 0xc) +
                                                  *(int *)(param_1 + 0xc) * 4) + 0x18))();
      pvVar5 = CreateFileA(lpFileName,DVar4,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                           dwFlagsAndAttributes,pvVar5);
      *(HANDLE *)(param_1 + 0x14) = pvVar5;
      if (pvVar5 != (HANDLE)0xffffffff) {
        if (*(int *)(param_1 + 0x18) != 0) {
          SetFilePointer(*(HANDLE *)(param_1 + 0x14),*(int *)(param_1 + 0x18),(PLONG)0x0,0);
        }
        goto LAB_0040a2d6;
      }
      DVar4 = GetLastError();
      puVar1 = DAT_0042c484;
      if (DVar4 != 4) {
        return false;
      }
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[5] != -1) {
          DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 0x14),0,(PLONG)0x0,1);
          puVar1[6] = DVar4;
          CloseHandle((HANDLE)puVar1[5]);
          puVar1[5] = 0xffffffff;
          break;
        }
      }
    } while (puVar1 != (undefined4 *)0x0);
    bVar3 = false;
  }
  else {
LAB_0040a2d6:
    BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x14),(LPVOID)(param_1 + 0x7f0),0x4000,&local_8,
                     (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      bVar3 = false;
    }
    else {
      *(undefined4 *)(param_1 + 0x47f8) = 0;
      *(LPVOID *)(param_1 + 0x47f0) = (LPVOID)(param_1 + 0x7f0);
      *(DWORD *)(param_1 + 0x47f4) = (local_8 + 3 & 0xfffffffc) + param_1 + 0x7f0;
      bVar3 = local_8 != 0;
    }
  }
  return bVar3;
}

