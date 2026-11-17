// rea decompile_all
// name: FUN_0049c334
// address: 0x49c334
// body: available
// range: 0x49c334-0x49c400 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049c334(undefined4 *param_1)

{
  HDC pHVar1;
  int iVar2;
  tagPOINT *ptVar3;
  tagPOINT local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  int local_18;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  local_14.x = 0;
  local_14.y = 0;
  ptVar3 = &local_14;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetViewportOrgEx(pHVar1,ptVar3);
  local_c = local_14.x;
  local_8 = local_14.y;
  FUN_0049bca0(&local_1c,*(int *)((int)param_1 + 0x35));
  local_24.cx = 0;
  local_24.cy = 0;
  GetViewportExtEx((HDC)*param_1,&local_24);
  iVar2 = MulDiv(local_8,local_24.cy,local_18);
  local_2c = MulDiv(local_c,local_24.cx,local_1c);
  local_3c.x = 0;
  local_3c.y = 0;
  ptVar3 = &local_3c;
  local_28 = iVar2;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetWindowOrgEx(pHVar1,ptVar3);
  local_34 = local_3c.x;
  local_30 = local_3c.y;
  SetWindowOrgEx((HDC)*param_1,local_3c.x,local_3c.y,(LPPOINT)0x0);
  SetViewportOrgEx((HDC)*param_1,local_2c,local_28,(LPPOINT)0x0);
  return;
}

