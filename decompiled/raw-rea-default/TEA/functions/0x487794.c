// rea decompile_all
// name: FUN_00487794
// address: 0x487794
// body: available
// range: 0x487794-0x48784f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


PHKEY __cdecl FUN_00487794(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5)

{
  HKEY pHVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x504654);
  local_18 = 8;
  *param_1 = (HKEY)0x0;
  pHVar1 = (HKEY)FUN_00496d48(param_3);
  param_1[1] = pHVar1;
  if (param_5 == 0) {
    RegCreateKeyExA(param_2,(LPCSTR)param_1[1],0,s_HKEY_CLASSES_ROOT_0050453c + 0x11,0,param_4,
                    (LPSECURITY_ATTRIBUTES)0x0,param_1,&local_2c);
  }
  else {
    RegOpenKeyExA(param_2,(LPCSTR)param_1[1],0,param_4,param_1);
  }
  if (*param_1 != (HKEY)0x0) {
    FUN_00487964(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(param_1 + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(param_1 + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

