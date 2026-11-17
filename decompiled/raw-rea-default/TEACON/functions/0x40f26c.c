// rea decompile_all
// name: FUN_0040f26c
// address: 0x40f26c
// body: available
// range: 0x40f26c-0x411122 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040f2dc) */
/* WARNING: Removing unreachable block (ram,0x0040f331) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0040f26c(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined4 *in_FS_OFFSET;
  char cVar12;
  byte bVar13;
  undefined1 *puVar14;
  undefined **local_55c;
  undefined4 local_4e4 [12];
  undefined1 *local_4b4;
  undefined4 local_4b0;
  int local_4ac;
  int local_4a8;
  int *local_4a4;
  undefined1 *local_498;
  undefined4 local_494;
  int local_490;
  int local_48c;
  undefined1 *local_480;
  undefined4 local_47c;
  int local_478;
  int local_474;
  int *local_470;
  int local_464;
  undefined1 *local_460;
  undefined4 local_45c;
  int local_458;
  int local_454;
  int *local_450;
  undefined1 *local_444;
  undefined4 local_440;
  int local_43c;
  int local_438;
  int *local_434;
  undefined1 *local_428;
  undefined4 local_424;
  int local_420;
  int local_41c;
  int *local_418;
  undefined1 *local_40c;
  undefined4 local_408;
  int local_404;
  int local_400;
  int *local_3fc;
  undefined1 *local_3f0;
  undefined4 local_3ec;
  int local_3e8;
  int local_3e4;
  int *local_3e0;
  undefined1 *local_3d4;
  undefined4 local_3d0;
  int local_3cc;
  int local_3c8;
  int *local_3c4;
  undefined1 *local_3b8;
  undefined4 local_3b4;
  int local_3b0;
  int local_3ac;
  int *local_3a8;
  undefined1 *local_39c;
  undefined4 local_398;
  int local_394;
  int local_390;
  int *local_38c;
  undefined1 *local_388;
  undefined4 local_384;
  int local_380;
  int local_37c;
  int *local_378;
  undefined1 *local_364;
  undefined4 local_360;
  int local_35c;
  int local_358;
  int *local_354;
  undefined1 *local_350;
  undefined4 local_34c;
  int local_348;
  int local_344;
  int *local_340;
  undefined1 *local_32c;
  undefined4 local_328;
  int local_324;
  int local_320;
  int *local_31c;
  undefined1 *local_310;
  undefined4 local_30c;
  int local_308;
  int local_304;
  int *local_300;
  undefined1 *local_2fc;
  undefined4 local_2f8;
  int local_2f4;
  int local_2f0;
  int *local_2ec;
  undefined1 *local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  int local_2cc;
  int *local_2c8;
  undefined1 *local_2c4;
  undefined4 local_2c0;
  int local_2bc;
  int local_2b8;
  int *local_2b4;
  undefined1 *local_2a0;
  undefined4 local_29c;
  int local_298;
  int local_294;
  int *local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  int *local_27c;
  undefined1 *local_268;
  undefined4 local_264;
  int local_260;
  int local_25c;
  int *local_258;
  undefined1 *local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  undefined4 *local_234;
  undefined4 *local_230;
  uint local_22c;
  int local_228;
  int *local_224;
  int *local_220;
  uint local_21c;
  int *local_218;
  int local_214;
  undefined4 local_210;
  undefined4 local_20c;
  int local_208;
  undefined1 *local_204;
  undefined4 local_200;
  int local_1fc;
  undefined1 *local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined2 local_1e0;
  int local_1d4;
  undefined1 local_1cc [8];
  int local_1c4;
  undefined1 local_1bc [8];
  int local_1b4;
  undefined1 local_1ac [8];
  int local_1a4;
  undefined1 local_19c [8];
  LPCSTR local_194;
  undefined1 local_18c [8];
  int local_184;
  undefined1 local_17c [8];
  int local_174;
  undefined1 local_16c [8];
  int local_164;
  undefined1 local_15c [8];
  int local_154;
  undefined1 local_14c [8];
  int local_144;
  undefined1 local_13c [8];
  int local_134;
  undefined1 local_12c [8];
  int local_124;
  undefined1 local_11c [8];
  int local_114;
  undefined1 local_10c [8];
  int local_104;
  undefined1 local_fc [8];
  int local_f4;
  undefined1 local_ec [8];
  int local_e4;
  undefined1 local_dc [8];
  int local_d4;
  undefined1 local_cc [8];
  int local_c4;
  undefined1 local_bc [8];
  int local_b4;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  uint *local_14;
  char local_c [8];
  
  bVar13 = 0;
  FUN_0041f3fc(0x42da74);
  local_1f4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_1f8 = &DAT_0042fac0;
  *(undefined1 **)(param_1 + 8) = &DAT_0042fac0;
  local_1fc = param_1;
  local_200 = 0;
  local_208 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_204 = &DAT_0042fac0;
  *(undefined1 **)(param_1 + 0x18) = &DAT_0042fac0;
  local_1d4 = local_1d4 + 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  iVar8 = param_1 + 0x1e0;
  local_20c = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  local_1e0 = 0x2c;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    local_21c = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_224 = FUN_00416ffc(iVar8,local_21c,local_21c);
    local_220 = local_224 + 3;
    *(int **)(param_1 + 0x1e8) = local_220;
    local_22c = local_21c;
    local_230 = *(undefined4 **)(param_2 + 8);
    local_234 = *(undefined4 **)(param_1 + 0x1e8);
    local_228 = iVar8;
    FUN_0041eddc(local_234,local_230,local_21c);
  }
  else {
    local_210 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x1e8) = local_210;
    local_218 = (int *)(*(int *)(param_1 + 0x1e8) + -0xc);
    local_214 = iVar8;
    if (local_218 != &DAT_0042fab4) {
      *local_218 = *local_218 + 1;
    }
  }
  local_1d4 = local_1d4 + 1;
  local_1e0 = 8;
  FUN_00411570(param_1,param_2);
  local_1e0 = 0x44;
  FUN_0041193c(local_c,param_2,'\0','\0');
  local_1d4 = local_1d4 + 1;
  puVar7 = (uint *)(param_1 + 0x30);
  local_1e0 = 0x5c;
  iVar2 = FUN_00416e74((int)local_2c,(uint *)s_0_0_0__16_0_0_0_400_0_0_0_0_0_0__0042d564);
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_3c,(uint *)s_FontPattern_0042d41d);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_3c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar9 = (int *)(local_34 + -0xc);
      if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_0040f5d3;
    }
    local_248 = local_34 + -0xc;
    local_24c = local_34 + -0xc;
    FUN_00414f78();
    local_250 = 0;
    local_254 = local_3c;
    local_34 = 0;
  }
LAB_0040f5d3:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      local_258 = (int *)(local_24 + -0xc);
      if (local_258 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_258 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_258 = *local_258 + -1;
        iVar2 = *local_258 + 1;
      }
      if (iVar2 != 0) goto LAB_0040f688;
    }
    local_25c = local_24 + -0xc;
    local_260 = local_24 + -0xc;
    FUN_00414f78();
    local_264 = 0;
    local_268 = local_2c;
    local_24 = 0;
  }
LAB_0040f688:
  puVar7 = (uint *)(param_1 + 0x70);
  local_1e0 = 0x80;
  iVar2 = FUN_00416e74((int)local_4c,(uint *)s_0_0_0__16_0_0_0_400_0_0_0_0_0_0__0042d595);
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_5c,(uint *)s_FontOutput_0042d429);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_5c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      local_27c = (int *)(local_54 + -0xc);
      if (local_27c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_27c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_27c = *local_27c + -1;
        iVar2 = *local_27c + 1;
      }
      if (iVar2 != 0) goto LAB_0040f78b;
    }
    local_280 = local_54 + -0xc;
    local_284 = local_54 + -0xc;
    FUN_00414f78();
    local_288 = 0;
    local_28c = local_5c;
    local_54 = 0;
  }
LAB_0040f78b:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      local_290 = (int *)(local_44 + -0xc);
      if (local_290 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_290 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_290 = *local_290 + -1;
        iVar2 = *local_290 + 1;
      }
      if (iVar2 != 0) goto LAB_0040f840;
    }
    local_294 = local_44 + -0xc;
    local_298 = local_44 + -0xc;
    FUN_00414f78();
    local_29c = 0;
    local_2a0 = local_4c;
    local_44 = 0;
  }
LAB_0040f840:
  puVar7 = (uint *)(param_1 + 0xb0);
  local_1e0 = 0xa4;
  iVar2 = FUN_00416e74((int)local_6c,(uint *)s_0_0_0__16_0_0_0_400_255_0_0_0_0__0042d5c6);
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_7c,(uint *)s_FontOutputAnnotation_0042d434);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_7c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      local_2b4 = (int *)(local_74 + -0xc);
      if (local_2b4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_2b4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_2b4 = *local_2b4 + -1;
        iVar2 = *local_2b4 + 1;
      }
      if (iVar2 != 0) goto LAB_0040f945;
    }
    local_2b8 = local_74 + -0xc;
    local_2bc = local_74 + -0xc;
    FUN_00414f78();
    local_2c0 = 0;
    local_2c4 = local_7c;
    local_74 = 0;
  }
LAB_0040f945:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      local_2c8 = (int *)(local_64 + -0xc);
      if (local_2c8 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_2c8 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_2c8 = *local_2c8 + -1;
        iVar2 = *local_2c8 + 1;
      }
      if (iVar2 != 0) goto LAB_0040f9fa;
    }
    local_2cc = local_64 + -0xc;
    local_2d0 = local_64 + -0xc;
    FUN_00414f78();
    local_2d4 = 0;
    local_2d8 = local_6c;
    local_64 = 0;
  }
LAB_0040f9fa:
  puVar7 = (uint *)(param_1 + 0xf0);
  local_1e0 = 200;
  iVar2 = FUN_00416e74((int)local_8c,(uint *)s_0_0_0__13_0_0_0_400_0_0_0_0_0_0__0042d5f9);
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_9c,(uint *)s_FontPrinting_0042d449);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_9c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      local_2ec = (int *)(local_94 + -0xc);
      if (local_2ec == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_2ec == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_2ec = *local_2ec + -1;
        iVar2 = *local_2ec + 1;
      }
      if (iVar2 != 0) goto LAB_0040fb1d;
    }
    local_2f0 = local_94 + -0xc;
    local_2f4 = local_94 + -0xc;
    FUN_00414f78();
    local_2f8 = 0;
    local_2fc = local_9c;
    local_94 = 0;
  }
LAB_0040fb1d:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      local_300 = (int *)(local_84 + -0xc);
      if (local_300 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_300 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_300 = *local_300 + -1;
        iVar2 = *local_300 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fbd5;
    }
    local_304 = local_84 + -0xc;
    local_308 = local_84 + -0xc;
    FUN_00414f78();
    local_30c = 0;
    local_310 = local_8c;
    local_84 = 0;
  }
LAB_0040fbd5:
  puVar7 = (uint *)(param_1 + 0x2c);
  local_1e0 = 0xec;
  FUN_00416e74((int)local_ac,(uint *)s_DefinitionBackgroundColor_0042d509);
  local_1d4 = local_1d4 + 1;
  FUN_00411c80((int)local_c,(int)local_ac,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_a4 != 0) {
    if (*(int *)(local_a4 + -0xc) != -1) {
      local_31c = (int *)(local_a4 + -0xc);
      if (local_31c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_31c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_31c = *local_31c + -1;
        iVar2 = *local_31c + 1;
      }
      if (iVar2 != 0) goto LAB_0040fcd7;
    }
    local_320 = local_a4 + -0xc;
    local_324 = local_a4 + -0xc;
    FUN_00414f78();
    local_328 = 0;
    local_32c = local_ac;
    local_a4 = 0;
  }
LAB_0040fcd7:
  puVar7 = (uint *)(param_1 + 0x170);
  local_1e0 = 0x104;
  FUN_00416e74((int)local_bc,(uint *)s_255_0_0__16_0_0_0_400_255_0_0_0__0042d65f);
  puVar14 = local_bc;
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_cc,(uint *)s_DefinitionHighlightFont_0042d523);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_cc,(int)puVar14,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_c4 != 0) {
    if (*(int *)(local_c4 + -0xc) != -1) {
      local_340 = (int *)(local_c4 + -0xc);
      if (local_340 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_340 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_340 = *local_340 + -1;
        iVar2 = *local_340 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fe06;
    }
    local_344 = local_c4 + -0xc;
    local_348 = local_c4 + -0xc;
    FUN_00414f78();
    local_34c = 0;
    local_350 = local_cc;
    local_c4 = 0;
  }
LAB_0040fe06:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_b4 != 0) {
    if (*(int *)(local_b4 + -0xc) != -1) {
      local_354 = (int *)(local_b4 + -0xc);
      if (local_354 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_354 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_354 = *local_354 + -1;
        iVar2 = *local_354 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fed0;
    }
    local_358 = local_b4 + -0xc;
    local_35c = local_b4 + -0xc;
    FUN_00414f78();
    local_360 = 0;
    local_364 = local_bc;
    local_b4 = 0;
  }
LAB_0040fed0:
  puVar7 = (uint *)(param_1 + 0x130);
  local_1e0 = 0x128;
  FUN_00416e74((int)local_dc,(uint *)s_0_0_0__16_0_0_0_400_0_0_0_0_3_2__0042d62a);
  puVar14 = local_dc;
  local_1d4 = local_1d4 + 1;
  FUN_00416e74((int)local_ec,(uint *)s_DefinitionDefaultFont_0042d53b);
  local_1d4 = local_1d4 + 1;
  FUN_00411b14((int)local_c,(int)local_ec,(int)puVar14,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_e4 != 0) {
    if (*(int *)(local_e4 + -0xc) != -1) {
      local_378 = (int *)(local_e4 + -0xc);
      if (local_378 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_378 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_378 = *local_378 + -1;
        iVar2 = *local_378 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fff9;
    }
    local_37c = local_e4 + -0xc;
    local_380 = local_e4 + -0xc;
    FUN_00414f78();
    local_384 = 0;
    local_388 = local_ec;
    local_e4 = 0;
  }
LAB_0040fff9:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_d4 != 0) {
    if (*(int *)(local_d4 + -0xc) != -1) {
      local_38c = (int *)(local_d4 + -0xc);
      if (local_38c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_38c == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_38c = *local_38c + -1;
        iVar2 = *local_38c + 1;
      }
      if (iVar2 != 0) goto LAB_004100c3;
    }
    local_390 = local_d4 + -0xc;
    local_394 = local_d4 + -0xc;
    FUN_00414f78();
    local_398 = 0;
    local_39c = local_dc;
    local_d4 = 0;
  }
LAB_004100c3:
  puVar3 = (undefined4 *)(param_1 + 0x24);
  local_1e0 = 0x14c;
  FUN_00416e74((int)local_fc,(uint *)s_ViewMultipleDictionaries_0042d4d7);
  local_1d4 = local_1d4 + 1;
  uVar4 = FUN_00411ac0((int)local_c,(int)local_fc,puVar3);
  if (((char)uVar4 == '\0') || ((-1 < *(int *)(param_1 + 0x24) && (*(int *)(param_1 + 0x24) < 3))))
  {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  local_1d4 = local_1d4 + -1;
  if (local_f4 != 0) {
    if (*(int *)(local_f4 + -0xc) != -1) {
      local_3a8 = (int *)(local_f4 + -0xc);
      if (local_3a8 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_3a8 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_3a8 = *local_3a8 + -1;
        iVar2 = *local_3a8 + 1;
      }
      if (iVar2 != 0) goto LAB_004101e5;
    }
    local_3ac = local_f4 + -0xc;
    local_3b0 = local_f4 + -0xc;
    FUN_00414f78();
    local_3b4 = 0;
    local_3b8 = local_fc;
    local_f4 = 0;
  }
LAB_004101e5:
  if (cVar12 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1b0);
  local_1e0 = 0x164;
  FUN_00416e74((int)local_10c,(uint *)s_ViewSorting_0042d456);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_10c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_104 != 0) {
    if (*(int *)(local_104 + -0xc) != -1) {
      local_3c4 = (int *)(local_104 + -0xc);
      if (local_3c4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_3c4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_3c4 = *local_3c4 + -1;
        iVar2 = *local_3c4 + 1;
      }
      if (iVar2 != 0) goto LAB_004102f6;
    }
    local_3c8 = local_104 + -0xc;
    local_3cc = local_104 + -0xc;
    FUN_00414f78();
    local_3d0 = 0;
    local_3d4 = local_10c;
    local_104 = 0;
  }
LAB_004102f6:
  puVar3 = (undefined4 *)(param_1 + 0x1b4);
  local_1e0 = 0x17c;
  FUN_00416e74((int)local_11c,(uint *)s_ViewSortingAscending_0042d462);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_11c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_114 != 0) {
    if (*(int *)(local_114 + -0xc) != -1) {
      local_3e0 = (int *)(local_114 + -0xc);
      if (local_3e0 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_3e0 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_3e0 = *local_3e0 + -1;
        iVar2 = *local_3e0 + 1;
      }
      if (iVar2 != 0) goto LAB_00410400;
    }
    local_3e4 = local_114 + -0xc;
    local_3e8 = local_114 + -0xc;
    FUN_00414f78();
    local_3ec = 0;
    local_3f0 = local_11c;
    local_114 = 0;
  }
LAB_00410400:
  puVar3 = (undefined4 *)(param_1 + 0x1b8);
  local_1e0 = 0x194;
  FUN_00416e74((int)local_12c,(uint *)s_ViewLengthGrouping_0042d477);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_12c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_124 != 0) {
    if (*(int *)(local_124 + -0xc) != -1) {
      local_3fc = (int *)(local_124 + -0xc);
      if (local_3fc == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_3fc == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_3fc = *local_3fc + -1;
        iVar2 = *local_3fc + 1;
      }
      if (iVar2 != 0) goto LAB_0041050a;
    }
    local_400 = local_124 + -0xc;
    local_404 = local_124 + -0xc;
    FUN_00414f78();
    local_408 = 0;
    local_40c = local_12c;
    local_124 = 0;
  }
LAB_0041050a:
  puVar3 = (undefined4 *)(param_1 + 0x1c0);
  local_1e0 = 0x1ac;
  FUN_00416e74((int)local_13c,(uint *)s_ViewShowAnnotations_0042d4b2);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_13c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_134 != 0) {
    if (*(int *)(local_134 + -0xc) != -1) {
      local_418 = (int *)(local_134 + -0xc);
      if (local_418 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_418 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_418 = *local_418 + -1;
        iVar2 = *local_418 + 1;
      }
      if (iVar2 != 0) goto LAB_00410614;
    }
    local_41c = local_134 + -0xc;
    local_420 = local_134 + -0xc;
    FUN_00414f78();
    local_424 = 0;
    local_428 = local_13c;
    local_134 = 0;
  }
LAB_00410614:
  puVar3 = (undefined4 *)(param_1 + 0x1c4);
  local_1e0 = 0x1c4;
  FUN_00416e74((int)local_14c,(uint *)s_ViewShowBalances_0042d4c6);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_14c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_144 != 0) {
    if (*(int *)(local_144 + -0xc) != -1) {
      local_434 = (int *)(local_144 + -0xc);
      if (local_434 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_434 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_434 = *local_434 + -1;
        iVar2 = *local_434 + 1;
      }
      if (iVar2 != 0) goto LAB_0041071e;
    }
    local_438 = local_144 + -0xc;
    local_43c = local_144 + -0xc;
    FUN_00414f78();
    local_440 = 0;
    local_444 = local_14c;
    local_144 = 0;
  }
LAB_0041071e:
  puVar3 = (undefined4 *)(param_1 + 0x1c8);
  local_1e0 = 0x1dc;
  FUN_00416e74((int)local_15c,(uint *)s_ViewDoubleClick_0042d4a2);
  local_1d4 = local_1d4 + 1;
  FUN_00411ac0((int)local_c,(int)local_15c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_154 != 0) {
    if (*(int *)(local_154 + -0xc) != -1) {
      local_450 = (int *)(local_154 + -0xc);
      if (local_450 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_450 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_450 = *local_450 + -1;
        iVar2 = *local_450 + 1;
      }
      if (iVar2 != 0) goto LAB_00410828;
    }
    local_454 = local_154 + -0xc;
    local_458 = local_154 + -0xc;
    FUN_00414f78();
    local_45c = 0;
    local_460 = local_15c;
    local_154 = 0;
  }
LAB_00410828:
  piVar9 = &local_464;
  local_1e0 = 500;
  FUN_00416e74((int)local_16c,(uint *)s_ViewLengthGroupingSense_0042d48a);
  local_1d4 = local_1d4 + 1;
  uVar4 = FUN_00411ac0((int)local_c,(int)local_16c,piVar9);
  if ((((char)uVar4 == '\0') || (local_464 < -1)) || (1 < local_464)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  local_1d4 = local_1d4 + -1;
  if (local_164 != 0) {
    if (*(int *)(local_164 + -0xc) != -1) {
      local_470 = (int *)(local_164 + -0xc);
      if (local_470 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_470 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_470 = *local_470 + -1;
        iVar2 = *local_470 + 1;
      }
      if (iVar2 != 0) goto LAB_00410950;
    }
    local_474 = local_164 + -0xc;
    local_478 = local_164 + -0xc;
    FUN_00414f78();
    local_47c = 0;
    local_480 = local_16c;
    local_164 = 0;
  }
LAB_00410950:
  if (cVar12 != '\0') {
    *(undefined1 *)(param_1 + 0x1bc) = (undefined1)local_464;
  }
  local_55c = &PTR_s_OutputLower_0042d554;
  uVar11 = 0;
  do {
    puVar3 = (undefined4 *)(uVar11 * 4 + param_1 + 0x1cc);
    local_1e0 = 0x20c;
    FUN_00416e74((int)local_17c,(uint *)*local_55c);
    local_1d4 = local_1d4 + 1;
    uVar5 = FUN_00411ac0((int)local_c,(int)local_17c,puVar3);
    cVar12 = (uVar5 & 0xff) == 0;
    local_1d4 = local_1d4 + -1;
    if (local_174 != 0) {
      if (*(int *)(local_174 + -0xc) != -1) {
        piVar9 = (int *)(local_174 + -0xc);
        if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_00410a73;
      }
      local_48c = local_174 + -0xc;
      local_490 = local_174 + -0xc;
      FUN_00414f78();
      local_494 = 0;
      local_498 = local_17c;
      local_174 = 0;
    }
LAB_00410a73:
    if (cVar12 != '\0') {
      *(undefined4 *)(param_1 + 0x1cc + uVar11 * 4) = 1;
    }
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 4);
  local_1e0 = 0x224;
  FUN_00416e74((int)local_18c,(uint *)s_Dictionaries_Unedited_English_ts_0042d703);
  local_1d4 = local_1d4 + 1;
  FUN_00409208((int)local_1c,(int)local_18c);
  if (local_184 != 0) {
    if (*(int *)(local_184 + -0xc) != -1) {
      local_4a4 = (int *)(local_184 + -0xc);
      if (local_4a4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_4a4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_4a4 = *local_4a4 + -1;
        iVar2 = *local_4a4 + 1;
      }
      if (iVar2 != 0) goto LAB_00410b95;
    }
    local_4a8 = local_184 + -0xc;
    local_4ac = local_184 + -0xc;
    FUN_00414f78();
    local_4b0 = 0;
    local_4b4 = local_18c;
    local_184 = 0;
  }
LAB_00410b95:
  ppuVar10 = &PTR_s_1913_Webster_s_Unabridged_0042d698;
  puVar3 = local_4e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *ppuVar10;
    ppuVar10 = ppuVar10 + (uint)bVar13 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar13 * -2 + 1;
  }
  uVar11 = 0;
  local_55c = (undefined **)local_4e4;
  do {
    local_1e0 = 0x23c;
    FUN_00416e74((int)local_19c,(uint *)s_Dictionaries__0042d865);
    local_1d4 = local_1d4 + 1;
    local_1e0 = 0x248;
    puVar7 = (uint *)*local_55c;
    uVar5 = *(uint *)(local_194 + -4);
    pcVar6 = FUN_0041ef80(puVar7);
    FUN_00417320((int)local_19c,uVar5,0,(uint)puVar7,(uint)pcVar6,0,(uint)pcVar6);
    puVar1 = PTR_DAT_0042bc44;
    uVar5 = *(uint *)(local_194 + -4);
    pcVar6 = FUN_0041ef80((uint *)PTR_DAT_0042bc44);
    FUN_00417320((int)local_19c,uVar5,0,(uint)puVar1,(uint)pcVar6,0,(uint)pcVar6);
    local_1e0 = 0x254;
    FUN_00409208((int)local_1ac,(int)local_19c);
    local_1d4 = local_1d4 + 1;
    FUN_00416bd0((int)local_19c,(int)local_1ac);
    local_1d4 = local_1d4 + -1;
    if (local_1a4 != 0) {
      if (*(int *)(local_1a4 + -0xc) != -1) {
        piVar9 = (int *)(local_1a4 + -0xc);
        if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_00410d36;
      }
      FUN_00414f78();
      local_1a4 = 0;
    }
LAB_00410d36:
    local_1e0 = 0x248;
    iVar2 = thunk_FUN_0041ffa0(local_194,0);
    if (iVar2 == 0) {
      FUN_0041ae90((int)local_1c,local_14[-1],0,1,0x3b);
      FUN_0041ab68((int)local_1c,(int)local_19c);
    }
    local_1d4 = local_1d4 + -1;
    if (local_194 != (LPCSTR)0x0) {
      if (*(int *)(local_194 + -0xc) != -1) {
        piVar9 = (int *)(local_194 + -0xc);
        if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_00410e25;
      }
      FUN_00414f78();
      local_194 = (LPCSTR)0x0;
    }
LAB_00410e25:
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 0xc);
  puVar14 = local_1c;
  local_1e0 = 0x278;
  FUN_00416e74((int)local_1bc,(uint *)s_ViewDefinitionDictionary_0042d4f0);
  local_1d4 = local_1d4 + 1;
  FUN_00411a4c((int)local_c,(int)local_1bc,(int)puVar14);
  local_1d4 = local_1d4 + -1;
  if (local_1b4 != 0) {
    if (*(int *)(local_1b4 + -0xc) != -1) {
      piVar9 = (int *)(local_1b4 + -0xc);
      if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00410f3b;
    }
    FUN_00414f78();
    local_1b4 = 0;
  }
LAB_00410f3b:
  local_1e0 = 0x290;
  FUN_00409208((int)local_1cc,(int)local_1c);
  local_1d4 = local_1d4 + 1;
  FUN_00416bd0((int)local_1c,(int)local_1cc);
  local_1d4 = local_1d4 + -1;
  if (local_1c4 != 0) {
    if (*(int *)(local_1c4 + -0xc) != -1) {
      piVar9 = (int *)(local_1c4 + -0xc);
      if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00411034;
    }
    FUN_00414f78();
    local_1c4 = 0;
  }
LAB_00411034:
  local_1e0 = 0x50;
  puVar3 = FUN_0040530c(local_14);
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  local_1d4 = local_1d4 + -1;
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar7 = local_14 + -3;
      if (puVar7 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (puVar7 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *puVar7 = *puVar7 - 1;
        iVar2 = *puVar7 + 1;
      }
      if (iVar2 != 0) goto LAB_004110f9;
    }
    FUN_00414f78();
    local_14 = (uint *)0x0;
  }
LAB_004110f9:
  local_1d4 = local_1d4 + -1;
  FUN_00411a20((int)local_c,2);
  *in_FS_OFFSET = local_1f0;
  return param_1;
}

