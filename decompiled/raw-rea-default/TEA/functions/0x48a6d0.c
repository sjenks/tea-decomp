// rea decompile_all
// name: FUN_0048a6d0
// address: 0x48a6d0
// body: available
// range: 0x48a6d0-0x48a850 inclusive
// range: 0x48a865-0x48a88a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpString2;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char local_544 [512];
  CHAR local_344 [256];
  CHAR local_244 [256];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_134;
  CHAR local_130 [260];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x5050d7);
  local_2c = 1;
  *param_3 = param_2;
  FUN_004dc844(param_3,0,200);
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),s_<no_module>_0050528c);
  }
  else {
    pcVar2 = thunk_FUN_004dc924(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00505298);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_0048ac00();
  if (iVar1 == 0) {
    pcVar2 = s_<no_symbol>_005052a9;
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_0048ac50();
    if (iVar1 == 0) {
      iVar1 = FUN_0048aca0();
      if (iVar1 != 0) {
        pcVar2 = local_244;
      }
    }
    else {
      pcVar2 = local_244;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,s__s____d_bytes_0050529b,pcVar2,param_3[1]);
      pcVar2 = local_344;
    }
  }
  local_18 = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),pcVar2,0x80);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

