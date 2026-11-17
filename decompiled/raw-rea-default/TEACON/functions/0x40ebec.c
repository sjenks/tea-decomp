// rea decompile_all
// name: FUN_0040ebec
// address: 0x40ebec
// body: available
// range: 0x40ebec-0x40eccc inclusive
// range: 0x40ecd2-0x40ed81 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0040ebec(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  byte local_10 [12];
  
  FUN_0041f3fc(0x42cf34);
  local_10[0] = DAT_00434684;
  if (DAT_00434684 == 1) {
    FUN_0040da30(local_10);
  }
  while( true ) {
    pbVar1 = (byte *)(param_2 + 1);
    if (*param_2 == 0xfc) {
      local_10[0] = local_10[0] | 2;
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
    if (*param_2 == 0xf4) break;
    param_2 = (char *)FUN_0040dd78(param_1,(byte *)param_2,param_3,param_4,param_5);
    if ((byte *)param_2 == (byte *)0x0) {
      pbVar1 = (byte *)0x0;
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
  }
  pbVar1 = FUN_0040ea58(param_1,(byte *)(param_2 + 6),param_3,param_4,
                        param_6 - *(int *)(param_2 + 2),param_6,(uint)*pbVar1);
  if (pbVar1 != (byte *)0x0) {
    FUN_0040eb20(param_2 + 6,param_3,param_6);
    local_10[0] = local_10[0] | 2;
    pbVar1 = pbVar1 + 1;
    if (local_10[0] == 0) {
      DAT_00434684 = 0;
    }
    else if (local_10[0] == 1) {
      FUN_0040da50(local_10);
    }
    *in_FS_OFFSET = local_34;
    return pbVar1;
  }
  pbVar1 = (byte *)0x0;
  if (local_10[0] == 0) {
    DAT_00434684 = 0;
  }
  else if (local_10[0] == 1) {
    FUN_0040da50(local_10);
  }
  *in_FS_OFFSET = local_34;
  return pbVar1;
}

