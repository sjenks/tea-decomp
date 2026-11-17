// rea decompile_all
// name: FUN_00426070
// address: 0x426070
// body: available
// range: 0x426070-0x426341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
FUN_00426070(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *local_28;
  int local_18;
  undefined1 local_10 [8];
  ushort uStack_8;
  short local_6;
  
  local_6 = 10;
  if (param_5 == 2) {
    _local_10 = (longdouble)*(float *)param_1;
  }
  else if (param_5 == 6) {
    _local_10 = (longdouble)*(double *)param_1;
  }
  else if (param_5 == 8) {
    _local_10 = *param_1;
  }
  uVar1 = uStack_8;
  uVar2 = (uint)uStack_8;
  _local_10 = (longdouble)CONCAT28(uStack_8 & 0x7fff,local_10);
  *param_3 = (uint)((uVar1 & 0x8000) != 0);
  uVar1 = FUN_00424cc8((longdouble *)local_10);
  uVar1 = uVar1 & 0x4700;
  if (uVar1 != 0x4000) {
    if (uVar1 == 0x500) {
      return 0x7fff;
    }
    if (uVar1 == 0x100) {
      return 0x7ffe;
    }
    uVar2 = ((uVar2 & 0x7fff) - 0x3fff) * 0x4d10 + ((uint)local_10[7] * 2 & 0xff) * 0x4d;
    local_18 = (int)uVar2 >> 0x10;
    if ((uVar2 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    uVar2 = param_2;
    if ((0 < (int)param_2) || (uVar2 = local_18 - param_2, -1 < (int)uVar2)) {
      if (0x13 < (int)uVar2) {
        uVar2 = 0x13;
      }
      for (iVar7 = uVar2 - local_18; iVar7 != 0; iVar7 = iVar7 + iVar4) {
        iVar4 = iVar7;
        if (iVar7 < 0) {
          iVar4 = -iVar7;
        }
        if (0x1344 < iVar4) {
          iVar4 = 0x1344;
        }
        FUN_004249d0();
        if (iVar7 < 0) {
          _local_10 = _local_10 / in_ST0;
        }
        else {
          _local_10 = _local_10 * in_ST0;
          iVar4 = -iVar4;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_004249d0();
      if (_local_10 <= in_ST0) {
        FUN_004249d0();
        uVar8 = uVar2;
        if (_local_10 < in_ST1) {
          local_18 = local_18 + -1;
          uVar8 = uVar2 - 1;
          if (0 < (int)param_2) {
            _local_10 = _local_10 * (longdouble)(int)local_6;
            uVar8 = uVar2;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        uVar8 = uVar2 + 1;
        if (((int)uVar8 < 0x14) && (0 < (int)param_2)) {
          _local_10 = _local_10 / (longdouble)(int)local_6;
          uVar8 = uVar2;
        }
      }
      if (-1 < (int)uVar8) {
        FUN_00424ca4((longlong *)local_10,(longdouble *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        bVar6 = 0;
        *(undefined1 *)local_28 = 0;
        pcVar5 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          if (local_10[0] != '\x01') goto LAB_004260f9;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_00425024((undefined4 *)local_10);
            bVar6 = bVar6 | (byte)uVar3;
            *pcVar5 = (byte)uVar3 + 0x30;
            pcVar5 = pcVar5 + -1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (bVar6 == 0) {
          local_18 = local_18 + 1;
          if ((int)param_2 < 1) {
            *(undefined1 *)local_28 = 0x30;
          }
          local_28 = (undefined4 *)((int)local_28 + 1);
          pcVar5[1] = '1';
        }
        if ((int)param_2 < 1) {
          param_2 = local_18 - param_2;
        }
        if (0x28 < (int)param_2) {
          param_2 = 0x28;
        }
        *(undefined1 *)local_28 = 0;
        uVar2 = param_2 - ((int)local_28 - (int)param_4);
        if ((int)uVar2 < 1) {
          return local_18;
        }
        FUN_0041ee4c(local_28,0x30,uVar2);
        *(undefined1 *)((int)local_28 + uVar2) = 0;
        return local_18;
      }
    }
  }
LAB_004260f9:
  if ((int)param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < (int)param_2) {
    param_2 = 0x28;
  }
  FUN_0041ee4c(param_4,0x30,param_2);
  *(undefined1 *)((int)param_4 + param_2) = 0;
  return 1;
}

