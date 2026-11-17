// rea decompile_all
// name: FUN_00498638
// address: 0x498638
// body: available
// range: 0x498638-0x49876e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498638(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 *param_5,undefined1 param_6,int *param_7)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_48;
  LONG local_38;
  int local_34;
  RECT local_28;
  int local_14;
  int local_c;
  int local_8;
  
  bVar4 = 0;
  if ((*(char *)((int)param_4 + 0x4d) != '\0') && (param_7[1] == 0)) {
    local_8 = GetSystemMetrics(DAT_00509df0);
    local_c = param_7[2];
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = local_c;
    local_28.bottom = local_8;
    ExtTextOutA((HDC)*param_5,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
    param_1 = 0;
  }
  if (*(int *)((int)param_4 + 0x4e) == 0) {
    FUN_00492ad8((int)param_4,param_5,CONCAT31((int3)((uint)param_1 >> 8),param_6),param_7);
  }
  else {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    FUN_004a7a6c(*param_4,&local_48);
    ptVar2 = &local_48;
    pLVar3 = &local_38;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    if (*(char *)((int)param_4 + 0x4d) != '\0') {
      local_14 = DAT_00509df0;
      iVar1 = GetSystemMetrics(DAT_00509df0);
      local_34 = local_34 + iVar1;
    }
    (**(code **)(*(int *)((int)param_5 + 5) + 0x14))();
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    FUN_004dc9f4(*(uint **)((int)param_4 + 0x4e));
    (**(code **)(*(int *)((int)param_5 + 5) + 0x48))();
  }
  return;
}

