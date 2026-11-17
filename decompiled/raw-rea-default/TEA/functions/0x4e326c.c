// rea decompile_all
// name: FUN_004e326c
// address: 0x4e326c
// body: available
// range: 0x4e326c-0x4e3352 inclusive
// range: 0x4e3355-0x4e3394 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004e326c(LPWSTR param_1,uint *param_2,char *param_3)

{
  int iVar1;
  DWORD DVar2;
  uint *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  if ((param_1 == (LPWSTR)0x0) || (param_3 != (char *)0x0)) {
    if (param_1 == (LPWSTR)0x0) {
      if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
        iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00518658,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
        if (iVar1 == 0) {
          pcVar4 = (char *)0xffffffff;
        }
        else {
          pcVar4 = (char *)(iVar1 + -1);
        }
      }
      else {
        pcVar4 = FUN_004dc9f4(param_2);
      }
    }
    else if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00518658,9,(LPCSTR)param_2,-1,param_1,
                                  (int)param_3);
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        puVar3 = param_2;
        pcVar4 = param_3;
        if (DVar2 == 0x7a) {
          for (; (pcVar4 != (char *)0x0 && ((byte)*puVar3 != 0)); puVar3 = (uint *)((int)puVar3 + 1)
              ) {
            if (((&DAT_0051c1d9)[(byte)*puVar3] & 4) != 0) {
              puVar3 = (uint *)((int)puVar3 + 1);
            }
            pcVar4 = pcVar4 + -1;
          }
          pcVar4 = (char *)MultiByteToWideChar(*(UINT *)PTR_DAT_00518658,1,(LPCSTR)param_2,
                                               (int)puVar3 - (int)param_2,param_1,(int)param_3);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0xffffffff;
          }
        }
        else {
          pcVar4 = (char *)0xffffffff;
        }
      }
      else {
        pcVar4 = (char *)(iVar1 + -1);
      }
    }
    else if (param_3 != (char *)0x0) {
      do {
        *(ushort *)param_1 = (ushort)*(byte *)((int)param_2 + (int)pcVar4);
        if (*(char *)((int)param_2 + (int)pcVar4) == '\0') {
          return pcVar4;
        }
        pcVar4 = pcVar4 + 1;
        param_1 = (LPWSTR)((int)param_1 + 2);
      } while (pcVar4 < param_3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}

