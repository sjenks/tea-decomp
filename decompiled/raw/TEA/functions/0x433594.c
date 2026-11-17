// name: FUN_00433594
// address: 0x433594
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00433693) */
/* WARNING: Removing unreachable block (ram,0x0043378a) */
/* WARNING: Removing unreachable block (ram,0x00433736) */
/* WARNING: Removing unreachable block (ram,0x0043377d) */
/* WARNING: Removing unreachable block (ram,0x00433821) */
/* WARNING: Removing unreachable block (ram,0x00433854) */
/* WARNING: Removing unreachable block (ram,0x0043385f) */
/* WARNING: Removing unreachable block (ram,0x0043389f) */
/* WARNING: Removing unreachable block (ram,0x00433878) */
/* WARNING: Removing unreachable block (ram,0x00433898) */
/* WARNING: Removing unreachable block (ram,0x00433885) */
/* WARNING: Removing unreachable block (ram,0x004338a4) */
/* WARNING: Removing unreachable block (ram,0x004338a8) */
/* WARNING: Removing unreachable block (ram,0x004338f6) */
/* WARNING: Removing unreachable block (ram,0x00433936) */
/* WARNING: Removing unreachable block (ram,0x00433a2d) */
/* WARNING: Removing unreachable block (ram,0x004339d9) */
/* WARNING: Removing unreachable block (ram,0x00433a20) */
/* WARNING: Removing unreachable block (ram,0x00433ac4) */
/* WARNING: Removing unreachable block (ram,0x00433af7) */
/* WARNING: Removing unreachable block (ram,0x00433b02) */
/* WARNING: Removing unreachable block (ram,0x00433b42) */
/* WARNING: Removing unreachable block (ram,0x00433b1b) */
/* WARNING: Removing unreachable block (ram,0x00433b3b) */
/* WARNING: Removing unreachable block (ram,0x00433b28) */
/* WARNING: Removing unreachable block (ram,0x00433b47) */
/* WARNING: Removing unreachable block (ram,0x00433b4b) */
/* WARNING: Removing unreachable block (ram,0x00433b99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00433594(int *param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  int *local_5c0;
  int *local_5b0;
  undefined1 local_5a8 [816];
  uint local_278;
  uint local_274;
  uint local_270;
  undefined1 local_269;
  undefined1 *local_268;
  undefined4 local_264;
  int *local_260;
  int *local_25c;
  int *local_258;
  int *local_254;
  int *local_250;
  uint local_24c;
  undefined1 *local_248;
  int *local_244;
  int *local_240;
  uint local_23c;
  int *local_238;
  undefined1 *local_234;
  int *local_230;
  undefined4 local_22c;
  uint *local_220;
  uint local_21c;
  undefined4 *local_218;
  uint local_214;
  undefined4 *local_210;
  uint local_20c;
  byte local_205;
  undefined4 local_204;
  undefined1 local_200;
  uint local_1fc;
  undefined1 local_1f5;
  undefined1 *local_1f4;
  undefined4 local_1f0;
  int *local_1ec;
  int *local_1e8;
  int *local_1e4;
  int *local_1e0;
  int *local_1dc;
  uint local_1d8;
  undefined1 *local_1d4;
  int *local_1d0;
  int *local_1cc;
  uint local_1c8;
  int *local_1c4;
  undefined1 *local_1c0;
  int *local_1bc;
  undefined4 local_1b8;
  uint *local_1ac;
  int local_1a8;
  undefined4 *local_1a4;
  uint local_1a0;
  uint local_19c;
  int *local_198;
  undefined4 *local_194;
  int *local_190;
  int local_18c;
  undefined4 *local_188;
  uint local_184;
  undefined1 local_17d;
  uint local_17c;
  uint local_12c;
  uint local_dc;
  int local_d8;
  int local_d4;
  undefined4 *local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int *local_9c;
  undefined **local_94 [2];
  undefined1 local_8c [8];
  int *local_84;
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  
  bVar9 = 0;
  FUN_004dce64(0x4f2fdc);
  param_1[1099] = param_2;
  param_1[0x44c] = param_3;
  FUN_004dc844(param_1 + 0x40a,0,0x100);
  local_cc = FUN_004dc9f4(param_4);
  local_d0 = (undefined4 *)FUN_004cc180();
  uVar4 = 0xffffffff;
  do {
    puVar7 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    puVar7 = (uint *)((int)param_4 + (uint)bVar9 * -2 + 1);
    uVar5 = *param_4;
    param_4 = puVar7;
  } while ((char)uVar5 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)((int)puVar7 - uVar4);
  puVar8 = local_d0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  *(char *)((int)local_d0 + (int)local_cc) = ')';
  ((undefined1 *)((int)local_d0 + 1))[(int)local_cc] = 0;
  local_d4 = 0;
  param_1[0x409] = 0;
  param_1[0x408] = 0;
  *(undefined1 *)(param_1 + 0x451) = 0xfd;
  param_1[0x452] = 0;
  FUN_00434cac(param_1);
  local_d8 = -1;
  local_dc = 0xffffffff;
  if (*(int *)(param_1[0x404] + -4) == 0) {
    FUN_004d5c40((int)(param_1 + 0x402),*(uint *)(param_1[0x404] + -4),0,
                 -*(int *)(param_1[0x404] + -4),0);
  }
  else {
    local_12c = *(uint *)(param_1[0x404] + -4);
    local_17c = *(uint *)(param_1[0x404] + -4);
    local_17d = 0;
    local_184 = local_17c;
    if (local_12c < local_17c) {
      local_184 = local_12c;
    }
    FUN_004cfad4((int)(param_1 + 0x402),0,local_184,(uint)&local_17d,0,0,0);
  }
  local_188 = (undefined4 *)(param_1[0x404] + -0xc);
  if (local_188 != &DAT_00513d58) {
    *local_188 = 0;
  }
  iVar2 = FUN_00431474(param_1,(int *)&local_d0,(int)(param_1 + 0x402),&local_d8,(int *)&local_dc,
                       &local_d4);
  if (iVar2 != -1) {
    if (*(char *)((int)local_d0 + 1) == '\0') {
      if (local_d4 + iVar2 == 0) {
        param_1[0x409] = 1;
        iVar2 = -1;
      }
    }
    else {
      param_1[0x409] = 8;
      iVar2 = -1;
    }
  }
  if (-1 < local_d8) {
    local_190 = param_1 + 0x402;
    local_18c = local_d8;
    if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
      FUN_004d48d8((int)local_190);
    }
    local_194 = (undefined4 *)(local_190[2] + -0xc);
    if (local_194 != &DAT_00513d58) {
      *local_194 = 0xffffffff;
    }
    *(undefined1 *)(local_190[2] + local_18c) = 0xfb;
  }
  FUN_004cc0cc();
  if (iVar2 == -1) {
    *in_FS_OFFSET = local_c8;
  }
  else {
    param_1[0x406] = iVar2;
    param_1[0x407] = iVar2 + local_d4;
    if (0x65 < param_1[0x407]) {
      param_1[0x407] = 0x65;
    }
    param_1[0x408] = 1;
    local_198 = param_1 + 0x402;
    FUN_004d5c40((int)local_198,*(uint *)(param_1[0x404] + -4),0,1,0xfd);
    param_1[0x453] = (int)FUN_00460050;
    if (param_1[0x452] == 2) {
      cVar1 = (char)param_1[0x451];
      if (cVar1 == -0x10) {
        param_1[0x453] = (int)FUN_0045f0dc;
      }
      else if (cVar1 == -0xb) {
        param_1[0x453] = (int)FUN_0045f0fc;
      }
      else if (cVar1 == -10) {
        param_1[0x453] = (int)FUN_0045f170;
      }
    }
    for (local_19c = 0; (int)local_19c < *(int *)(param_1[0x404] + -4); local_19c = local_19c + 1) {
      local_1a0 = local_19c;
      if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
        FUN_004d48d8((int)(param_1 + 0x402));
      }
      local_1a4 = (undefined4 *)(param_1[0x404] + -0xc);
      if (local_1a4 != &DAT_00513d58) {
        *local_1a4 = 0xffffffff;
      }
      bVar9 = *(byte *)(param_1[0x404] + local_1a0);
      if (0xee < bVar9) {
        if (bVar9 == 0xff) {
          local_1a8 = local_19c + 1;
          if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
            FUN_004d48d8((int)(param_1 + 0x402));
          }
          uVar4 = local_19c;
          if ((undefined4 *)(param_1[0x404] + -0xc) != &DAT_00513d58) {
            *(undefined4 *)(param_1[0x404] + -0xc) = 0xffffffff;
          }
          if (*(char *)(param_1[0x404] + local_1a8) != ' ') break;
          local_dc = local_dc - 2;
          if (*(uint *)(param_1[0x404] + -4) < local_19c) {
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar5 = 1;
            puVar11 = &LAB_004084c8;
            uVar10 = 0;
            local_b8 = 0x80;
            local_1ac = (uint *)FUN_004dc320(local_5a8,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            FUN_004cf628((int)local_7c,local_1ac);
            local_ac = local_ac + 2;
            local_6c[0] = &PTR_FUN_004ecaac;
            local_1b8 = 0;
            local_5c = (int *)0x0;
            local_b8 = 0x8c;
            if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
              local_1c8 = local_74[-1];
              local_1d0 = FUN_004cf7b0(local_64,local_1c8,local_1c8);
              local_1d4 = local_64;
              local_5c0 = local_1d0 + 3;
              local_1d8 = local_1c8;
              local_1dc = local_74;
              local_1e0 = local_5c0;
              local_1cc = local_5c0;
              local_5c = local_5c0;
              FUN_004dc7d4(local_5c0,local_74,local_1c8);
            }
            else {
              local_1c0 = local_64;
              local_1bc = local_74;
              local_5c = local_74;
              local_5b0 = local_74;
              local_1c4 = local_74 + -3;
              if (local_1c4 != &DAT_00513d58) {
                *local_1c4 = *local_1c4 + 1;
              }
            }
            local_b8 = 0x80;
            local_6c[0] = &PTR_FUN_004eca98;
            local_ac = local_ac + 2;
            if (local_74 != (int *)0x0) {
              if (local_74[-3] != -1) {
                local_1e4 = local_74 + -3;
                if (local_1e4 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else if (local_1e4 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else {
                  *local_1e4 = *local_1e4 + -1;
                  iVar2 = *local_1e4 + 1;
                }
                if (iVar2 != 0) goto LAB_0043412d;
              }
              local_1e8 = local_74 + -3;
              local_1ec = local_74 + -3;
              FUN_004cc0bc();
              local_1f0 = 0;
              local_1f4 = local_7c;
              local_74 = (int *)0x0;
              local_5d0 = 0;
            }
LAB_0043412d:
            local_b8 = 0x74;
            FUN_004e7cc4((uint *)&DAT_0040846c,local_6c,uVar10,puVar11,uVar5,uVar12,uVar13,uVar14);
          }
          local_1fc = *(int *)(param_1[0x404] + -4) - uVar4;
          local_1f5 = 0;
          if (2 < local_1fc) {
            local_1fc = 2;
          }
          FUN_004cfad4((int)(param_1 + 0x402),uVar4,local_1fc,(uint)&local_1f5,0,0,0);
          local_19c = local_19c - 1;
        }
        else if (((bVar9 != 0xf9) && (bVar9 != 0xfa)) && (bVar9 != 0xfb)) break;
      }
    }
    uVar4 = *(uint *)(param_1[0x404] + -4);
    do {
      while( true ) {
        do {
          uVar5 = uVar4;
          uVar4 = uVar5 - 1;
          if ((int)uVar5 < 1) goto LAB_00434602;
          local_204 = DAT_004f2d28;
          local_200 = DAT_004f2d2c;
          local_20c = uVar4;
          if (*(int *)(param_1[0x404] + -0xc) != 0 && 0 < *(int *)(param_1[0x404] + -0xc) + 1) {
            FUN_004d48d8((int)(param_1 + 0x402));
          }
          local_210 = (undefined4 *)(param_1[0x404] + -0xc);
          if (local_210 != &DAT_00513d58) {
            *local_210 = 0xffffffff;
          }
          local_205 = *(byte *)(param_1[0x404] + local_20c);
        } while (local_205 < 0xef);
        if (local_205 != 0xff) break;
        local_214 = uVar5;
        if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
          FUN_004d48d8((int)(param_1 + 0x402));
        }
        local_218 = (undefined4 *)(param_1[0x404] + -0xc);
        if (local_218 != &DAT_00513d58) {
          *local_218 = 0xffffffff;
        }
        if (*(char *)(param_1[0x404] + local_214) != ' ') goto LAB_00434602;
        if ((int)uVar4 < (int)local_dc) {
          local_dc = local_dc - 2;
        }
        local_21c = uVar4;
        if (*(uint *)(param_1[0x404] + -4) < uVar4) {
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar4 = 1;
          puVar11 = &LAB_004084c8;
          uVar10 = 0;
          local_b8 = 0xbc;
          local_220 = (uint *)FUN_004dc320(local_6c8,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          FUN_004cf628((int)local_a4,local_220);
          local_ac = local_ac + 2;
          local_94[0] = &PTR_FUN_004ecaac;
          local_22c = 0;
          local_84 = (int *)0x0;
          local_b8 = 200;
          if (local_9c[-3] == -1 || local_9c[-3] + 1 < 0) {
            local_23c = local_9c[-1];
            local_244 = FUN_004cf7b0(local_8c,local_23c,local_23c);
            local_248 = local_8c;
            local_254 = local_244 + 3;
            local_24c = local_23c;
            local_250 = local_9c;
            local_240 = local_254;
            local_84 = local_254;
            FUN_004dc7d4(local_254,local_9c,local_23c);
          }
          else {
            local_234 = local_8c;
            local_230 = local_9c;
            local_84 = local_9c;
            local_238 = local_9c + -3;
            if (local_238 != &DAT_00513d58) {
              *local_238 = *local_238 + 1;
            }
          }
          local_b8 = 0xbc;
          local_94[0] = &PTR_FUN_004eca98;
          local_ac = local_ac + 2;
          if (local_9c != (int *)0x0) {
            if (local_9c[-3] != -1) {
              local_258 = local_9c + -3;
              if (local_258 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_258 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_258 = *local_258 + -1;
                iVar2 = *local_258 + 1;
              }
              if (iVar2 != 0) goto LAB_0043456e;
            }
            local_25c = local_9c + -3;
            local_260 = local_9c + -3;
            FUN_004cc0bc();
            local_264 = 0;
            local_268 = local_a4;
            local_9c = (int *)0x0;
          }
LAB_0043456e:
          local_b8 = 0xb0;
          FUN_004e7cc4((uint *)&DAT_0040846c,local_94,uVar10,puVar11,uVar4,uVar12,uVar13,uVar14);
        }
        local_270 = *(int *)(param_1[0x404] + -4) - local_21c;
        local_269 = 0;
        if (2 < local_270) {
          local_270 = 2;
        }
        FUN_004cfad4((int)(param_1 + 0x402),local_21c,local_270,(uint)&local_269,0,0,0);
        uVar4 = uVar5 - 2;
      }
      pcVar3 = thunk_FUN_004dc924((char *)&local_204,local_205);
    } while (pcVar3 == (char *)0x0);
LAB_00434602:
    pcVar3 = thunk_FUN_004dc794((char *)(param_1 + 0x40a),-2,0x100);
    param_1[0x44a] = (uint)(pcVar3 != (char *)0x0);
    pcVar3 = thunk_FUN_004dc794((char *)(param_1 + 0x40a),-1,0x100);
    if (pcVar3 != (char *)0x0) {
      param_1[0x44a] = 1;
      if (param_5 == 0) {
        uVar4 = 0;
        do {
          if (*(char *)((int)param_1 + uVar4 + 0x1028) == '\0') {
            *(undefined1 *)((int)param_1 + uVar4 + 0x1028) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x100);
      }
      if (local_dc != 0xffffffff) {
        local_274 = local_dc;
        FUN_004d5c40((int)(param_1 + 0x402),local_dc,0,1,0xff);
        local_278 = local_dc + 1;
        FUN_004d5c40((int)(param_1 + 0x402),local_278,0,1,0);
      }
    }
    *in_FS_OFFSET = local_c8;
  }
  return;
}

