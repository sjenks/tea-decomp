// rea decompile_all
// name: FUN_0040a09c
// address: 0x40a09c
// body: available
// range: 0x40a09c-0x40a208 inclusive
// range: 0x40a20e-0x40a214 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_0040a09c(char param_1,int param_2,int param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte bVar5;
  byte *pbVar6;
  byte local_2c [32];
  int local_c;
  uint local_8;
  
  pbVar6 = local_2c;
  local_8 = 0x2a;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar5 = *param_4;
        param_4 = param_4 + 1;
        if ((bVar5 & 0xf7) != 4) break;
        *pbVar6 = bVar5;
        pbVar6 = pbVar6 + 1;
        param_5 = param_5 + 1;
      }
      piVar2 = param_5 + 1;
      local_c = *param_5;
      if (local_c != 0) {
        if (param_1 == '\0') {
          local_8 = (uint)(local_c == 1);
        }
        else {
          iVar4 = FUN_0040d944(local_c);
          if ((param_3 < iVar4) || (iVar4 = FUN_0040d960(local_c), iVar4 < param_3)) {
            local_8 = 0;
          }
          else {
            local_8 = 1;
          }
          if (((local_8 != 0) && (param_1 == '\x02')) &&
             (bVar3 = FUN_0040d73c(local_c,param_2), CONCAT31(extraout_var,bVar3) == 0)) {
            local_8 = 0;
          }
        }
      }
      if ((bVar5 & 8) != 0) {
        if (param_1 != '\x01') {
          local_8 = (uint)(local_8 == 0);
        }
        bVar5 = bVar5 & 0xf7;
      }
      if (((bVar5 == 1) && (local_8 != 0)) || ((bVar5 == 2 && (local_8 == 0)))) break;
      param_5 = piVar2;
      if (bVar5 == 5) {
        pbVar6 = pbVar6 + -1;
        if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
          local_8 = (uint)(local_8 == 0);
        }
      }
      else if (bVar5 == 3) {
        return local_8;
      }
    }
    if (pbVar6 == local_2c) break;
    pbVar1 = pbVar6 + -1;
    while (pbVar1 < pbVar6) {
      bVar5 = *param_4;
      param_4 = param_4 + 1;
      piVar2 = piVar2 + 1;
      if ((bVar5 & 0xf7) == 4) {
        pbVar6 = pbVar6 + 1;
      }
      else if ((bVar5 & 0xf7) == 5) {
        pbVar6 = pbVar6 + -1;
      }
    }
    param_5 = piVar2;
    if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
      local_8 = (uint)(local_8 == 0);
    }
  }
  return local_8;
}

