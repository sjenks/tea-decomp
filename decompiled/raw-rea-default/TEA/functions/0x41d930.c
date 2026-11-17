// rea decompile_all
// name: FUN_0041d930
// address: 0x41d930
// body: available
// range: 0x41d930-0x41e686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041dfd0) */
/* WARNING: Removing unreachable block (ram,0x0041e0af) */
/* WARNING: Removing unreachable block (ram,0x0041e05b) */
/* WARNING: Removing unreachable block (ram,0x0041e0a2) */
/* WARNING: Removing unreachable block (ram,0x0041e146) */
/* WARNING: Removing unreachable block (ram,0x0041e15f) */
/* WARNING: Removing unreachable block (ram,0x0041e16a) */
/* WARNING: Removing unreachable block (ram,0x0041e18e) */
/* WARNING: Removing unreachable block (ram,0x0041e178) */
/* WARNING: Removing unreachable block (ram,0x0041e187) */
/* WARNING: Removing unreachable block (ram,0x0041e180) */
/* WARNING: Removing unreachable block (ram,0x0041e193) */
/* WARNING: Removing unreachable block (ram,0x0041e197) */
/* WARNING: Removing unreachable block (ram,0x0041e1e8) */
/* WARNING: Removing unreachable block (ram,0x0041dca3) */
/* WARNING: Removing unreachable block (ram,0x0041da70) */
/* WARNING: Removing unreachable block (ram,0x0041db4d) */
/* WARNING: Removing unreachable block (ram,0x0041daf9) */
/* WARNING: Removing unreachable block (ram,0x0041db40) */
/* WARNING: Removing unreachable block (ram,0x0041dbe4) */
/* WARNING: Removing unreachable block (ram,0x0041dbfd) */
/* WARNING: Removing unreachable block (ram,0x0041dc08) */
/* WARNING: Removing unreachable block (ram,0x0041dc2c) */
/* WARNING: Removing unreachable block (ram,0x0041dc16) */
/* WARNING: Removing unreachable block (ram,0x0041dc25) */
/* WARNING: Removing unreachable block (ram,0x0041dc1e) */
/* WARNING: Removing unreachable block (ram,0x0041dc31) */
/* WARNING: Removing unreachable block (ram,0x0041dc35) */
/* WARNING: Removing unreachable block (ram,0x0041dc83) */
/* WARNING: Removing unreachable block (ram,0x0041dd13) */
/* WARNING: Removing unreachable block (ram,0x0041ddf8) */
/* WARNING: Removing unreachable block (ram,0x0041dda4) */
/* WARNING: Removing unreachable block (ram,0x0041ddeb) */
/* WARNING: Removing unreachable block (ram,0x0041de8f) */
/* WARNING: Removing unreachable block (ram,0x0041deb3) */
/* WARNING: Removing unreachable block (ram,0x0041debe) */
/* WARNING: Removing unreachable block (ram,0x0041defe) */
/* WARNING: Removing unreachable block (ram,0x0041ded7) */
/* WARNING: Removing unreachable block (ram,0x0041def7) */
/* WARNING: Removing unreachable block (ram,0x0041dee4) */
/* WARNING: Removing unreachable block (ram,0x0041df03) */
/* WARNING: Removing unreachable block (ram,0x0041df07) */
/* WARNING: Removing unreachable block (ram,0x0041df55) */
/* WARNING: Removing unreachable block (ram,0x0041e208) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0041d930(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_70c [1112];
  int *local_2b4;
  int *local_2a4;
  int *local_294;
  int *local_290;
  int *local_28c;
  int *local_288;
  uint local_284;
  undefined1 local_280 [36];
  uint local_25c;
  undefined1 *local_258;
  undefined4 local_254;
  int *local_250;
  int *local_24c;
  int *local_248;
  int *local_244;
  int *local_240;
  uint local_23c;
  undefined1 *local_238;
  int *local_234;
  int *local_230;
  uint local_22c;
  int *local_228;
  undefined1 *local_224;
  int *local_220;
  undefined4 local_21c;
  uint *local_210;
  uint local_20c;
  int *local_208;
  char *local_204;
  uint local_1b8;
  undefined1 local_1b4 [12];
  uint local_1a8;
  uint local_158;
  int *local_154;
  char *local_150;
  uint local_104;
  int *local_100;
  undefined4 *local_fc;
  uint local_f8;
  undefined1 *local_f4;
  int *local_f0;
  int *local_ec;
  uint local_e8;
  int *local_e4;
  undefined1 *local_e0;
  int *local_dc;
  undefined4 local_d8;
  undefined2 local_c8;
  int local_bc;
  undefined1 local_b4 [8];
  int *local_ac;
  undefined **local_a4 [2];
  undefined1 local_9c [8];
  int *local_94;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4ef2d0);
  FUN_004b7030(param_1);
  local_c8 = 0x14;
  local_c = (int *)0x0;
  if (*(int *)(param_1[10] + -0xc) == -1 || *(int *)(param_1[10] + -0xc) + 1 < 0) {
    local_e8 = *(uint *)(param_1[10] + -4);
    local_f0 = FUN_004cf7b0(local_14,local_e8,local_e8);
    local_f4 = local_14;
    local_2b4 = local_f0 + 3;
    local_f8 = local_e8;
    local_fc = (undefined4 *)param_1[10];
    local_100 = local_2b4;
    local_ec = local_2b4;
    local_c = local_2b4;
    FUN_004dc7d4(local_2b4,local_fc,local_e8);
  }
  else {
    local_2a4 = (int *)param_1[10];
    local_e0 = local_14;
    local_e4 = local_2a4 + -3;
    local_dc = local_2a4;
    local_c = local_2a4;
    if (local_e4 != &DAT_00513d58) {
      *local_e4 = *local_e4 + 1;
    }
  }
  local_bc = local_bc + 1;
  local_c8 = 8;
  local_154 = local_c;
  local_150 = thunk_FUN_004dcd18((char *)local_c,s_mailto__004ed337);
  local_104 = DAT_005140ac;
  if (local_150 != (char *)0x0) {
    local_104 = (int)local_150 - (int)local_c;
  }
  if (local_104 != 0xffffffff) {
    local_158 = local_104 + 7;
    local_1a8 = local_c[-1];
    local_1b4[0] = 0;
    local_1b8 = local_1a8;
    if (local_158 < local_1a8) {
      local_1b8 = local_158;
    }
    FUN_004cfad4((int)local_14,0,local_1b8,(uint)local_1b4,0,0,0);
  }
  local_208 = local_c;
  local_204 = thunk_FUN_004dcd18((char *)local_c,s__Subject__004ed36c);
  uVar1 = DAT_005140ac;
  if (local_204 != (char *)0x0) {
    uVar1 = (int)local_204 - (int)local_c;
  }
  local_104 = uVar1;
  if (uVar1 != 0xffffffff) {
    local_20c = DAT_005140ac;
    if ((uint)local_c[-1] < uVar1) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 1;
      puVar4 = &LAB_004084c8;
      uVar3 = 0;
      local_c8 = 0xec;
      local_210 = (uint *)FUN_004dc320(local_70c,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      FUN_004cf628((int)local_b4,local_210);
      local_bc = local_bc + 2;
      local_a4[0] = &PTR_FUN_004ecaac;
      local_21c = 0;
      local_94 = (int *)0x0;
      local_c8 = 0xf8;
      if (local_ac[-3] == -1 || local_ac[-3] + 1 < 0) {
        local_22c = local_ac[-1];
        local_234 = FUN_004cf7b0(local_9c,local_22c,local_22c);
        local_238 = local_9c;
        local_244 = local_234 + 3;
        local_23c = local_22c;
        local_240 = local_ac;
        local_230 = local_244;
        local_94 = local_244;
        FUN_004dc7d4(local_244,local_ac,local_22c);
      }
      else {
        local_224 = local_9c;
        local_220 = local_ac;
        local_94 = local_ac;
        local_228 = local_ac + -3;
        if (local_228 != &DAT_00513d58) {
          *local_228 = *local_228 + 1;
        }
      }
      local_c8 = 0xec;
      local_a4[0] = &PTR_FUN_004eca98;
      local_bc = local_bc + 2;
      if (local_ac != (int *)0x0) {
        if (local_ac[-3] != -1) {
          local_248 = local_ac + -3;
          if (local_248 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (local_248 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *local_248 = *local_248 + -1;
            iVar2 = *local_248 + 1;
          }
          if (iVar2 != 0) goto LAB_0041e500;
        }
        local_24c = local_ac + -3;
        local_250 = local_ac + -3;
        FUN_004cc0bc();
        local_254 = 0;
        local_258 = local_b4;
        local_ac = (int *)0x0;
      }
LAB_0041e500:
      local_c8 = 0xe0;
      FUN_004e7cc4((uint *)&DAT_0040846c,local_a4,uVar3,puVar4,uVar5,uVar6,uVar7,uVar8);
    }
    local_25c = local_c[-1] - uVar1;
    local_280[0] = 0;
    local_284 = local_25c;
    if (local_20c < local_25c) {
      local_284 = local_20c;
    }
    FUN_004cfad4((int)local_14,uVar1,local_284,(uint)local_280,0,0,0);
  }
  if (local_c[-1] != 0) {
    local_288 = local_c;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)local_c);
  }
  if (*(int *)(*param_1 + 0x6c) == 0) {
    iVar2 = *(int *)(*param_1 + 0x6c);
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x6c) + 4;
  }
  FUN_004a7bfc(*param_1,iVar2,0x1a4a);
  local_bc = local_bc + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_28c = local_c + -3;
      if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_28c = *local_28c + -1;
        iVar2 = *local_28c + 1;
      }
      if (iVar2 != 0) goto LAB_0041e672;
    }
    local_290 = local_c + -3;
    local_294 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0041e672:
  *in_FS_OFFSET = local_d8;
  return;
}

