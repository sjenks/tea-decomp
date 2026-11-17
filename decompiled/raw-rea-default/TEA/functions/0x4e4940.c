// rea decompile_all
// name: FUN_004e4940
// address: 0x4e4940
// body: available
// range: 0x4e4940-0x4e4d88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_004e4940(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longdouble in_ST0;
  longdouble in_ST1;
  uint uVar11;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined1 local_28 [8];
  undefined2 uStack_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar9 = -2;
  local_1c = 1;
  _local_28 = (longdouble)(unkuint10)0;
  uVar11 = 0xe;
  pbVar3 = (byte *)FUN_004e12bc(0xe);
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  do {
    local_18 = local_18 + 1;
    uVar5 = param_4;
    uVar4 = (*(code *)param_2)(uVar6,param_4,uVar11);
    uVar11 = uVar5;
    uVar5 = uVar4 + 1;
    if (uVar5 == 0) {
      local_1c = 0xffffffff;
      goto LAB_004e4c74;
    }
    if ((uVar4 & 0x80) != 0) break;
    uVar11 = uVar4;
    uVar6 = FUN_004e5b18(uVar4);
    uVar5 = 0;
  } while (uVar6 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar10 = local_c;
    if (uVar4 == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar8 = iVar9;
      if (uVar4 != 0x2d) goto LAB_004e4a01;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar8 = iVar9;
LAB_004e4a01:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar5,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004e4c6f;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_004e4c6f;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_00518af4,DAT_00518af0);
            _local_28 = (longdouble)CONCAT28(DAT_00518af8,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_00518afe,DAT_00518afa);
            _local_28 = (longdouble)CONCAT28(DAT_00518b02,local_28);
          }
          goto LAB_004e4c44;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_004e4c6f;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004e4c6f;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_00518b08,DAT_00518b04);
            _local_28 = (longdouble)CONCAT28(DAT_00518b0c,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_00518b12,DAT_00518b0e);
            _local_28 = (longdouble)CONCAT28(DAT_00518b16,local_28);
          }
          goto LAB_004e4c44;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (uVar4 == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_004e4ae7;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_004e4ae7;
        uVar4 = uVar4 - 0x30;
        iVar9 = iVar8 + 1;
        if (iVar9 < 1) {
          *local_38 = (short)uVar4;
          iVar10 = local_c;
          if (uVar4 == 0) {
            iVar9 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar9 = 1;
          }
        }
        else if (iVar9 < 10) {
          _local_28 = (longdouble)CONCAT64(stack0xffffffdc,local_28._0_4_ * 10 + uVar4);
        }
        else if (iVar9 <= local_c) {
          local_40 = local_28._0_4_;
          local_3c = local_28._4_4_;
          iVar7 = FUN_004e4250(&local_40,uVar4);
          iVar10 = iVar8;
          if (iVar7 == 0) {
            local_28 = (undefined1  [8])CONCAT44(local_3c,local_40);
            iVar10 = local_c;
          }
        }
      }
    }
  }
  uVar4 = 0x65;
LAB_004e4ae7:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_004e4c6f:
    param_5 = iVar10;
    local_1c = 0;
LAB_004e4c74:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    _local_28 = (longdouble)(unkuint10)0;
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar9;
    }
    iVar10 = 0;
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      bVar2 = true;
LAB_004e4b0f:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_004e4b3c;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_004e4b37;
        local_10 = '\x01';
      }
    }
    else {
LAB_004e4b62:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar10 = -iVar10;
      local_11 = -local_11;
    }
    if (iVar9 < 0) {
      _local_28 = (longdouble)(unkuint10)0;
    }
    else if (local_11 == '\0') {
      if (local_c < iVar9) {
        iVar9 = local_c;
      }
      iVar10 = iVar10 + (local_8 - iVar9);
      FUN_004e3c2c((int)local_28);
      _local_28 = in_ST0;
      if (iVar10 != 0) {
        FUN_004e3848();
        if (iVar10 < 0) {
          _local_28 = _local_28 / in_ST1;
        }
        else {
          _local_28 = in_ST1 * _local_28;
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        _local_28 = (longdouble)(unkuint10)0;
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    _local_28 = -_local_28;
  }
LAB_004e4c44:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = local_28._0_4_;
  param_1[1] = local_28._4_4_;
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_004e4b37:
  if (iVar8 != 0x2b) {
LAB_004e4b3c:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_004e4b62;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_004e4b0f;
}

