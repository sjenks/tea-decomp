// rea decompile_all
// name: FUN_004dec18
// address: 0x4dec18
// body: available
// range: 0x4dec18-0x4ded46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004dec18(char *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  char *unaff_ESI;
  char *pcVar5;
  char *local_c;
  uint local_8;
  
  local_c = param_1;
  if (param_3[3] != 0) {
LAB_004dec37:
    if (param_2 == (char *)0x0) {
      return unaff_ESI;
    }
    do {
      pcVar3 = (char *)param_3[2];
      if (pcVar3 != (char *)0x0) {
        pcVar5 = param_2;
        if (pcVar3 < param_2) {
          pcVar5 = pcVar3;
        }
        FUN_004dc7d4((undefined4 *)local_c,(undefined4 *)*param_3,(uint)pcVar5);
        *param_3 = (int)(pcVar5 + *param_3);
        param_3[2] = param_3[2] - (int)pcVar5;
        if (param_2 == pcVar5) {
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar5;
        param_2 = param_2 + -(int)pcVar5;
      }
      if ((char *)param_3[3] <= param_2) {
        pcVar5 = param_2 + -((uint)param_2 % (uint)param_3[3]);
        pcVar3 = FUN_004de1a0((int)*(char *)((int)param_3 + 0x16),local_c,pcVar5);
        if (param_2 == pcVar3) {
          return unaff_ESI;
        }
        if (pcVar3 == (char *)0xffffffff) {
          *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x10;
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar3;
        param_2 = param_2 + -(int)pcVar3;
        if (pcVar5 != pcVar3) goto code_r0x004decc4;
      }
      uVar4 = FUN_004df3b0(param_3);
      if (uVar4 == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        return unaff_ESI;
      }
      local_8._0_1_ = (char)uVar4;
      *local_c = (char)local_8;
      local_c = local_c + 1;
      param_2 = param_2 + -1;
      if (param_2 == (char *)0x0) {
        return unaff_ESI;
      }
    } while( true );
  }
  for (; param_2 != (char *)0x0; param_2 = param_2 + -1) {
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_8 = FUN_004df398(param_3);
    }
    else {
      pbVar2 = (byte *)*param_3;
      *param_3 = *param_3 + 1;
      local_8 = (uint)*pbVar2;
    }
    if (local_8 == 0xffffffff) break;
    *local_c = (char)local_8;
    local_c = local_c + 1;
  }
  if (local_8 == 0xffffffff) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
  }
  return unaff_ESI;
code_r0x004decc4:
  if (((*(byte *)((int)param_3 + 0x12) & 0x40) != 0) || (pcVar3 == (char *)0x0)) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
    return unaff_ESI;
  }
  goto LAB_004dec37;
}

