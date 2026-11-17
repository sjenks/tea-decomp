// rea decompile_all
// name: FUN_00492ad8
// address: 0x492ad8
// body: available
// range: 0x492ad8-0x492c10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00492ad8(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  tagPOINT *lppoint;
  tagPOINT local_40;
  LONG local_38;
  LONG local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HRGN local_c [2];
  
  FUN_004dce64(0x506ee0);
  local_40.x = 0;
  local_40.y = 0;
  lppoint = &local_40;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetViewportOrgEx(hdc,lppoint);
  local_38 = local_40.x;
  local_34 = local_40.y;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    if ((((*(int *)((int)piVar1 + 10) < param_4[2]) && (*param_4 < *(int *)((int)piVar1 + 0x12))) &&
        (*(int *)((int)piVar1 + 0xe) < param_4[3])) && (param_4[1] < *(int *)((int)piVar1 + 0x16)))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
      if ((char)piVar1[1] == '\0') {
        (**(code **)(*piVar1 + 0x30))();
      }
      else {
        local_20 = 8;
        FUN_0049ce64((int *)local_c);
        local_14 = local_14 + 1;
        local_20 = 0x14;
        GetClipRgn((HDC)*param_2,local_c[0]);
        IntersectClipRect((HDC)*param_2,*(int *)((int)piVar1 + 10),*(int *)((int)piVar1 + 0xe),
                          *(int *)((int)piVar1 + 0x12),*(int *)((int)piVar1 + 0x16));
        (**(code **)(*piVar1 + 0x30))();
        SelectClipRgn((HDC)*param_2,local_c[0]);
        local_14 = local_14 + -1;
        FUN_0049cf24(local_c,2);
        local_20 = 0;
      }
    }
  }
  (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
  *in_FS_OFFSET = local_30;
  return;
}

