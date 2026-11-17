// rea decompile_all
// name: FUN_0041acdc
// address: 0x41acdc
// body: available
// range: 0x41acdc-0x41ae8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0041acdc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_268 [240];
  undefined1 local_178 [240];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x4304c0);
  uVar1 = FUN_0041687c(param_1);
  if (uVar1 < param_2) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_004060a8;
    uVar6 = 0;
    local_68 = 0x14;
    FUN_004168f8(local_80);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_178,PTR_s_string_index_out_of_range_in_fun_00431a84);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_00404fb4((int)local_2c,2);
    local_68 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_0041687c(param_3);
  uVar5 = DAT_0042fce8 - iVar4;
  uVar1 = FUN_0041687c(param_1);
  if (uVar5 <= uVar1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00405f50;
    uVar6 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_88);
    FUN_0041687c(param_3);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_268,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00404fb4((int)local_54,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  FUN_0041aca0(param_1,param_2,0,param_3);
  *in_FS_OFFSET = local_78;
  return;
}

