// rea decompile_all
// name: FUN_0045424c
// address: 0x45424c
// body: available
// range: 0x45424c-0x4543e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0045424c(int *param_1)

{
  int iVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  int local_54 [8];
  HGLOBAL local_34;
  HCURSOR local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  char local_5;
  
  FUN_004dce64(0x4f87e0);
  iVar1 = *(int *)(*(int *)(param_1[0x1ad] + param_1[0x1b4] * 4) + 8);
  local_2c = FUN_0042ba14(iVar1);
  if (local_2c < 1) {
    *in_FS_OFFSET = local_28;
  }
  else {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    local_30 = SetCursor(hCursor);
    ShowCursor(1);
    local_18 = 8;
    FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
    local_c = local_c + 1;
    local_18 = 0x14;
    BVar2 = EmptyClipboard();
    if (BVar2 != 0) {
      pcVar6 = (char *)0x0;
      FUN_0043061c(local_54,iVar1);
      while( true ) {
        iVar4 = FUN_00430678(local_54);
        if (iVar4 < 0) break;
        puVar3 = (uint *)FUN_0042baf8(iVar1,iVar4);
        pcVar5 = FUN_004dc9f4(puVar3);
        pcVar6 = pcVar6 + (int)pcVar5;
      }
      if (1 < local_2c) {
        pcVar6 = pcVar6 + local_2c * 2;
      }
      local_34 = GlobalAlloc(0x42,(SIZE_T)(pcVar6 + 1));
      if (local_34 != (HGLOBAL)0x0) {
        pcVar6 = GlobalLock(local_34);
        local_18 = 0x14;
        FUN_00430730(local_54,0);
        while( true ) {
          iVar4 = FUN_00430678(local_54);
          if (iVar4 < 0) break;
          pcVar5 = (char *)FUN_0042baf8(iVar1,iVar4);
          local_18 = 0x14;
          for (; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
            *pcVar6 = *pcVar5;
            pcVar6 = pcVar6 + 1;
          }
          if (1 < local_2c) {
            *pcVar6 = '\r';
            pcVar6[1] = '\n';
            pcVar6 = pcVar6 + 2;
          }
        }
        GlobalUnlock(local_34);
        SetClipboardData(1,local_34);
      }
    }
    FUN_0048bc08(&local_5);
    ShowCursor(0);
    SetCursor(local_30);
    local_c = local_c + -1;
    FUN_0048bbe0(&local_5,2);
    *in_FS_OFFSET = local_28;
  }
  return;
}

