// rea decompile_all
// name: FUN_00423a24
// address: 0x423a24
// body: available
// range: 0x423a24-0x423b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00423a24(LCID param_1,UINT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR lpSrcStr;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  BYTE *pBVar6;
  _cpinfo local_18;
  
  if (param_1 == 0) {
    FUN_0041eddc(param_3,(undefined4 *)&DAT_00432c2a,0x100);
    uVar1 = 1;
  }
  else {
    lpSrcStr = (LPCSTR)FUN_004155f0();
    if (lpSrcStr == (LPCSTR)0x0) {
      SetLastError(0xe);
      uVar1 = 0;
    }
    else {
      iVar2 = 0;
      pCVar5 = lpSrcStr;
      do {
        *pCVar5 = (CHAR)iVar2;
        pCVar5 = pCVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar3 = GetCPInfo(param_2,&local_18);
      if (BVar3 == 0) {
        FUN_00415600();
        uVar1 = 0;
      }
      else {
        if (1 < local_18.MaxCharSize) {
          for (pBVar6 = local_18.LeadByte; (*pBVar6 != 0 && (pBVar6[1] != 0)); pBVar6 = pBVar6 + 2)
          {
            uVar4 = (uint)*pBVar6;
            pCVar5 = lpSrcStr + uVar4;
            for (; (int)uVar4 <= (int)(uint)pBVar6[1]; uVar4 = uVar4 + 1) {
              *pCVar5 = '\0';
              pCVar5 = pCVar5 + 1;
            }
          }
        }
        *(undefined2 *)param_3 = 0;
        BVar3 = GetStringTypeA(param_1,1,lpSrcStr,0x100,(LPWORD)((int)param_3 + 2));
        if (BVar3 == 0) {
          FUN_00415600();
          uVar1 = 0;
        }
        else {
          FUN_00415600();
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

