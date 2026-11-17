// rea decompile_all
// name: FUN_004b250c
// address: 0x4b250c
// body: available
// range: 0x4b250c-0x4b2623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004b250c(undefined4 param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_4 == (uint *)0x0) {
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        puVar2 = (uint *)FUN_004b5274(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = FUN_004dc9f4(puVar2);
        }
        puVar2 = (uint *)FUN_004b5254(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = FUN_004dc9f4(puVar2);
        }
        local_8 = local_8 + (int)(pcVar3 + (int)pcVar4 * 2 + 5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
  }
  else {
    *(undefined1 *)param_4 = 0;
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        pcVar3 = (char *)FUN_004b5274(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_004dc8e8((char *)param_4,pcVar3);
        }
        pcVar3 = (char *)FUN_004b5254(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_004dc8e8((char *)param_4,&DAT_0050d0b8);
          FUN_004dc8e8((char *)param_4,pcVar3);
          FUN_004dc8e8((char *)param_4,&DAT_0050d0bb);
          FUN_004dc8e8((char *)param_4,pcVar3);
        }
        FUN_004dc8e8((char *)param_4,&DAT_0050d0bc);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    local_8 = FUN_004dc9f4(param_4);
  }
  return local_8;
}

