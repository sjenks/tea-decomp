// rea decompile_all
// name: thunk_FUN_004203ec
// address: 0x4215e0
// body: available
// range: 0x4215e0-0x4215e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl thunk_FUN_004203ec(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00432528) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004206a4(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_004206a4(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = FUN_0041ed9c(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004206a4(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_00420380(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_004211cc(-6);
  }
  return pcVar1;
}

