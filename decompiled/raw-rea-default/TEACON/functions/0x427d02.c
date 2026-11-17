// rea decompile_all
// name: FUN_00427d02
// address: 0x427d02
// body: available
// range: 0x427d02-0x427dd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_00427d02(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6
            )

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if ((param_3 & 2) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*DAT_00435108 == 2) {
    pcVar1 = FUN_0041f920(param_2);
    FUN_00427ccd(pcVar1);
    FUN_00427ce5(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_00426830(s__dtorMask___0x0080_____0_00433b38,s_xx_cpp_00433b51,0x2cd);
  }
  uVar3 = param_5 & 7;
  if (uVar3 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 3) {
    (*(code *)param_4)(param_1,uVar2);
  }
  else if (uVar3 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_00426830(s___what___00433b5e,s_xx_cpp_00433b67,0x2f4);
  }
  return;
}

