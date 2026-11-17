// rea decompile_all
// name: FUN_00459c9c
// address: 0x459c9c
// body: available
// range: 0x459c9c-0x45a21e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00459e90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00459c9c(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int *in_FS_OFFSET;
  byte bVar8;
  uint uVar9;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  tagRECT local_e8;
  undefined *local_d0;
  LONG local_c8 [2];
  int local_c0;
  int local_bc;
  undefined *local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  char local_85;
  int local_84;
  tagPOINT local_80;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar8 = 0;
  FUN_004dce64(0x4f9514);
  iVar1 = FUN_0045dc48((int)param_1,param_3);
  if (iVar1 < 1) {
    FUN_004a7bfc(*param_1,0,0x7f00);
  }
  else {
    if (param_1[0x29] == 0) {
      iVar1 = 0x7f85;
    }
    else {
      iVar1 = 0x7f84;
    }
    FUN_004a7bfc(*param_1,0,iVar1);
  }
  if (0 < param_1[0x1ec]) {
    if ((param_2 & 1) == 0) {
      param_1[0x1ec] = 0;
      FUN_0045b89c(param_1);
      *in_FS_OFFSET = local_58;
      return local_58;
    }
    FUN_00459150(local_c8,param_1);
    if (param_1[0x29] != 0) {
      local_bc = local_c0;
    }
    local_5c = local_bc + param_1[0x1ed];
    iVar1 = param_1[0x1ed] >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((param_1[0x1ed] & 1U) != 0);
    }
    if (param_1[0x29] == 0) {
      iVar3 = param_3[1];
    }
    else {
      iVar3 = *param_3;
    }
    iVar1 = iVar1 + iVar3;
    iVar3 = **(int **)(param_1[0x1ec] * 4 + param_1[0x1ad]);
    iVar2 = iVar1 - iVar3;
    if (iVar1 != iVar3) {
      local_60 = param_1[0x1ed] * 10;
      local_68 = param_1[0x1ec] + -1;
      local_64 = **(int **)(local_68 * 4 + param_1[0x1ad]);
      local_70 = param_1 + 0x1ac;
      iVar3 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      local_6c = local_5c;
      if (param_1[0x1ec] + 1 < iVar3 >> 2) {
        local_74 = param_1[0x1ec] + 1;
        local_6c = **(int **)(local_74 * 4 + param_1[0x1ad]);
      }
      if (((iVar2 < 1) || (local_60 <= local_6c - iVar1)) &&
         ((-1 < iVar2 || (local_60 <= iVar1 - local_64)))) {
        local_78 = param_1[0x1ec];
        **(int **)(local_78 * 4 + param_1[0x1ad]) = iVar1;
        FUN_00451784(param_1,6);
      }
    }
  }
  local_c = &DAT_00513d64;
  local_d0 = &DAT_00513d64;
  local_3c = local_3c + 1;
  local_48 = 0x20;
  local_80.x = *param_3;
  local_80.y = param_3[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_80);
  uVar5 = 0;
  while( true ) {
    iVar1 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar5) break;
    local_84 = **(int **)(*(int *)(uVar5 * 4 + param_1[0x1ad]) + 4);
    local_e8.left = 0;
    local_e8.top = 0;
    local_e8.right = 0;
    local_e8.bottom = 0;
    FUN_004a7a30(local_84,&local_e8);
    ptVar6 = &local_e8;
    pLVar7 = &local_f8;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)((int)ptVar6 + ((uint)bVar8 * -2 + 1) * 4);
      pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((((local_80.x < local_f8) || (local_f0 <= local_80.x)) || (local_80.y < local_f4)) ||
       (local_ec <= local_80.y)) {
      local_85 = '\0';
    }
    else {
      local_85 = '\x01';
    }
    if (local_85 != '\0') {
      local_48 = 0x2c;
      uVar9 = uVar5;
      iVar1 = FUN_00466b18(param_1[0xe]);
      FUN_00408d5c(local_24,iVar1,uVar9);
      local_3c = local_3c + 1;
      FUN_004cf384((int)local_14,(int)local_24);
      local_3c = local_3c + -1;
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar4 = (int *)(local_1c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar1 = *piVar4 + 1;
          }
          if (iVar1 != 0) goto LAB_0045a027;
        }
        local_8c = local_1c + -0xc;
        local_90 = local_1c + -0xc;
        FUN_004cc0bc();
        local_94 = 0;
        local_98 = local_24;
        local_1c = 0;
      }
LAB_0045a027:
      local_48 = 0x20;
    }
    uVar5 = uVar5 + 1;
  }
  if ((*(int *)(local_c + -4) == 0) &&
     (local_9c = FUN_004a7590(*param_1,FUN_0044f9f0), local_9c != 0)) {
    local_48 = 0x44;
    uVar5 = GetDlgCtrlID(*(HWND *)(local_9c + 0xc));
    FUN_00464a94((int)local_34,param_1[0xe],uVar5);
    local_3c = local_3c + 1;
    FUN_004cf384((int)local_14,(int)local_34);
    local_3c = local_3c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        local_a0 = (int *)(local_2c + -0xc);
        if (local_a0 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (local_a0 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *local_a0 = *local_a0 + -1;
          iVar1 = *local_a0 + 1;
        }
        if (iVar1 != 0) goto LAB_0045a163;
      }
      local_a4 = local_2c + -0xc;
      local_a8 = local_2c + -0xc;
      FUN_004cc0bc();
      local_ac = 0;
      local_b0 = local_34;
      local_2c = 0;
    }
LAB_0045a163:
    local_48 = 0x20;
  }
  FUN_0045e060((int)param_1,(int)local_14,*(undefined4 *)(*param_1 + 0xc),param_2,
               (undefined2 *)param_3,0);
  iVar1 = FUN_004a5774(*param_1);
  local_3c = local_3c + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0045a208;
    }
    local_b4 = local_c + -0xc;
    FUN_004cc0bc();
    iVar1 = 0;
  }
LAB_0045a208:
  *in_FS_OFFSET = local_58;
  return iVar1;
}

