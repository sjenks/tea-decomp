// rea decompile_all
// name: FUN_004d5850
// address: 0x4d5850
// body: available
// range: 0x4d5850-0x4d5a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004d5850(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x5150f0);
  uVar1 = FUN_004cea6c(param_2);
  if (uVar1 < param_3) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar8 = &LAB_004084c8;
    uVar7 = 0;
    local_68 = 0x14;
    FUN_004ceae8(local_80);
    FUN_004cea6c(param_2);
    puVar2 = FUN_004dc320(local_17c,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_004cfecc(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_00402880((int)local_2c,2);
    local_68 = 8;
    FUN_004e7cc4((uint *)&DAT_0040846c,local_1c,uVar7,puVar8,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_004cea6c(param_2);
  local_84 = iVar4 - param_3;
  if (param_4 < local_84) {
    local_84 = param_4;
  }
  uVar1 = FUN_004cea6c(param_1);
  if (DAT_005140ac - local_84 <= uVar1) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar8 = &LAB_00408370;
    uVar7 = 0;
    local_68 = 0x2c;
    FUN_004ceae8(local_8c);
    FUN_004cea6c(param_1);
    puVar2 = FUN_004dc320(local_26c,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_004cff14(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00402880((int)local_54,2);
    local_68 = 0x20;
    FUN_004e7cc4((uint *)&DAT_00408314,local_44,uVar7,puVar8,uVar1,uVar10,uVar11,uVar12);
  }
  uVar1 = FUN_004cea6c(param_2);
  uVar5 = FUN_004cffa0(param_2);
  uVar9 = 0;
  uVar6 = FUN_004cea6c(param_1);
  FUN_004cfad4(param_1,uVar6,uVar9,uVar5,uVar1,param_3,param_4);
  *in_FS_OFFSET = local_78;
  return param_1;
}

