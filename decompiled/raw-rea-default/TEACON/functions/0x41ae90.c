// rea decompile_all
// name: FUN_0041ae90
// address: 0x41ae90
// body: available
// range: 0x41ae90-0x41b212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0041ae90(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [240];
  undefined1 local_190 [240];
  int local_a0;
  int *local_9c;
  uint local_98;
  int local_94;
  uint local_90;
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
  
  FUN_0041f3fc(0x430550);
  uVar1 = FUN_0041687c(param_1);
  if (uVar1 < param_2) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_004060a8;
    uVar8 = 0;
    local_68 = 0x14;
    FUN_004168f8(local_80);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_190,PTR_s_string_index_out_of_range_in_fun_00431a84);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_00404fb4((int)local_2c,2);
    local_68 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0041687c(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  iVar4 = FUN_0041687c(param_1);
  if (DAT_0042fce8 - param_4 <= iVar4 - local_84) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_00405f50;
    uVar8 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_8c);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_280,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00404fb4((int)local_54,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0041687c(param_1);
  local_90 = (iVar4 - local_84) + param_4;
  if (local_90 == 0) {
    FUN_0041669c(param_1);
    piVar5 = FUN_00416784();
    FUN_00416c40(piVar5);
    puVar6 = FUN_00416784();
    local_94 = FUN_004172ec((int)puVar6);
    FUN_004168a0((int)local_290,param_1,&local_94);
  }
  else {
    iVar4 = FUN_0041687c(param_1);
    local_98 = (iVar4 - local_84) - param_2;
    piVar5 = (int *)FUN_00416740(param_1);
    iVar4 = FUN_00416754(piVar5);
    if ((iVar4 < 2) && (uVar1 = FUN_004177c8(param_1), local_90 <= uVar1)) {
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00416734(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_00416734(param_1);
        FUN_004177a8((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      if (param_4 != 0) {
        iVar4 = FUN_00416734(param_1);
        FUN_0041b214((undefined4 *)(iVar4 + param_2),param_4,param_5);
      }
      iVar4 = FUN_00416740(param_1);
      uVar1 = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = FUN_00416734(param_1);
      puVar2 = (undefined1 *)(iVar4 + uVar1);
      uVar8 = FUN_004172e8();
      *puVar2 = (char)uVar8;
    }
    else {
      local_9c = FUN_00416ffc(param_1,local_90,local_90);
      if (param_2 != 0) {
        uVar1 = param_2;
        puVar6 = (undefined4 *)FUN_00416734(param_1);
        puVar7 = (undefined4 *)FUN_004172ec((int)local_9c);
        FUN_00416fa4(puVar7,puVar6,uVar1);
      }
      if (param_4 != 0) {
        uVar1 = param_4;
        iVar4 = FUN_004172ec((int)local_9c);
        FUN_0041b214((undefined4 *)(iVar4 + param_2),uVar1,param_5);
      }
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00416734(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_004172ec((int)local_9c);
        FUN_00416fa4((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      FUN_0041669c(param_1);
      local_a0 = FUN_004172ec((int)local_9c);
      FUN_004168a0((int)local_2a0,param_1,&local_a0);
    }
  }
  *in_FS_OFFSET = local_78;
  return param_1;
}

