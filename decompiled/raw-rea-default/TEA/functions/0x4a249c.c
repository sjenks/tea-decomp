// rea decompile_all
// name: FUN_004a249c
// address: 0x4a249c
// body: available
// range: 0x4a249c-0x4a2782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a249c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  tagRECT local_c8;
  LOGFONTA local_b8;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [12];
  uint *local_24;
  uint local_20 [2];
  uint *local_18;
  uint local_14 [2];
  uint *local_c [2];
  
  FUN_004dce64(0x50a3fc);
  FUN_004a6fd8(*param_1);
  iVar1 = FUN_004a76a8(*(int *)(*param_1 + 0x14),0x31,0,0);
  if (iVar1 == 0) {
    local_68 = 0x2c;
    puVar2 = FUN_0048faec(local_20);
    local_5c = local_5c + 3;
    iVar1 = GetObjectA((HANDLE)*puVar2,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -3;
    FUN_00494064(local_20,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_24 = (uint *)FUN_004cc0f0();
      if (local_24 != (uint *)0x0) {
        local_68 = 0x44;
        FUN_0048f7fc(local_24,&local_b8);
      }
      param_1[6] = (int)local_24;
    }
  }
  else {
    local_68 = 8;
    local_7c = FUN_0048f708(local_14,iVar1,0);
    local_5c = local_5c + 2;
    iVar1 = GetObjectA((HANDLE)*local_7c,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -2;
    FUN_00494064(local_14,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_18 = (uint *)FUN_004cc0f0();
      if (local_18 != (uint *)0x0) {
        local_68 = 0x20;
        FUN_0048f7fc(local_18,&local_b8);
      }
      param_1[6] = (int)local_18;
    }
  }
  local_68 = 0x50;
  FUN_00497298((int *)local_c,0x104);
  local_5c = local_5c + 2;
  local_68 = 0x5c;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  if (*(int *)(param_1[0xd] + -4) == 0) {
    FUN_004cf41c((int)(param_1 + 0xb),local_c[0]);
  }
  pcVar3 = FUN_004dc9f4(local_c[0]);
  if (pcVar3 == (char *)0x0) {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[0xd]);
  }
  FUN_004a31b8(param_1);
  if ((param_1[7] != 0) && (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_004a7988(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
  }
  if (param_1[7] != 0) {
    local_c8.left = 0;
    local_c8.top = 0;
    local_c8.right = 0;
    local_c8.bottom = 0;
    FUN_004a7a6c(*param_1,&local_c8);
    local_68 = 0x68;
    FUN_0049f414(local_54,*(undefined4 *)(*param_1 + 0xc),&local_c8.left,0x3eb,(uint *)0xffffffff);
    local_5c = local_5c + 2;
    local_68 = 0x74;
    FUN_0049f534((int)local_54,(uint *)param_1[0xd],'\x01');
    FUN_004a76a8(*(int *)param_1[7],0x404,0,(LPARAM)local_54);
    local_5c = local_5c + -2;
    FUN_004cc0cc();
    local_68 = 0x5c;
  }
  local_5c = local_5c + -2;
  FUN_00497358(local_c,0);
  *in_FS_OFFSET = local_78;
  return;
}

