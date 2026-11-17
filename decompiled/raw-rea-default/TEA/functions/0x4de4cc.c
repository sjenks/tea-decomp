// rea decompile_all
// name: FUN_004de4cc
// address: 0x4de4cc
// body: available
// range: 0x4de4cc-0x4de5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004de4cc(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_005177f0) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 8) != 0) {
        FUN_004ddec0(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004de6d8(param_1,param_2,param_3);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = local_20c;
          while (((int)pcVar3 - (int)local_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004de6d8(param_1,local_20c,(int)pcVar3 - (int)local_20c);
          if (iVar2 != (int)pcVar3 - (int)local_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_004df280(-6);
  }
  return local_c;
}

