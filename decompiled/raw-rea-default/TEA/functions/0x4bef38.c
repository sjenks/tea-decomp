// rea decompile_all
// name: FUN_004bef38
// address: 0x4bef38
// body: available
// range: 0x4bef38-0x4bf0de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004bef38(int *param_1)

{
  bool bVar1;
  char cVar2;
  HMENU pHVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  WINDOWPLACEMENT local_68;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10 [3];
  
  FUN_004dce64(0x50fa54);
  FUN_004a6fd8(*param_1);
  FUN_004be9dc(param_1,'\x01');
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  if ((*(int *)((int)param_1 + 0x3a) == -1) && (*(int *)((int)param_1 + 0x3e) == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_68.length = 0x2c;
    GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
    local_68.flags = 1;
    local_68.showCmd = 8;
    local_68.ptMinPosition.x = *(LONG *)((int)param_1 + 0x3a);
    local_68.ptMinPosition.y = *(LONG *)((int)param_1 + 0x3e);
    local_68.length = 0x2c;
    SetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
  }
  if (((*(byte *)(*param_1 + 0x74) & 0x10) != 0) && (*(int *)((int)param_1 + 0x21) != 0)) {
    pHVar3 = GetMenu(*(HWND *)(*param_1 + 0xc));
    local_24 = 8;
    FUN_00497a7c(local_10,*(int **)((int)param_1 + 0x21),0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    (**(code **)(local_10[0] + 4))();
    cVar2 = (**(code **)(param_1[3] + 8))();
    if (cVar2 == '\0') {
      pHVar3 = (HMENU)(**(code **)(local_10[0] + 4))();
      DestroyMenu(pHVar3);
    }
    else if (pHVar3 != (HMENU)0x0) {
      DestroyMenu(pHVar3);
    }
    local_18 = local_18 + -1;
    FUN_00497bf4(local_10,2);
    local_24 = 0;
  }
  if (*(int *)((int)param_1 + 0x11) == 0) {
    iVar4 = FUN_004be7cc(param_1);
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(*param_1 + 0xc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    *(undefined4 *)((int)param_1 + 0x11) = uVar5;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    FUN_004a76a8(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
  }
  if (*(int *)((int)param_1 + 0x46) != 0) {
    FUN_004a76a8(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
  }
  *in_FS_OFFSET = local_34;
  return;
}

