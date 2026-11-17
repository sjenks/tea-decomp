// rea decompile_all
// name: FUN_004d4534
// address: 0x4d4534
// body: available
// range: 0x4d4534-0x4d464c inclusive
// range: 0x4d469b-0x4d46c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004d4534(int *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x514c40);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_004d1504(local_24,param_1,'\x01');
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_004d4740((int)local_24);
    if (cVar1 != '\0') {
      local_50 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        local_54 = FUN_004d0a2c();
        piVar3 = &local_54;
        piVar4 = (int *)FUN_004d1758(*param_1);
        local_50 = FUN_004d1764(piVar4);
        bVar2 = FUN_004d1694(&local_50,piVar3);
        if (bVar2) break;
        *param_2 = (undefined1)local_50;
        param_2 = param_2 + 1;
        param_1[2] = param_1[2] + 1;
        piVar3 = (int *)FUN_004d1758(*param_1);
        FUN_004d1804(piVar3);
      }
      local_58 = FUN_004d0a2c();
      bVar2 = FUN_004d1694(&local_50,&local_58);
      if (bVar2) {
        if (param_3 < 0) {
          local_4c = 2;
        }
        else {
          local_4c = 6;
        }
      }
    }
    local_2c = local_2c + -1;
    FUN_004d1860((int)local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

