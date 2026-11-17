// rea decompile_all
// name: FUN_0045f8e8
// address: 0x45f8e8
// body: available
// range: 0x45f8e8-0x45f9d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045f8e8(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,undefined4 param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = (char *)(param_6 + param_4);
  pcVar3 = (char *)(param_3 + param_4);
  do {
    if (param_4 < 0) {
      if (param_7 < 0) {
        if (param_5 < 2) {
          iVar2 = (*(code *)(&PTR_FUN_004fa308)[*param_2])
                            (param_1,param_2 + 1,param_3,param_7 + 1,param_8);
        }
        else {
          iVar2 = FUN_0045f8e8(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7 + 1,
                               param_8);
        }
      }
      else {
        iVar2 = 0;
      }
      return iVar2;
    }
    if ((*pcVar3 != '\0') && (*pcVar1 != '\0')) {
      *pcVar3 = *pcVar3 + -1;
      if (param_5 < 2) {
        iVar2 = (*(code *)(&PTR_FUN_004fa308)[*param_2])
                          (param_1,param_2 + 1,param_3,param_7,param_8);
      }
      else {
        iVar2 = FUN_0045f8e8(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7,param_8);
      }
      *pcVar3 = *pcVar3 + '\x01';
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_4 = param_4 + -1;
    pcVar1 = pcVar1 + -1;
    pcVar3 = pcVar3 + -1;
  } while( true );
}

