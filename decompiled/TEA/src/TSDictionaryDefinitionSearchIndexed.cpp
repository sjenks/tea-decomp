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
int * __cdecl TSDictionaryDefinitionSearchIndexed::TSDictionaryDefinitionSearchIndexed(int *param_1,int dictList,int dictIndex,int param_4,undefined4 *param_5)

{
  undefined4 *last;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 regHigh;
  char *pcVar5;
  int *last4;
  int iVar7;
  int matchEngine;
  int iVar9;
  undefined4 *sehChainHead;
  undefined1 exceptMsg [248];
  undefined4 unused2;
  int *newData;
  int *unused3;
  undefined1 exceptMsg2 [248];
  int local_4c34;
  int unused4;
  int unused5;
  int local_4c04;
  int unused6;
  int unused7;
  int local_4bd4;
  int unused8;
  int unused9;
  undefined4 unused10;
  int unused11;
  int local_4b74;
  undefined *unused12;
  int aiStackY_4b5c [32];
  int *local_4adc;
  undefined *unused13;
  undefined *unused14;
  int *strRep;
  int *unused15;
  undefined4 unused16;
  undefined4 *strRep2;
  uint local_4ab8;
  undefined1 s;
  uint local_4ab0;
  undefined1 *unused17;
  undefined4 unused18;
  int *unused19;
  int *unused20;
  int *strRep3;
  int *newData2;
  int *unused21;
  uint unused22;
  undefined1 *unused23;
  int *newRep;
  int *unused24;
  uint len;
  int *strRep4;
  undefined1 *unused25;
  int *unused26;
  undefined4 unused27;
  uint *msgText;
  uint local_4a60;
  undefined1 *unused28;
  undefined4 unused29;
  int *unused30;
  int *unused31;
  int *strRep5;
  int *unused32;
  int *unused33;
  uint unused34;
  undefined1 *unused35;
  int *newRep2;
  int *unused36;
  uint len2;
  int *strRep6;
  undefined1 *unused37;
  int *unused38;
  undefined4 unused39;
  uint *msgText2;
  uint local_4a10;
  int *local_4a0c;
  int *local_4a08;
  int *local_4a04;
  int *local_4a00;
  int *unused40;
  undefined4 *first;
  int *local_49f4;
  int *local_49f0;
  int *unused41;
  undefined4 *strRep7;
  uint local_49e4;
  int *dest;
  uint local_49dc;
  int unused42;
  int *unused43;
  int last2;
  int *local_49cc;
  int first2;
  int *local_49c4;
  int *unused44;
  undefined4 *unused45;
  undefined4 *first3;
  int *local_49b4;
  undefined4 *local_49b0;
  int *unused46;
  int *unused47;
  int *dest2;
  undefined4 unused48;
  undefined4 unused49;
  int *unused50;
  int *local_4994;
  int *local_4990;
  int *local_498c;
  int *local_4988;
  int *unused51;
  int *unused52;
  undefined4 *first4;
  int *local_4978;
  int *unused53;
  int *local_4970;
  int *first5;
  int *first6;
  int *last3;
  undefined *unused54;
  undefined *unused55;
  int *strRep8;
  int *unused56;
  undefined4 unused57;
  int linkGroupIndex;
  int maxLength;
  int unused;
  byte unused58;
  byte local_4935;
  int local_4934;
  int *local_4930;
  int *local_492c;
  int local_4928;
  int *local_4924;
  int *local_4920;
  undefined4 unused59;
  undefined4 unused60;
  undefined4 *unused61;
  undefined4 unused62;
  undefined4 unused63;
  undefined1 *unused64;
  undefined *unused65;
  undefined4 unused66;
  byte local_48f9;
  byte *local_48f8;
  int local_48f4;
  undefined4 unused67;
  undefined4 unused68;
  int *unused69;
  int *unused70;
  int unused71;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int local_48c0;
  int *local_48b8;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused72;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused73;
  undefined4 vec;
  int *dest3;
  undefined4 *local_485c;
  int local_484c;
  undefined4 *local_4844;
  undefined4 inputEngine [2652];
  undefined4 uStackY_1ed0;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar12;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  int local_40;
  undefined4 vec2;
  int *first7;
  int *last5;
  int local_1c;
  undefined1 str3 [8];
  undefined *local_c;
  int local_8;
  
  matchEngine = 4;
  do {
    local_8 = matchEngine;
    matchEngine = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4ec618);
  ehContext = 8;
  unused71 = dictIndex;
  *param_1 = *(int *)(*(int *)(dictList + 0xc) + dictIndex * 4);
  param_1[1] = 0;
  unused70 = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = 0;
  unused69 = param_1 + 8;
  param_1[10] = 0;
  unused68 = 0x100;
  unused67 = 1;
  param_1[4] = 0x100;
  local_48c0 = local_48c0 + 1;
  matchEngine = *(int *)(param_4 + 8) - *(int *)(param_4 + 4);
  if (matchEngine < 0) {
    matchEngine = matchEngine + 3;
  }
  if (matchEngine >> 2 == 0) {
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
    matchEngine = local_48c0;
    local_48f9 = *pbVar3;
    if (local_48f9 == 3) break;
    if ((local_48f9 & 8) != 0) {
      *sehChainHead = sehPrevFrame;
      goto LAB_0040fb97;
    }
    matchEngine = *(int *)(local_48f4 + ((int)pbVar3 - (int)local_48f8) * 4);
    ehContext = 8;
    if (matchEngine != 0) {
      iVar4 = MatchEngine::GetMinLength(matchEngine);
      matchEngine = MatchEngine::GetMaxLength(matchEngine);
      if (iVar4 != matchEngine) {
        *sehChainHead = sehPrevFrame;
        goto LAB_0040fb97;
      }
    }
    pbVar3 = pbVar3 + 1;
  }
  unused66 = 0;
  unused65 = &g_emptyStringData;
  local_c = &g_emptyStringData;
  unused64 = str3;
  unused12 = &g_emptyStringData;
  local_48c0 = local_48c0 + 1;
  ehContext = 0x50;
  first7 = (int *)0x0;
  last5 = (int *)0x0;
  local_1c = 0;
  unused63 = 0x100;
  unused62 = 1;
  vec2 = 0x100;
  local_48c0 = matchEngine + 2;
  ehContext = 0x44;
  std::vector_uint::reserve((int)&vec2,0x1000);
  ehContext = 0x68;
  InputEngine::InputEngine(inputEngine,dictList,dictIndex);
  local_48c0 = local_48c0 + 1;
  matchEngine = 0;
  do {
    for (; local_48f8[matchEngine] == 4; matchEngine = matchEngine + 1) {
      iVar4 = *(int *)(local_c + -4);
      ehContext = 0x44;
      local_4844 = (undefined4 *)operator_new();
      if (local_4844 != (undefined4 *)0x0) {
        ehContext = 0x80;
        local_4844[1] = 0;
        local_4844[2] = 0;
        unused61 = local_4844 + 4;
        local_4844[6] = 0;
        unused60 = 0x100;
        unused59 = 1;
        *local_4844 = 0x100;
        ehContext = 0x74;
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
      unused11 = param_1[10];
      *(int *)(iVar4 + 0x18) = local_4b74;
      unused10 = *(undefined4 *)(iVar4 + 0x18);
      if ((matchEngine == 0) || (local_4935 = local_48f8[matchEngine + -1], local_4935 == 4)) {
        local_4935 = 1;
      }
      unused58 = local_4935;
      std::string::replace_fill((int)str3,*(uint *)(local_c + -4),0,1,local_4935);
    }
    unused = *(int *)(local_48f4 + matchEngine * 4);
    ehContext = 0x44;
    std::vector_MatchEngine_ptr::resize((int)&vec2,0);
    maxLength = MatchEngine::GetMaxLength(unused);
    iVar4 = MatchEngine::GetMinLength(unused);
    if (iVar4 <= maxLength) {
      do {
        bVar2 = InputEngine::StartLength((int)inputEngine,iVar4);
        if (CONCAT31(regHigh,bVar2) != 0) {
          MatchEngine::SetWordLength(unused,iVar4);
          do {
            while (pcVar5 = (char *)InputEngine::NextWord((int)inputEngine,unused), *pcVar5 != -1) {
              linkGroupIndex = InputEngine::GetLinkGroupIndex((int)inputEngine);
              if ((linkGroupIndex != -1) &&
                 (uVar12 = TSDictionaryList::CollectDefinitionOffsets(dictList,dictIndex,1,iVar4,linkGroupIndex,local_40,(int)&vec2),
                 uVar12 == 0)) {
                matchEngine = *(int *)(local_c + -4);
                ehContext = 0x44;
                local_4adc = aiStackY_4b5c + matchEngine;
                while (matchEngine != 0) {
                  local_4adc = local_4adc + -1;
                  matchEngine = matchEngine + -1;
                  iVar4 = *local_4adc;
                  if (iVar4 != 0) {
                    std::_Destroy_range_ptr_40957c(iVar4,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
                    unused57 = *(undefined4 *)(iVar4 + 4);
                    operator_delete();
                    ehContext = 0x44;
                    operator_delete();
                  }
                }
                local_48c0 = local_48c0 + -1;
                InputEngine::_dtor((int)inputEngine,2);
                local_48c0 = local_48c0 + -1;
                std::_Destroy_range_ptr_40957c(&vec2,(int)first7,(int)last5);
                unused56 = first7;
                operator_delete();
                local_48c0 = local_48c0 + -1;
                if (local_c != (undefined *)0x0) {
                  if (*(int *)(local_c + -0xc) != -1) {
                    strRep8 = (int *)(local_c + -0xc);
                    if (strRep8 == &g_nullStringRep) {
                      matchEngine = 1;
                    }
                    else if (strRep8 == &g_nullStringRep) {
                      matchEngine = 1;
                    }
                    else {
                      *strRep8 = *strRep8 + -1;
                      matchEngine = *strRep8 + 1;
                    }
                    if (matchEngine != 0) goto LAB_0040ec37;
                  }
                  unused55 = local_c + -0xc;
                  unused54 = local_c + -0xc;
                  operator_delete();
                }
LAB_0040ec37:
                *sehChainHead = sehPrevFrame;
                goto LAB_0040fb97;
              }
            }
          } while (local_40 == 1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= maxLength);
    }
    last3 = last5;
    first6 = first7;
    if (first7 != last5) {
      sort_uint32(first7,last5);
      sort_uint32_impl(first6,last3);
    }
    first5 = last5;
    local_4970 = last5;
    unused53 = first7;
    last4 = std::unique_uint(first7,last5);
    unused53 = last4;
    if (last4 != local_4970) {
      last4 = unique_uint32(last4,local_4970,last4);
    }
    local_4978 = last4;
    first4 = std::copy_ptr_410598(first5,last5,last4);
    last4 = last5;
    unused52 = last5;
    iVar4 = (int)first5 - (int)local_4978;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    last5 = last5 + -(iVar4 >> 2);
    std::_Destroy_range_ptr_40957c(&vec2,(int)first4,(int)last4);
    if ((matchEngine == 0) || (local_48f8[matchEngine + -1] == 4)) {
      unused51 = param_1 + 4;
      local_4988 = param_1 + 5;
      local_498c = (int *)*local_4988;
      *local_4988 = (int)first7;
      local_4990 = param_1 + 6;
      local_4994 = (int *)*local_4990;
      *local_4990 = (int)last5;
      unused50 = param_1 + 8;
      local_4bd4 = param_1[10];
      param_1[10] = local_1c;
      unused8 = param_1[10];
      unused9 = local_4bd4;
      first7 = local_498c;
      last5 = local_4994;
      local_1c = local_4bd4;
    }
    else {
      ehContext = 0xbc;
      dest3 = (int *)0x0;
      local_485c = (undefined4 *)0x0;
      local_484c = 0;
      unused49 = 0x100;
      unused48 = 1;
      vec = 0x100;
      local_48c0 = local_48c0 + 1;
      ehContext = 0xd4;
      if (local_48f8[matchEngine + -1] == 1) {
        unused47 = param_1 + 4;
        iVar4 = param_1[6] - param_1[5];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar7 = (int)last5 - (int)first7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        std::vector_MatchEngine_ptr::resize((int)&vec,(iVar4 >> 2) + (iVar7 >> 2));
        dest2 = (int *)set_union_uint32((int *)param_1[5],(int *)param_1[6],first7,last5,
                                         dest3);
      }
      else {
        unused46 = param_1 + 4;
        iVar4 = param_1[6] - param_1[5];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        std::vector_MatchEngine_ptr::resize((int)&vec,iVar4 >> 2);
        dest2 = set_intersection_uint32((int *)param_1[5],(int *)param_1[6],first7,last5,dest3);
      }
      local_49b0 = local_485c;
      local_49b4 = dest2;
      first3 = std::copy_ptr_410598(local_485c,local_485c,dest2);
      last = local_485c;
      unused45 = local_485c;
      iVar4 = (int)local_49b0 - (int)local_49b4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      local_485c = local_485c + -(iVar4 >> 2);
      std::_Destroy_range_ptr_40957c(&vec,(int)first3,(int)last);
      unused44 = param_1 + 4;
      local_49c4 = param_1 + 5;
      first2 = *local_49c4;
      *local_49c4 = (int)dest3;
      local_49cc = param_1 + 6;
      last2 = *local_49cc;
      *local_49cc = (int)local_485c;
      unused43 = param_1 + 8;
      local_4c04 = param_1[10];
      param_1[10] = local_484c;
      unused6 = param_1[10];
      local_48c0 = local_48c0 + -1;
      unused7 = local_4c04;
      dest3 = (int *)first2;
      local_485c = (undefined4 *)last2;
      local_484c = local_4c04;
      std::_Destroy_range_ptr_40957c(&vec,first2,last2);
      unused42 = (int)dest3;
      operator_delete();
      ehContext = 0x44;
    }
    for (; local_48f8[matchEngine] == 5; matchEngine = matchEngine + 1) {
      local_49e4 = *(int *)(local_c + -4) - 1;
      local_49dc = local_49e4;
      ehContext = 0x44;
      iVar4 = aiStackY_4b5c[local_49e4];
      if (1 < *(int *)(local_c + -0xc) + 1) {
        std::string::__unshare((int)str3);
      }
      strRep7 = (undefined4 *)(local_c + -0xc);
      if (strRep7 != &g_nullStringRep) {
        *strRep7 = 0xffffffff;
      }
      if (local_c[local_49e4] == '\x01') {
        unused41 = param_1 + 4;
        iVar7 = param_1[6] - param_1[5];
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        iVar9 = *(int *)(iVar4 + 8) - *(int *)(iVar4 + 4);
        if (iVar9 < 0) {
          iVar9 = iVar9 + 3;
        }
        std::vector_MatchEngine_ptr::resize((int)&vec2,(iVar7 >> 2) + (iVar9 >> 2));
        dest = (int *)set_union_uint32((int *)param_1[5],(int *)param_1[6],*(int **)(iVar4 + 4),
                                         *(int **)(iVar4 + 8),first7);
      }
      else {
        iVar7 = param_1[6] - param_1[5];
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        std::vector_MatchEngine_ptr::resize((int)&vec2,iVar7 >> 2);
        dest = set_intersection_uint32((int *)param_1[5],(int *)param_1[6],*(int **)(iVar4 + 4),
                                  *(int **)(iVar4 + 8),first7);
      }
      local_49f0 = last5;
      local_49f4 = dest;
      first = std::copy_ptr_410598(last5,last5,dest);
      last4 = last5;
      unused40 = last5;
      iVar7 = (int)local_49f0 - (int)local_49f4;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      last5 = last5 + -(iVar7 >> 2);
      std::_Destroy_range_ptr_40957c(&vec2,(int)first,(int)last4);
      local_4a00 = param_1 + 5;
      local_4a04 = (int *)*local_4a00;
      *local_4a00 = (int)first7;
      local_4a08 = param_1 + 6;
      local_4a0c = (int *)*local_4a08;
      *local_4a08 = (int)last5;
      local_4c34 = param_1[10];
      param_1[10] = local_1c;
      unused4 = param_1[10];
      local_4a10 = local_49dc;
      unused5 = local_4c34;
      first7 = local_4a04;
      last5 = local_4a0c;
      local_1c = local_4c34;
      if ((*(int *)&g_stringNpos) - 0xeU < local_49dc) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar12 = 1;
        copyCtor = &LAB_00408370;
        objectDtor = 0;
        ehContext = 0xf8;
        uStackY_1ed0 = 0x40f3dd;
        msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20
                                         );
        std::string::string_from_cstr((int)str2,msgText2);
        local_48c0 = local_48c0 + 2;
        lengthError[0] = &std::logic_error::vftable;
        unused39 = 0;
        unused73 = (int *)0x0;
        ehContext = 0x104;
        if (str5[-3] == -1 || str5[-3] + 1 < 0) {
          len2 = str5[-1];
          newRep2 = std::string::__getRep(newStr2,len2,len2);
          unused35 = newStr2;
          newData = newRep2 + 3;
          unused34 = len2;
          unused33 = str5;
          unused32 = newData;
          unused36 = newData;
          unused73 = newData;
          memcpy(newData,str5,len2);
        }
        else {
          unused37 = newStr2;
          unused38 = str5;
          unused73 = str5;
          unused3 = str5;
          strRep6 = str5 + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = *strRep6 + 1;
          }
        }
        ehContext = 0xf8;
        lengthError[0] = &std::length_error::vftable;
        local_48c0 = local_48c0 + 2;
        if (str5 != (int *)0x0) {
          if (str5[-3] != -1) {
            strRep5 = str5 + -3;
            if (strRep5 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              iVar7 = *strRep5 + 1;
            }
            if (iVar7 != 0) goto LAB_0040f627;
          }
          unused31 = str5 + -3;
          unused30 = str5 + -3;
          operator_delete();
          unused29 = 0;
          unused28 = str2;
          str5 = (int *)0x0;
          unused2 = 0;
        }
LAB_0040f627:
        ehContext = 0xec;
        _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,uVar12,throwFlags,throwFile,throwLine);
      }
      if (local_4a10 < *(uint *)(local_c + -4)) {
        local_4a60 = *(int *)(local_c + -4) - local_4a10;
        if (*(uint *)(local_c + -4) < local_4a10) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar12 = 1;
          copyCtor = &LAB_004084c8;
          objectDtor = 0;
          ehContext = 0x128;
          uStackY_1ed0 = 0x40f6ba;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                            PTR_s_string_index_out_of_range_in_fun_00516d2c);
          std::string::string_from_cstr((int)str,msgText);
          local_48c0 = local_48c0 + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused27 = 0;
          unused72 = (int *)0x0;
          ehContext = 0x134;
          if (str4[-3] == -1 || str4[-3] + 1 < 0) {
            len = str4[-1];
            newRep = std::string::__getRep(newStr,len,len);
            unused23 = newStr;
            newData2 = newRep + 3;
            unused22 = len;
            unused21 = str4;
            unused24 = newData2;
            unused72 = newData2;
            memcpy(newData2,str4,len);
          }
          else {
            unused25 = newStr;
            unused26 = str4;
            unused72 = str4;
            strRep4 = str4 + -3;
            if (strRep4 != &g_nullStringRep) {
              *strRep4 = *strRep4 + 1;
            }
          }
          ehContext = 0x128;
          outOfRange[0] = &std::out_of_range::vftable;
          local_48c0 = local_48c0 + 2;
          if (str4 != (int *)0x0) {
            if (str4[-3] != -1) {
              strRep3 = str4 + -3;
              if (strRep3 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else if (strRep3 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else {
                *strRep3 = *strRep3 + -1;
                iVar7 = *strRep3 + 1;
              }
              if (iVar7 != 0) goto LAB_0040f904;
            }
            unused20 = str4 + -3;
            unused19 = str4 + -3;
            operator_delete();
            unused18 = 0;
            unused17 = str;
            str4 = (int *)0x0;
          }
LAB_0040f904:
          ehContext = 0xec;
          _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,uVar12,throwFlags,throwFile,throwLine);
        }
        local_4ab0 = *(int *)(local_c + -4) - local_4a10;
        s = 0;
        local_4ab8 = local_4ab0;
        if (local_4a60 < local_4ab0) {
          local_4ab8 = local_4a60;
        }
        std::string::replace((int)str3,local_4a10,local_4ab8,(uint)&s,0,0,0);
      }
      else {
        std::string::replace_fill((int)str3,*(uint *)(local_c + -4),0,local_4a10 - *(int *)(local_c + -4),0);
      }
      strRep2 = (undefined4 *)(local_c + -0xc);
      if (strRep2 != &g_nullStringRep) {
        *strRep2 = 0;
      }
      if (iVar4 != 0) {
        std::_Destroy_range_ptr_40957c(iVar4,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
        unused16 = *(undefined4 *)(iVar4 + 4);
        operator_delete();
        ehContext = 0x44;
        operator_delete();
      }
    }
    pbVar3 = local_48f8 + matchEngine;
    matchEngine = matchEngine + 1;
  } while (*pbVar3 != 3);
  local_48b8 = (int *)operator_new();
  if (local_48b8 != (int *)0x0) {
    ehContext = 0x170;
    TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(local_48b8,dictList,dictIndex,(undefined4 *)0x0);
    ehContext = 0x164;
  }
  param_1[1] = (int)local_48b8;
  param_1[2] = param_1[5];
  matchEngine = *param_1;
  *param_5 = *(undefined4 *)(matchEngine + 0x2008);
  param_5[1] = *(undefined4 *)(matchEngine + 0x200c);
  local_48c0 = local_48c0 + -1;
  InputEngine::_dtor((int)inputEngine,2);
  local_48c0 = local_48c0 + -1;
  std::_Destroy_range_ptr_40957c(&vec2,(int)first7,(int)last5);
  unused15 = first7;
  operator_delete();
  ehContext = 0x44;
  local_48c0 = local_48c0 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        matchEngine = 1;
      }
      else if (strRep == &g_nullStringRep) {
        matchEngine = 1;
      }
      else {
        *strRep = *strRep + -1;
        matchEngine = *strRep + 1;
      }
      if (matchEngine != 0) goto LAB_0040fb97;
    }
    unused14 = local_c + -0xc;
    unused13 = local_c + -0xc;
    operator_delete();
  }
