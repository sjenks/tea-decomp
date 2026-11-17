// rea decompile_all
// name: FUN_004bb10c
// address: 0x4bb10c
// body: available
// range: 0x4bb10c-0x4bb1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004bb10c(int *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  pcVar1 = FUN_004deebc((char *)(param_2 + 5),(LPCSTR)param_1[5],0x104);
  if (pcVar1 == (char *)0x0) {
    *(undefined1 *)(param_2 + 5) = 0;
    uVar2 = 0;
  }
  else {
    DVar3 = GetFileAttributesA((LPCSTR)param_1[5]);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_004bb0cc(DVar3);
      param_2[4] = uVar4;
      local_c.dwLowDateTime = 0;
      local_c.dwHighDateTime = 0;
      local_14.dwLowDateTime = 0;
      local_14.dwHighDateTime = 0;
      local_1c.dwLowDateTime = 0;
      local_1c.dwHighDateTime = 0;
      BVar5 = GetFileTime((HANDLE)param_1[1],&local_c,&local_14,&local_1c);
      if (BVar5 == 1) {
        puVar6 = FUN_0049f29c(&local_20,&local_c);
        *param_2 = *puVar6;
        puVar6 = FUN_0049f29c(&local_24,&local_1c);
        param_2[1] = *puVar6;
        puVar6 = FUN_0049f29c(&local_28,&local_14);
        param_2[2] = *puVar6;
        uVar4 = (**(code **)(*param_1 + 0x38))();
        param_2[3] = uVar4;
        uVar2 = CONCAT31((int3)(uVar4 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

