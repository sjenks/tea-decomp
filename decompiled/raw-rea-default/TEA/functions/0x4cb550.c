// rea decompile_all
// name: FUN_004cb550
// address: 0x4cb550
// body: available
// range: 0x4cb550-0x4cb5e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004cb550(uint *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = FUN_004dc9f4(param_2);
  if ((char *)param_1[5] < pcVar1 + 1) {
    FUN_004cb794((int)param_1);
  }
  if (param_1[0xb] == 0) {
    FUN_004dc9f4(param_2);
    uVar2 = FUN_004cc180();
    FUN_004cc0cc();
    param_1[0xb] = uVar2;
  }
  pcVar1 = FUN_004dc9f4(param_2);
  FUN_004dcc40((undefined4 *)param_1[0xb],param_2,pcVar1 + 1);
  param_1[4] = param_1[0xb];
  param_1[5] = (uint)(pcVar1 + 1);
  *param_1 = *param_1 | 1;
  if (param_3 == '\0') {
    uVar2 = CONCAT31((int3)(param_1[0xb] >> 8),1);
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    uVar2 = (uint)(iVar3 != 0);
  }
  return uVar2;
}

