// rea decompile_all
// name: FUN_004165cc
// address: 0x4165cc
// body: available
// range: 0x4165cc-0x4166e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004165cc(int *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  tagRECT *ptVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  UINT UVar7;
  UINT UVar8;
  tagRECT local_b0;
  tagRECT local_a0;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  int local_6c;
  int local_67;
  
  bVar6 = 0;
  FUN_004dce64(0x4edcb8);
  if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
    BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      local_80 = 8;
      FUN_0049af8c(&local_6c,*(HWND *)(*param_1 + 0xc));
      local_74 = local_74 + 2;
      local_80 = 0x14;
      local_b0.left = 0;
      local_b0.top = 0;
      local_b0.right = 0;
      local_b0.bottom = 0;
      FUN_004a7a6c(*param_1,&local_b0);
      ptVar4 = &local_b0;
      ptVar5 = &local_a0;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar5->left = ptVar4->left;
        ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
        ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      local_a0.left = GetSystemMetrics(2);
      local_a0.left = local_a0.right - local_a0.left;
      local_a0.top = GetSystemMetrics(3);
      local_a0.top = local_a0.bottom - local_a0.top;
      UVar8 = 8;
      UVar7 = 3;
      ptVar4 = &local_a0;
      pHVar2 = (HDC)(**(code **)(local_67 + 0x5c))();
      DrawFrameControl(pHVar2,ptVar4,UVar7,UVar8);
      local_74 = local_74 + -2;
      FUN_0049b014(&local_6c,2);
      goto LAB_004166d0;
    }
  }
  FUN_004b0574(param_1);
LAB_004166d0:
  *in_FS_OFFSET = local_90;
  return;
}

