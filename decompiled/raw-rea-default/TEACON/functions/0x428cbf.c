// rea decompile_all
// name: FUN_00428cbf
// address: 0x428cbf
// body: available
// range: 0x428cbf-0x428f6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_00428cbf(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_00426830(s_varType_>tpClass_tpcFlags___CF_H_00433e99,s_xx_cpp_00433ec1,0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_00428b7d(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_00426830(s_dtorCnt_<_varCount_00433ec8,s_xx_cpp_00433edb,0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_00426830(s_IS_STRUC_blType_>tpMask__00433ee2,s_xx_cpp_00433efb,0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_00428c74(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_00426830(s_IS_STRUC_blType_>tpMask__00433f02,s_xx_cpp_00433f1b,0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_00428c74(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_00428c74(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_00426830(s_memType_00433f22,s_xx_cpp_00433f2a,0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_00426830(s_memType_>tpClass_tpcFlags___CF_H_00433f31,s_xx_cpp_00433f59,0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_00428cbf(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_00428f6f(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_00428c74(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_00428c74(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

