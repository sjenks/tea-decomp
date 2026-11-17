// rea decompile_all
// name: FUN_0045318c
// address: 0x45318c
// body: available
// range: 0x45318c-0x453499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0045318c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_160;
  undefined *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 *local_150;
  uint *local_14c;
  undefined4 local_148;
  undefined2 local_138;
  int local_12c;
  int *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_118;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined4 local_14 [4];
  
  FUN_004dce64(0x4f8508);
  iVar1 = FUN_00464af0(param_1[0xe]);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_148;
    return local_148;
  }
  puVar5 = *(uint **)(iVar1 + 8);
  local_138 = 8;
  FUN_0043c330(local_14,*(undefined4 *)(*(int *)(param_1[0x1b4] * 4 + param_1[0x1ad]) + 8));
  local_12c = local_12c + 2;
  local_138 = 0x14;
  iVar2 = FUN_0043c428((int)local_14);
  if (iVar2 < 2) {
    local_160 = 0x2670;
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    local_160 = 0x267a;
    *puVar5 = *puVar5 | 1;
  }
  local_15c = &DAT_004f75c4;
  local_158 = 0;
  local_154 = 0;
  if (param_1[0x18] != 0) {
    param_1[0x32d] = 4;
    FUN_00464ba4();
  }
  local_138 = 0x20;
  iVar2 = param_1[0x1b4];
  iVar3 = FUN_00466b18(param_1[0xe]);
  FUN_00408cbc(local_24,iVar3,iVar2);
  local_12c = local_12c + 1;
  local_138 = 0x14;
  iVar2 = FUN_00466b28(param_1[0xe]);
  local_138 = 0x2c;
  FUN_00402fa0(&local_11c,local_1c,puVar5,local_14,(undefined4 *)(iVar2 + 0xf0),param_1[0x32d],
               param_1 + 0x32e);
  local_12c = local_12c + 5;
  local_138 = 0x14;
  local_120 = (int *)FUN_004cc0f0();
  if (local_120 != (int *)0x0) {
    local_138 = 0x44;
    local_124 = (int *)FUN_004cc0f0();
    if (local_124 != (int *)0x0) {
      local_138 = 0x50;
      FUN_00494b04(local_124,0,0,(uint *)0x0,0);
      local_138 = 0x44;
    }
    puVar6 = &local_160;
    piVar7 = local_124;
    iVar2 = FUN_0043c428((int)local_14);
    FUN_0043bbfc(local_120,0,(uint *)s_TEAPrintPreview_004f76a2,*param_1,param_1[0xe],iVar1,
                 (int)&local_11c,0 < iVar2,local_118,puVar6,piVar7);
  }
  local_138 = 0x14;
  (**(code **)(*(int *)(local_120[1] + 8) + 0x1c))();
  local_12c = local_12c + -5;
  FUN_004030f4(&local_11c,2);
  local_12c = local_12c + -1;
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar1 = *puVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_00453471;
    }
    local_14c = local_1c + -3;
    FUN_004cc0bc();
    local_150 = local_24;
    local_1c = (uint *)0x0;
  }
LAB_00453471:
  local_12c = local_12c + -2;
  uVar4 = FUN_0043c3a8(local_14,2);
  *in_FS_OFFSET = local_148;
  return uVar4;
}

