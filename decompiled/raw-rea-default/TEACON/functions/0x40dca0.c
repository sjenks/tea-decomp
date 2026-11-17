// rea decompile_all
// name: FUN_0040dca0
// address: 0x40dca0
// body: available
// range: 0x40dca0-0x40dd11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0040dca0(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char local_104 [256];
  
  uVar3 = (uint)*(byte *)(param_2 + 7);
  pbVar2 = (byte *)(param_2 + 8);
  FUN_0041ee4c((undefined4 *)local_104,0,(uint)*(byte *)(param_2 + 1));
  for (; *param_3 != 0xff; param_3 = param_3 + 1) {
    local_104[*param_3] = local_104[*param_3] + '\x01';
  }
  do {
    if ((int)uVar3 < 1) {
      return pbVar2;
    }
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (local_104[bVar1] != '\0');
  return (byte *)0x0;
}

