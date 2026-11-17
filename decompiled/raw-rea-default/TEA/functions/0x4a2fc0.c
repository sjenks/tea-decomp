// rea decompile_all
// name: FUN_004a2fc0
// address: 0x4a2fc0
// body: available
// range: 0x4a2fc0-0x4a30b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a2fc0(int *param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  LOGFONTA local_74;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint *local_14;
  uint local_10 [2];
  uint *local_8;
  
  FUN_004dce64(0x50a6bc);
  FUN_004a5774(*param_1);
  local_8 = (uint *)param_1[6];
  if (local_8 != (uint *)0x0) {
    local_28 = 0x14;
    local_1c = local_1c + -1;
    FUN_00494064(local_8,0);
    FUN_004cc0bc();
  }
  local_28 = 0x20;
  puVar1 = FUN_0048f708(local_10,param_2,0);
  local_1c = local_1c + 2;
  iVar2 = GetObjectA((HANDLE)*puVar1,0x3c,&local_74);
  cVar3 = iVar2 != 0;
  local_1c = local_1c + -2;
  FUN_00494064(local_10,0);
  if (cVar3 != '\0') {
    local_74.lfUnderline = (BYTE)param_1[0xf];
    local_14 = (uint *)FUN_004cc0f0();
    if (local_14 != (uint *)0x0) {
      local_28 = 0x38;
      FUN_0048f7fc(local_14,&local_74);
      local_28 = 0x2c;
    }
    param_1[6] = (int)local_14;
  }
  if (param_3 != '\0') {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  *in_FS_OFFSET = local_38;
  return;
}

