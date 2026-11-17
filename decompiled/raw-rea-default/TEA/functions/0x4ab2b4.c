// rea decompile_all
// name: FUN_004ab2b4
// address: 0x4ab2b4
// body: available
// range: 0x4ab2b4-0x4ab3ad inclusive
// range: 0x4ab3db-0x4ab402 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004ab2b4(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  code *pcVar8;
  int local_40;
  short local_3c;
  undefined4 *local_3a;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  bVar7 = 0;
  FUN_004dce64(0x50be60);
  piVar1 = &DAT_0050be30;
  piVar6 = &local_40;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar1;
    piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*piVar1;
  piVar1 = (int *)FUN_004a8a84();
  local_2c = *piVar1;
  *piVar1 = (int)&local_40;
  if ((param_3 & 0x1000) != 0) {
    param_3 = param_3 & 0xffffefff | 0x2000;
  }
  if ((param_3 & 0x2000) == 0) {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
    }
  }
  else {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
    }
    piVar1 = &local_40;
    pcVar8 = FUN_004ab210;
    DVar2 = GetCurrentThreadId();
    BVar3 = EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    if (BVar3 == 0) {
      *in_FS_OFFSET = local_28;
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_004cc180();
    local_3a = puVar4;
    FUN_004dc844(puVar4,0,(local_3c + 1) * 4);
    piVar1 = &local_40;
    pcVar8 = FUN_004ab210;
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    local_3a = puVar4;
  }
  local_18 = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  local_18 = 0;
  piVar1 = (int *)FUN_004a8a84();
  *piVar1 = local_2c;
  FUN_004ab25d(&local_40);
  *in_FS_OFFSET = local_28;
  return local_30;
}

