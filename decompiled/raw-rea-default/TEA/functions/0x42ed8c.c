// rea decompile_all
// name: FUN_0042ed8c
// address: 0x42ed8c
// body: available
// range: 0x42ed8c-0x42f9da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0042ee37) */
/* WARNING: Removing unreachable block (ram,0x0042ee0b) */

int * __cdecl
FUN_0042ed8c(int *param_1,int *param_2,int param_3,int param_4,int param_5,char param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 in_stack_fffffb44;
  undefined4 in_stack_fffffb48;
  undefined4 local_48c [4];
  int local_47c [5];
  undefined4 local_468;
  undefined4 *local_464;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 *local_454;
  undefined4 *local_444;
  undefined4 *local_434;
  undefined4 *local_424;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 *local_414;
  undefined4 local_40c;
  undefined4 local_408;
  int local_404;
  undefined4 local_3fc;
  undefined4 local_3f8;
  int local_3f4;
  int local_3e4;
  int local_3d4;
  int local_3c4;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  int local_3ac [4];
  tagRECT local_39c;
  LONG local_38c;
  int local_388;
  int local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 local_36c;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_354;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_33c;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined1 local_324;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_30c;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 local_2f4;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2dc;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c4;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 local_2ac;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_294;
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  int local_264;
  int local_254;
  int local_244;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_21c;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_204;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d4;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  int local_174;
  int local_164;
  int local_154;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined4 local_134;
  undefined4 *local_12c;
  undefined4 *local_128;
  int local_124;
  int *local_120;
  char local_11a;
  char local_119;
  int local_118;
  int local_114;
  int local_110;
  int *local_10c;
  int *local_108;
  int local_104;
  int local_100;
  int *local_fc;
  int *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar9 = 0;
  FUN_004dce64(0x4f2aa0);
  local_80 = 0x14;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_c = local_98;
  local_8 = local_94;
  local_3c[0] = 1;
  local_2c = 0;
  local_134 = 0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_9c = 0;
  FUN_00429a74(local_3c);
  puVar1 = local_20 + 6;
  local_a0 = local_20;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  *local_20 = 0;
  local_20[1] = 0;
  local_20[2] = local_20;
  local_20[3] = local_20;
  local_3c[0] = 0x80;
  local_80 = 0x2c;
  local_20 = puVar1;
  local_18 = local_a0;
  if (param_6 == '\0') {
    local_80 = 0x74;
    local_110 = param_4;
    local_114 = param_3;
    local_10c = &local_6c;
    local_6c = param_3;
    local_68 = param_4;
    local_74 = local_74 + 3;
    FUN_0042faf4(&local_364,local_3c,local_10c);
    local_37c = local_364;
    local_378 = local_360;
    local_374 = local_35c;
    local_36c = local_354;
    local_74 = local_74 + -1;
  }
  else if (param_5 == 1) {
    local_154 = *(int *)(param_2[0x27] + 8);
    local_144 = local_154;
    local_a4 = local_154;
    local_74 = local_74 + 2;
    while (local_174 = param_2[0x27], local_164 = local_174, local_a8 = local_174,
          local_174 != local_144) {
      if ((0 < param_4) &&
         (local_ac = (int *)(local_144 + 0x10), param_3 < *local_ac + *(int *)(local_144 + 0x14))) {
        local_80 = 0x2c;
        local_b0 = param_4;
        if (*(int *)(local_144 + 0x10) < param_4 + param_3) {
          local_b0 = *(int *)(local_144 + 0x10) - param_3;
        }
        if (0 < local_b0) {
          local_80 = 0x38;
          local_b8 = local_b0;
          local_b4 = &local_44;
          local_40 = local_b0;
          local_74 = local_74 + 1;
          local_bc = param_3;
          local_44 = param_3;
          FUN_0042faf4(&local_1b4,local_3c,local_b4);
          local_1cc = local_1b4;
          local_1c8 = local_1b0;
          local_1c4 = local_1ac;
          local_1bc = local_1a4;
          local_74 = local_74 + -1;
        }
        local_c0 = (int *)(local_144 + 0x10);
        local_b0 = (*local_c0 + *(int *)(local_144 + 0x14)) - param_3;
        param_3 = param_3 + local_b0;
        param_4 = param_4 - local_b0;
      }
      local_c4 = (int *)(local_144 + 0x10);
      FUN_0042faf4(&local_1e4,local_3c,local_c4);
      local_1fc = local_1e4;
      local_1f8 = local_1e0;
      local_1f4 = local_1dc;
      local_1ec = local_1d4;
      local_18c = local_14c;
      local_188 = local_148;
      local_184 = local_144;
      FUN_0042ba94((int)&local_14c);
      local_19c = local_18c;
      local_198 = local_188;
      local_194 = local_184;
    }
    if (0 < param_4) {
      local_80 = 0x44;
      local_c8 = &local_4c;
      local_74 = local_74 + 1;
      local_d0 = param_3;
      local_cc = param_4;
      local_4c = param_3;
      local_48 = param_4;
      FUN_0042faf4(&local_214,local_3c,local_c8);
      local_22c = local_214;
      local_228 = local_210;
      local_224 = local_20c;
      local_21c = local_204;
      local_74 = local_74 + -1;
    }
  }
  else {
    local_244 = *(int *)(param_2[0x27] + 8);
    local_234 = local_244;
    local_d4 = local_244;
    local_74 = local_74 + 2;
    while (local_264 = param_2[0x27], local_254 = local_264, local_264 != local_234) {
      if ((*(int *)(local_234 + 0x10) < param_3) ||
         (param_4 + param_3 <= *(int *)(local_234 + 0x10))) {
        if ((*(int *)(local_234 + 0x10) < param_3) &&
           (param_3 < *(int *)(local_234 + 0x10) + *(int *)(local_234 + 0x14))) {
          local_80 = 0x5c;
          local_ec = param_3 - *(int *)(local_234 + 0x10);
          local_f0 = *(int *)(local_234 + 0x10);
          local_e8 = &local_5c;
          local_74 = local_74 + 1;
          local_5c = local_f0;
          local_58 = local_ec;
          FUN_0042faf4(&local_2d4,local_3c,local_e8);
          local_2ec = local_2d4;
          local_2e8 = local_2d0;
          local_2e4 = local_2cc;
          local_2dc = local_2c4;
          local_f8 = (int *)(local_234 + 0x10);
          local_f4 = (*local_f8 + *(int *)(local_234 + 0x14)) - (param_4 + param_3);
          local_80 = 0x2c;
          iVar4 = local_74 + -1;
          if (0 < local_f4) {
            local_80 = 0x68;
            local_104 = param_4 + param_3;
            local_fc = &local_64;
            local_100 = local_f4;
            local_64 = local_104;
            local_60 = local_f4;
            FUN_0042faf4(&local_304,local_3c,local_fc);
            local_31c = local_304;
            local_318 = local_300;
            local_314 = local_2fc;
            local_30c = local_2f4;
            iVar4 = local_74 + -1;
          }
        }
        else {
          local_108 = (int *)(local_234 + 0x10);
          FUN_0042faf4(&local_334,local_3c,local_108);
          local_34c = local_334;
          local_348 = local_330;
          local_344 = local_32c;
          local_33c = local_324;
          iVar4 = local_74;
        }
      }
      else {
        local_d8 = (param_4 + param_3) - *(int *)(local_234 + 0x10);
        local_80 = 0x2c;
        iVar4 = local_74;
        if (local_d8 < *(int *)(local_234 + 0x14)) {
          local_80 = 0x50;
          local_e0 = *(int *)(local_234 + 0x14) - local_d8;
          local_e4 = *(int *)(local_234 + 0x10) + local_d8;
          local_dc = &local_54;
          local_74 = local_74 + 1;
          local_54 = local_e4;
          local_50 = local_e0;
          FUN_0042faf4(&local_2a4,local_3c,local_dc);
          local_2bc = local_2a4;
          local_2b8 = local_2a0;
          local_2b4 = local_29c;
          local_2ac = local_294;
          iVar4 = local_74 + -1;
        }
      }
      local_74 = iVar4;
      local_27c = local_23c;
      local_278 = local_238;
      local_274 = local_234;
      FUN_0042ba94((int)&local_23c);
      local_28c = local_27c;
      local_288 = local_278;
      local_284 = local_274;
    }
  }
  local_39c.left = 0;
  local_39c.top = 0;
  local_39c.right = 0;
  local_39c.bottom = 0;
  FUN_004a7a6c(*param_2,&local_39c);
  ptVar5 = &local_39c;
  pLVar7 = &local_38c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pLVar7 = ptVar5->left;
    ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar9 * -2 + 1) * 4);
    pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
  }
  local_80 = 0x2c;
  local_3ac[0] = 0;
  local_3ac[1] = 0;
  local_3ac[2] = 0;
  local_3ac[3] = 0;
  if (0 < param_2[0x40]) {
    iVar4 = *(int *)(*(int *)(*param_2 + 0x44) + 0xc) / param_2[0x40];
    local_118 = (*(int *)(*(int *)(*param_2 + 0x44) + 0xc) + (local_380 - local_388) + param_2[0x40]
                + -1) / param_2[0x40];
    if (iVar4 <= local_118) {
      do {
        local_119 = '\0';
        local_80 = 0x2c;
        local_11a = '\0';
        local_3c4 = *(int *)(param_2[0x27] + 8);
        local_3b4 = local_3c4;
        while (local_3e4 = param_2[0x27], local_3d4 = local_3e4, local_3e4 != local_3b4) {
          if ((iVar4 < *(int *)(local_3b4 + 0x10)) ||
             (*(int *)(local_3b4 + 0x10) + *(int *)(local_3b4 + 0x14) <= iVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_119 = '\x01';
            break;
          }
          local_3fc = local_3bc;
          local_3f8 = local_3b8;
          local_3f4 = local_3b4;
          FUN_0042ba94((int)&local_3bc);
          local_40c = local_3fc;
          local_408 = local_3f8;
          local_404 = local_3f4;
        }
        local_424 = (undefined4 *)local_18[2];
        local_80 = 0x2c;
        local_414 = local_424;
        while( true ) {
          local_434 = local_18;
          local_444 = local_18;
          if (local_18 == local_414) break;
          if ((iVar4 < (int)local_414[4]) || ((int)(local_414[4] + local_414[5]) <= iVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_11a = '\x01';
            break;
          }
          local_45c = local_41c;
          local_458 = local_418;
          local_454 = local_414;
          FUN_0042ba94((int)&local_41c);
          local_47c[4] = local_45c;
          local_468 = local_458;
          local_464 = local_454;
        }
        if (local_119 != local_11a) {
          local_47c[0] = 0;
          local_47c[1] = 0;
          local_47c[2] = 0;
          local_47c[3] = 0;
          local_80 = 0x2c;
          uVar3 = FUN_00430290(param_2,iVar4,1,local_47c);
          if ((char)uVar3 != '\0') {
            FUN_00494540(local_3ac,local_47c);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= local_118);
    }
  }
  local_120 = param_2 + 0x1e;
  FUN_00430180(local_120,local_3c);
  piVar6 = local_3ac;
  piVar8 = param_1;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
    piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
  }
  local_74 = local_74 + -2;
  if (local_18 != (undefined4 *)0x0) {
    local_128 = local_18;
    local_124 = local_18[2];
    FUN_0042a474(local_48c,(int)local_3c,in_stack_fffffb44,in_stack_fffffb48,local_124);
    local_12c = local_18;
    local_18[3] = local_24;
    local_24 = local_18;
    FUN_0042af24((int)local_3c);
  }
  *in_FS_OFFSET = local_90;
  return param_1;
}

