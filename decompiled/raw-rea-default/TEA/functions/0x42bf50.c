// rea decompile_all
// name: FUN_0042bf50
// address: 0x42bf50
// body: available
// range: 0x42bf50-0x42cbbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0042bf50(int *param_1,int *param_2)

{
  undefined1 uVar1;
  HWND pHVar2;
  HDC pHVar3;
  UINT UVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  BOOL BVar6;
  uint *puVar7;
  int iVar8;
  tagRECT *ptVar9;
  LONG *pLVar10;
  LONG *pLVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  LPCSTR pCVar13;
  tagSIZE *ptVar14;
  RECT local_27c;
  POINT local_26c;
  int local_264;
  LONG local_260;
  int local_25c;
  int local_258;
  LONG local_254;
  int local_250;
  LONG local_24c;
  LONG local_248;
  RECT local_244;
  POINT local_234;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  LONG local_1fc [4];
  tagRECT local_1ec;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  uint local_1b8;
  LONG local_1b4;
  int local_1b0;
  LONG local_1ac;
  int local_1a8;
  LONG local_1a4;
  int local_1a0;
  LONG local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  LONG local_180;
  int local_17c;
  LONG local_178;
  int local_174;
  LONG local_170;
  int local_16c;
  LONG local_168;
  int local_164;
  int local_160;
  int *local_15c;
  int *local_158;
  char local_152;
  undefined1 local_151;
  tagPOINT local_150;
  int local_148;
  tagSIZE local_140;
  LPCSTR local_138;
  int local_134;
  int local_130;
  LONG local_12c;
  undefined2 local_126;
  int local_124;
  int local_114;
  uint local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  LONG local_8c;
  int local_88;
  tagSIZE local_84;
  tagSIZE local_7c;
  LONG local_74;
  int local_70;
  UINT local_6c;
  uint local_68;
  DWORD local_64;
  DWORD local_60;
  DWORD local_5c;
  DWORD local_58;
  DWORD local_54;
  DWORD local_50;
  char local_49;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  uint local_24 [2];
  uint local_1c [2];
  uint local_14 [2];
  uint local_c [2];
  
  bVar12 = 0;
  FUN_004dce64(0x4f27f8);
  local_1ec.left = 0;
  local_1ec.top = 0;
  local_1ec.right = 0;
  local_1ec.bottom = 0;
  FUN_004a7a6c(*param_1,&local_1ec);
  ptVar9 = &local_1ec;
  pLVar10 = local_1fc;
  for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pLVar10 = ptVar9->left;
    ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar12 * -2 + 1) * 4);
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
  }
  pLVar10 = local_1fc;
  pLVar11 = &local_1dc;
  for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pLVar11 = *pLVar10;
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
    pLVar11 = pLVar11 + (uint)bVar12 * -2 + 1;
  }
  pHVar2 = GetFocus();
  local_49 = pHVar2 == *(HWND *)(*param_1 + 0xc);
  local_54 = GetSysColor(5);
  if (local_49 == '\0') {
    iVar8 = 0xf;
  }
  else {
    iVar8 = 0xd;
  }
  local_50 = local_54;
  local_5c = GetSysColor(iVar8);
  local_58 = local_5c;
  if (local_49 == '\0') {
    local_64 = param_1[0x3c];
  }
  else {
    local_64 = GetSysColor(0xe);
  }
  local_60 = local_64;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  UVar4 = GetTextAlign(pHVar3);
  local_6c = UVar4 & 0xffffffe7 | 1;
  local_68 = local_6c;
  iVar8 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar8 != *param_2) {
    SetTextAlign((HDC)*param_2,local_6c);
  }
  UVar4 = local_6c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetTextAlign(pHVar3,UVar4);
  iVar8 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar8 != *param_2) {
    SetBkMode((HDC)*param_2,2);
  }
  iVar8 = 2;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(pHVar3,iVar8);
  if (param_1[0x3f] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  local_7c.cx = 0;
  local_7c.cy = 0;
  ptVar14 = &local_7c;
  iVar8 = 1;
  pCVar13 = &DAT_004f223c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
  local_74 = local_7c.cx;
  local_70 = local_7c.cy;
  param_1[0x40] = local_7c.cy;
  if (param_1[0x3e] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  local_84.cx = 0;
  local_84.cy = 0;
  ptVar14 = &local_84;
  iVar8 = 1;
  pCVar13 = &DAT_004f223c;
  pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
  local_8c = local_84.cx;
  local_88 = local_84.cy;
  local_74 = local_84.cx;
  local_70 = local_84.cy;
  if (param_1[0x40] < local_84.cy) {
    param_1[0x40] = local_84.cy;
    *(LONG *)(*(int *)(*param_1 + 0x44) + 0x2c) = local_84.cy;
  }
  *(int *)(*(int *)(*param_1 + 0x44) + 0x2c) = param_1[0x40];
  local_90 = (undefined4 *)param_1[0x32];
  local_94 = (undefined4 *)param_1[0x31];
  local_98 = FUN_0042cbf0(local_90,(undefined4 *)param_1[0x32],local_94);
  local_9c = param_1[0x32];
  iVar8 = (int)local_90 - (int)local_94;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 3;
  }
  param_1[0x32] = param_1[0x32] + (iVar8 >> 2) * -4;
  FUN_0042a45c(param_1 + 0x30,(int)local_98,local_9c);
  local_a0 = 0;
  local_a4 = 0;
  if (0 < param_1[0x40]) {
    local_a0 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc) / param_1[0x40];
    local_a4 = -(*(int *)(*(int *)(*param_1 + 0x44) + 0xc) % param_1[0x40]);
  }
  local_a8 = FUN_0042ba08((int)param_1);
  local_ac = local_a0;
  do {
    if ((local_a8 <= local_ac) || (local_1d0 - local_1d8 <= local_a4)) {
      iVar8 = FUN_0042ba08((int)param_1);
      if (iVar8 == 0) {
        pHVar2 = GetFocus();
        if (pHVar2 == *(HWND *)(*param_1 + 0xc)) {
          local_244.bottom = param_1[0x40];
          local_244.right = local_1d4 - local_1dc;
          local_244.left = 0;
          local_244.top = 0;
          local_164 = local_244.right;
          local_160 = local_244.bottom;
          FUN_004cc3c4(&local_26c.x,8,5,1,FUN_0042cbc0);
          local_26c.x = local_244.left;
          local_26c.y = local_244.top;
          local_168 = local_244.top;
          local_16c = local_244.right;
          local_174 = local_244.right;
          local_170 = local_244.top;
          local_178 = local_244.top;
          local_264 = local_244.right + -1;
          local_180 = local_244.top;
          local_260 = local_244.top;
          local_258 = local_244.bottom + -1;
          local_25c = local_244.right + -1;
          local_198 = local_244.bottom;
          local_19c = local_244.left;
          local_1a4 = local_244.left;
          local_1a0 = local_244.bottom;
          local_250 = local_244.bottom + -1;
          local_1ac = local_244.left;
          local_1b4 = local_244.left;
          local_254 = local_244.left;
          local_24c = local_244.left;
          local_248 = local_244.top;
          local_38 = 0x14;
          local_1b8 = 0x1000002;
          local_1b0 = local_250;
          local_1a8 = local_250;
          local_194 = local_25c;
          local_190 = local_258;
          local_18c = local_25c;
          local_188 = local_258;
          local_184 = local_264;
          local_17c = local_264;
          puVar7 = FUN_0049b6a8(local_14,&local_1b8,1,0);
          local_2c = local_2c + 2;
          FUN_0048d8f4(param_2,puVar7);
          local_2c = local_2c + -2;
          FUN_00494064(local_14,0);
          Polyline((HDC)*param_2,&local_26c,5);
          FUN_00494470(&local_244.left,-1,-1);
          local_38 = 0x20;
          local_1bc = FUN_004ab84c(local_1c,&local_50,'\x01');
          local_2c = local_2c + 2;
          FillRect((HDC)*param_2,&local_244,(HBRUSH)*local_1bc);
          local_2c = local_2c + -2;
          FUN_004ab9b4(local_1c,2);
          local_a4 = local_a4 + param_1[0x40];
        }
      }
      if (local_a4 < local_1d0 - local_1d8) {
        local_38 = 0x2c;
        local_1c0 = FUN_004ab84c(local_24,&local_50,'\x01');
        local_2c = local_2c + 2;
        local_27c.bottom = local_1d0 - local_1d8;
        local_27c.right = local_1d4 - local_1dc;
        local_1cc = local_a4;
        local_27c.left = 0;
        local_27c.top = local_a4;
        local_1c8 = local_27c.right;
        local_1c4 = local_27c.bottom;
        FillRect((HDC)*param_2,&local_27c,(HBRUSH)*local_1c0);
        local_2c = local_2c + -2;
        FUN_004ab9b4(local_24,2);
      }
      *in_FS_OFFSET = local_48;
      return;
    }
    puVar5 = FUN_004308e4((int)param_1,local_ac);
    pCVar13 = (LPCSTR)((int)puVar5 + 9);
    uVar1 = FUN_0042ed6c((int)param_1,local_ac);
    local_b0 = CONCAT31(extraout_var,uVar1);
    local_b4 = FUN_004307e4((int)param_1,local_ac);
    local_200 = local_a4 + param_1[0x40];
    local_204 = (local_1d4 - local_1dc) + -2;
    local_b8 = local_a4;
    local_20c = 1;
    local_208 = local_a4;
    if (local_ac == param_1[0x44]) {
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(*param_1 + 0xc)) {
        FUN_004cc3c4(&local_234.x,8,5,1,FUN_0042cbc0);
        local_234.x = local_20c;
        local_234.y = local_208;
        local_bc = local_208;
        local_c0 = local_204;
        local_c8 = local_204;
        local_c4 = local_208;
        local_cc = local_208;
        local_22c = local_204 + -1;
        local_d4 = local_208;
        local_228 = local_208;
        local_220 = local_200 + -1;
        local_224 = local_204 + -1;
        local_ec = local_200;
        local_f0 = local_20c;
        local_f8 = local_20c;
        local_f4 = local_200;
        local_218 = local_200 + -1;
        local_100 = local_20c;
        local_108 = local_20c;
        local_21c = local_20c;
        local_214 = local_20c;
        local_210 = local_208;
        local_38 = 8;
        local_10c = 0x1000002;
        local_104 = local_218;
        local_fc = local_218;
        local_e8 = local_224;
        local_e4 = local_220;
        local_e0 = local_224;
        local_dc = local_220;
        local_d8 = local_22c;
        local_d0 = local_22c;
        puVar7 = FUN_0049b6a8(local_c,&local_10c,1,0);
        local_2c = local_2c + 2;
        FUN_0048d8f4(param_2,puVar7);
        local_2c = local_2c + -2;
        FUN_00494064(local_c,0);
        Polyline((HDC)*param_2,&local_234,5);
        FUN_00494470(&local_20c,-1,-1);
      }
    }
    if (local_b4 == 0) {
      local_114 = param_1[0x3c];
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    local_124 = local_a4;
    MoveToEx((HDC)*param_2,2,local_a4,(LPPOINT)0x0);
    local_126 = 6;
    if (pCVar13[local_b0] != '\0') {
      local_134 = local_b0;
      local_140.cx = 0;
      local_140.cy = 0;
      ptVar14 = &local_140;
      iVar8 = local_b0;
      local_138 = pCVar13;
      pHVar3 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      GetTextExtentPoint32A(pHVar3,pCVar13,iVar8,ptVar14);
      local_130 = local_140.cx;
      local_12c = local_140.cy;
      if (local_140.cx < local_204 - local_20c) {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
        if (local_b4 == 0) {
          local_148 = param_1[0x3d];
          (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
        }
        local_20c = local_20c + local_130;
        local_126 = 4;
        if (param_1[0x3f] != 0) {
          (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
        }
      }
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    if ((local_20c != 1) && (param_1[0x3e] != 0)) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
    }
    local_150.x = 0;
    local_150.y = 0;
    BVar6 = GetCurrentPositionEx((HDC)*param_2,&local_150);
    local_151 = BVar6 != 0;
    if (local_204 < local_150.x) {
LAB_0042c793:
      if (param_1[0x32] == param_1[0x36]) {
        FUN_0042cc14((int)(param_1 + 0x30),(undefined4 *)param_1[0x32],&local_ac);
      }
      else {
        local_15c = (int *)param_1[0x32];
        *local_15c = local_ac;
        param_1[0x32] = param_1[0x32] + 4;
        local_158 = local_15c;
      }
    }
    else {
      if ((((local_20c < local_1dc) || (local_1d4 < local_204)) || (local_208 < local_1d8)) ||
         (local_1d0 < local_200)) {
        local_152 = '\0';
      }
      else {
        local_152 = '\x01';
      }
      if (local_152 == '\0') goto LAB_0042c793;
    }
    local_a4 = local_a4 + param_1[0x40];
    local_ac = local_ac + 1;
  } while( true );
}

