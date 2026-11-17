// rea decompile_all
// name: FUN_00485a4c
// address: 0x485a4c
// body: available
// range: 0x485a4c-0x485b58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00485a4c(undefined4 *param_1)

{
  LSTATUS LVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD local_30;
  HKEY local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x50395c);
  local_18 = 8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 0x106;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID__adb880a6_d8ff_11cf_9377_0_005038ad,0,1,&local_2c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_2c,s_Help_library_not_found_005038f4 + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&local_30);
    if (LVar1 == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *param_1 = hModule;
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,s_HtmlHelpA_0050391b);
        param_1[1] = pFVar2;
        if (pFVar2 == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*param_1);
          *param_1 = 0;
        }
      }
    }
    RegCloseKey(local_2c);
  }
  if (param_1[1] != 0) {
    (*(code *)param_1[1])();
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

