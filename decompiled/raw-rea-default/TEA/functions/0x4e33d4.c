// rea decompile_all
// name: FUN_004e33d4
// address: 0x4e33d4
// body: available
// range: 0x4e33d4-0x4e3577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004e33d4(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  BOOL local_10;
  CHAR local_a [2];
  int local_8;
  
  local_10 = 0;
  uVar5 = 0;
  if ((param_1 == (LPSTR)0x0) || (param_3 != 0)) {
    if (param_1 == (LPSTR)0x0) {
      if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
        iVar6 = WideCharToMultiByte(*(UINT *)PTR_DAT_00518658,0x220,param_2,-1,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,&local_10);
        if ((iVar6 == 0) || (local_10 != 0)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar6 - 1;
        }
      }
      else {
        uVar5 = FUN_004dce0c((short *)param_2);
      }
    }
    else if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
      uVar5 = WideCharToMultiByte(*(UINT *)PTR_DAT_00518658,0x220,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_10);
      if ((uVar5 == 0) || (local_10 != 0)) {
        if ((local_10 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
          while (uVar5 < param_3) {
            local_8 = WideCharToMultiByte(*(UINT *)PTR_DAT_00518658,0,param_2,1,local_a,2,
                                          (LPCSTR)0x0,&local_10);
            if ((local_8 == 0) || (local_10 != 0)) {
              return 0xffffffff;
            }
            if (param_3 < local_8 + uVar5) {
              return uVar5;
            }
            iVar6 = 0;
            pcVar4 = param_1 + uVar5;
            pcVar3 = local_a;
            if (0 < local_8) {
              do {
                cVar1 = *pcVar3;
                *pcVar4 = cVar1;
                if (cVar1 == '\0') {
                  return uVar5;
                }
                pcVar3 = pcVar3 + 1;
                iVar6 = iVar6 + 1;
                pcVar4 = pcVar4 + 1;
                uVar5 = uVar5 + 1;
              } while (iVar6 < local_8);
            }
            param_2 = (LPCWSTR)((int)param_2 + 2);
            local_10 = 0;
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    else if (param_3 != 0) {
      while ((ushort)*param_2 < 0x100) {
        param_1[uVar5] = (CHAR)*param_2;
        if ((short)*param_2 == 0) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        param_2 = (LPCWSTR)((int)param_2 + 2);
        if (param_3 <= uVar5) {
          return uVar5;
        }
      }
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

