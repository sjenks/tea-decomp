// TEA.exe — application module "TSDictionaryDefinitionSearchIndexed"
// 20 functions, 0x0040e5e0..0x00410750. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040e5e0  TSDictionaryDefinitionSearchIndexed::TSDictionaryDefinitionSearchIndexed   (5577 bytes)   [notes]
//   runs the indexed full-text search and stores the resulting sorted offset list (pipeline per your notes). Entry checked; body not read
/* WARNING: Removing unreachable block (ram,0x0040e7b7) */
/* WARNING: Removing unreachable block (ram,0x0040e8cd) */
/* WARNING: Removing unreachable block (ram,0x0040e69c) */
/* WARNING: Removing unreachable block (ram,0x0040e7fd) */
/* WARNING: Removing unreachable block (ram,0x0040eeae) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffb664 : 0x0040eebc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TSDictionaryDefinitionSearchIndexed::TSDictionaryDefinitionSearchIndexed(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 local_4e4c [248];
  undefined4 local_4d54;
  int *local_4d44;
  int *local_4d34;
  undefined1 local_4d2c [248];
  int local_4c34;
  int local_4c24;
  int local_4c14;
  int local_4c04;
  int local_4bf4;
  int local_4be4;
  int local_4bd4;
  int local_4bc4;
  int local_4bb4;
  undefined4 local_4b94;
  int local_4b84;
  int local_4b74;
  undefined *local_4b64;
  int aiStackY_4b5c [32];
  int *local_4adc;
  undefined *local_4ad0;
  undefined *local_4acc;
  int *local_4ac8;
  int *local_4ac4;
  undefined4 local_4ac0;
  undefined4 *local_4abc;
  uint local_4ab8;
  undefined1 local_4ab1;
  uint local_4ab0;
  undefined1 *local_4aac;
  undefined4 local_4aa8;
  int *local_4aa4;
  int *local_4aa0;
  int *local_4a9c;
  int *local_4a98;
  int *local_4a94;
  uint local_4a90;
  undefined1 *local_4a8c;
  int *local_4a88;
  int *local_4a84;
  uint local_4a80;
  int *local_4a7c;
  undefined1 *local_4a78;
  int *local_4a74;
  undefined4 local_4a70;
  uint *local_4a64;
  uint local_4a60;
  undefined1 *local_4a5c;
  undefined4 local_4a58;
  int *local_4a54;
  int *local_4a50;
  int *local_4a4c;
  int *local_4a48;
  int *local_4a44;
  uint local_4a40;
  undefined1 *local_4a3c;
  int *local_4a38;
  int *local_4a34;
  uint local_4a30;
  int *local_4a2c;
  undefined1 *local_4a28;
  int *local_4a24;
  undefined4 local_4a20;
  uint *local_4a14;
  uint local_4a10;
  int *local_4a0c;
  int *local_4a08;
  int *local_4a04;
  int *local_4a00;
  int *local_49fc;
  undefined4 *local_49f8;
  int *local_49f4;
  int *local_49f0;
  int *local_49ec;
  undefined4 *local_49e8;
  uint local_49e4;
  int *local_49e0;
  uint local_49dc;
  int local_49d8;
  int *local_49d4;
  int local_49d0;
  int *local_49cc;
  int local_49c8;
  int *local_49c4;
  int *local_49c0;
  undefined4 *local_49bc;
  undefined4 *local_49b8;
  int *local_49b4;
  undefined4 *local_49b0;
  int *local_49ac;
  int *local_49a8;
  int *local_49a4;
  undefined4 local_49a0;
  undefined4 local_499c;
  int *local_4998;
  int *local_4994;
  int *local_4990;
  int *local_498c;
  int *local_4988;
  int *local_4984;
  int *local_4980;
  undefined4 *local_497c;
  int *local_4978;
  int *local_4974;
  int *local_4970;
  int *local_496c;
  int *local_4968;
  int *local_4964;
  undefined *local_4958;
  undefined *local_4954;
  int *local_4950;
  int *local_494c;
  undefined4 local_4948;
  int local_4944;
  int local_4940;
  int local_493c;
  byte local_4936;
  byte local_4935;
  int local_4934;
  int *local_4930;
  int *local_492c;
  int local_4928;
  int *local_4924;
  int *local_4920;
  undefined4 local_491c;
  undefined4 local_4918;
  undefined4 *local_4914;
  undefined4 local_4910;
  undefined4 local_490c;
  undefined1 *local_4908;
  undefined *local_4904;
  undefined4 local_4900;
  byte local_48f9;
  byte *local_48f8;
  int local_48f4;
  undefined4 local_48f0;
  undefined4 local_48ec;
  int *local_48e8;
  int *local_48e4;
  int local_48e0;
  undefined4 local_48dc;
  undefined2 local_48cc;
  int local_48c0;
  int *local_48b8;
  undefined1 local_48b4 [8];
  int *local_48ac;
  undefined1 local_48a4 [8];
  int *local_489c;
  undefined **local_4894 [2];
  undefined1 local_488c [8];
  int *local_4884;
  undefined **local_487c [2];
  undefined1 local_4874 [8];
  int *local_486c;
  undefined4 local_4864;
  int *local_4860;
  undefined4 *local_485c;
  int local_484c;
  undefined4 *local_4844;
  undefined4 local_4840 [2652];
  undefined4 uStackY_1ed0;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_40;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  int local_8;
  
  iVar8 = 4;
  do {
    local_8 = iVar8;
    iVar8 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4ec618);
  local_48cc = 8;
  local_48e0 = param_3;
  *param_1 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 4);
  param_1[1] = 0;
  local_48e4 = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = 0;
  local_48e8 = param_1 + 8;
  param_1[10] = 0;
  local_48ec = 0x100;
  local_48f0 = 1;
  param_1[4] = 0x100;
  local_48c0 = local_48c0 + 1;
  iVar8 = *(int *)(param_4 + 8) - *(int *)(param_4 + 4);
  if (iVar8 < 0) {
    iVar8 = iVar8 + 3;
  }
  if (iVar8 >> 2 == 0) {
    local_48f4 = 0;
  }
  else {
    local_48f4 = *(int *)(param_4 + 4);
  }
  if (*(int *)(*(int *)(param_4 + 0x28) + -4) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = *(byte **)(param_4 + 0x28);
  }
  local_48f8 = pbVar3;
  while( true ) {
    iVar8 = local_48c0;
    local_48f9 = *pbVar3;
    if (local_48f9 == 3) break;
    if ((local_48f9 & 8) != 0) {
      *in_FS_OFFSET = local_48dc;
      goto LAB_0040fb97;
    }
    iVar8 = *(int *)(local_48f4 + ((int)pbVar3 - (int)local_48f8) * 4);
    local_48cc = 8;
    if (iVar8 != 0) {
      iVar4 = MatchEngine::GetMinLength(iVar8);
      iVar8 = MatchEngine::GetMaxLength(iVar8);
      if (iVar4 != iVar8) {
        *in_FS_OFFSET = local_48dc;
        goto LAB_0040fb97;
      }
    }
    pbVar3 = pbVar3 + 1;
  }
  local_4900 = 0;
  local_4904 = &DAT_00513d64;
  local_c = &DAT_00513d64;
  local_4908 = local_14;
  local_4b64 = &DAT_00513d64;
  local_48c0 = local_48c0 + 1;
  local_48cc = 0x50;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_1c = 0;
  local_490c = 0x100;
  local_4910 = 1;
  local_34 = 0x100;
  local_48c0 = iVar8 + 2;
  local_48cc = 0x44;
  FUN_0040fc0c((int)&local_34,0x1000);
  local_48cc = 0x68;
  InputEngine::InputEngine(local_4840,param_2,param_3);
  local_48c0 = local_48c0 + 1;
  iVar8 = 0;
  do {
    for (; local_48f8[iVar8] == 4; iVar8 = iVar8 + 1) {
      iVar4 = *(int *)(local_c + -4);
      local_48cc = 0x44;
      local_4844 = (undefined4 *)operator_new();
      if (local_4844 != (undefined4 *)0x0) {
        local_48cc = 0x80;
        local_4844[1] = 0;
        local_4844[2] = 0;
        local_4914 = local_4844 + 4;
        local_4844[6] = 0;
        local_4918 = 0x100;
        local_491c = 1;
        *local_4844 = 0x100;
        local_48cc = 0x74;
      }
      aiStackY_4b5c[iVar4] = (int)local_4844;
      iVar4 = aiStackY_4b5c[iVar4];
      local_4920 = (int *)(iVar4 + 4);
      local_4924 = param_1 + 5;
      local_4928 = *local_4924;
      *local_4924 = *local_4920;
      *local_4920 = local_4928;
      local_492c = (int *)(iVar4 + 8);
      local_4930 = param_1 + 6;
      local_4934 = *local_4930;
      *local_4930 = *local_492c;
      *local_492c = local_4934;
      local_4b74 = param_1[10];
      param_1[10] = *(int *)(iVar4 + 0x18);
      local_4b84 = param_1[10];
      *(int *)(iVar4 + 0x18) = local_4b74;
      local_4b94 = *(undefined4 *)(iVar4 + 0x18);
      if ((iVar8 == 0) || (local_4935 = local_48f8[iVar8 + -1], local_4935 == 4)) {
        local_4935 = 1;
      }
      local_4936 = local_4935;
      std::string::replace_fill((int)local_14,*(uint *)(local_c + -4),0,1,local_4935);
    }
    local_493c = *(int *)(local_48f4 + iVar8 * 4);
    local_48cc = 0x44;
    FUN_0040ff44((int)&local_34,0);
    local_4940 = MatchEngine::GetMaxLength(local_493c);
    iVar4 = MatchEngine::GetMinLength(local_493c);
    if (iVar4 <= local_4940) {
      do {
        bVar2 = InputEngine::StartLength((int)local_4840,iVar4);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          MatchEngine::SetWordLength(local_493c,iVar4);
          do {
            while (pcVar5 = (char *)InputEngine::NextWord((int)local_4840,local_493c), *pcVar5 != -1) {
              local_4944 = InputEngine::GetLinkGroupIndex((int)local_4840);
              if ((local_4944 != -1) &&
                 (uVar12 = TSDictionaryList::CollectDefinitionOffsets(param_2,param_3,1,iVar4,local_4944,local_40,(int)&local_34),
                 uVar12 == 0)) {
                iVar8 = *(int *)(local_c + -4);
                local_48cc = 0x44;
                local_4adc = aiStackY_4b5c + iVar8;
                while (iVar8 != 0) {
                  local_4adc = local_4adc + -1;
                  iVar8 = iVar8 + -1;
                  iVar4 = *local_4adc;
                  if (iVar4 != 0) {
                    FUN_0040957c(iVar4,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
                    local_4948 = *(undefined4 *)(iVar4 + 4);
                    operator_delete();
                    local_48cc = 0x44;
                    operator_delete();
                  }
                }
                local_48c0 = local_48c0 + -1;
                InputEngine::_dtor((int)local_4840,2);
                local_48c0 = local_48c0 + -1;
                FUN_0040957c(&local_34,(int)local_30,(int)local_2c);
                local_494c = local_30;
                operator_delete();
                local_48c0 = local_48c0 + -1;
                if (local_c != (undefined *)0x0) {
                  if (*(int *)(local_c + -0xc) != -1) {
                    local_4950 = (int *)(local_c + -0xc);
                    if (local_4950 == &DAT_00513d58) {
                      iVar8 = 1;
                    }
                    else if (local_4950 == &DAT_00513d58) {
                      iVar8 = 1;
                    }
                    else {
                      *local_4950 = *local_4950 + -1;
                      iVar8 = *local_4950 + 1;
                    }
                    if (iVar8 != 0) goto LAB_0040ec37;
                  }
                  local_4954 = local_c + -0xc;
                  local_4958 = local_c + -0xc;
                  operator_delete();
                }
LAB_0040ec37:
                *in_FS_OFFSET = local_48dc;
                goto LAB_0040fb97;
              }
            }
          } while (local_40 == 1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= local_4940);
    }
    local_4964 = local_2c;
    local_4968 = local_30;
    if (local_30 != local_2c) {
      sort_uint32(local_30,local_2c);
      FUN_00410328(local_4968,local_4964);
    }
    local_496c = local_2c;
    local_4970 = local_2c;
    local_4974 = local_30;
    piVar6 = FUN_00410538(local_30,local_2c);
    local_4974 = piVar6;
    if (piVar6 != local_4970) {
      piVar6 = unique_uint32(piVar6,local_4970,piVar6);
    }
    local_4978 = piVar6;
    local_497c = FUN_00410598(local_496c,local_2c,piVar6);
    piVar6 = local_2c;
    local_4980 = local_2c;
    iVar4 = (int)local_496c - (int)local_4978;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    local_2c = local_2c + -(iVar4 >> 2);
    FUN_0040957c(&local_34,(int)local_497c,(int)piVar6);
    if ((iVar8 == 0) || (local_48f8[iVar8 + -1] == 4)) {
      local_4984 = param_1 + 4;
      local_4988 = param_1 + 5;
      local_498c = (int *)*local_4988;
      *local_4988 = (int)local_30;
      local_4990 = param_1 + 6;
      local_4994 = (int *)*local_4990;
      *local_4990 = (int)local_2c;
      local_4998 = param_1 + 8;
      local_4bd4 = param_1[10];
      param_1[10] = local_1c;
      local_4bc4 = param_1[10];
      local_4bb4 = local_4bd4;
      local_30 = local_498c;
      local_2c = local_4994;
      local_1c = local_4bd4;
    }
    else {
      local_48cc = 0xbc;
      local_4860 = (int *)0x0;
      local_485c = (undefined4 *)0x0;
      local_484c = 0;
      local_499c = 0x100;
      local_49a0 = 1;
      local_4864 = 0x100;
      local_48c0 = local_48c0 + 1;
      local_48cc = 0xd4;
      if (local_48f8[iVar8 + -1] == 1) {
        local_49a8 = param_1 + 4;
        iVar4 = param_1[6] - param_1[5];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar7 = (int)local_2c - (int)local_30;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        FUN_0040ff44((int)&local_4864,(iVar4 >> 2) + (iVar7 >> 2));
        local_49a4 = (int *)set_union_uint32((int *)param_1[5],(int *)param_1[6],local_30,local_2c,
                                         local_4860);
      }
      else {
        local_49ac = param_1 + 4;
        iVar4 = param_1[6] - param_1[5];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        FUN_0040ff44((int)&local_4864,iVar4 >> 2);
        local_49a4 = set_intersection_uint32((int *)param_1[5],(int *)param_1[6],local_30,local_2c,local_4860);
      }
      local_49b0 = local_485c;
      local_49b4 = local_49a4;
      local_49b8 = FUN_00410598(local_485c,local_485c,local_49a4);
      puVar1 = local_485c;
      local_49bc = local_485c;
      iVar4 = (int)local_49b0 - (int)local_49b4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      local_485c = local_485c + -(iVar4 >> 2);
      FUN_0040957c(&local_4864,(int)local_49b8,(int)puVar1);
      local_49c0 = param_1 + 4;
      local_49c4 = param_1 + 5;
      local_49c8 = *local_49c4;
      *local_49c4 = (int)local_4860;
      local_49cc = param_1 + 6;
      local_49d0 = *local_49cc;
      *local_49cc = (int)local_485c;
      local_49d4 = param_1 + 8;
      local_4c04 = param_1[10];
      param_1[10] = local_484c;
      local_4bf4 = param_1[10];
      local_48c0 = local_48c0 + -1;
      local_4be4 = local_4c04;
      local_4860 = (int *)local_49c8;
      local_485c = (undefined4 *)local_49d0;
      local_484c = local_4c04;
      FUN_0040957c(&local_4864,local_49c8,local_49d0);
      local_49d8 = (int)local_4860;
      operator_delete();
      local_48cc = 0x44;
    }
    for (; local_48f8[iVar8] == 5; iVar8 = iVar8 + 1) {
      local_49e4 = *(int *)(local_c + -4) - 1;
      local_49dc = local_49e4;
      local_48cc = 0x44;
      iVar4 = aiStackY_4b5c[local_49e4];
      if (1 < *(int *)(local_c + -0xc) + 1) {
        FUN_004d48d8((int)local_14);
      }
      local_49e8 = (undefined4 *)(local_c + -0xc);
      if (local_49e8 != &DAT_00513d58) {
        *local_49e8 = 0xffffffff;
      }
      if (local_c[local_49e4] == '\x01') {
        local_49ec = param_1 + 4;
        iVar7 = param_1[6] - param_1[5];
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        iVar9 = *(int *)(iVar4 + 8) - *(int *)(iVar4 + 4);
        if (iVar9 < 0) {
          iVar9 = iVar9 + 3;
        }
        FUN_0040ff44((int)&local_34,(iVar7 >> 2) + (iVar9 >> 2));
        local_49e0 = (int *)set_union_uint32((int *)param_1[5],(int *)param_1[6],*(int **)(iVar4 + 4),
                                         *(int **)(iVar4 + 8),local_30);
      }
      else {
        iVar7 = param_1[6] - param_1[5];
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        FUN_0040ff44((int)&local_34,iVar7 >> 2);
        local_49e0 = set_intersection_uint32((int *)param_1[5],(int *)param_1[6],*(int **)(iVar4 + 4),
                                  *(int **)(iVar4 + 8),local_30);
      }
      local_49f0 = local_2c;
      local_49f4 = local_49e0;
      local_49f8 = FUN_00410598(local_2c,local_2c,local_49e0);
      piVar6 = local_2c;
      local_49fc = local_2c;
      iVar7 = (int)local_49f0 - (int)local_49f4;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      local_2c = local_2c + -(iVar7 >> 2);
      FUN_0040957c(&local_34,(int)local_49f8,(int)piVar6);
      local_4a00 = param_1 + 5;
      local_4a04 = (int *)*local_4a00;
      *local_4a00 = (int)local_30;
      local_4a08 = param_1 + 6;
      local_4a0c = (int *)*local_4a08;
      *local_4a08 = (int)local_2c;
      local_4c34 = param_1[10];
      param_1[10] = local_1c;
      local_4c24 = param_1[10];
      local_4a10 = local_49dc;
      local_4c14 = local_4c34;
      local_30 = local_4a04;
      local_2c = local_4a0c;
      local_1c = local_4c34;
      if ((*(int *)&DAT_005140ac) - 0xeU < local_49dc) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 1;
        puVar11 = &LAB_00408370;
        uVar10 = 0;
        local_48cc = 0xf8;
        uStackY_1ed0 = 0x40f3dd;
        local_4a14 = (uint *)FUN_004dc320(local_4d2c,PTR_s_invalid_string_size_parameter_in_00516d20
                                         );
        std::string::string_from_cstr((int)local_48a4,local_4a14);
        local_48c0 = local_48c0 + 2;
        local_487c[0] = &std::logic_error::vftable;
        local_4a20 = 0;
        local_486c = (int *)0x0;
        local_48cc = 0x104;
        if (local_489c[-3] == -1 || local_489c[-3] + 1 < 0) {
          local_4a30 = local_489c[-1];
          local_4a38 = std::string::__getRep(local_4874,local_4a30,local_4a30);
          local_4a3c = local_4874;
          local_4d44 = local_4a38 + 3;
          local_4a40 = local_4a30;
          local_4a44 = local_489c;
          local_4a48 = local_4d44;
          local_4a34 = local_4d44;
          local_486c = local_4d44;
          memcpy(local_4d44,local_489c,local_4a30);
        }
        else {
          local_4a28 = local_4874;
          local_4a24 = local_489c;
          local_486c = local_489c;
          local_4d34 = local_489c;
          local_4a2c = local_489c + -3;
          if (local_4a2c != &DAT_00513d58) {
            *local_4a2c = *local_4a2c + 1;
          }
        }
        local_48cc = 0xf8;
        local_487c[0] = &std::length_error::vftable;
        local_48c0 = local_48c0 + 2;
        if (local_489c != (int *)0x0) {
          if (local_489c[-3] != -1) {
            local_4a4c = local_489c + -3;
            if (local_4a4c == &DAT_00513d58) {
              iVar7 = 1;
            }
            else if (local_4a4c == &DAT_00513d58) {
              iVar7 = 1;
            }
            else {
              *local_4a4c = *local_4a4c + -1;
              iVar7 = *local_4a4c + 1;
            }
            if (iVar7 != 0) goto LAB_0040f627;
          }
          local_4a50 = local_489c + -3;
          local_4a54 = local_489c + -3;
          operator_delete();
          local_4a58 = 0;
          local_4a5c = local_48a4;
          local_489c = (int *)0x0;
          local_4d54 = 0;
        }
LAB_0040f627:
        local_48cc = 0xec;
        FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_487c,uVar10,puVar11,uVar12,uVar13,uVar14,uVar15);
      }
      if (local_4a10 < *(uint *)(local_c + -4)) {
        local_4a60 = *(int *)(local_c + -4) - local_4a10;
        if (*(uint *)(local_c + -4) < local_4a10) {
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 1;
          puVar11 = &LAB_004084c8;
          uVar10 = 0;
          local_48cc = 0x128;
          uStackY_1ed0 = 0x40f6ba;
          local_4a64 = (uint *)FUN_004dc320(local_4e4c,
                                            PTR_s_string_index_out_of_range_in_fun_00516d2c);
          std::string::string_from_cstr((int)local_48b4,local_4a64);
          local_48c0 = local_48c0 + 2;
          local_4894[0] = &std::logic_error::vftable;
          local_4a70 = 0;
          local_4884 = (int *)0x0;
          local_48cc = 0x134;
          if (local_48ac[-3] == -1 || local_48ac[-3] + 1 < 0) {
            local_4a80 = local_48ac[-1];
            local_4a88 = std::string::__getRep(local_488c,local_4a80,local_4a80);
            local_4a8c = local_488c;
            local_4a98 = local_4a88 + 3;
            local_4a90 = local_4a80;
            local_4a94 = local_48ac;
            local_4a84 = local_4a98;
            local_4884 = local_4a98;
            memcpy(local_4a98,local_48ac,local_4a80);
          }
          else {
            local_4a78 = local_488c;
            local_4a74 = local_48ac;
            local_4884 = local_48ac;
            local_4a7c = local_48ac + -3;
            if (local_4a7c != &DAT_00513d58) {
              *local_4a7c = *local_4a7c + 1;
            }
          }
          local_48cc = 0x128;
          local_4894[0] = &std::out_of_range::vftable;
          local_48c0 = local_48c0 + 2;
          if (local_48ac != (int *)0x0) {
            if (local_48ac[-3] != -1) {
              local_4a9c = local_48ac + -3;
              if (local_4a9c == &DAT_00513d58) {
                iVar7 = 1;
              }
              else if (local_4a9c == &DAT_00513d58) {
                iVar7 = 1;
              }
              else {
                *local_4a9c = *local_4a9c + -1;
                iVar7 = *local_4a9c + 1;
              }
              if (iVar7 != 0) goto LAB_0040f904;
            }
            local_4aa0 = local_48ac + -3;
            local_4aa4 = local_48ac + -3;
            operator_delete();
            local_4aa8 = 0;
            local_4aac = local_48b4;
            local_48ac = (int *)0x0;
          }
LAB_0040f904:
          local_48cc = 0xec;
          FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_4894,uVar10,puVar11,uVar12,uVar13,uVar14,uVar15);
        }
        local_4ab0 = *(int *)(local_c + -4) - local_4a10;
        local_4ab1 = 0;
        local_4ab8 = local_4ab0;
        if (local_4a60 < local_4ab0) {
          local_4ab8 = local_4a60;
        }
        FUN_004cfad4((int)local_14,local_4a10,local_4ab8,(uint)&local_4ab1,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_14,*(uint *)(local_c + -4),0,local_4a10 - *(int *)(local_c + -4),0);
      }
      local_4abc = (undefined4 *)(local_c + -0xc);
      if (local_4abc != &DAT_00513d58) {
        *local_4abc = 0;
      }
      if (iVar4 != 0) {
        FUN_0040957c(iVar4,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
        local_4ac0 = *(undefined4 *)(iVar4 + 4);
        operator_delete();
        local_48cc = 0x44;
        operator_delete();
      }
    }
    pbVar3 = local_48f8 + iVar8;
    iVar8 = iVar8 + 1;
  } while (*pbVar3 != 3);
  local_48b8 = (int *)operator_new();
  if (local_48b8 != (int *)0x0) {
    local_48cc = 0x170;
    TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(local_48b8,param_2,param_3,(undefined4 *)0x0);
    local_48cc = 0x164;
  }
  param_1[1] = (int)local_48b8;
  param_1[2] = param_1[5];
  iVar8 = *param_1;
  *param_5 = *(undefined4 *)(iVar8 + 0x2008);
  param_5[1] = *(undefined4 *)(iVar8 + 0x200c);
  local_48c0 = local_48c0 + -1;
  InputEngine::_dtor((int)local_4840,2);
  local_48c0 = local_48c0 + -1;
  FUN_0040957c(&local_34,(int)local_30,(int)local_2c);
  local_4ac4 = local_30;
  operator_delete();
  local_48cc = 0x44;
  local_48c0 = local_48c0 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_4ac8 = (int *)(local_c + -0xc);
      if (local_4ac8 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (local_4ac8 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *local_4ac8 = *local_4ac8 + -1;
        iVar8 = *local_4ac8 + 1;
      }
      if (iVar8 != 0) goto LAB_0040fb97;
    }
    local_4acc = local_c + -0xc;
    local_4ad0 = local_c + -0xc;
    operator_delete();
  }
LAB_0040fb97:
  *in_FS_OFFSET = local_48dc;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fc0c  FUN_0040fc0c   (788 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040fc0c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_190 [240];
  undefined4 *local_a0;
  undefined1 *local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  uint local_7c;
  undefined1 *local_78;
  int *local_74;
  int *local_70;
  undefined1 *local_6c;
  int *local_68;
  undefined4 local_64;
  uint *local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  undefined **local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4ec808);
  if (param_2 < 0x40000000) goto LAB_0040fe01;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  puVar5 = &LAB_00408370;
  uVar4 = 0;
  local_44 = 0x14;
  local_58 = (uint *)FUN_004dc320(local_190,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)local_2c,local_58);
  local_38 = local_38 + 2;
  local_1c[0] = &std::logic_error::vftable;
  local_64 = 0;
  local_c = (int *)0x0;
  local_44 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_74 = std::string::__getRep(local_14,uVar1,uVar1);
    local_78 = local_14;
    local_84 = local_74 + 3;
    local_80 = local_24;
    local_7c = uVar1;
    local_70 = local_84;
    local_c = local_84;
    memcpy(local_84,local_24,uVar1);
  }
  else {
    local_6c = local_14;
    local_68 = local_24;
    local_c = local_24;
    piVar3 = local_24 + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &std::length_error::vftable;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fdea;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    operator_delete();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0040fdea:
  local_44 = 8;
  FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_1c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
LAB_0040fe01:
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((uint)(iVar2 >> 2) < param_2) {
    local_a0 = (undefined4 *)operator_new();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &std::bad_alloc::vftable;
      local_38 = local_38 + 2;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_30,0,&LAB_00404134,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_004094e4(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    FUN_0040957c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 8) = local_a0 + (iVar2 >> 2);
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2;
  }
  *in_FS_OFFSET = local_54;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ff44  FUN_0040ff44   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040ff44(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  if ((uint)(iVar3 >> 2) < param_2) {
    local_8 = 0;
    iVar3 = (int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0040ffe4(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_00410598(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_0040957c(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ffe4  FUN_0040ffe4   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040ffe4(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4ec894);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - (int)puVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) < param_3) {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      local_3c = iVar2 >> 2;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar1 = (undefined4 *)operator_new();
      if (puVar1 == (undefined4 *)0x0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004094e4(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004102ac(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004094e4(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0040957c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(undefined4 **)(param_1 + 0x18) = puVar1 + local_38;
      *(undefined4 **)(param_1 + 8) = puVar1 + (iVar2 >> 2) + param_3;
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    else {
      iVar2 = (int)puVar1 - (int)param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (param_3 < (uint)(iVar2 >> 2)) {
        FUN_004094e4(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_004094c0(param_2,puVar1 + -param_3,puVar1);
        FUN_0041028c(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_004102ac(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004094e4(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_0041028c(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041028c  FUN_0041028c   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041028c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004102ac  FUN_004102ac   (85 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004102ac(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ec8d4);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410328  FUN_00410328   (77 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410328(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  if (iVar1 >> 2 < 0x11) {
    FUN_00410378(param_1,param_2);
  }
  else {
    FUN_00410378(param_1,param_1 + 0x10);
    FUN_004103f8(param_1 + 0x10,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410378  FUN_00410378   (91 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410378(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    while (piVar2 = piVar3 + 1, piVar2 != param_2) {
      iVar1 = *piVar2;
      if (iVar1 < *param_1) {
        FUN_004094c0(param_1,piVar2,piVar3 + 2);
        *param_1 = iVar1;
        piVar3 = piVar2;
      }
      else {
        FUN_004103d4(piVar2,iVar1);
        piVar3 = piVar2;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004103d4  FUN_004103d4   (35 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004103d4(int *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_1[-1];
    if (iVar1 <= param_2) break;
    *param_1 = iVar1;
    param_1 = param_1 + -1;
  }
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004103f8  FUN_004103f8   (38 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004103f8(int *param_1,int *param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    FUN_004103d4(param_1,*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410420  sort_uint32   (199 bytes)   [notes]
//   std::sort over uint32 offsets per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl sort_uint32(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  while( true ) {
    iVar5 = (int)param_2 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if (iVar5 >> 2 < 0x11) break;
    piVar1 = param_2 + -1;
    iVar3 = iVar5 >> 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar5 >> 2 & 1U) != 0);
    }
    piVar4 = param_1 + iVar3;
    if (*param_1 < *piVar4) {
      piVar2 = piVar4;
      if ((*piVar1 <= *piVar4) && (piVar2 = param_1, *param_1 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    else {
      piVar2 = param_1;
      if ((*piVar1 <= *param_1) && (piVar2 = piVar4, *piVar4 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    piVar1 = (int *)FUN_004104e8(param_1,param_2,*piVar2);
    iVar5 = (int)piVar1 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar3 = (int)param_2 - (int)piVar1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar5 >> 2 < iVar3 >> 2) {
      sort_uint32(param_1,piVar1);
      param_1 = piVar1;
    }
    else {
      sort_uint32(piVar1,param_2);
      param_2 = piVar1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004104e8  FUN_004104e8   (80 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004104e8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    for (; *param_1 < param_3; param_1 = param_1 + 1) {
    }
    do {
      param_2 = param_2 + -1;
    } while (param_3 < *param_2);
    if (param_2 <= param_1) break;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410538  FUN_00410538   (48 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00410538(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == param_1) {
    return param_2;
  }
  do {
    piVar1 = param_1;
    param_1 = piVar1 + 1;
    if (param_2 == param_1) {
      return param_2;
    }
  } while (*piVar1 != *param_1);
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410568  unique_uint32   (45 bytes)   [notes+analysis]
//   std::unique over a sorted int range
//   file placement: inferred (address adjacency)
int * __cdecl unique_uint32(int *param_1,int *param_2,int *param_3)

{
  *param_3 = *param_1;
  while (param_1 = param_1 + 1, param_2 != param_1) {
    if (*param_1 != *param_3) {
      param_3 = param_3 + 1;
      *param_3 = *param_1;
    }
  }
  return param_3 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410598  FUN_00410598   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00410598(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004105bc  set_union_uint32   (105 bytes)   [notes+analysis]
//   std::set_union of two sorted int ranges
//   file placement: inferred (address adjacency)
undefined4 * __cdecl set_union_uint32(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*param_1 < *param_3) {
      *param_5 = *param_1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    }
    else if (*param_3 < *param_1) {
      *param_5 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    }
    else {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_5 = iVar1;
      param_5 = param_5 + 1;
      param_3 = param_3 + 1;
    }
  }
  puVar2 = FUN_00410598(param_1,param_2,param_5);
  puVar2 = FUN_00410598(param_3,param_4,puVar2);
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410628  set_intersection_uint32   (65 bytes)   [notes+analysis]
//   std::set_intersection of two sorted int ranges
//   file placement: inferred (address adjacency)
int * __cdecl set_intersection_uint32(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*param_1 < *param_3) {
      param_1 = param_1 + 1;
    }
    else if (*param_3 < *param_1) {
      param_3 = param_3 + 1;
    }
    else {
      *param_5 = *param_1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
      param_3 = param_3 + 1;
    }
  }
  return param_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041066c  TSDictionaryDefinitionSearchIndexed::~TSDictionaryDefinitionSearchIndexed   (150 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryDefinitionSearchIndexed::_dtor
void __cdecl TSDictionaryDefinitionSearchIndexed::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ec908);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      TSDictionaryDefinitionRetriever::_dtor(*(int *)(param_1 + 4),3);
    }
    FUN_0040957c(param_1 + 0x10,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410704  TSDictionaryDefinitionSearchIndexed::Next   (74 bytes)   [notes+analysis]
//   advances through the offset list, skipping values outside the definition section, and reads the next record
undefined4 __cdecl TSDictionaryDefinitionSearchIndexed::Next(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  do {
    if (param_1[2] == param_1[6]) {
      return 0;
    }
    piVar1 = (int *)param_1[2];
    param_1[2] = param_1[2] + 4;
    iVar2 = *piVar1;
  } while ((iVar2 < *(int *)(*param_1 + 0x2404)) || (*(int *)(*param_1 + 0x2408) <= iVar2));
  TSDictionaryDefinitionRetriever::ReadDefinition(param_1[1],iVar2,param_2);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410750  FUN_00410750   (53 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00410750(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *param_3 = iVar1 >> 2;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *param_2 = iVar1 >> 2;
  return;
}

} // namespace tea
