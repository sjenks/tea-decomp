// rea decompile_all
// name: FUN_0041b5a0
// address: 0x41b5a0
// body: available
// range: 0x41b5a0-0x41bbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_0041b5a0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int local_a0 [6];
  int local_88 [3];
  int local_7c [3];
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0041f3fc(0x4306e0);
  local_38 = param_3;
  FUN_00419cd8(local_7c,0);
  iVar1 = FUN_00417ee0();
  if (iVar1 == param_2[9]) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if ((param_3 == -1) && (param_4 == 0)) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if (param_4 == 1) {
    iVar1 = 0;
    local_3c = 0;
    local_40 = 0;
    if ((char)param_2[10] == '\0') {
      if (*(char *)((int)param_2 + 0x29) != '\0') {
        iVar2 = FUN_004197b0((int)param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_004197bc((int)param_2);
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_00418cd4((int)param_2);
            pcVar4 = (char *)FUN_004197bc((int)param_2);
            iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
            iVar1 = -iVar1;
            local_3c = FUN_004197bc((int)param_2);
            local_40 = FUN_00418cd4((int)param_2);
          }
        }
        else {
          pcVar3 = (char *)FUN_004197a4((int)param_2);
          pcVar4 = (char *)FUN_004197b0((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
          iVar1 = -iVar1;
          local_3c = FUN_004197b0((int)param_2);
          local_40 = FUN_004197a4((int)param_2);
        }
      }
    }
    else {
      iVar2 = FUN_00418cd4((int)param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_004197b0((int)param_2);
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_004197c8((int)param_2);
          pcVar4 = (char *)FUN_004197a4((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
          local_3c = FUN_004197a4((int)param_2);
          local_40 = FUN_004197c8((int)param_2);
        }
      }
      else {
        iVar1 = FUN_004197bc((int)param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_00418ce0((int)param_2);
          iVar2 = FUN_00418cd4((int)param_2);
          iVar1 = iVar1 - iVar2;
        }
        else {
          pcVar3 = (char *)FUN_00418ce0((int)param_2);
          pcVar4 = (char *)FUN_00418cd4((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
        }
        local_3c = FUN_00418cd4((int)param_2);
        local_40 = FUN_00418ce0((int)param_2);
      }
    }
    local_24 = 8;
    FUN_00419820(&local_8,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_004198b8(&local_8);
    local_44 = FUN_0041bbc8(piVar5);
    local_18 = local_18 + -1;
    FUN_00409948(&local_8,2);
    if ((param_3 == 0) || (0 < local_44)) {
      if (local_44 < 1) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,1);
        FUN_00419cd8(local_88,iVar2);
        FUN_0041bbd8(local_7c,local_88);
        if ((iVar1 != 0) && (iVar2 = FUN_004197bc((int)param_2), iVar2 != 0)) {
          local_48 = param_2[0xc];
          local_4c = local_3c;
          local_50 = local_3c;
          local_54 = local_40;
          local_60 = (undefined4 *)FUN_0041503c();
          local_64 = (undefined4 *)((int)local_60 + local_48);
          local_5c = local_60;
          local_58 = local_60;
          do {
            FUN_00419748((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf]);
            local_24 = 0x14;
            FUN_00419820(&local_c,(int)param_2);
            local_18 = local_18 + 1;
            piVar5 = (int *)FUN_004198b8(&local_c);
            local_68 = FUN_0041975c(piVar5);
            local_18 = local_18 + -1;
            FUN_00409948(&local_c,2);
            if ((local_68 == 2) || (local_68 == 3)) break;
            if ((local_60 == local_64) && (local_50 != local_54)) {
              local_6c = (int)local_60 - (int)local_58;
              local_48 = local_48 * 2;
              local_5c = (undefined4 *)FUN_0041503c();
              FUN_0041eddc(local_5c,local_58,local_6c);
              FUN_00414f88();
              local_58 = local_5c;
              local_60 = (undefined4 *)((int)local_5c + local_6c);
              local_4c = local_50;
              local_64 = (undefined4 *)((int)local_5c + local_48);
              local_5c = local_60;
            }
          } while (local_50 != local_54);
          if (iVar1 < 1) {
            FUN_0041bc18(local_7c,(int)local_60 + ((-(local_40 - local_3c) - iVar1) - (int)local_58)
                        );
          }
          else {
            FUN_0041bc08(local_7c,(int)local_60 + ((iVar1 - (local_40 - local_3c)) - (int)local_58))
            ;
          }
          FUN_00414f88();
        }
        FUN_00419d7c(param_1,local_7c);
        *in_FS_OFFSET = local_34;
      }
      else if (param_3 == 0) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,1);
        FUN_00419cd8(param_1,(iVar2 - iVar1 * local_44) / local_44);
        *in_FS_OFFSET = local_34;
      }
      else if (*(char *)((int)param_2 + 0x29) == '\0') {
        FUN_00418dc4((int)param_2,0,0);
        FUN_00418da8((int)param_2,0,0,0);
        iVar1 = FUN_00418748(param_2,param_2[9],-((iVar1 - local_38) * local_44),1);
        FUN_00419cd8(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
      else {
        FUN_004181e8();
        (**(code **)(*param_2 + 0x24))();
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        iVar1 = FUN_00418748(param_2,param_2[9],local_38 * local_44,1);
        FUN_00419cd8(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
    }
    else {
      FUN_00419cd8(param_1,-1);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    local_24 = 0x20;
    FUN_00419820(&local_10,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_004198b8(&local_10);
    local_70 = FUN_0041bbc8(piVar5);
    local_18 = local_18 + -1;
    FUN_00409948(&local_10,2);
    if (local_70 < 1) {
      if ((param_4 != 0) || (param_3 != 0)) {
        FUN_00419cd8(param_1,-1);
        *in_FS_OFFSET = local_34;
        return param_1;
      }
      FUN_00419cd8((int *)&stack0xffffff44,0);
      (**(code **)(*param_2 + 0x10))();
    }
    if (*(char *)((int)param_2 + 0x29) != '\0') {
      FUN_004181e8();
      (**(code **)(*param_2 + 0x24))();
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    if (param_4 == 0) {
      iVar1 = 0;
    }
    else if (param_4 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    iVar1 = FUN_00418748(param_2,param_2[9],local_38 * local_70,iVar1);
    FUN_00419cd8(local_a0,iVar1);
    FUN_0041bbd8(local_7c,local_a0);
    FUN_00418dc4((int)param_2,0,0);
    FUN_00418da8((int)param_2,0,0,0);
    FUN_00419d7c(param_1,local_7c);
    *in_FS_OFFSET = local_34;
  }
  return param_1;
}

