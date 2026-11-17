// name: FUN_0040ca04
// address: 0x40ca04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040cd8b) */
/* WARNING: Removing unreachable block (ram,0x0040ce6e) */
/* WARNING: Removing unreachable block (ram,0x0040ce1d) */
/* WARNING: Removing unreachable block (ram,0x0040ce64) */
/* WARNING: Removing unreachable block (ram,0x0040ceed) */
/* WARNING: Removing unreachable block (ram,0x0040cf11) */
/* WARNING: Removing unreachable block (ram,0x0040cf1c) */
/* WARNING: Removing unreachable block (ram,0x0040cf40) */
/* WARNING: Removing unreachable block (ram,0x0040cf2a) */
/* WARNING: Removing unreachable block (ram,0x0040cf39) */
/* WARNING: Removing unreachable block (ram,0x0040cf32) */
/* WARNING: Removing unreachable block (ram,0x0040cf45) */
/* WARNING: Removing unreachable block (ram,0x0040cf49) */
/* WARNING: Removing unreachable block (ram,0x0040cf97) */
/* WARNING: Removing unreachable block (ram,0x0040cb17) */
/* WARNING: Removing unreachable block (ram,0x0040cb43) */
/* WARNING: Removing unreachable block (ram,0x0040cc25) */
/* WARNING: Removing unreachable block (ram,0x0040cbd4) */
/* WARNING: Removing unreachable block (ram,0x0040cc1b) */
/* WARNING: Removing unreachable block (ram,0x0040cca4) */
/* WARNING: Removing unreachable block (ram,0x0040ccc8) */
/* WARNING: Removing unreachable block (ram,0x0040ccd3) */
/* WARNING: Removing unreachable block (ram,0x0040ccf7) */
/* WARNING: Removing unreachable block (ram,0x0040cce1) */
/* WARNING: Removing unreachable block (ram,0x0040ccf0) */
/* WARNING: Removing unreachable block (ram,0x0040cce9) */
/* WARNING: Removing unreachable block (ram,0x0040ccfc) */
/* WARNING: Removing unreachable block (ram,0x0040cd00) */
/* WARNING: Removing unreachable block (ram,0x0040cd4e) */
/* WARNING: Removing unreachable block (ram,0x0040d1ee) */
/* WARNING: Removing unreachable block (ram,0x0040d2dd) */
/* WARNING: Removing unreachable block (ram,0x0040d286) */
/* WARNING: Removing unreachable block (ram,0x0040d2d0) */
/* WARNING: Removing unreachable block (ram,0x0040d362) */
/* WARNING: Removing unreachable block (ram,0x0040d389) */
/* WARNING: Removing unreachable block (ram,0x0040d397) */
/* WARNING: Removing unreachable block (ram,0x0040d3be) */
/* WARNING: Removing unreachable block (ram,0x0040d3a8) */
/* WARNING: Removing unreachable block (ram,0x0040d3b7) */
/* WARNING: Removing unreachable block (ram,0x0040d3b0) */
/* WARNING: Removing unreachable block (ram,0x0040d3c3) */
/* WARNING: Removing unreachable block (ram,0x0040d3c7) */
/* WARNING: Removing unreachable block (ram,0x0040d421) */
/* WARNING: Removing unreachable block (ram,0x0040d45e) */
/* WARNING: Removing unreachable block (ram,0x0040d55f) */
/* WARNING: Removing unreachable block (ram,0x0040d4ff) */
/* WARNING: Removing unreachable block (ram,0x0040d552) */
/* WARNING: Removing unreachable block (ram,0x0040d5f0) */
/* WARNING: Removing unreachable block (ram,0x0040d61a) */
/* WARNING: Removing unreachable block (ram,0x0040d628) */
/* WARNING: Removing unreachable block (ram,0x0040d64f) */
/* WARNING: Removing unreachable block (ram,0x0040d639) */
/* WARNING: Removing unreachable block (ram,0x0040d648) */
/* WARNING: Removing unreachable block (ram,0x0040d641) */
/* WARNING: Removing unreachable block (ram,0x0040d654) */
/* WARNING: Removing unreachable block (ram,0x0040d658) */
/* WARNING: Removing unreachable block (ram,0x0040d6b2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040ca04(int param_1,LONG param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint local_97c [131];
  undefined4 local_770;
  undefined4 local_760;
  undefined4 local_510;
  undefined4 local_500;
  undefined *local_2b0;
  undefined4 *local_2a0;
  undefined4 *local_29c;
  int *local_298;
  char *local_294;
  uint local_290;
  int local_28c;
  int local_288;
  uint local_284;
  uint local_280;
  undefined4 *local_27c;
  undefined4 *local_278;
  uint local_274;
  int local_270;
  int *local_26c;
  int *local_268;
  uint local_264;
  int *local_260;
  int local_25c;
  undefined4 *local_258;
  undefined4 local_254;
  int local_250;
  uint local_24c;
  undefined1 local_245;
  uint local_244;
  uint local_1fc;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  uint local_1ac;
  int local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  int local_198;
  undefined4 *local_194;
  undefined4 local_190;
  int local_18c;
  uint local_188;
  undefined1 local_181;
  uint local_180;
  uint local_138;
  undefined1 *local_f0;
  undefined *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined2 local_d0;
  int local_c4;
  int local_bc;
  int local_68;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ec1b0);
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar5 = FUN_004dedd8(*(int **)(param_1 + 0x18),param_2,0), iVar5 == 0)) {
    FUN_004cf384(param_3,param_1 + 8);
    *(LONG *)(param_3 + 0x78) = param_2;
    FUN_0040db1c(param_3 + 0x18,0);
    FUN_0040db1c(param_3 + 0x38,0);
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_e4 = FUN_004df398(*(int **)(param_1 + 0x18));
    }
    else {
      piVar1 = *(int **)(param_1 + 0x18);
      pbVar3 = (byte *)*piVar1;
      *piVar1 = *piVar1 + 1;
      local_e4 = (uint)*pbVar3;
    }
    if (local_e4 == 0xffffffff) {
      *in_FS_OFFSET = local_e0;
      return;
    }
    local_e8 = 0;
    local_f0 = local_14;
    local_ec = &DAT_00513d64;
    local_c = (undefined4 *)&DAT_00513d64;
    local_2b0 = &DAT_00513d64;
    local_c4 = local_c4 + 1;
    local_d0 = 0x20;
    uVar6 = 0xbd;
    while ((uVar2 = local_e4 - 1, bVar4 = 0 < (int)local_e4, local_e4 = uVar2, bVar4 &&
           (uVar6 != 0xffffffff))) {
      if (local_c[-1] == 0) {
        FUN_004d5c40((int)local_14,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_138 = local_c[-1];
        local_180 = local_c[-1];
        local_181 = 0;
        local_188 = local_180;
        if (local_138 < local_180) {
          local_188 = local_138;
        }
        FUN_004cfad4((int)local_14,0,local_188,(uint)&local_181,0,0,0);
      }
      if (local_c + -3 != &DAT_00513d58) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        FUN_004d5c40((int)local_14,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(param_3 + 0x20) == *(int *)(param_3 + 0x30)) {
        FUN_0040e240(param_3 + 0x18,*(int *)(param_3 + 0x20),(int)local_14);
      }
      else {
        local_18c = *(int *)(param_3 + 0x20);
        local_68 = local_18c;
        if (local_18c != 0) {
          local_d0 = 0xa4;
          local_190 = 0;
          *(undefined4 *)(local_18c + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            uVar6 = local_c[-1];
            local_1a4 = FUN_004cf7b0(local_18c,uVar6,uVar6);
            local_1a0 = local_1a4 + 3;
            *(int **)(local_68 + 8) = local_1a0;
            local_1a8 = local_68;
            local_510 = *(undefined4 *)(local_68 + 8);
            local_1b0 = local_c;
            local_1b4 = *(undefined4 **)(local_68 + 8);
            local_1ac = uVar6;
            FUN_004dc7d4(local_1b4,local_c,uVar6);
          }
          else {
            local_194 = local_c;
            *(undefined4 **)(local_18c + 8) = local_c;
            local_500 = *(undefined4 *)(local_18c + 8);
            local_19c = (int *)(*(int *)(local_18c + 8) + -0xc);
            local_198 = local_18c;
            if (local_19c != &DAT_00513d58) {
              *local_19c = *local_19c + 1;
            }
          }
          local_d0 = 0x98;
        }
        *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x10;
      }
      if (local_c[-1] == 0) {
        FUN_004d5c40((int)local_14,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_1fc = local_c[-1];
        local_244 = local_c[-1];
        local_245 = 0;
        local_24c = local_244;
        if (local_1fc < local_244) {
          local_24c = local_1fc;
        }
        FUN_004cfad4((int)local_14,0,local_24c,(uint)&local_245,0,0,0);
      }
      if (local_c + -3 != &DAT_00513d58) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        FUN_004d5c40((int)local_14,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(param_3 + 0x40) == *(int *)(param_3 + 0x50)) {
        FUN_0040e240(param_3 + 0x38,*(int *)(param_3 + 0x40),(int)local_14);
      }
      else {
        local_250 = *(int *)(param_3 + 0x40);
        local_bc = local_250;
        if (local_250 != 0) {
          local_d0 = 0x134;
          local_254 = 0;
          *(undefined4 *)(local_250 + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            local_264 = local_c[-1];
            local_26c = FUN_004cf7b0(local_250,local_264,local_264);
            local_268 = local_26c + 3;
            *(int **)(local_bc + 8) = local_268;
            local_270 = local_bc;
            local_770 = *(undefined4 *)(local_bc + 8);
            local_274 = local_264;
            local_278 = local_c;
            local_27c = *(undefined4 **)(local_bc + 8);
            FUN_004dc7d4(local_27c,local_c,local_264);
          }
          else {
            local_258 = local_c;
            *(undefined4 **)(local_250 + 8) = local_c;
            local_760 = *(undefined4 *)(local_250 + 8);
            local_260 = (int *)(*(int *)(local_250 + 8) + -0xc);
            local_25c = local_250;
            if (local_260 != &DAT_00513d58) {
              *local_260 = *local_260 + 1;
            }
          }
          local_d0 = 0x128;
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 0x10;
      }
    }
    do {
      local_280 = FUN_004ded48((char *)local_97c,1,0x200,*(int **)(param_1 + 0x18));
      if (local_280 == 0) break;
      local_284 = 0;
      local_d0 = 0x20;
      if (local_280 != 0) {
        do {
          *(byte *)((int)local_97c + local_284) = *(byte *)((int)local_97c + local_284) ^ 0xbd;
          local_284 = local_284 + 1;
        } while (local_284 < local_280);
      }
      *(undefined1 *)((int)local_97c + local_280) = 0;
      local_288 = *(int *)(*(int *)(param_3 + 0x70) + -4);
      local_d0 = 0x20;
      local_28c = param_3 + 0x68;
      local_290 = *(uint *)(*(int *)(param_3 + 0x70) + -4);
      local_294 = FUN_004dc9f4(local_97c);
      FUN_004cfad4(local_28c,local_290,0,(uint)local_97c,(uint)local_294,0,(uint)local_294);
    } while (local_280 <= (uint)(*(int *)(*(int *)(param_3 + 0x70) + -4) - local_288));
    local_c4 = local_c4 + -1;
    if (local_c != (undefined4 *)0x0) {
      if (local_c[-3] != -1) {
        local_298 = local_c + -3;
        if (local_298 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (local_298 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *local_298 = *local_298 + -1;
          iVar5 = *local_298 + 1;
        }
        if (iVar5 != 0) goto LAB_0040db0a;
      }
      local_29c = local_c + -3;
      local_2a0 = local_c + -3;
      FUN_004cc0bc();
    }
  }
LAB_0040db0a:
  *in_FS_OFFSET = local_e0;
  return;
}

