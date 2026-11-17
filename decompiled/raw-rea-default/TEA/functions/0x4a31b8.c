// rea decompile_all
// name: FUN_004a31b8
// address: 0x4a31b8
// body: available
// range: 0x4a31b8-0x4a3317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a31b8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_48 [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c [2];
  
  FUN_004dce64(0x50a76c);
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_48._8_4_ = 0;
  local_3c = 0;
  FUN_004a7a30(*param_1,(LPRECT)local_48);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)local_48);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(local_48 + 8));
  }
  local_20 = 8;
  FUN_00497298((int *)local_c,0x104);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  FUN_0048f980(&local_38,param_1[6],local_c[0]);
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = local_48._4_4_ + local_34;
  }
  else {
    uVar2 = -((local_3c - local_48._4_4_) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_00494470((int *)local_48,0,iVar3);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      local_48._8_4_ = local_48._0_4_ + local_38;
    }
    else {
      local_48._0_4_ = local_48._8_4_ - local_38;
    }
  }
  else {
    uVar1 = -((local_48._8_4_ - local_48._0_4_) - local_38);
    iVar3 = (int)uVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
    }
    FUN_00494470((int *)local_48,iVar3,0);
  }
  FUN_004a7aa0(*param_1,(HWND)0x0,local_48._0_4_,local_48._4_4_,local_48._8_4_ - local_48._0_4_,
               local_3c - local_48._4_4_,4);
  local_14 = local_14 + -2;
  FUN_00497358(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

