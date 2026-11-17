// rea decompile_all
// name: FUN_0049fec8
// address: 0x49fec8
// body: available
// range: 0x49fec8-0x4a0091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049fec8(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_004dce64(0x509a94);
  if ((param_3 & 3) != 0) {
    FUN_004ab84c(local_c,param_4,'\x01');
    FUN_0048d938(param_1,local_c);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_0048da64(param_1);
    FUN_004ab9b4(local_c,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_004ab84c(local_14,param_5,'\x01');
    FUN_0048d938(param_1,local_14);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_0048da64(param_1);
    FUN_004ab9b4(local_14,2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