LAB_0040fb97:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fc0c  std::vector_uint::reserve   (788 bytes, 2 ranges)   [analysis]
//   reserve(n) for a vector of 32-bit values
//   file placement: inferred (address adjacency)
void __cdecl std::vector_uint::reserve(int vec,uint n)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined4 *dest;
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  undefined1 str [8];
  int *str2;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x4ec808);
  if (n < 0x40000000) goto LAB_0040fe01;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00408370;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  lengthError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x20;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = len;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep = str2 + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x14;
  lengthError[0] = &std::length_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_0040fdea;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_0040fdea:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
LAB_0040fe01:
  iVar2 = *(int *)(vec + 0x18) - *(int *)(vec + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((uint)(iVar2 >> 2) < n) {
    dest = (undefined4 *)operator_new();
    if (dest == (undefined4 *)0x0) {
      ehContext = 0x44;
      badAlloc = &std::bad_alloc::vftable;
      ehDtorCount = ehDtorCount + 2;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    ehContext = 0x50;
    std::copy_ptr_4094e4(*(undefined4 **)(vec + 4),*(undefined4 **)(vec + 8),dest);
    ehContext = 0;
    iVar2 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    std::_Destroy_range_ptr_40957c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 8) = dest + (iVar2 >> 2);
    *(undefined4 **)(vec + 4) = dest;
    *(undefined4 **)(vec + 0x18) = dest + n;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ff44  std::vector_MatchEngine_ptr::resize   (157 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414468 (157 bytes; the code occurs several times, e.g. one template instance per type). resize(n) with null pointers
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::resize(int vec,uint n)

{
  undefined4 *end;
  undefined4 *newEnd;
  int size;
  undefined4 *cut;
  int removed;
  undefined4 nullValue;
  
  size = *(int *)(vec + 8) - *(int *)(vec + 4);
  if (size < 0) {
    size = size + 3;
  }
  if ((uint)(size >> 2) < n) {
    nullValue = 0;
    size = (int)*(undefined4 **)(vec + 8) - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    std::vector_MatchEngine_ptr::insert_fill(vec,*(undefined4 **)(vec + 8),n - (size >> 2),&nullValue);
  }
  else {
    end = *(undefined4 **)(vec + 8);
    size = (int)end - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    if (n < (uint)(size >> 2)) {
      cut = (undefined4 *)(n * 4 + *(int *)(vec + 4));
      newEnd = std::copy_ptr_410598(end,end,cut);
      size = *(int *)(vec + 8);
      removed = (int)end - (int)cut;
      if (removed < 0) {
        removed = removed + 3;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (removed >> 2) * -4;
      std::_Destroy_range_ptr_40957c(vec,(int)newEnd,size);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ffe4  std::vector_MatchEngine_ptr::insert_fill   (646 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00414508 (646 bytes; the code occurs several times, e.g. one template instance per type). inserts n copies of a value at a position, growing the storage when needed
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_MatchEngine_ptr::insert_fill(int vec,undefined4 *first,uint n,undefined4 *value)

{
  undefined4 *storage;
  int count;
  uint *growBy;
  undefined4 *sehChainHead;
  uint size;
  int newCapacity;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4ec894);
  if (n == 0) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    storage = *(undefined4 **)(vec + 8);
    count = *(int *)(vec + 0x18) - (int)storage;
    if (count < 0) {
      count = count + 3;
    }
    if ((uint)(count >> 2) < n) {
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      size = count >> 2;
      if (n < size) {
        growBy = &size;
      }
      else {
        growBy = &n;
      }
      newCapacity = size + *growBy;
      storage = (undefined4 *)operator_new();
      if (storage == (undefined4 *)0x0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_ptr_4094e4(*(undefined4 **)(vec + 4),first,storage);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::fill_n_ptr(storage + (count >> 2),n,value);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::copy_ptr_4094e4(first,*(undefined4 **)(vec + 8),storage + (count >> 2) + n);
      ehContext = 0;
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::_Destroy_range_ptr_40957c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
      operator_delete();
      *(undefined4 **)(vec + 0x18) = storage + newCapacity;
      *(undefined4 **)(vec + 8) = storage + (count >> 2) + n;
      *(undefined4 **)(vec + 4) = storage;
    }
    else {
      count = (int)storage - (int)first;
      if (count < 0) {
        count = count + 3;
      }
      if (n < (uint)(count >> 2)) {
        std::copy_ptr_4094e4(storage + -n,storage,storage);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 4;
        std::copy_backward_ptr_4094c0(first,storage + -n,storage);
        std::fill_ptr(first,first + n,value);
      }
      else {
        count = (int)storage - (int)first;
        if (count < 0) {
          count = count + 3;
        }
        count = n - (count >> 2);
        std::fill_n_ptr(storage,count,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + count * 4;
        std::copy_ptr_4094e4(first,storage,first + n);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - count) * 4;
        std::fill_ptr(first,storage,value);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return sehPrevFrame;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041028c  std::fill_ptr   (31 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147b0 (31 bytes; the code occurs several times, e.g. one template instance per type). fill a range of pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_ptr(undefined4 *first,undefined4 *last,undefined4 *value)

{
  for (; last != first; first = first + 1) {
    *first = *value;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004102ac  std::fill_n_ptr   (85 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004147d0 (85 bytes; the code occurs several times, e.g. one template instance per type). fill n pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_ptr(undefined4 *first,int n,undefined4 *value)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec8d4);
  while (n != 0) {
    *first = *value;
    n = n + -1;
    first = first + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410328  sort_uint32_impl   (77 bytes)   [analysis]
//   sorts definition offsets (insertion sort for short runs; inferred)
//   file placement: inferred (address adjacency)
void __cdecl sort_uint32_impl(int *first,int *last)

{
  int iVar1;
  
  iVar1 = (int)last - (int)first;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  if (iVar1 >> 2 < 0x11) {
    std::__insertion_sort_uint(first,last);
  }
  else {
    std::__insertion_sort_uint(first,first + 0x10);
    std::__unguarded_insertion_sort_uint(first + 0x10,last);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410378  std::__insertion_sort_uint   (91 bytes)   [analysis]
//   insertion sort of 32-bit values (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__insertion_sort_uint(int *first,int *last)

{
  int value;
  int *last2;
  int *piVar3;
  
  piVar3 = first;
  if (first != last) {
    while (last2 = piVar3 + 1, last2 != last) {
      value = *last2;
      if (value < *first) {
        std::copy_backward_ptr_4094c0(first,last2,piVar3 + 2);
        *first = value;
        piVar3 = last2;
      }
      else {
        std::__unguarded_linear_insert_uint(last2,value);
        piVar3 = last2;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004103d4  std::__unguarded_linear_insert_uint   (35 bytes)   [analysis]
//   insertion step (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__unguarded_linear_insert_uint(int *last,int value)

{
  int iVar1;
  
  while( true ) {
    iVar1 = last[-1];
    if (iVar1 <= value) break;
    *last = iVar1;
    last = last + -1;
  }
  *last = value;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004103f8  std::__unguarded_insertion_sort_uint   (38 bytes)   [analysis]
//   unguarded insertion sort (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__unguarded_insertion_sort_uint(int *first,int *last)

{
  for (; last != first; first = first + 1) {
    std::__unguarded_linear_insert_uint(first,*first);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410420  sort_uint32   (199 bytes)   [notes]
//   std::sort over uint32 offsets per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl sort_uint32(int *first,int *last)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  while( true ) {
    iVar5 = (int)last - (int)first;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if (iVar5 >> 2 < 0x11) break;
    piVar1 = last + -1;
    iVar3 = iVar5 >> 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar5 >> 2 & 1U) != 0);
    }
    piVar4 = first + iVar3;
    if (*first < *piVar4) {
      piVar2 = piVar4;
      if ((*piVar1 <= *piVar4) && (piVar2 = first, *first < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    else {
      piVar2 = first;
      if ((*piVar1 <= *first) && (piVar2 = piVar4, *piVar4 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    piVar1 = (int *)std::__unguarded_partition_uint(first,last,*piVar2);
    iVar5 = (int)piVar1 - (int)first;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar3 = (int)last - (int)piVar1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar5 >> 2 < iVar3 >> 2) {
      sort_uint32(first,piVar1);
      first = piVar1;
    }
    else {
      sort_uint32(piVar1,last);
      last = piVar1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004104e8  std::__unguarded_partition_uint   (80 bytes)   [analysis]
//   partitions 32-bit values around a pivot (inferred)
//   file placement: inferred (address adjacency)
int * __cdecl std::__unguarded_partition_uint(int *first,int *last,int pivot)

{
  int iVar1;
  
  while( true ) {
    for (; *first < pivot; first = first + 1) {
    }
    do {
      last = last + -1;
    } while (pivot < *last);
    if (last <= first) break;
    iVar1 = *first;
    *first = *last;
    *last = iVar1;
    first = first + 1;
  }
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410538  std::unique_uint   (48 bytes)   [analysis]
//   removes adjacent duplicate offsets
//   file placement: inferred (address adjacency)
int * __cdecl std::unique_uint(int *first,int *last)

{
  int *first2;
  
  if (last == first) {
    return last;
  }
  do {
    first2 = first;
    first = first2 + 1;
    if (last == first) {
      return last;
    }
  } while (*first2 != *first);
  return first2;
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
// 0x00410598  std::copy_ptr_410598   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_410598(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004105bc  set_union_uint32   (105 bytes)   [notes+analysis]
//   std::set_union of two sorted int ranges
//   file placement: inferred (address adjacency)
undefined4 * __cdecl set_union_uint32(int *first,int *last,int *first2,int *last2,int *dest)

{
  int iVar1;
  undefined4 *dest2;
  
  while ((first != last && (first2 != last2))) {
    if (*first < *first2) {
      *dest = *first;
      first = first + 1;
      dest = dest + 1;
    }
    else if (*first2 < *first) {
      *dest = *first2;
      first2 = first2 + 1;
      dest = dest + 1;
    }
    else {
      iVar1 = *first;
      first = first + 1;
      *dest = iVar1;
      dest = dest + 1;
      first2 = first2 + 1;
    }
  }
  dest2 = std::copy_ptr_410598(first,last,dest);
  dest2 = std::copy_ptr_410598(first2,last2,dest2);
  return dest2;
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
void __cdecl TSDictionaryDefinitionSearchIndexed::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec908);
  if (self != 0) {
    if (*(int *)(self + 4) != 0) {
      TSDictionaryDefinitionRetriever::_dtor(*(int *)(self + 4),3);
    }
    std::_Destroy_range_ptr_40957c(self + 0x10,*(int *)(self + 0x14),*(int *)(self + 0x18));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410704  TSDictionaryDefinitionSearchIndexed::Next   (74 bytes)   [notes+analysis]
//   advances through the offset list, skipping values outside the definition section, and reads the next record
undefined4 __cdecl TSDictionaryDefinitionSearchIndexed::Next(int *param_1,int str)

{
  int *piVar1;
  int lDistanceToMove;
  
  do {
    if (param_1[2] == param_1[6]) {
      return 0;
    }
    piVar1 = (int *)param_1[2];
    param_1[2] = param_1[2] + 4;
    lDistanceToMove = *piVar1;
  } while ((lDistanceToMove < *(int *)(*param_1 + 0x2404)) || (*(int *)(*param_1 + 0x2408) <= lDistanceToMove));
  TSDictionaryDefinitionRetriever::ReadDefinition(param_1[1],lDistanceToMove,str);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410750  TSDictionaryDefinitionSearchIndexed::GetRange   (53 bytes)   [analysis]
//   the definition offsets found (begin and end)
void __cdecl TSDictionaryDefinitionSearchIndexed::GetRange(int self,int *first,int *last)

{
  int iVar1;
  
  iVar1 = *(int *)(self + 0x18) - *(int *)(self + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *last = iVar1 >> 2;
  iVar1 = *(int *)(self + 8) - *(int *)(self + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *first = iVar1 >> 2;
  return;
}

} // namespace tea
