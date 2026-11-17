// rea decompile_all
// name: FUN_004d7ae0
// address: 0x4d7ae0
// body: available
// range: 0x4d7ae0-0x4d7be0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004d7ae0(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x515508);
  uVar1 = FUN_004cea6c(param_1);
  if (uVar1 < param_4) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004084c8;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004ceae8(local_58);
    FUN_004cea6c(param_1);
    puVar2 = FUN_004dc320(local_148,PTR_s_position_beyond_end_of_string_in_00516d24);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_004cfecc(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00402880((int)local_2c,2);
    local_40 = 8;
    FUN_004e7cc4((uint *)&DAT_0040846c,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_004cea6c(param_1);
  if (iVar4 - param_4 <= param_3) {
    param_3 = iVar4 - param_4;
  }
  uVar1 = param_3;
  iVar4 = FUN_004ce924(param_1);
  FUN_004cf758(param_2,(undefined4 *)(iVar4 + param_4),uVar1);
  *in_FS_OFFSET = local_50;
  return param_3;
}

