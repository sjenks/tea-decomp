// rea decompile_all
// name: FUN_00416e74
// address: 0x416e74
// body: available
// range: 0x416e74-0x416fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00416e74(int param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x42fbb4);
  local_40 = 8;
  FUN_00416fc4(param_1,0);
  if (param_2 == (uint *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_004133f0;
    uVar5 = 0;
    local_40 = 0x2c;
    FUN_004168f8(local_58);
    puVar1 = FUN_0041ea4c(local_14c,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    FUN_00416e74((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00416de8(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_00404fb4((int)local_2c,2);
    local_40 = 0x20;
    FUN_004280a0((uint *)&DAT_004079c4,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  uVar7 = FUN_00416e64(param_2);
  local_40 = 8;
  piVar3 = FUN_00416ffc(param_1,uVar7,uVar7);
  local_5c = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_15c,param_1,&local_5c);
  puVar4 = (undefined4 *)FUN_00416734(param_1);
  FUN_00416fa4(puVar4,param_2,uVar7);
  *in_FS_OFFSET = local_50;
  return param_1;
}

