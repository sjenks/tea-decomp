// rea decompile_all
// name: FUN_00420b90
// address: 0x420b90
// body: available
// range: 0x420b90-0x420bd6 inclusive
// range: 0x420bdc-0x420c68 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_00420b90(byte *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    uVar3 = param_3[3];
    if ((uVar3 == 0) || (uVar3 < param_2)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_0042088c(param_3), iVar2 == 0)))) {
        uVar3 = FUN_0042051c((int)*(char *)((int)param_3 + 0x16),(char *)param_1,param_2);
        if ((uVar3 == 0xffffffff) || (uVar3 < param_2)) {
          param_2 = 0;
        }
      }
      else {
        param_2 = 0;
      }
    }
    else {
      if (-1 < (int)(param_3[2] + param_2)) {
        if (param_3[2] == 0) {
          param_3[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_0042088c(param_3);
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      FUN_0041eddc((undefined4 *)*param_3,(undefined4 *)param_1,param_2);
      param_3[2] = param_3[2] + param_2;
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_004213e4(*param_1,param_3);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

