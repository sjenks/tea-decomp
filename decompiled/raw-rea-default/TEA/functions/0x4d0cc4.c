// rea decompile_all
// name: FUN_004d0cc4
// address: 0x4d0cc4
// body: available
// range: 0x4d0cc4-0x4d0f40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004d0cc4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_388 [240];
  undefined1 local_298 [240];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [16];
  undefined4 local_6c [6];
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x514480);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_004d0f44(param_1);
  uVar2 = FUN_004d0f50(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_0047ec80;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_004ceae8(local_a8);
      puVar3 = FUN_004dc320(local_1a8,PTR_s_iostream_object_has_failbit_set_00515af8);
      puVar4 = (uint *)FUN_004cf594(puVar3);
      iVar5 = FUN_004cf628((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_004d8b80(local_1c,iVar5);
      local_84 = local_84 + 2;
      FUN_00402880((int)local_2c,2);
      local_90 = 8;
      FUN_004e7cc4((uint *)&DAT_0047ec18,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_0047ec80;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_004ceae8(local_b0);
      puVar3 = FUN_004dc320(local_298,PTR_s_iostream_object_has_badbit_set_00515afc);
      puVar4 = (uint *)FUN_004cf594(puVar3);
      iVar5 = FUN_004cf628((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_004d8b80(local_44,iVar5);
      local_84 = local_84 + 2;
      FUN_00402880((int)local_54,2);
      local_90 = 0x20;
      FUN_004e7cc4((uint *)&DAT_0047ec18,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_0047ec80;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_004ceae8(local_b8);
      puVar3 = FUN_004dc320(local_388,PTR_s_iostream_object_has_eofbit_set_00515b00);
      puVar4 = (uint *)FUN_004cf594(puVar3);
      iVar5 = FUN_004cf628((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_004d8b80(local_6c,iVar5);
      local_84 = local_84 + 2;
      FUN_00402880((int)local_7c,2);
      local_90 = 0x38;
      FUN_004e7cc4((uint *)&DAT_0047ec18,local_6c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}

