// rea decompile_all
// name: FUN_0046bac4
// address: 0x46bac4
// body: available
// range: 0x46bac4-0x46bc70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046bac4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagRECT local_60;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_20;
  LPARAM *local_c;
  int *local_8;
  
  FUN_004dce64(0x4fdc44);
  local_38 = 0xc4;
  local_34 = 0xa0;
  local_40 = 0x6c;
  local_3c = 4;
  local_60.right = 0x130;
  local_60.left = 0x6c;
  local_60.top = 4;
  local_60.bottom = 0xa4;
  MapDialogRect(*(HWND *)(*param_1 + 0xc),&local_60);
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_20 = 0x14;
    FUN_0046a058(local_8,0,param_1,&local_60.left);
    local_20 = 8;
  }
  param_1[0x85] = (int)local_8;
  FUN_004156f4(param_1);
  local_c = (LPARAM *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_20 = 0x2c;
    local_44 = 0xffffff;
    FUN_004945ec(local_c);
    local_20 = 0x20;
  }
  param_1[0x2d] = (int)local_c;
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1109,0,*local_c);
  iVar2 = FUN_00416a78((int)param_1,(uint *)s_SplitterPosition_004fd374,
                       *(undefined4 *)(*(int *)param_1[0x85] + 0x20));
  iVar1 = *(int *)((int)param_1 + 0x166);
  local_48 = *(int *)(iVar1 + 0x24);
  local_4c = *(int *)(iVar1 + 0x20);
  FUN_004a7aa0(iVar1,(HWND)0x0,local_4c,local_48,
               (*(int *)(iVar1 + 0x28) + iVar2) - *(int *)(*(int *)param_1[0x85] + 0x20),
               *(int *)(iVar1 + 0x2c),0x21c);
  iVar1 = *(int *)param_1[0x85];
  local_50 = *(int *)(iVar1 + 0x24);
  FUN_004a7aa0(iVar1,(HWND)0x0,iVar2,local_50,*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c),0x21c);
  *in_FS_OFFSET = local_30;
  return;
}

