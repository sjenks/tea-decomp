// rea decompile_all
// name: FUN_0045febc
// address: 0x45febc
// body: available
// range: 0x45febc-0x45ff83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0045febc(int param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5,
                   int param_6,undefined4 param_7)

{
  int iVar1;
  char local_10c [259];
  byte local_9;
  int local_8;
  
  local_9 = *param_2;
  if (local_9 != 0xfc) {
    local_8 = param_1;
    if ((local_9 == 0xfa) || (local_9 == 0xfb)) {
      iVar1 = FUN_00434cb8(param_1,param_2[2]);
      param_2 = (byte *)FUN_0045fc04(local_8,param_2 + 3,(int)param_3,local_9,(uint)param_2[1],
                                     *(int *)(iVar1 + 8),param_4,param_5,param_6,param_7);
    }
    else {
      FUN_004dc844((undefined4 *)local_10c,0,0x100);
      while (0 < param_6) {
        local_10c[*param_3] = local_10c[*param_3] + '\x01';
        param_3 = param_3 + 1;
        param_6 = param_6 + -1;
      }
      param_2 = (byte *)(*(code *)(&PTR_FUN_004fa308)[local_9])
                                  (local_8,param_2 + 1,local_10c,param_5,param_7);
    }
  }
  return param_2;
}

