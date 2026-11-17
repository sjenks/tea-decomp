// rea decompile_all
// name: FUN_00437158
// address: 0x437158
// body: available
// range: 0x437158-0x43746e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00437199) */

int __cdecl FUN_00437158(int param_1)

{
  uint uVar1;
  HRESULT HVar2;
  IMalloc *This;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  uint local_1a4 [67];
  undefined *local_98;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  int local_54;
  LPCITEMIDLIST local_50;
  IMalloc *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4f3b60);
  local_c = (undefined4 *)&DAT_00513d64;
  local_98 = &DAT_00513d64;
  local_2c = local_2c + 1;
  local_38 = 0x20;
  HVar2 = SHGetMalloc(&local_4c);
  if (HVar2 == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      BVar3 = SHGetPathFromIDListA(local_50,(LPSTR)local_1a4);
      if (BVar3 != 0) {
        FUN_004cf41c((int)local_14,local_1a4);
      }
      This = (IMalloc *)(*local_4c->lpVtbl->Free)((IMalloc *)local_4c->lpVtbl,local_50);
    }
    (*local_4c->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    local_38 = 0x2c;
    FUN_00436fec((int)local_24);
    local_2c = local_2c + 1;
    FUN_004cf384((int)local_14,(int)local_24);
    local_2c = local_2c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00437301;
      }
      local_54 = local_1c + -0xc;
      FUN_004cc0bc();
      local_58 = 0;
      local_5c = local_24;
      local_1c = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      FUN_004d48d8((int)local_14);
    }
    if (local_c + -3 != &DAT_00513d58) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      FUN_004d5c40((int)local_14,local_c[-1],0,1,0x5c);
    }
  }
LAB_00437301:
  local_38 = 0x44;
  local_60 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_70 = FUN_004cf7b0(param_1,uVar1,uVar1);
    local_6c = local_70 + 3;
    *(int **)(param_1 + 8) = local_6c;
    local_74 = param_1;
    local_7c = local_c;
    local_80 = *(undefined4 **)(param_1 + 8);
    local_78 = uVar1;
    FUN_004dc7d4(local_80,local_c,uVar1);
  }
  else {
    local_64 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_68 = param_1;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_38 = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00437454;
    }
    local_84 = local_c + -3;
    local_88 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_00437454:
  *in_FS_OFFSET = local_48;
  return param_1;
}

