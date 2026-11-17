// rea decompile_all
// name: FUN_004d1e40
// address: 0x4d1e40
// body: available
// range: 0x4d1e40-0x4d1fb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004d1e40(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x51479c);
  local_40 = 8;
  FUN_004cf778(param_1,0);
  uVar1 = FUN_004cea6c(param_2);
  if (uVar1 < param_3) {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar1 = 1;
    puVar10 = &LAB_004084c8;
    uVar9 = 0;
    local_40 = 0x2c;
    FUN_004ceae8(local_58);
    FUN_004cea6c(param_2);
    puVar2 = FUN_004dc320(local_14c,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_004cfecc(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00402880((int)local_2c,2);
    local_40 = 0x20;
    FUN_004e7cc4((uint *)&DAT_0040846c,local_1c,uVar9,puVar10,uVar1,uVar11,uVar12,uVar13);
  }
  iVar4 = FUN_004cea6c(param_2);
  uVar1 = iVar4 - param_3;
  local_40 = 8;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_4 == DAT_005140ac) {
    param_4 = 0;
  }
  uVar8 = uVar1;
  if (uVar1 < param_4) {
    uVar8 = param_4;
  }
  piVar5 = FUN_004cf7b0(param_1,uVar8,uVar1);
  local_5c = FUN_004cfaa0((int)piVar5);
  FUN_004cea90((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_004ce924(param_2);
  puVar6 = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_004ce924(param_1);
  FUN_004cf758(puVar7,puVar6,uVar1);
  *in_FS_OFFSET = local_50;
  return param_1;
}

