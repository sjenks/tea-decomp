// rea decompile_all
// name: FUN_004277a0
// address: 0x4277a0
// body: available
// range: 0x4277a0-0x427a6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004277a0(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  uint local_1d8 [66];
  undefined4 local_d0;
  WINDOWPLACEMENT local_b8;
  undefined1 *local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  int local_78;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f1e44);
  local_b8.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(*(int *)(param_1 + 4) + 0xc),&local_b8);
  if (BVar1 == 0) goto LAB_00427a4e;
  local_50 = 0x14;
  FUN_00401d10((int)local_14,param_1 + 0x70,(uint *)s_Position_004f7360);
  local_44 = local_44 + 1;
  local_50 = 0x20;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_2c);
  local_44 = local_44 + 1;
  FUN_0044e83c(local_1c,(int)local_2c,iVar3,iVar4);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004278bb;
    }
    local_64 = local_24 + -0xc;
    FUN_004cc0bc();
    local_68 = 0;
    local_6c = local_2c;
    local_24 = 0;
    local_d0 = 0;
  }
LAB_004278bb:
  local_50 = 8;
  IsZoomed(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
  FUN_0044eee4((undefined1 *)local_1d8);
  local_50 = 0x38;
  FUN_004cf628((int)local_3c,local_1d8);
  local_44 = local_44 + 1;
  FUN_0044ec78((int)local_1c,(int)local_14,(int)local_3c);
  local_44 = local_44 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004279b1;
    }
    local_78 = local_34 + -0xc;
    FUN_004cc0bc();
    local_7c = 0;
    local_80 = local_3c;
    local_34 = 0;
  }
LAB_004279b1:
  local_50 = 8;
  local_44 = local_44 + -1;
  FUN_0044e920((int)local_1c,2);
  local_44 = local_44 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00427a48;
    }
    local_84 = local_c + -0xc;
    FUN_004cc0bc();
    local_88 = 0;
    local_8c = local_14;
    local_c = 0;
  }
LAB_00427a48:
  local_50 = 0;
LAB_00427a4e:
  FUN_004a6be0(*(int *)(param_1 + 4),param_2);
  *in_FS_OFFSET = local_60;
  return;
}

