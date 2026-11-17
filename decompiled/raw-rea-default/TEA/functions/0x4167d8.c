// rea decompile_all
// name: FUN_004167d8
// address: 0x4167d8
// body: available
// range: 0x4167d8-0x416960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004167d8(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  LRESULT LVar3;
  int iVar4;
  HWND pHVar5;
  int *piVar6;
  tagPOINT *ptVar7;
  tagPOINT local_20;
  HWND local_18;
  undefined4 *local_14;
  int local_10;
  tagPOINT local_c;
  
  if (param_2->message == 0x204) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    local_10 = FUN_004a7590(*param_1,&LAB_004138d8);
    if (local_10 != 0) {
      local_18 = *(HWND *)(local_10 + 0xc);
      LVar3 = FUN_004a614c(local_18,*(LPARAM *)(*param_1 + 0x6c));
      if (LVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(LVar3 + 8);
      }
      local_14 = FUN_004dd744(LVar3,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
      if (local_14 != (undefined4 *)0x0) {
        (**(code **)(local_14[3] + 0x78))();
      }
    }
  }
  else if ((param_2->message == 0x205) || ((param_2->message == 0x101 && (param_2->wParam == 0x5d)))
          ) {
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    pHVar5 = GetFocus();
    LVar3 = FUN_004a614c(pHVar5,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(LVar3 + 8);
    }
    piVar6 = FUN_004dd744(LVar3,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
    if ((piVar6 != (int *)0x0) && (param_1[0x11] != 0)) {
      if (param_2->message == 0x205) {
        ptVar7 = &local_20;
      }
      else {
        ptVar7 = (tagPOINT *)0x0;
      }
      FUN_00415944(param_1,piVar6,&ptVar7->x);
    }
  }
  if ((param_2->message == 0x100) &&
     (((WVar1 = param_2->wParam, WVar1 == 0x73 || (WVar1 == 0x74)) || (WVar1 == 0x75)))) {
    FUN_00466370(param_1[0xe],WVar1,*(int *)(*param_1 + 0x14));
    bVar2 = true;
  }
  else {
    bVar2 = FUN_004b03f4(param_1,param_2);
  }
  return bVar2;
}

