// rea decompile_all
// name: FUN_0040e5b4
// address: 0x40e5b4
// body: available
// range: 0x40e5b4-0x40e6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e5b4(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte local_11;
  
  pbVar5 = (byte *)(param_2 + param_4);
  while ((param_4 < 10 &&
         ((local_11 = *pbVar5, local_11 == 0 || (pcVar1 = FUN_0040d9c8(param_4), *pcVar1 != -2)))))
  {
    param_4 = param_4 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_4 < 10) {
    for (pbVar5 = param_3; pbVar5 < param_3 + param_6; pbVar5 = pbVar5 + 1) {
      if (*pbVar5 != 0) {
        iVar2 = FUN_0040d9e4((char)pbVar5 - (char)param_3);
        if (iVar2 == 0) {
          iVar2 = (uint)local_11 - (uint)*pbVar5;
          if (iVar2 < 1) {
            *pbVar5 = *pbVar5 - local_11;
          }
          else {
            if (0 < param_5 + iVar2) goto LAB_0040e6c2;
            param_5 = param_5 + iVar2;
            *pbVar5 = 0;
          }
          pcVar1 = FUN_0040d9c8(param_4);
          *pcVar1 = (char)pbVar5 - (char)param_3;
          iVar3 = FUN_0040e5b4(param_1,param_2,param_3,param_4 + 1,param_5,param_6);
          puVar4 = FUN_0040d9c8(param_4);
          *puVar4 = 0xfe;
          *pbVar5 = local_11 - (char)iVar2;
          if (0 < iVar2) {
            param_5 = param_5 - iVar2;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
LAB_0040e6c2:
    }
    if ((int)(param_5 + (uint)local_11) < 1) {
      iVar2 = FUN_0040e5b4(param_1,param_2,param_3,param_4 + 1,param_5 + (uint)local_11,param_6);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (*(code *)(&PTR_FUN_0042c990)[*(byte *)(param_2 + 10)])
                      (param_1,param_2 + 0xb,param_3,param_5,param_6);
  }
  return iVar2;
}

