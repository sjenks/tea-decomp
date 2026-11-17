// rea decompile_all
// name: FUN_0040e79c
// address: 0x40e79c
// body: available
// range: 0x40e79c-0x40ea55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e79c(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6,
                undefined4 param_7,uint param_8,int param_9,undefined4 param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  byte *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_34;
  byte local_10 [12];
  
  FUN_0041f3fc(0x42cedc);
  local_44 = (uint)*(byte *)(param_6 + 1);
  local_48 = (uint)*(byte *)(param_6 + 2);
  local_4c = 0x7fffffff;
  if ((param_4 == -5) && (param_5 == 1)) {
    if ((int)param_8 < 0) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else if ((int)local_48 < (int)param_8) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else {
      local_48 = param_8;
      local_4c = 1;
    }
  }
  else if ((int)(param_9 - local_44) < (int)local_48) {
    local_48 = param_9 - local_44;
  }
  do {
    if (((int)local_48 < 0) || (local_4c == 0)) {
      local_44 = param_8 + local_44;
      if ((int)local_44 < 1) {
        if (param_5 < 2) {
          pbVar1 = FUN_0040ea58(param_1,param_2,(byte *)param_3,param_7,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
        else {
          pbVar1 = (byte *)FUN_0040e79c(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7
                                        ,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
      }
      else {
        pbVar1 = (byte *)0x0;
        *in_FS_OFFSET = local_34;
      }
      return (int)pbVar1;
    }
    for (iVar3 = param_9 - (local_44 + local_48); -1 < iVar3; iVar3 = iVar3 + -1) {
      local_10[0] = DAT_00434684;
      if (DAT_00434684 == 1) {
        FUN_0040da30(local_10);
      }
      pbVar1 = (byte *)(param_3 + iVar3);
      pbVar2 = pbVar1 + local_48 + local_44;
      for (; (pbVar1 < pbVar2 && ((*pbVar1 & 0x80) == 0)); pbVar1 = pbVar1 + 1) {
      }
      if ((pbVar2 == pbVar1) &&
         (pbVar1 = FUN_0040ebec(param_1,(char *)(param_6 + 3),(byte *)(param_3 + iVar3),param_7,
                                local_48,local_44 + local_48), pbVar1 != (byte *)0x0)) {
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (param_5 < 2) {
          local_50 = FUN_0040ea58(param_1,param_2,(byte *)param_3,param_7,param_8 - local_48,param_9
                                  ,param_10);
        }
        else {
          local_50 = (byte *)FUN_0040e79c(param_1,param_2,param_3,param_4,param_5 + -1,param_6,
                                          param_7,param_8 - local_48,param_9,param_10);
        }
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (local_50 != (byte *)0x0) {
          local_10[0] = local_10[0] | 2;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_34;
          return (int)local_50;
        }
      }
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
    }
    local_4c = local_4c + -1;
    local_48 = local_48 - 1;
  } while( true );
}

