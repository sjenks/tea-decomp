// rea decompile_all
// name: FUN_004c9178
// address: 0x4c9178
// body: available
// range: 0x4c9178-0x4c93be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c9178(undefined4 param_1,undefined4 *param_2,RECT *param_3)

{
  LONG LVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  RECT local_b4;
  RECT local_a4;
  RECT local_94;
  RECT local_84;
  LONG local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HBRUSH local_c [2];
  
  FUN_004dce64(0x511d80);
  param_3->left = param_3->left + 1;
  param_3->top = param_3->top + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,param_3,(LPCSTR)0x0,0,(INT *)0x0);
  uVar3 = (param_3->bottom - param_3->top) - 3;
  local_84.top = (int)uVar3 >> 1;
  if (local_84.top < 0) {
    local_84.top = local_84.top + (uint)((uVar3 & 1) != 0);
  }
  local_84.top = local_84.top + param_3->top;
  local_84.left = param_3->left + 2;
  local_44 = (param_3->right - param_3->left) + -5;
  local_40 = 3;
  local_84.bottom = local_84.top + 3;
  local_84.right = local_84.left + local_44;
  iVar4 = local_84.top + 4;
  local_4c = local_84.right + 1;
  local_50 = local_84.top + 1;
  local_54 = param_3->left + 3;
  local_48 = local_84.left;
  local_3c = local_84.left;
  local_38 = local_84.top;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_94.left = local_54;
  local_94.top = local_50;
  local_94.right = local_4c;
  local_94.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_94,(LPCSTR)0x0,0,(INT *)0x0);
  local_20 = 8;
  FUN_004ab84c((uint *)local_c,&DAT_0051b1ec,'\x01');
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FrameRect((HDC)*param_2,&local_84,local_c[0]);
  iVar4 = local_84.top + 2;
  local_5c = local_84.right + -1;
  local_60 = local_84.top + 1;
  local_64 = local_84.left + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_a4.left = local_64;
  local_a4.top = local_60;
  local_a4.right = local_5c;
  local_a4.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_a4,(LPCSTR)0x0,0,(INT *)0x0);
  LVar1 = param_3->bottom;
  local_6c = param_3->right + 1;
  local_70 = param_3->top;
  LVar2 = param_3->right;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_b4.top = local_70;
  local_b4.right = local_6c;
  local_b4.left = LVar2;
  local_b4.bottom = LVar1;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_b4,(LPCSTR)0x0,0,(INT *)0x0);
  local_14 = local_14 + -2;
  FUN_004ab9b4((uint *)local_c,2);
  *in_FS_OFFSET = local_30;
  return;
}

