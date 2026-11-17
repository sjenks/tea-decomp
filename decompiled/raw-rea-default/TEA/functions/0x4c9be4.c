// rea decompile_all
// name: FUN_004c9be4
// address: 0x4c9be4
// body: available
// range: 0x4c9be4-0x4c9d44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c9be4(int *param_1)

{
  HMENU hMenu;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  UINT UVar4;
  int *piVar5;
  int *piVar6;
  int local_24 [4];
  undefined1 local_14 [16];
  
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  if (hMenu != (HMENU)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if ((BVar2 == 0) && (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf120,UVar4);
    EnableMenuItem(hMenu,0xf010,0);
    EnableMenuItem(hMenu,0xf000,(uint)((uVar1 & 0x40000) == 0));
    if (((uVar1 & 0x20000) == 0) || (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf020,UVar4);
    if (((uVar1 & 0x10000) == 0) || (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf030,UVar4);
    FUN_004c9ad8(local_24,param_1);
    piVar5 = local_24;
    piVar6 = (int *)local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)local_14);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)(local_14 + 8));
    TrackPopupMenu(hMenu,0,local_14._0_4_ - param_1[6],local_14._4_4_ - param_1[7],0,
                   *(HWND *)(*param_1 + 0xc),(RECT *)local_14);
  }
  return;
}

