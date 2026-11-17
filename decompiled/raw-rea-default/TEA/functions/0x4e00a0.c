// rea decompile_all
// name: FUN_004e00a0
// address: 0x4e00a0
// body: available
// range: 0x4e00a0-0x4e026f inclusive
// range: 0x4e0275-0x4e02ca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl
FUN_004e00a0(undefined *param_1,undefined *param_2,uint param_3,uint param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar6 = 0;
  bVar7 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_004e00d1:
  local_c = iVar1;
  iVar1 = local_c + 1;
  uVar4 = param_3;
  uVar2 = (*(code *)param_1)();
  if (iVar6 == 0) {
    if (((-1 < (int)uVar2) && ((int)uVar2 < 0x80)) &&
       (uVar4 = uVar2, iVar3 = FUN_004e5b18(uVar2), iVar3 != 0)) goto LAB_004e00d1;
    iVar6 = 1;
  }
  iVar3 = param_5 + -1;
  if (iVar3 < 0) goto LAB_004e0275;
  if ((iVar6 == 1) && ((iVar6 = 2, uVar2 == 0x2b || (uVar2 == 0x2d)))) {
    bVar7 = uVar2 == 0x2d;
    param_5 = iVar3;
    goto LAB_004e00d1;
  }
  if (iVar6 == 2) {
    iVar6 = 3;
    if ((uVar2 == 0x30) && ((local_14 = 1, param_4 == 0 || (param_4 == 0x10)))) {
      iVar1 = local_c + 2;
      uVar4 = param_3;
      uVar2 = (*(code *)param_1)();
      param_5 = param_5 + -2;
      if (param_5 < 0) goto LAB_004e0275;
      if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
        param_4 = 0x10;
        goto LAB_004e00d1;
      }
      iVar3 = param_5;
      if (param_4 == 0) {
        param_4 = 8;
      }
    }
    local_c = iVar1;
    param_5 = iVar3;
    iVar3 = param_5;
    iVar1 = local_c;
    if (param_4 == 0) {
      param_4 = 10;
    }
    else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_004e0275;
  }
  local_c = iVar1;
  param_5 = iVar3;
  iVar1 = local_c;
  if (iVar6 == 3) {
    if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
      if (((int)uVar2 < 0x61) || (0x7a < (int)uVar2)) {
        if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_004e0275;
        uVar4 = uVar2 - 0x37;
        local_20 = uVar4;
      }
      else {
        local_20 = uVar2 - 0x57;
      }
    }
    else {
      local_20 = uVar2 - 0x30;
    }
    if ((int)param_4 <= (int)local_20) goto LAB_004e0275;
    local_14 = local_14 + 1;
    uVar4 = FUN_004e3590(local_1c,local_18,uVar4,param_4);
    uVar5 = local_20 + uVar4;
    iVar3 = ((int)local_20 >> 0x1f) + extraout_EDX + (uint)CARRY4(local_20,uVar4);
    uVar4 = FUN_004e362b(uVar5 - local_20,
                         (iVar3 - ((int)local_20 >> 0x1f)) - (uint)(uVar5 < local_20),extraout_ECX,
                         param_4,(int)param_4 >> 0x1f);
    bVar8 = extraout_EDX_00 != local_18;
    bVar9 = uVar4 != local_1c;
    local_1c = uVar5;
    local_18 = iVar3;
    if (bVar8 || bVar9) {
      local_10 = 2;
      if (bVar7) {
        local_1c = 0;
      }
      else {
        local_1c = 0xffffffff;
      }
LAB_004e0275:
      local_c = iVar1;
      if (local_10 != 2) {
        (*(code *)param_2)();
        local_c = local_c + -1;
        if (bVar7) {
          local_1c = -local_1c;
        }
      }
      if (local_14 == 0) {
        if (uVar2 == 0xffffffff) {
          local_10 = -1;
        }
        else {
          local_10 = 0;
        }
      }
      *param_7 = local_10;
      *param_6 = *param_6 + local_c;
      return local_1c;
    }
  }
  goto LAB_004e00d1;
}

