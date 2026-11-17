// rea decompile_all
// name: FUN_0042bdf0
// address: 0x42bdf0
// body: available
// range: 0x42bdf0-0x42bf42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0042bdf0(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  tagRECT local_44;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
  if (param_2 != '\0') {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    FUN_004a7a6c(*param_1,&local_44);
    ptVar3 = &local_44;
    pLVar4 = local_34;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar4 = ptVar3->left;
      ptVar3 = (tagRECT *)&ptVar3->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar2 = FUN_0042ba08((int)param_1);
    if (iVar2 * param_1[0x40] - (local_34[3] - local_34[1]) != 0 &&
        local_34[3] - local_34[1] <= iVar2 * param_1[0x40]) {
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
      local_c.x = local_34[2] - local_34[0];
      local_c.y = 0;
      MapWindowPoints(*(HWND *)(*param_1 + 0xc),*(HWND *)(*(int *)param_1[0x38] + 0xc),&local_c,1);
      local_14 = GetSystemMetrics(2);
      local_18 = local_c.y + (local_34[3] - local_34[1]);
      local_1c = local_c.x + local_14;
      local_20 = local_c.y;
      local_24 = local_c.x;
      local_10 = local_34[3] - local_34[1];
      (**(code **)(*(int *)(*(int *)param_1[0x38] + 8) + 0x6c))();
    }
    if ((param_1[0x45] < param_1[0x47]) && (param_1[0x46] < param_1[0x48])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0;
    }
  }
  return;
}

