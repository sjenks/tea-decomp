// rea decompile_all
// name: FUN_0041ab68
// address: 0x41ab68
// body: available
// range: 0x41ab68-0x41ac79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0041ab68(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x430448);
  iVar1 = FUN_0041687c(param_2);
  uVar6 = DAT_0042fce8 - iVar1;
  uVar2 = FUN_0041687c(param_1);
  if (uVar6 <= uVar2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = 1;
    puVar8 = &LAB_00405f50;
    uVar7 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    FUN_0041687c(param_2);
    FUN_0041687c(param_1);
    puVar3 = FUN_0041ea4c(local_148,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar4 = (uint *)FUN_00416de0(puVar3);
    FUN_00416e74((int)local_2c,puVar4);
    local_34 = local_34 + 1;
    FUN_00417760(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00404fb4((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_00405ef4,local_1c,uVar7,puVar8,uVar2,uVar9,uVar10,uVar12);
  }
  uVar2 = FUN_0041687c(param_2);
  uVar6 = FUN_004177ec(param_2);
  uVar11 = 0;
  uVar5 = FUN_0041687c(param_1);
  FUN_004172f8(param_1,uVar5,uVar11,uVar6,uVar2);
  *in_FS_OFFSET = local_50;
  return param_1;
}

