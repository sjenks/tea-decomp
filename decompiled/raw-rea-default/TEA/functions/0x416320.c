// rea decompile_all
// name: FUN_00416320
// address: 0x416320
// body: available
// range: 0x416320-0x4164a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00416320(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  bool bVar1;
  LRESULT LVar2;
  undefined4 *puVar3;
  int *piVar4;
  DWORD color;
  undefined3 extraout_var;
  HANDLE h;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  LOGFONTA local_70;
  HWND local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  FUN_004dce64(0x4edc78);
  local_30 = FUN_004b0584(param_1,param_2,param_3,param_4);
  if (param_4 == 6) {
    LVar2 = FUN_004a614c(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar2 + 8);
    }
    puVar3 = FUN_004dd744(LVar2,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0041385c,0);
    local_34 = param_3;
    LVar2 = FUN_004a614c(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar2 + 8);
    }
    piVar4 = FUN_004dd744(LVar2,iVar5,(int *)&DAT_0040299c,(int *)&DAT_004164a4,0);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) {
      color = GetSysColor(2);
      SetTextColor(param_2,color);
    }
    if (((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) ||
       ((piVar4 != (int *)0x0 && (bVar1 = FUN_0041b8f8(piVar4), CONCAT31(extraout_var,bVar1) != 0)))
       ) {
      if (param_1[0xf] == 0) {
        h = (HANDLE)FUN_004a76a8(*param_1,0x31,0,0);
        if (h == (HANDLE)0x0) {
          h = GetStockObject(0xc);
        }
        if ((h != (HANDLE)0x0) && (iVar5 = GetObjectA(h,0x3c,&local_70), iVar5 != 0)) {
          local_70.lfUnderline = '\x01';
          local_8 = (uint *)FUN_004cc0f0();
          if (local_8 != (uint *)0x0) {
            local_1c = 0x14;
            FUN_0048f7fc(local_8,&local_70);
            local_1c = 8;
          }
          param_1[0xf] = (int)local_8;
        }
      }
      if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
        SelectObject(param_2,*(HGDIOBJ *)param_1[0xf]);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return local_30;
}

