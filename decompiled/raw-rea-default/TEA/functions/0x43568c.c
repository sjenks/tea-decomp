// rea decompile_all
// name: FUN_0043568c
// address: 0x43568c
// body: available
// range: 0x43568c-0x43587c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __cdecl FUN_0043568c(HWND param_1,LPCSTR param_2,int param_3)

{
  uint uVar1;
  HRESULT HVar2;
  LPITEMIDLIST pidl;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  _browseinfoA local_1ac;
  undefined1 local_18c [268];
  int *local_80;
  int *local_70;
  int *local_60;
  IMalloc *local_5c;
  int *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined1 *local_4c;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4f3640);
  local_28 = 0x14;
  local_c = (int *)0x0;
  bVar5 = false;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_48 = FUN_004cf7b0(local_14,uVar1,uVar1);
    local_4c = local_14;
    local_80 = local_48 + 3;
    local_54 = *(undefined4 **)(param_3 + 8);
    local_58 = local_80;
    local_50 = uVar1;
    local_44 = local_80;
    local_c = local_80;
    FUN_004dc7d4(local_80,local_54,uVar1);
  }
  else {
    local_70 = *(int **)(param_3 + 8);
    local_40 = local_14;
    piVar4 = local_70 + -3;
    local_3c = local_70;
    local_c = local_70;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_1c = local_1c + 1;
  local_28 = 8;
  local_18c[0] = '\0';
  FUN_004dc844(&local_1ac.hwndOwner,0,0x20);
  local_1ac.hwndOwner = param_1;
  local_1ac.lpszTitle = param_2;
  local_1ac.ulFlags = 1;
  local_1ac.lpfn = FUN_0043550c;
  if (local_c[-1] != 0) {
    local_1ac.lParam = (LPARAM)local_c;
  }
  HVar2 = SHGetMalloc(&local_5c);
  if (HVar2 == 0) {
    pidl = SHBrowseForFolderA(&local_1ac);
    bVar5 = pidl != (LPITEMIDLIST)0x0;
    if (bVar5) {
      SHGetPathFromIDListA(pidl,local_18c);
      FUN_004cf41c(param_3,(uint *)local_18c);
      (*local_5c->lpVtbl->Free)(local_5c,local_5c->lpVtbl);
    }
    (*local_5c->lpVtbl->Release)((IMalloc *)local_5c->lpVtbl);
  }
  local_1c = local_1c + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0043586b;
    }
    local_60 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0043586b:
  *in_FS_OFFSET = local_38;
  return bVar5;
}

