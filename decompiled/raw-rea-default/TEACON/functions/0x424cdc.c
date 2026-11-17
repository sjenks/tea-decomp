// rea decompile_all
// name: FUN_00424cdc
// address: 0x424cdc
// body: available
// range: 0x424cdc-0x424d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00424d09) */

char * __cdecl
FUN_00424cdc(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char local_48 [68];
  
  pcVar4 = param_3;
  if ((1 < (int)param_4) && ((int)param_4 < 0x25)) {
    if ((param_2 != 0) && (((int)param_2 < 0 && (param_5 != '\0')))) {
      *param_3 = '-';
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(param_2 + bVar5);
      pcVar4 = param_3 + 1;
    }
    pcVar3 = local_48;
    do {
      do {
        uVar2 = FUN_00424926(param_1,param_2,in_ECX,param_4,(int)param_4 >> 0x1f);
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        param_1 = FUN_00424863(param_1,param_2,extraout_ECX,param_4,(int)param_4 >> 0x1f);
        in_ECX = extraout_ECX_00;
        param_2 = extraout_EDX;
      } while (extraout_EDX != 0);
    } while (param_1 != 0);
    while (pcVar3 != local_48) {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
      if (cVar1 < '\n') {
        *pcVar4 = cVar1 + '0';
        pcVar4 = pcVar4 + 1;
      }
      else {
        *pcVar4 = cVar1 + param_6 + -10;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  *pcVar4 = '\0';
  return param_3;
}

