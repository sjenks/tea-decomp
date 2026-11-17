// rea decompile_all
// name: FUN_004156f4
// address: 0x4156f4
// body: available
// range: 0x4156f4-0x41591e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004156f4(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  WINDOWPLACEMENT local_290;
  char local_264 [511];
  undefined1 local_65;
  uint *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4eda4c);
  FUN_004b0b44(param_1);
  if ((int *)param_1[0x16] != (int *)0x0) {
    FUN_00417760(param_1,*(HWND *)(*(int *)param_1[0x16] + 0xc));
  }
  if (*(int *)(param_1[0xe] + 0x168) != 0) {
    FUN_004a76a8(*param_1,0x80,1,*(int *)(param_1[0xe] + 0x168));
  }
  if (*(int *)(param_1[0xe] + 0x16c) != 0) {
    FUN_004a76a8(*param_1,0x80,0,*(int *)(param_1[0xe] + 0x16c));
  }
  (**(code **)(param_1[3] + 0xbc))();
  local_28 = 0x14;
  FUN_00416dd4((int)local_14,(int)param_1,(uint *)s_Position_004f7360,
               (uint *)(s_Beta_Test_Expiry_004ed29c + 0x10));
  local_1c = local_1c + 1;
  local_28 = 8;
  if (local_c[-1] != 0) {
    FUN_004dcc40((undefined4 *)local_264,local_c,(char *)0x1ff);
    local_65 = 0;
    FUN_0044ee84(local_264,&local_3c,&local_40,&local_44,&local_48,&local_4c);
    iVar1 = FUN_004153ec(local_40,local_44,local_48,local_4c);
    if (iVar1 != 0) {
      local_290.length = 0x2c;
      BVar2 = GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_290);
      if (BVar2 != 0) {
        if (local_44 < 0) {
          local_44 = 0;
        }
        if ((*(byte *)(*param_1 + 0x1a) & 4) == 0) {
          local_48 = local_290.rcNormalPosition.right - local_290.rcNormalPosition.left;
          local_4c = local_290.rcNormalPosition.bottom - local_290.rcNormalPosition.top;
        }
        if ((local_290.showCmd != 0) && (local_3c != 0)) {
          local_290.showCmd = 3;
        }
        local_290.rcNormalPosition.left = local_40;
        local_290.rcNormalPosition.top = local_44;
        local_290.rcNormalPosition.right = local_40 + local_48;
        local_290.rcNormalPosition.bottom = local_44 + local_4c;
        local_290.length = 0x2c;
        SetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_290);
      }
    }
  }
  local_1c = local_1c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar1 = *puVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0041590e;
    }
    local_50 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0041590e:
  *in_FS_OFFSET = local_38;
  return;
}

