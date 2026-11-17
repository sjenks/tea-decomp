// TSMerge.exe — application module "DMDialog"
// 61 functions, 0x00401678..0x0040a884. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401678  DMDialog::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: DMDialog::vf14 [rtti:vtable]
undefined4 __cdecl DMDialog::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&DMDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::vf14(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004016c0  FUN_004016c0   (1067 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004016c0(int *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4619f8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x392);
    param_1[0x392] = (int)(param_1 + 0x38f);
    param_1[0x393] = (int)(param_1 + 0x390);
    param_1[1] = (int)(param_1 + 0x38f);
    param_1[2] = (int)(param_1 + 0x390);
    param_1[0x38e] = 0;
    param_1[0x391] = 0;
    param_1[0x38f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x390] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x392,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe20;
  FUN_00434494(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe20;
  param_1[6] = (int)&MergeClient::vftable;
  param_1[3] = (int)&DMDialog::vftable;
  param_1[6] = (int)&PTR_LAB_00462074;
  *(undefined ***)param_1[1] = &PTR_LAB_00462084;
  *(undefined ***)param_1[2] = &PTR_LAB_00462090;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046209c;
  param_1[7] = 0;
  FUN_004465fc(param_1 + 8,0,*param_1,0x6c,0,0);
  FUN_004465fc(param_1 + 0x34,0,*param_1,0x72,0,0);
  FUN_004465fc(param_1 + 0x60,0,*param_1,0x73,0,0);
  FUN_004465fc(param_1 + 0x8c,0,*param_1,0x6d,0,0);
  FUN_004465fc(param_1 + 0xb8,0,*param_1,0x6e,0,0);
  FUN_004465fc(param_1 + 0xe4,0,*param_1,0x74,0,0);
  FUN_004465fc(param_1 + 0x110,0,*param_1,0x75,0,0);
  FUN_004465fc(param_1 + 0x13c,0,*param_1,0x76,0,0);
  FUN_004465fc(param_1 + 0x168,0,*param_1,0x77,0,0);
  FUN_004465fc(param_1 + 0x194,0,*param_1,0x79,0,0);
  FUN_0043a4ec(param_1 + 0x1c0,0,*param_1,0x6f,0x400,0);
  FUN_0043a4ec((int *)((int)param_1 + 0x7b2),0,*param_1,0x66,0x400,0);
  FUN_0043a4ec(param_1 + 0x219,0,*param_1,0x69,0x400,0);
  FUN_0040124c(param_1 + 0x246,0,*param_1,0x102);
  FUN_0044788c(param_1 + 0x273,0,*param_1,0x67,0,0);
  FUN_004316d8((int *)((int)param_1 + 0xa7a),0,*param_1,0x70,0);
  FUN_004316d8((int *)((int)param_1 + 0xb26),0,*param_1,0x68,0);
  FUN_004316d8((int *)((int)param_1 + 0xbd2),0,*param_1,0x78,0);
  FUN_004316d8((int *)((int)param_1 + 0xc7e),0,*param_1,0x65,0);
  FUN_004316d8((int *)((int)param_1 + 0xd2a),0,*param_1,1,0);
  FUN_0040be50((int)(param_1 + 0x37c));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401b04  DMDialog::vf15   (217 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl DMDialog::vf15(int param_1)

{
  bool bVar1;
  uint local_408 [257];
  
  bVar1 = *(int *)(param_1 + 0x1c) != 2;
  if (bVar1) {
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe08,local_408);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe18,local_408);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe28,local_408);
    *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_1 + 0xdd8);
    *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_1 + 0xddc);
    FUN_0040c638(param_1 + 0xdf0);
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401be0  DMDialog::vf16   (200 bytes)   [rtti:vtable virtual slot 16]
uint __cdecl DMDialog::vf16(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  DWORD DVar3;
  undefined3 extraout_var;
  int iVar4;
  
  param_1[0x378] = param_1[0x378] + 1;
  if (param_1[0x378] < param_1[0x379]) {
    uVar2 = CONCAT31((int3)((uint)param_1[0x378] >> 8),1);
  }
  else {
    param_1[0x378] = 0;
    DVar3 = GetTickCount();
    if (DVar3 - param_1[0x37a] < 0x4c) {
      iVar4 = param_1[0x379];
      if (iVar4 < 0x3fffffff) {
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        param_1[0x379] = param_1[0x379] + (iVar4 >> 2);
      }
    }
    else if ((0x7c < DVar3 - param_1[0x37a]) && (iVar4 = param_1[0x379], 8 < iVar4)) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      param_1[0x379] = param_1[0x379] - (iVar4 >> 3);
    }
    param_1[0x37a] = DVar3;
    if (param_2 < 0) {
      iVar4 = param_1[0x37b];
      param_1[0x37b] = param_1[0x37b] + 1;
      param_2 = iVar4 % 0x65;
    }
    else {
      param_1[0x37b] = 0;
    }
    bVar1 = FUN_004031f4(param_1,param_2);
    uVar2 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401ca8  DMDialog::vf17   (154 bytes, 2 ranges)   [rtti:vtable virtual slot 17]
void __cdecl DMDialog::vf17(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00403258(param_1,(byte *)"Loading primary word list");
    break;
  case 1:
    FUN_00403258(param_1,(byte *)"Sorting primary word list");
    break;
  case 2:
    FUN_00403258(param_1,(byte *)"Loading secondary word list");
    break;
  case 3:
    FUN_00403258(param_1,(byte *)"Sorting secondary word list");
    break;
  case 4:
    FUN_00403258(param_1,(byte *)"Saving merged word list");
  }
  *(undefined4 *)(param_1 + 0xde4) = 8;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401d58  DMDialog::vf11   (4393 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DMDialog::vf11(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_790 [248];
  undefined4 local_698;
  int *local_688;
  undefined1 local_670 [248];
  int *local_578;
  int *local_568;
  undefined4 local_558;
  int *local_548;
  undefined1 local_530 [248];
  undefined4 local_438;
  int *local_428;
  undefined1 local_410 [248];
  undefined4 local_318;
  int *local_308;
  int *local_304;
  int *local_300;
  LPCSTR local_2fc;
  int *local_2f8;
  uint local_2f4;
  undefined1 local_2ed [41];
  uint local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  int *local_2ac;
  int *local_2a8;
  uint local_2a4;
  undefined1 *local_2a0;
  int *local_29c;
  int *local_298;
  uint local_294;
  int *local_290;
  undefined1 *local_28c;
  int *local_288;
  undefined4 local_284;
  uint *local_278;
  uint local_274;
  undefined1 *local_270;
  undefined4 local_26c;
  int *local_268;
  int *local_264;
  int *local_260;
  int *local_25c;
  int *local_258;
  uint local_254;
  undefined1 *local_250;
  int *local_24c;
  int *local_248;
  uint local_244;
  int *local_240;
  undefined1 *local_23c;
  int *local_238;
  undefined4 local_234;
  uint *local_228;
  int *local_224;
  undefined4 *local_220;
  uint local_21c;
  undefined1 *local_218;
  int *local_214;
  int *local_210;
  undefined1 *local_20c;
  int *local_208;
  uint local_204;
  undefined1 local_1fd [105];
  uint local_194;
  undefined1 *local_190;
  undefined4 local_18c;
  int *local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  uint local_174;
  undefined1 *local_170;
  int *local_16c;
  int *local_168;
  uint local_164;
  int *local_160;
  undefined1 *local_15c;
  int *local_158;
  undefined4 local_154;
  uint *local_148;
  uint local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  uint local_124;
  undefined1 *local_120;
  int *local_11c;
  int *local_118;
  uint local_114;
  int *local_110;
  undefined1 *local_10c;
  int *local_108;
  undefined4 local_104;
  uint *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int *local_bc;
  undefined1 local_b4 [8];
  int *local_ac;
  undefined **local_a4 [2];
  undefined1 local_9c [8];
  int *local_94;
  undefined **local_8c [2];
  undefined1 local_84 [8];
  int *local_7c;
  undefined1 local_74 [8];
  int *local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x461bd4);
  OWL::TDialog::vf11(param_1);
  param_1[0x378] = 0;
  param_1[0x379] = 8;
  DVar1 = GetTickCount();
  param_1[0x37a] = DVar1;
  param_1[0x37b] = 0;
  FUN_0040c154((int)(param_1 + 0x37c));
  local_d8 = 8;
  FUN_0040e050((int)local_24);
  local_cc = local_cc + 1;
  FUN_0044ce78(0x47689c,(int)local_24);
  local_cc = local_cc + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00401e5a;
    }
    local_ec = local_1c + -0xc;
    operator_delete();
    local_f0 = 0;
    local_f4 = local_24;
    local_1c = 0;
    local_318 = 0;
  }
LAB_00401e5a:
  if (*(int *)(DAT_004768a4 + -4) != 0) {
    uVar5 = *(int *)(DAT_004768a4 + -4) - 1;
    if ((*(uint *)&DAT_00471f90) - 0xe < uVar5) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00402ee0;
      uVar6 = 0;
      local_d8 = 0x2c;
      local_f8 = (uint *)FUN_00455640(local_410,PTR_s_invalid_string_size_parameter_in_00474068);
      std::string::string_from_cstr((int)local_64,local_f8);
      local_cc = local_cc + 2;
      local_3c[0] = &std::logic_error::vftable;
      local_104 = 0;
      local_2c = (int *)0x0;
      local_d8 = 0x38;
      if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
        local_114 = local_5c[-1];
        local_11c = std::string::__getRep(local_34,local_114,local_114);
        local_120 = local_34;
        local_428 = local_11c + 3;
        local_124 = local_114;
        local_128 = local_5c;
        local_12c = local_428;
        local_118 = local_428;
        local_2c = local_428;
        memcpy(local_428,local_5c,local_114);
      }
      else {
        local_10c = local_34;
        local_108 = local_5c;
        local_2c = local_5c;
        local_110 = local_5c + -3;
        if (local_110 != &DAT_00471d5c) {
          *local_110 = *local_110 + 1;
        }
      }
      local_d8 = 0x2c;
      local_3c[0] = &std::length_error::vftable;
      local_cc = local_cc + 2;
      if (local_5c != (int *)0x0) {
        if (local_5c[-3] != -1) {
          local_130 = local_5c + -3;
          if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_004020e8;
        }
        local_134 = local_5c + -3;
        local_138 = local_5c + -3;
        operator_delete();
        local_13c = 0;
        local_140 = local_64;
        local_5c = (int *)0x0;
        local_438 = 0;
      }
LAB_004020e8:
      local_d8 = 0x20;
      FUN_0045ed74((uint *)&DAT_00402e84,(undefined4*)local_3c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (uVar5 < *(uint *)(DAT_004768a4 + -4)) {
      local_144 = *(int *)(DAT_004768a4 + -4) - uVar5;
      if (*(uint *)(DAT_004768a4 + -4) < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00403038;
        uVar6 = 0;
        local_d8 = 0x5c;
        local_148 = (uint *)FUN_00455640(local_530,PTR_s_string_index_out_of_range_in_fun_00474074);
        std::string::string_from_cstr((int)local_74,local_148);
        local_cc = local_cc + 2;
        local_54[0] = &std::logic_error::vftable;
        local_154 = 0;
        local_44 = (int *)0x0;
        local_d8 = 0x68;
        if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
          local_164 = local_6c[-1];
          local_16c = std::string::__getRep(local_4c,local_164,local_164);
          local_170 = local_4c;
          local_548 = local_16c + 3;
          local_174 = local_164;
          local_178 = local_6c;
          local_17c = local_548;
          local_168 = local_548;
          local_44 = local_548;
          memcpy(local_548,local_6c,local_164);
        }
        else {
          local_15c = local_4c;
          local_158 = local_6c;
          local_44 = local_6c;
          local_160 = local_6c + -3;
          if (local_160 != &DAT_00471d5c) {
            *local_160 = *local_160 + 1;
          }
        }
        local_d8 = 0x5c;
        local_54[0] = &std::out_of_range::vftable;
        local_cc = local_cc + 2;
        if (local_6c != (int *)0x0) {
          if (local_6c[-3] != -1) {
            local_180 = local_6c + -3;
            if (local_180 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_180 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_180 = *local_180 + -1;
              iVar2 = *local_180 + 1;
            }
            if (iVar2 != 0) goto LAB_00402396;
          }
          local_184 = local_6c + -3;
          local_188 = local_6c + -3;
          operator_delete();
          local_18c = 0;
          local_190 = local_74;
          local_6c = (int *)0x0;
          local_558 = 0;
        }
LAB_00402396:
        local_d8 = 0x20;
        FUN_0045ed74((uint *)&DAT_00402fdc,(undefined4*)local_54,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
      }
      local_194 = *(int *)(DAT_004768a4 + -4) - uVar5;
      local_1fd[0] = 0;
      local_204 = local_194;
      if (local_144 < local_194) {
        local_204 = local_144;
      }
      FUN_0044d5c8(0x47689c,uVar5,local_204,(uint)local_1fd,0,0,0);
    }
    else {
      std::string::replace_fill(0x47689c,*(uint *)(DAT_004768a4 + -4),0,uVar5 - *(int *)(DAT_004768a4 + -4),0);
    }
    if ((undefined4 *)(DAT_004768a4 + -0xc) != &DAT_00471d5c) {
      *(undefined4 *)(DAT_004768a4 + -0xc) = 0;
    }
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)param_1[900],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(param_1[0x1c0] + 0xc),(LPCSTR)param_1[900]);
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)param_1[0x388],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x7b2) + 0xc),(LPCSTR)param_1[0x388]);
  }
  local_d8 = 0x98;
  local_c = (int *)0x0;
  if (*(int *)(param_1[0x38c] + -0xc) == -1 || *(int *)(param_1[0x38c] + -0xc) + 1 < 0) {
    uVar5 = *(uint *)(param_1[0x38c] + -4);
    local_214 = std::string::__getRep(local_14,uVar5,uVar5);
    local_218 = local_14;
    local_578 = local_214 + 3;
    local_220 = (undefined4 *)param_1[0x38c];
    local_224 = local_578;
    local_21c = uVar5;
    local_210 = local_578;
    local_c = local_578;
    memcpy(local_578,local_220,uVar5);
  }
  else {
    local_568 = (int *)param_1[0x38c];
    local_20c = local_14;
    piVar4 = local_568 + -3;
    local_208 = local_568;
    local_c = local_568;
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_cc = local_cc + 1;
  local_d8 = 0x8c;
  uVar5 = (*(uint *)&DAT_00471f90);
  if ((uint)local_c[-1] < (*(uint *)&DAT_00471f90)) {
    uVar5 = local_c[-1];
  }
  pcVar3 = FUN_00403134((char *)local_c,'\\',uVar5);
  uVar5 = (*(uint *)&DAT_00471f90);
  if (pcVar3 != (char *)0x0) {
    uVar5 = (int)pcVar3 - (int)local_c;
  }
  if (uVar5 != (*(uint *)&DAT_00471f90)) {
    if ((*(uint *)&DAT_00471f90) - 0xe < uVar5) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00402ee0;
      uVar6 = 0;
      local_d8 = 0xbc;
      local_228 = (uint *)FUN_00455640(local_670,PTR_s_invalid_string_size_parameter_in_00474068);
      std::string::string_from_cstr((int)local_b4,local_228);
      local_cc = local_cc + 2;
      local_8c[0] = &std::logic_error::vftable;
      local_234 = 0;
      local_7c = (int *)0x0;
      local_d8 = 200;
      if (local_ac[-3] == -1 || local_ac[-3] + 1 < 0) {
        local_244 = local_ac[-1];
        local_24c = std::string::__getRep(local_84,local_244,local_244);
        local_250 = local_84;
        local_688 = local_24c + 3;
        local_254 = local_244;
        local_258 = local_ac;
        local_25c = local_688;
        local_248 = local_688;
        local_7c = local_688;
        memcpy(local_688,local_ac,local_244);
      }
      else {
        local_23c = local_84;
        local_238 = local_ac;
        local_7c = local_ac;
        local_240 = local_ac + -3;
        if (local_240 != &DAT_00471d5c) {
          *local_240 = *local_240 + 1;
        }
      }
      local_d8 = 0xbc;
      local_8c[0] = &std::length_error::vftable;
      local_cc = local_cc + 2;
      if (local_ac != (int *)0x0) {
        if (local_ac[-3] != -1) {
          local_260 = local_ac + -3;
          if (local_260 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_260 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_260 = *local_260 + -1;
            iVar2 = *local_260 + 1;
          }
          if (iVar2 != 0) goto LAB_0040286d;
        }
        local_264 = local_ac + -3;
        local_268 = local_ac + -3;
        operator_delete();
        local_26c = 0;
        local_270 = local_b4;
        local_ac = (int *)0x0;
        local_698 = 0;
      }
LAB_0040286d:
      local_d8 = 0xb0;
      FUN_0045ed74((uint *)&DAT_00402e84,(undefined4*)local_8c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (uVar5 < (uint)local_c[-1]) {
      local_274 = local_c[-1] - uVar5;
      if ((uint)local_c[-1] < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00403038;
        uVar6 = 0;
        local_d8 = 0xec;
        local_278 = (uint *)FUN_00455640(local_790,PTR_s_string_index_out_of_range_in_fun_00474074);
        std::string::string_from_cstr((int)local_c4,local_278);
        local_cc = local_cc + 2;
        local_a4[0] = &std::logic_error::vftable;
        local_284 = 0;
        local_94 = (int *)0x0;
        local_d8 = 0xf8;
        if (local_bc[-3] == -1 || local_bc[-3] + 1 < 0) {
          local_294 = local_bc[-1];
          local_29c = std::string::__getRep(local_9c,local_294,local_294);
          local_2a0 = local_9c;
          local_2ac = local_29c + 3;
          local_2a4 = local_294;
          local_2a8 = local_bc;
          local_298 = local_2ac;
          local_94 = local_2ac;
          memcpy(local_2ac,local_bc,local_294);
        }
        else {
          local_28c = local_9c;
          local_288 = local_bc;
          local_94 = local_bc;
          local_290 = local_bc + -3;
          if (local_290 != &DAT_00471d5c) {
            *local_290 = *local_290 + 1;
          }
        }
        local_d8 = 0xec;
        local_a4[0] = &std::out_of_range::vftable;
        local_cc = local_cc + 2;
        if (local_bc != (int *)0x0) {
          if (local_bc[-3] != -1) {
            local_2b0 = local_bc + -3;
            if (local_2b0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2b0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2b0 = *local_2b0 + -1;
              iVar2 = *local_2b0 + 1;
            }
            if (iVar2 != 0) goto LAB_00402b57;
          }
          local_2b4 = local_bc + -3;
          local_2b8 = local_bc + -3;
          operator_delete();
          local_2bc = 0;
          local_2c0 = local_c4;
          local_bc = (int *)0x0;
        }
LAB_00402b57:
        local_d8 = 0xb0;
        FUN_0045ed74((uint *)&DAT_00402fdc,(undefined4*)local_a4,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
      }
      local_2c4 = local_c[-1] - uVar5;
      local_2ed[0] = 0;
      local_2f4 = local_2c4;
      if (local_274 < local_2c4) {
        local_2f4 = local_274;
      }
      FUN_0044d5c8((int)local_14,uVar5,local_2f4,(uint)local_2ed,0,0,0);
    }
    else {
      std::string::replace_fill((int)local_14,local_c[-1],0,uVar5 - local_c[-1],0);
    }
    local_2f8 = local_c + -3;
    if (local_2f8 != &DAT_00471d5c) {
      *local_2f8 = 0;
    }
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)local_c,0);
  if (iVar2 == 0) {
    local_2fc = (LPCSTR)param_1[0x38c];
    SetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_2fc);
  }
  param_1[0x376] = param_1[0x380];
  FUN_004321c4(param_1 + 8,(uint)(param_1[0x376] == 0));
  FUN_004321c4(param_1 + 0x34,(uint)(param_1[0x376] == 2));
  FUN_004321c4(param_1 + 0x60,(uint)(param_1[0x376] == 1));
  FUN_004321c4(param_1 + 0x8c,(uint)(param_1[0x376] == 3));
  FUN_004321c4(param_1 + 0xb8,(uint)(param_1[0x376] == 4));
  param_1[0x377] = param_1[0x381];
  FUN_004321c4(param_1 + 0xe4,(uint)(param_1[0x377] == 0));
  FUN_004321c4(param_1 + 0x110,(uint)(param_1[0x377] == 1));
  FUN_004321c4(param_1 + 0x13c,(uint)(param_1[0x377] == 2));
  FUN_004321c4(param_1 + 0x168,(uint)(param_1[0x377] == 3));
  FUN_004321c4(param_1 + 0x194,(uint)(param_1[0x377] == 4));
  FUN_00403920((int)param_1);
  local_cc = local_cc + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_300 = local_c + -3;
      if (local_300 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (local_300 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *local_300 = *local_300 + -1;
        iVar2 = *local_300 + 1;
      }
      if (iVar2 != 0) goto LAB_00402e65;
    }
    local_304 = local_c + -3;
    local_308 = local_c + -3;
    operator_delete();
  }
LAB_00402e65:
  *in_FS_OFFSET = local_e8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403134  FUN_00403134   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_00403134(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (param_2 == *pcVar1) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031e4  DMDialog::EvClose   (15 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_CLOSE
void __cdecl DMDialog::EvClose(int *param_1)

{
  EvClose_4351b0(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031f4  FUN_004031f4   (97 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004031f4(int *param_1,int param_2)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    BVar1 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),&local_20);
    if (BVar1 == 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  FUN_00401490(param_1 + 0x246,param_2);
  return param_1[7] == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403258  FUN_00403258   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403258(int param_1,byte *param_2)

{
  CHAR local_404 [1024];
  
  FUN_00457ef4(local_404,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x9cc) + 0xc),local_404);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403298  DMDialog::Cmd101   (653 bytes, 2 ranges)   [owl:response-table message-handler]
//   EV_COMMAND(101)
void DMDialog::Cmd101(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 local_1010 [12];
  undefined4 uStack_1004;
  CHAR local_c10;
  char local_c0f [1027];
  CHAR local_80c;
  char local_80b [1027];
  CHAR local_408;
  char local_407 [1027];
  
  if (param_4[7] == 1) {
    uStack_1004 = param_1;
    GetWindowTextA(*(HWND *)(param_4[0x1c0] + 0xc),&local_408,0x401);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_4 + 0x7b2) + 0xc),&local_80c,0x401);
    GetWindowTextA(*(HWND *)(param_4[0x219] + 0xc),&local_c10,0x401);
    pcVar2 = &local_408;
    pcVar4 = &local_c10;
    do {
      bVar5 = *pcVar2 == *pcVar4;
      if (!bVar5) break;
      if (*pcVar2 == '\0') goto LAB_00403359;
      pcVar1 = pcVar2 + 1;
      bVar5 = *pcVar1 == pcVar4[1];
      if (!bVar5) break;
      pcVar2 = pcVar2 + 2;
      pcVar4 = pcVar4 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (!bVar5) {
      pcVar2 = &local_80c;
      pcVar4 = &local_c10;
      do {
        if (*pcVar2 != *pcVar4) goto LAB_0040337d;
        bVar5 = true;
        if (*pcVar2 == '\0') break;
        pcVar1 = pcVar2 + 1;
        if (*pcVar1 != pcVar4[1]) goto LAB_0040337d;
        pcVar2 = pcVar2 + 2;
        pcVar4 = pcVar4 + 2;
        bVar5 = *pcVar1 == '\0';
      } while (!bVar5);
      if (!bVar5) {
LAB_0040337d:
        iVar3 = thunk_FUN_00456df4(&local_c10,0);
        if (iVar3 == 0) {
          FUN_00457ef4(local_1010,(byte *)"A file named\n\n  %s\n\nalready exists.\n\nAre you sure you want to overwrite this_\?\n");
          iVar3 = (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
          if (iVar3 != 6) {
            return;
          }
        }
        FUN_0040402c((int)param_4);
        param_4[7] = 2;
        FUN_0042d27c(*(int *)((int)param_4 + 0xc7e),(uint *)"S&top");
        iVar3 = FUN_004088f4(param_4 + 6,&local_408,&local_80c,param_4[0x376],param_4[0x377],
                             &local_c10);
        switch(iVar3) {
        case 0:
          FUN_00403258((int)param_4,(byte *)"Merging completed successfully");
          break;
        case 1:
          FUN_00403258((int)param_4,(byte *)"Merging abandoned");
          break;
        case 2:
          FUN_00403258((int)param_4,(byte *)"Primary list couldn't be loaded");
          break;
        case 3:
          FUN_00403258((int)param_4,(byte *)"Secondary list couldn't be loaded");
          break;
        case 4:
          FUN_00403258((int)param_4,(byte *)"Insufficient disk space to save output list");
          break;
        case 5:
          FUN_00403258((int)param_4,(byte *)"Insufficient resources to do merge");
        }
        (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
        FUN_0040402c((int)param_4);
        FUN_00403920((int)param_4);
        FUN_0042d27c(*(int *)((int)param_4 + 0xc7e),(uint *)&DAT_00461324 /* "S&tart" */);
        return;
      }
    }
LAB_00403359:
    (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
  }
  else if (param_4[7] == 2) {
    param_4[7] = 3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403540  DMDialog::Cmd106   (344 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(106)
void __cdecl DMDialog::Cmd106(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x461d28);
  std::string::string_from_cstr((int)local_24,(uint *)"tsmerge.chm");
  FUN_0040e368((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004035fb;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_004035fb:
  FUN_0040eb8c(*(HWND *)(*param_1 + 0xc));
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00403687;
    }
    operator_delete();
  }
LAB_00403687:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403698  DMDialog::Cmd122   (121 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(122)
void __cdecl DMDialog::Cmd122(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d8;
  int local_b4 [44];
  
  __InitExceptBlockLDTC(0x461d70);
  piVar1 = FUN_00434494(local_b4,0,*param_1,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  OWL::TDialog::_dtor(local_b4,2);
  *in_FS_OFFSET = local_d8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403784  DMDialog::CmShared_403784   (412 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   one handler for 10 table entries: id 108; id 114; id 115; id 110; id 109; id 116; id 117; id 118; id 119; id 121
//   also: DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]
void __cdecl DMDialog::CmShared_403784(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x20),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0xd0),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x180),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x230),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x2e0),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xdd8) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xdd8) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xdd8) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xdd8) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdd8) = 0;
  }
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x390),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x440),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x4f0),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x5a0),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x650),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xddc) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xddc) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xddc) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xddc) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xddc) = 0;
  }
  FUN_00403920(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403920  FUN_00403920   (245 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403920(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x20),0xf0,0,0);
  if (iVar1 == 1) {
    SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc),&DAT_0046132a);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc));
    if ((0 < iVar1) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc));
    if (((0 < iVar1) &&
        (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc)), 0 < iVar1)) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc7e) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403a18  FUN_00403a18   (733 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403a18(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_170;
  undefined1 local_14c [8];
  int local_144;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  uint *local_24;
  undefined4 local_14;
  
  __InitExceptBlockLDTC(0x461dd4);
  FUN_004459e8(local_2c,0x180c,(uint *)"Word list file (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x46170c,0,0,
               0);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (iVar2 < 1) {
    local_14 = (*(undefined4 *)&DAT_004768a4);
  }
  else {
    GetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPSTR)local_24,0x104);
  }
  piVar3 = FUN_00445ea8(&local_13c,0,*param_1,(int)local_2c,0,param_3,0);
  iVar2 = (**(code **)(piVar3[3] + 0x14))();
  cVar6 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_bc,0);
  if (cVar6 != '\0') {
    uVar4 = FUN_0040e7b8((LPCSTR)local_24);
    if ((char)uVar4 == '\0') {
      std::string::string_from_cstr((int)local_14c,local_24);
      uVar1 = *(uint *)(local_144 + -4);
      pcVar5 = strlen((uint *)" doesn't seem to be an ANSI text file");
      FUN_0044d5c8((int)local_14c,uVar1,0,0x461710,(uint)pcVar5,0,(uint)pcVar5);
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (local_144 != 0) {
        if (*(int *)(local_144 + -0xc) != -1) {
          piVar3 = (int *)(local_144 + -0xc);
          if (piVar3 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (piVar3 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar2 = *piVar3 + 1;
          }
          if (iVar2 != 0) goto LAB_00403ccd;
        }
        operator_delete();
        local_144 = 0;
      }
    }
    else {
      SetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPCSTR)local_24);
      FUN_00403920((int)param_1);
    }
  }
LAB_00403ccd:
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_170;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403dd4  DMDialog::Cmd112   (29 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND(112)
void __cdecl DMDialog::Cmd112(int *param_1)

{
  FUN_00403a18(param_1,param_1 + 0x1c0,0x461743);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403df4  DMDialog::Cmd104   (29 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(104)
void __cdecl DMDialog::Cmd104(int *param_1)

{
  FUN_00403a18(param_1,(int *)((int)param_1 + 0x7b2),0x46175b);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403e14  DMDialog::Cmd120   (401 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(120)
void __cdecl DMDialog::Cmd120(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_160;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPSTR local_24;
  undefined4 local_14;
  
  __InitExceptBlockLDTC(0x461e54);
  FUN_004459e8(local_2c,0x80c,(uint *)"Word list file (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x46170c,0,0,0
              );
  iVar1 = GetWindowTextLengthA(*(HWND *)(param_1[0x219] + 0xc));
  if (iVar1 < 1) {
    local_14 = (*(undefined4 *)&DAT_004768a4);
  }
  else {
    GetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_24,0x104);
  }
  piVar2 = FUN_00446060(&local_13c,0,*param_1,(int)local_2c,0,0x461775,0);
  iVar1 = (**(code **)(piVar2[3] + 0x14))();
  cVar3 = iVar1 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_bc,0);
  if (cVar3 != '\0') {
    SetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_24);
    FUN_00403920((int)param_1);
  }
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_160;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040402c  FUN_0040402c   (250 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040402c(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa7a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xb26) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xbd2) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xd2a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xd0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x180) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x230) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x2e0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x390) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x440) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x4f0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5a0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x650) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404aa8  DMDialog::~DMDialog   (1464 bytes)   [rtti:dtor destructor]
//   written in code as DMDialog::_dtor
void __cdecl DMDialog::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x462238);
  if (param_1 != (int *)0x0) {
    TSMergeProfile::_dtor((int)(param_1 + 0x37c),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0xd2a),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0xc7e),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0xbd2),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0xb26),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0xa7a),2);
    piVar1 = param_1 + 0x273;
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x27d,0);
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x27b,0);
    DMProgressBar::_dtor(param_1 + 0x246,2);
    OWL::TEdit::_dtor(param_1 + 0x219,2);
    OWL::TEdit::_dtor((int *)((int)param_1 + 0x7b2),2);
    OWL::TEdit::_dtor(param_1 + 0x1c0,2);
    OWL::TCheckBox::_dtor(param_1 + 0x194,0);
    *(int *)(param_1[0x195] + -4) = *(int *)(param_1[0x195] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x67a),0);
    *(int *)(param_1[0x195] + -4) = *(int *)(param_1[0x195] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x672),0);
    OWL::TCheckBox::_dtor(param_1 + 0x168,0);
    *(int *)(param_1[0x169] + -4) = *(int *)(param_1[0x169] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x5ca),0);
    *(int *)(param_1[0x169] + -4) = *(int *)(param_1[0x169] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x5c2),0);
    OWL::TCheckBox::_dtor(param_1 + 0x13c,0);
    *(int *)(param_1[0x13d] + -4) = *(int *)(param_1[0x13d] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x51a),0);
    *(int *)(param_1[0x13d] + -4) = *(int *)(param_1[0x13d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x512),0);
    OWL::TCheckBox::_dtor(param_1 + 0x110,0);
    *(int *)(param_1[0x111] + -4) = *(int *)(param_1[0x111] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x46a),0);
    *(int *)(param_1[0x111] + -4) = *(int *)(param_1[0x111] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x462),0);
    OWL::TCheckBox::_dtor(param_1 + 0xe4,0);
    *(int *)(param_1[0xe5] + -4) = *(int *)(param_1[0xe5] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x3ba),0);
    *(int *)(param_1[0xe5] + -4) = *(int *)(param_1[0xe5] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x3b2),0);
    OWL::TCheckBox::_dtor(param_1 + 0xb8,0);
    *(int *)(param_1[0xb9] + -4) = *(int *)(param_1[0xb9] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x30a),0);
    *(int *)(param_1[0xb9] + -4) = *(int *)(param_1[0xb9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x302),0);
    OWL::TCheckBox::_dtor(param_1 + 0x8c,0);
    *(int *)(param_1[0x8d] + -4) = *(int *)(param_1[0x8d] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x25a),0);
    *(int *)(param_1[0x8d] + -4) = *(int *)(param_1[0x8d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x252),0);
    OWL::TCheckBox::_dtor(param_1 + 0x60,0);
    *(int *)(param_1[0x61] + -4) = *(int *)(param_1[0x61] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x1aa),0);
    *(int *)(param_1[0x61] + -4) = *(int *)(param_1[0x61] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x1a2),0);
    OWL::TCheckBox::_dtor(param_1 + 0x34,0);
    *(int *)(param_1[0x35] + -4) = *(int *)(param_1[0x35] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0xfa),0);
    *(int *)(param_1[0x35] + -4) = *(int *)(param_1[0x35] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0xf2),0);
    OWL::TCheckBox::_dtor(param_1 + 8,0);
    *(int *)(param_1[9] + -4) = *(int *)(param_1[9] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x4a),0);
    *(int *)(param_1[9] + -4) = *(int *)(param_1[9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x42),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe20;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe20;
    OWL::TDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe20;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe20;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x392,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x390,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405060  OWL::TWindow::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040506c  OWL::TWindow::vf24   (33 bytes)   [rtti:vtable virtual slot 24]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::vf24(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = EnableWindow(*(HWND *)(param_1 + 0xc),(uint)param_2);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405090  OWL::TWindow::vf26   (25 bytes)   [rtti:vtable virtual slot 26]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf26(int param_1,byte param_2)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),(RECT *)0x0,(uint)param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050ac  OWL::TWindow::vf27   (27 bytes)   [rtti:vtable virtual slot 27]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf27(int param_1,RECT *param_2,byte param_3)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004052c4  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040533f;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0040533f:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004055b0  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x462240);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405768  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x462248);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040587c  OWL::TRadioButton::~TRadioButton   (137 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRadioButton::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRadioButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x462250);
  if (param_1 != (int *)0x0) {
    OWL::TCheckBox::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x2a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x22),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405984  FUN_00405984   (215 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00405984(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar2 = *(byte **)(param_2 + 8);
  while( true ) {
    while ((pbVar1 != (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar1] == '\0'))) {
      pbVar1 = pbVar1 + 1;
    }
    while ((pbVar2 != (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar2] == '\0'))) {
      pbVar2 = pbVar2 + 1;
    }
    if ((pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) ||
       (pbVar2 == (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)))) break;
    if ((&DAT_004631a0)[*pbVar1] != (&DAT_004631a0)[*pbVar2]) {
      return (int)(char)(&DAT_004631a0)[*pbVar2] - (int)(char)(&DAT_004631a0)[*pbVar1];
    }
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if ((pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) &&
     (pbVar2 == (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)))) {
    return 0;
  }
  if (pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) {
    return 1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405a5c  FUN_00405a5c   (1050 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00405a5c(undefined4 *param_1,LPCSTR param_2,int param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  uint local_4f8 [251];
  undefined1 *local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  uint local_f4;
  int local_f0;
  int *local_ec;
  int *local_e8;
  uint local_e4;
  int *local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_c4;
  undefined2 local_b4;
  int local_a8;
  int local_a0;
  undefined1 local_9c [8];
  int local_94;
  int local_8c [34];
  
  __InitExceptBlockLDTC(0x462298);
  *param_4 = '\x01';
  local_b4 = 8;
  FUN_0044ecfc(local_8c,0,param_2,4,0x1b6);
  local_a8 = local_a8 + 8;
  local_b4 = 0x14;
  if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
    iVar5 = 0;
    while (piVar4 = FUN_004514ac(local_8c,(undefined1 *)local_4f8,0x3e9,'\n'),
          (*(byte *)(*piVar4 + 0x30) & 5) == 0) {
      local_b4 = 0x20;
      iVar3 = std::string::string_from_cstr((int)local_9c,local_4f8);
      local_a8 = local_a8 + 1;
      if (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x18)) {
        FUN_004064c4(param_3,*(int *)(param_3 + 8),iVar3);
      }
      else {
        local_d0 = *(int *)(param_3 + 8);
        local_a0 = local_d0;
        if (local_d0 != 0) {
          local_b4 = 0x2c;
          local_d4 = 0;
          *(undefined4 *)(local_d0 + 8) = 0;
          iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
          if (iVar1 == -1 || iVar1 + 1 < 0) {
            local_e4 = *(uint *)(*(int *)(iVar3 + 8) + -4);
            local_ec = std::string::__getRep(local_d0,local_e4,local_e4);
            local_e8 = local_ec + 3;
            *(int **)(local_a0 + 8) = local_e8;
            local_f0 = local_a0;
            local_f4 = local_e4;
            local_f8 = *(undefined4 **)(iVar3 + 8);
            local_fc = *(undefined4 **)(local_a0 + 8);
            memcpy(local_fc,local_f8,local_e4);
          }
          else {
            local_d8 = *(undefined4 *)(iVar3 + 8);
            *(undefined4 *)(local_d0 + 8) = local_d8;
            local_e0 = (int *)(*(int *)(local_d0 + 8) + -0xc);
            local_dc = local_d0;
            if (local_e0 != &DAT_00471d5c) {
              *local_e0 = *local_e0 + 1;
            }
          }
          local_b4 = 0x20;
        }
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 0x10;
      }
      local_a8 = local_a8 + -1;
      if (local_94 != 0) {
        if (*(int *)(local_94 + -0xc) != -1) {
          piVar4 = (int *)(local_94 + -0xc);
          if (piVar4 == &DAT_00471d5c) {
            iVar3 = 1;
          }
          else if (piVar4 == &DAT_00471d5c) {
            iVar3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar3 = *piVar4 + 1;
          }
          if (iVar3 != 0) goto LAB_00405d50;
        }
        local_100 = local_94 + -0xc;
        local_104 = local_94 + -0xc;
        operator_delete();
        local_108 = 0;
        local_10c = local_9c;
        local_94 = 0;
      }
LAB_00405d50:
      local_b4 = 0x14;
      if (((*param_4 != '\0') && (0 < iVar5)) &&
         (iVar3 = FUN_00405984((iVar5 + -1) * 0x10 + *(int *)(param_3 + 4),
                               iVar5 * 0x10 + *(int *)(param_3 + 4)), iVar3 < 0)) {
        *param_4 = '\0';
      }
      cVar2 = (**(code **)*param_1)();
      if (cVar2 == '\0') {
        iVar5 = -3;
        local_a8 = local_a8 + -8;
        std::basic_ifstream_char::_dtor(local_8c,2);
        *in_FS_OFFSET = local_c4;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    }
    if ((*(byte *)(local_8c[0] + 0x30) & 2) == 0) {
      iVar5 = -2;
      local_a8 = local_a8 + -8;
      std::basic_ifstream_char::_dtor(local_8c,2);
      *in_FS_OFFSET = local_c4;
    }
    else {
      local_a8 = local_a8 + -8;
      std::basic_ifstream_char::_dtor(local_8c,2);
      *in_FS_OFFSET = local_c4;
    }
  }
  else {
    iVar5 = -1;
    std::basic_ifstream_char::_dtor(local_8c,2);
    *in_FS_OFFSET = local_c4;
  }
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405e78  FUN_00405e78   (206 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00405e78(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4622f8);
  puVar4 = &LAB_00408844;
  iVar1 = FUN_0040b8c4((int)local_14,param_1,param_2);
  piVar2 = FUN_00406b48(iVar1,local_14,param_3,(int *)param_3,(int)local_14);
  uVar3 = FUN_004516b8(piVar2,puVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00405f34;
    }
    operator_delete();
  }
LAB_00405f34:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405f48  FUN_00405f48   (1225 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00405f48(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,LPCSTR param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  int local_d8;
  int local_cc;
  int local_c0;
  int local_bc;
  undefined4 local_ac;
  int local_88 [33];
  
  __InitExceptBlockLDTC(0x462338);
  FUN_0044f3d0(local_88,0,param_6,8,0x1b6);
  if ((*(byte *)(local_88[0] + 0x30) & 5) == 0) {
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_3 + 4);
    do {
      if ((iVar4 == *(int *)(param_2 + 8)) && (iVar5 == *(int *)(param_3 + 8))) {
        FUN_00452de4(local_88);
        if ((*(byte *)(local_88[0] + 0x30) & 5) != 0) {
          uVar6 = 4;
          std::basic_ofstream_char::_dtor(local_88,2);
          *in_FS_OFFSET = local_ac;
          return uVar6;
        }
        uVar6 = 0;
        std::basic_ofstream_char::_dtor(local_88,2);
        *in_FS_OFFSET = local_ac;
        return uVar6;
      }
      if (*(int *)(param_2 + 8) == iVar4) {
        iVar2 = -1;
      }
      else if (iVar5 == *(int *)(param_3 + 8)) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_00405984(iVar4,iVar5);
      }
      if (iVar2 == 0) {
        local_bc = iVar4;
        if ((param_4 == 1) || (param_4 == 2)) {
          piVar3 = (int *)FUN_00405e78(iVar4,param_5,local_88);
          if (piVar3 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar3;
          }
          if ((*(byte *)(iVar2 + 0x30) & 5) != 0) {
            uVar6 = 4;
            std::basic_ofstream_char::_dtor(local_88,2);
            *in_FS_OFFSET = local_ac;
            return uVar6;
          }
        }
        do {
          local_cc = local_bc + 0x10;
          local_c0 = iVar5;
          if (*(int *)(param_2 + 8) == local_cc) break;
          iVar2 = FUN_00405984(iVar4,local_cc);
          local_bc = local_cc;
        } while (iVar2 == 0);
        do {
          local_d8 = local_c0 + 0x10;
          if (*(int *)(param_3 + 8) == local_d8) break;
          iVar4 = FUN_00405984(iVar5,local_d8);
          local_c0 = local_d8;
        } while (iVar4 == 0);
      }
      else {
        local_cc = iVar4;
        local_d8 = iVar5;
        if (iVar2 < 1) {
          if ((param_4 == 2) || (param_4 == 4)) {
            piVar3 = (int *)FUN_00405e78(iVar5,param_5,local_88);
            if (piVar3 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *piVar3;
            }
            if ((*(byte *)(iVar4 + 0x30) & 5) != 0) {
              uVar6 = 4;
              std::basic_ofstream_char::_dtor(local_88,2);
              *in_FS_OFFSET = local_ac;
              return uVar6;
            }
          }
          do {
            local_d8 = local_d8 + 0x10;
            if (*(int *)(param_3 + 8) == local_d8) break;
            iVar4 = FUN_00405984(iVar5,local_d8);
          } while (iVar4 == 0);
        }
        else {
          if ((param_4 == 2) || (param_4 == 3)) {
            piVar3 = (int *)FUN_00405e78(iVar4,param_5,local_88);
            if (piVar3 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar3;
            }
            if ((*(byte *)(iVar5 + 0x30) & 5) != 0) {
              uVar6 = 4;
              std::basic_ofstream_char::_dtor(local_88,2);
              *in_FS_OFFSET = local_ac;
              return uVar6;
            }
          }
          do {
            local_cc = local_cc + 0x10;
            if (*(int *)(param_2 + 8) == local_cc) break;
            iVar5 = FUN_00405984(iVar4,local_cc);
          } while (iVar5 == 0);
        }
      }
      FUN_0045b4bc();
      cVar1 = (**(code **)*param_1)();
      iVar4 = local_cc;
      iVar5 = local_d8;
    } while (cVar1 != '\0');
    uVar6 = 1;
    std::basic_ofstream_char::_dtor(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  else {
    uVar6 = 4;
    std::basic_ofstream_char::_dtor(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x004064c4  FUN_004064c4   (893 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004064c4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4623bc);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = (iVar3 >> 4) * 2;
    }
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_0045ed74((uint *)&DAT_00406864,(undefined4*)&local_c,0,&LAB_004068bc,1,0,0,0);
    }
    FUN_0040692c(*(int *)(param_1 + 4),param_2,iVar4);
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = (iVar5 >> 4) * 0x10 + iVar4;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar6 = std::string::__getRep(iVar5,uVar1,uVar1);
        *(int **)(iVar5 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(iVar5 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 8);
        piVar6 = (int *)(*(int *)(iVar5 + 8) + -0xc);
        if (piVar6 != &DAT_00471d5c) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040692c(param_2,*(int *)(param_1 + 8),(iVar5 >> 4) * 0x10 + iVar4 + 0x10);
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_00406a90(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(int *)(param_1 + 0x18) = iVar3 * 0x10 + iVar4;
    *(int *)(param_1 + 8) = (iVar5 >> 4) * 0x10 + iVar4 + 0x10;
    *(int *)(param_1 + 4) = iVar4;
  }
  else {
    local_8 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar3 + -8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar3 + -8) + -4);
        piVar6 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(local_8 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(local_8 + 8),*(undefined4 **)(iVar3 + -8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + -8);
        piVar6 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar6 != &DAT_00471d5c) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    FUN_004068fc(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
    FUN_0044ce78(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068fc  FUN_004068fc   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004068fc(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_0044ce78(param_3,param_2);
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040692c  FUN_0040692c   (293 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040692c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x462454);
  while (iVar4 = param_3, iVar3 = param_1, iVar3 != param_2) {
    param_3 = iVar4 + 0x10;
    param_1 = iVar3 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = std::string::__getRep(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00471d5c) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a78  FUN_00406a78   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406a78(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a90  FUN_00406a90   (182 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406a90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46248c);
joined_r0x00406aa9:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x00406acc;
  goto LAB_00406af9;
code_r0x00406acc:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_00471d5c) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_00471d5c) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_00406af9:
    operator_delete();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x00406aa9;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406b48  FUN_00406b48   (5595 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * FUN_00406b48(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_13c8 [248];
  undefined4 local_12d0;
  undefined1 local_12c8 [248];
  undefined4 local_11d0;
  undefined1 local_11c8 [452];
  undefined4 uStack_1004;
  undefined4 local_dd0;
  undefined1 local_dc8 [248];
  undefined4 local_cd0;
  undefined1 local_cc8 [248];
  undefined4 local_bd0;
  undefined1 local_bc8 [248];
  undefined4 local_ad0;
  undefined1 local_ac8 [248];
  undefined4 local_9d0;
  undefined1 local_9c8 [248];
  undefined4 local_8d0;
  undefined1 local_8c8 [248];
  undefined4 local_7d0;
  undefined1 local_7c8 [248];
  undefined4 local_6d0;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  undefined1 local_5c8 [252];
  undefined1 *local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  int *local_4bc;
  uint *local_4b0;
  undefined1 *local_4ac;
  undefined4 local_4a8;
  int local_4a4;
  int local_4a0;
  int *local_49c;
  uint *local_490;
  undefined1 *local_48c;
  undefined4 local_488;
  int local_484;
  int local_480;
  int *local_47c;
  uint *local_470;
  uint local_46c;
  uint local_468;
  int local_464;
  uint local_460;
  undefined1 *local_3ec;
  undefined4 local_3e8;
  int local_3e4;
  int local_3e0;
  int *local_3dc;
  uint *local_3d0;
  undefined1 *local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  int local_3c0;
  int *local_3bc;
  uint *local_3b0;
  undefined1 *local_3ac;
  undefined4 local_3a8;
  int local_3a4;
  int local_3a0;
  uint *local_394;
  uint local_390;
  undefined1 *local_38c;
  undefined4 local_388;
  int local_384;
  int local_380;
  int *local_37c;
  uint *local_370;
  undefined1 *local_36c;
  undefined4 local_368;
  int local_364;
  int local_360;
  int *local_35c;
  uint *local_350;
  undefined1 *local_34c;
  undefined4 local_348;
  int local_344;
  int local_340;
  uint *local_334;
  uint local_330;
  byte local_329;
  uint local_328;
  undefined4 local_324;
  int local_320;
  byte local_319;
  uint local_318;
  byte local_311;
  uint local_310;
  int local_30c;
  undefined1 *local_308;
  undefined4 local_304;
  int local_300;
  int local_2fc;
  int *local_2f8;
  uint *local_2ec;
  undefined1 *local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  int local_2dc;
  int *local_2d8;
  uint *local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  int local_2bc;
  int *local_2b8;
  uint *local_2ac;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_2a0;
  undefined2 local_290;
  int local_284;
  undefined1 local_27c [8];
  int local_274;
  undefined1 local_26c [8];
  int local_264;
  undefined1 local_25c [8];
  int local_254;
  undefined4 local_24c [6];
  undefined4 local_234 [6];
  undefined4 local_21c [36];
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
  undefined4 local_12c [6];
  undefined4 local_114 [6];
  undefined4 local_fc [6];
  undefined4 local_e4 [6];
  undefined4 local_cc [6];
  undefined4 local_b4 [6];
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined4 local_6c [6];
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  int *local_24;
  char local_20;
  
  uStack_1004 = param_1;
  __InitExceptBlockLDTC(0x462764);
  local_2a4 = 0;
  local_290 = 0x14;
  local_24 = param_4;
  if (*(int *)(*param_4 + 0x28) != 0) {
    FUN_0044f200(*(int **)(*param_4 + 0x28));
  }
  if (DAT_00473200 != '\0') {
    if (param_4 == (int *)&DAT_004774f8) {
      FUN_004577dc((int *)&DAT_004746a0);
    }
    if (param_4 == &DAT_00477538) {
      FUN_004577dc((int *)&DAT_004746b8);
    }
  }
  if ((*(int *)(*param_4 + 0x24) != 0) && ((*(byte *)(*(int *)(*param_4 + 0x24) + 4) & 1) != 0)) {
    (**(code **)(**(int **)(*param_4 + 0x24) + 0xc))();
  }
  local_20 = *(int *)(*param_4 + 0x30) == 0;
  if (!(bool)local_20) {
    iVar3 = *param_4;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_2a8 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x20;
        local_2ac = (uint *)FUN_00455640(local_5c8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)local_7c,local_2ac);
        local_284 = local_284 + 1;
        FUN_0045336c(local_3c,iVar2);
        local_284 = local_284 + 2;
        if (local_74 != 0) {
          if (*(int *)(local_74 + -0xc) != -1) {
            local_2b8 = (int *)(local_74 + -0xc);
            if (local_2b8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2b8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2b8 = *local_2b8 + -1;
              iVar2 = *local_2b8 + 1;
            }
            if (iVar2 != 0) goto LAB_00406d85;
          }
          local_2bc = local_74 + -0xc;
          local_2c0 = local_74 + -0xc;
          operator_delete();
          local_2c4 = 0;
          local_2c8 = local_7c;
          local_74 = 0;
          local_5d0 = 0;
        }
LAB_00406d85:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_3c,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x38;
        local_2cc = (uint *)FUN_00455640(local_6c8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)local_8c,local_2cc);
        local_284 = local_284 + 1;
        FUN_0045336c(local_54,iVar2);
        local_284 = local_284 + 2;
        if (local_84 != 0) {
          if (*(int *)(local_84 + -0xc) != -1) {
            local_2d8 = (int *)(local_84 + -0xc);
            if (local_2d8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2d8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2d8 = *local_2d8 + -1;
              iVar2 = *local_2d8 + 1;
            }
            if (iVar2 != 0) goto LAB_00406ed8;
          }
          local_2dc = local_84 + -0xc;
          local_2e0 = local_84 + -0xc;
          operator_delete();
          local_2e4 = 0;
          local_2e8 = local_8c;
          local_84 = 0;
          local_6d0 = 0;
        }
LAB_00406ed8:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_54,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x50;
        local_2ec = (uint *)FUN_00455640(local_7c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)local_9c,local_2ec);
        local_284 = local_284 + 1;
        FUN_0045336c(local_6c,iVar3);
        local_284 = local_284 + 2;
        if (local_94 != 0) {
          if (*(int *)(local_94 + -0xc) != -1) {
            local_2f8 = (int *)(local_94 + -0xc);
            if (local_2f8 == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_2f8 == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_2f8 = *local_2f8 + -1;
              iVar3 = *local_2f8 + 1;
            }
            if (iVar3 != 0) goto LAB_0040703d;
          }
          local_2fc = local_94 + -0xc;
          local_300 = local_94 + -0xc;
          operator_delete();
          local_304 = 0;
          local_308 = local_9c;
          local_94 = 0;
          local_7d0 = 0;
        }
LAB_0040703d:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_6c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  local_284 = local_284 + 1;
  local_290 = 0x68;
  if (local_20 != '\0') {
    local_30c = *(int *)(*(int *)(param_5 + 8) + -4);
    iVar3 = *(int *)(*param_4 + 0xc) - local_30c;
    if (((*(byte *)(*param_4 + 4) & 0xb0) == 0) || ((*(byte *)(*param_4 + 4) & 0x80) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_00407117;
        local_311 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_311;
          local_310 = (uint)local_311;
        }
        else {
          local_310 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_310 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_00407117:
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x10) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004071a9;
        local_319 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_319;
          local_318 = (uint)local_319;
        }
        else {
          local_318 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_318 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004071a9:
    if (((*(int *)(*param_4 + 0x30) == 0) && (local_30c != 0)) && (*(int *)(*param_4 + 0x24) != 0))
    {
      local_320 = local_30c;
      local_324 = *(undefined4 *)(param_5 + 8);
      iVar2 = (**(code **)(**(int **)(*param_4 + 0x24) + 0x2c))();
      if (iVar2 != local_30c) {
        local_2a4 = 1;
      }
    }
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x20) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004072ab;
        local_329 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_329;
          local_328 = (uint)local_329;
        }
        else {
          local_328 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_328 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004072ab:
    *(undefined4 *)(*param_4 + 0xc) = 0;
  }
  local_284 = local_284 + -1;
  if (((*(byte *)(*local_24 + 5) & 0x20) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_330 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x80;
        local_334 = (uint *)FUN_00455640(local_8c8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)local_13c,local_334);
        local_284 = local_284 + 1;
        FUN_0045336c(local_b4,iVar2);
        local_284 = local_284 + 2;
        if (local_134 != 0) {
          if (*(int *)(local_134 + -0xc) != -1) {
            piVar4 = (int *)(local_134 + -0xc);
            if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_00407446;
          }
          local_340 = local_134 + -0xc;
          local_344 = local_134 + -0xc;
          operator_delete();
          local_348 = 0;
          local_34c = local_13c;
          local_134 = 0;
          local_8d0 = 0;
        }
LAB_00407446:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_b4,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x98;
        local_350 = (uint *)FUN_00455640(local_9c8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)local_14c,local_350);
        local_284 = local_284 + 1;
        FUN_0045336c(local_cc,iVar2);
        local_284 = local_284 + 2;
        if (local_144 != 0) {
          if (*(int *)(local_144 + -0xc) != -1) {
            local_35c = (int *)(local_144 + -0xc);
            if (local_35c == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_35c == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_35c = *local_35c + -1;
              iVar2 = *local_35c + 1;
            }
            if (iVar2 != 0) goto LAB_004075b1;
          }
          local_360 = local_144 + -0xc;
          local_364 = local_144 + -0xc;
          operator_delete();
          local_368 = 0;
          local_36c = local_14c;
          local_144 = 0;
          local_9d0 = 0;
        }
LAB_004075b1:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_cc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xb0;
        local_370 = (uint *)FUN_00455640(local_ac8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)local_15c,local_370);
        local_284 = local_284 + 1;
        FUN_0045336c(local_e4,iVar3);
        local_284 = local_284 + 2;
        if (local_154 != 0) {
          if (*(int *)(local_154 + -0xc) != -1) {
            local_37c = (int *)(local_154 + -0xc);
            if (local_37c == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_37c == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_37c = *local_37c + -1;
              iVar3 = *local_37c + 1;
            }
            if (iVar3 != 0) goto LAB_0040771c;
          }
          local_380 = local_154 + -0xc;
          local_384 = local_154 + -0xc;
          operator_delete();
          local_388 = 0;
          local_38c = local_15c;
          local_154 = 0;
          local_ad0 = 0;
        }
LAB_0040771c:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_e4,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if ((DAT_00473200 != '\0') &&
     (((local_24 == (int *)&DAT_004774f8 || (local_24 == &DAT_00477538)) &&
      (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)))) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_390 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 200;
        local_394 = (uint *)FUN_00455640(local_bc8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)local_16c,local_394);
        local_284 = local_284 + 1;
        FUN_0045336c(local_fc,iVar2);
        local_284 = local_284 + 2;
        if (local_164 != 0) {
          if (*(int *)(local_164 + -0xc) != -1) {
            piVar4 = (int *)(local_164 + -0xc);
            if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_004078e7;
          }
          local_3a0 = local_164 + -0xc;
          local_3a4 = local_164 + -0xc;
          operator_delete();
          local_3a8 = 0;
          local_3ac = local_16c;
          local_164 = 0;
          local_bd0 = 0;
        }
LAB_004078e7:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_fc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xe0;
        local_3b0 = (uint *)FUN_00455640(local_cc8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)local_17c,local_3b0);
        local_284 = local_284 + 1;
        FUN_0045336c(local_114,iVar2);
        local_284 = local_284 + 2;
        if (local_174 != 0) {
          if (*(int *)(local_174 + -0xc) != -1) {
            local_3bc = (int *)(local_174 + -0xc);
            if (local_3bc == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_3bc == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_3bc = *local_3bc + -1;
              iVar2 = *local_3bc + 1;
            }
            if (iVar2 != 0) goto LAB_00407a52;
          }
          local_3c0 = local_174 + -0xc;
          local_3c4 = local_174 + -0xc;
          operator_delete();
          local_3c8 = 0;
          local_3cc = local_17c;
          local_174 = 0;
          local_cd0 = 0;
        }
LAB_00407a52:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_114,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xf8;
        local_3d0 = (uint *)FUN_00455640(local_dc8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)local_18c,local_3d0);
        local_284 = local_284 + 1;
        FUN_0045336c(local_12c,iVar3);
        local_284 = local_284 + 2;
        if (local_184 != 0) {
          if (*(int *)(local_184 + -0xc) != -1) {
            local_3dc = (int *)(local_184 + -0xc);
            if (local_3dc == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_3dc == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_3dc = *local_3dc + -1;
              iVar3 = *local_3dc + 1;
            }
            if (iVar3 != 0) goto LAB_00407bbd;
          }
          local_3e0 = local_184 + -0xc;
          local_3e4 = local_184 + -0xc;
          operator_delete();
          local_3e8 = 0;
          local_3ec = local_18c;
          local_184 = 0;
          local_dd0 = 0;
        }
LAB_00407bbd:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_12c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if (local_2a4 == 0) goto LAB_00408660;
  local_460 = local_2a4;
  local_464 = *param_4;
  local_468 = *(uint *)(local_464 + 0x30) | local_2a4;
  local_46c = local_468;
  if (*(int *)(local_464 + 0x24) == 0) {
    local_46c = local_468 | 1;
    *(uint *)(local_464 + 0x30) = *(uint *)(local_464 + 0x30) | 1;
  }
  *(uint *)(local_464 + 0x30) = local_46c;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34)) == 0) goto LAB_00408660;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 4) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_004086e0;
    uVar5 = 0;
    local_290 = 0x17c;
    local_470 = (uint *)FUN_00455640(local_11c8,PTR_s_iostream_object_has_failbit_set_00473194);
    iVar3 = std::string::string_from_cstr((int)local_25c,local_470);
    local_284 = local_284 + 1;
    FUN_0045336c(local_21c,iVar3);
    local_284 = local_284 + 2;
    if (local_254 != 0) {
      if (*(int *)(local_254 + -0xc) != -1) {
        local_47c = (int *)(local_254 + -0xc);
        if (local_47c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else if (local_47c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else {
          *local_47c = *local_47c + -1;
          iVar3 = *local_47c + 1;
        }
        if (iVar3 != 0) goto LAB_0040833d;
      }
      local_480 = local_254 + -0xc;
      local_484 = local_254 + -0xc;
      operator_delete();
      local_488 = 0;
      local_48c = local_25c;
      local_254 = 0;
      local_11d0 = 0;
    }
LAB_0040833d:
    local_290 = 0x170;
    FUN_0045ed74((uint *)&DAT_00408678,local_21c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 1) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_004086e0;
    uVar5 = 0;
    local_290 = 0x194;
    local_490 = (uint *)FUN_00455640(local_12c8,PTR_s_iostream_object_has_badbit_set_00473198);
    iVar3 = std::string::string_from_cstr((int)local_26c,local_490);
    local_284 = local_284 + 1;
    FUN_0045336c(local_234,iVar3);
    local_284 = local_284 + 2;
    if (local_264 != 0) {
      if (*(int *)(local_264 + -0xc) != -1) {
        local_49c = (int *)(local_264 + -0xc);
        if (local_49c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else if (local_49c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else {
          *local_49c = *local_49c + -1;
          iVar3 = *local_49c + 1;
        }
        if (iVar3 != 0) goto LAB_004084c0;
      }
      local_4a0 = local_264 + -0xc;
      local_4a4 = local_264 + -0xc;
      operator_delete();
      local_4a8 = 0;
      local_4ac = local_26c;
      local_264 = 0;
      local_12d0 = 0;
    }
LAB_004084c0:
    local_290 = 0x170;
    FUN_0045ed74((uint *)&DAT_00408678,local_234,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 2) == 0) goto LAB_00408660;
  *(uint *)(local_464 + 0x30) = local_46c;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar6 = &LAB_004086e0;
  uVar5 = 0;
  local_290 = 0x1ac;
  local_4b0 = (uint *)FUN_00455640(local_13c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
  iVar3 = std::string::string_from_cstr((int)local_27c,local_4b0);
  local_284 = local_284 + 1;
  FUN_0045336c(local_24c,iVar3);
  local_284 = local_284 + 2;
  if (local_274 != 0) {
    if (*(int *)(local_274 + -0xc) != -1) {
      local_4bc = (int *)(local_274 + -0xc);
      if (local_4bc == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (local_4bc == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *local_4bc = *local_4bc + -1;
        iVar3 = *local_4bc + 1;
      }
      if (iVar3 != 0) goto LAB_00408643;
    }
    local_4c0 = local_274 + -0xc;
    local_4c4 = local_274 + -0xc;
    operator_delete();
    local_4c8 = 0;
    local_4cc = local_27c;
    local_274 = 0;
  }
LAB_00408643:
  local_290 = 0x170;
  FUN_0045ed74((uint *)&DAT_00408678,local_24c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
LAB_00408660:
  *in_FS_OFFSET = local_2a0;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004088f4  FUN_004088f4   (2063 bytes, 4 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00408949) */
/* WARNING: Removing unreachable block (ram,0x00408ca8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff44 : 0x00408cb6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004088f4(int *param_1,LPCSTR param_2,LPCSTR param_3,int param_4,int param_5,LPCSTR param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_138 [4];
  undefined4 local_128 [4];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  int *local_c8;
  char local_c1 [9];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  char local_79 [9];
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_14;
  
  __InitExceptBlockLDTC(0x4629c8);
  local_60 = 8;
  (**(code **)(*param_1 + 4))();
  local_28 = 0;
  local_24 = 0;
  local_14 = 0;
  local_79[5] = '@';
  local_79[6] = '\0';
  local_79[7] = '\0';
  local_79[8] = '\0';
  local_79[1] = '\x01';
  local_79[2] = '\0';
  local_79[3] = '\0';
  local_79[4] = '\0';
  local_2c = 0x40;
  local_54 = local_54 + 1;
  local_60 = 0x2c;
  piVar6 = param_1;
  iVar2 = FUN_00405a5c(param_1,param_2,(int)&local_2c,local_79);
  if (iVar2 < 0) {
    if (iVar2 == -3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    local_54 = local_54 + -1;
    FUN_00406a90(&local_2c,local_28,local_24);
    local_118 = local_28;
    operator_delete();
    *in_FS_OFFSET = local_70;
    return iVar2;
  }
  if (local_79[0] == '\0') {
    uVar7 = 0x4089db;
    (**(code **)(*param_1 + 4))();
    iVar1 = local_24;
    iVar2 = local_28;
    local_60 = 0x44;
    local_80 = param_1;
    if (local_24 != local_28) {
      local_88 = local_24 - local_28;
      local_84 = param_1;
      if (local_88 < 0) {
        local_88 = local_88 + 0xf;
      }
      local_88 = local_88 >> 4;
      local_94 = operator_new();
      local_90 = local_88;
      local_9c = local_94;
      local_98 = local_88;
      local_a0 = local_84;
      local_8c = local_94;
      if (local_94 == 0) {
        iVar3 = iVar1 - iVar2;
        local_a4 = local_84;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        if (iVar3 >> 4 < 0xf) {
          FUN_0040a094(iVar2,iVar1,local_84);
        }
        else {
          iVar3 = iVar1 - iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = iVar3 >> 5;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
          }
          local_a8 = iVar4 * 0x10 + iVar2;
          FUN_0040a884(iVar2,local_a8,local_84);
          FUN_0040a884(local_a8,iVar1,local_a4);
          iVar3 = iVar1 - local_a8;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = local_a8 - iVar2;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xf;
          }
          FUN_0040a4c0(iVar2,local_a8,iVar1,iVar4 >> 4,iVar3 >> 4,local_a4);
        }
      }
      else {
        iVar3 = iVar1 - iVar2;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        local_b0 = iVar3 >> 4;
        if (local_88 < iVar3 >> 4) {
          piVar5 = &local_98;
        }
        else {
          piVar5 = &local_b0;
        }
        local_ac = *piVar5;
        local_b4 = local_94;
        FUN_004092d4(local_128,iVar2,local_ac * 0x10 + iVar2,piVar6,uVar7,local_94);
        FUN_00409424(iVar2,iVar1,local_9c,local_98,0,local_a0);
        FUN_00406a78(local_9c,local_ac * 0x10 + local_9c);
        local_b8 = local_9c;
        operator_delete();
      }
    }
    local_60 = 0x2c;
  }
  if (param_4 == 0) {
    (**(code **)(*param_1 + 4))();
    iVar2 = FUN_00405f48(param_1,(int)&local_2c,(int)&local_2c,1,param_5,param_6);
    if (iVar2 != 0) {
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_104 = local_28;
      operator_delete();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
  }
  else {
    (**(code **)(*param_1 + 4))();
    local_48 = 0;
    local_44 = 0;
    local_34 = 0;
    local_c1[5] = '@';
    local_c1[6] = '\0';
    local_c1[7] = '\0';
    local_c1[8] = '\0';
    local_c1[1] = '\x01';
    local_c1[2] = '\0';
    local_c1[3] = '\0';
    local_c1[4] = '\0';
    local_4c = 0x40;
    local_54 = local_54 + 1;
    local_60 = 0x74;
    piVar6 = param_1;
    iVar2 = FUN_00405a5c(param_1,param_3,(int)&local_4c,local_c1);
    if (iVar2 < 0) {
      if (iVar2 == -3) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
      }
      local_54 = local_54 + -1;
      FUN_00406a90(&local_4c,local_48,local_44);
      local_110 = local_48;
      operator_delete();
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_114 = local_28;
      operator_delete();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
    if (local_c1[0] == '\0') {
      uVar7 = 0x408d73;
      (**(code **)(*param_1 + 4))();
      iVar1 = local_44;
      iVar2 = local_48;
      local_60 = 0x98;
      local_c8 = param_1;
      if (local_44 != local_48) {
        local_d0 = local_44 - local_48;
        local_cc = param_1;
        if (local_d0 < 0) {
          local_d0 = local_d0 + 0xf;
        }
        local_d0 = local_d0 >> 4;
        local_dc = operator_new();
        local_d8 = local_d0;
        local_e4 = local_dc;
        local_e0 = local_d0;
        local_e8 = local_cc;
        local_d4 = local_dc;
        if (local_dc == 0) {
          iVar3 = iVar1 - iVar2;
          local_ec = local_cc;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          if (iVar3 >> 4 < 0xf) {
            FUN_0040a094(iVar2,iVar1,local_cc);
          }
          else {
            iVar3 = iVar1 - iVar2;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = iVar3 >> 5;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
            }
            local_f0 = iVar4 * 0x10 + iVar2;
            FUN_0040a884(iVar2,local_f0,local_cc);
            FUN_0040a884(local_f0,iVar1,local_ec);
            iVar3 = iVar1 - local_f0;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = local_f0 - iVar2;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 0xf;
            }
            FUN_0040a4c0(iVar2,local_f0,iVar1,iVar4 >> 4,iVar3 >> 4,local_ec);
          }
        }
        else {
          iVar3 = iVar1 - iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          local_f8 = iVar3 >> 4;
          if (local_d0 < iVar3 >> 4) {
            piVar5 = &local_e0;
          }
          else {
            piVar5 = &local_f8;
          }
          local_f4 = *piVar5;
          local_fc = local_dc;
          FUN_004092d4(local_138,iVar2,local_f4 * 0x10 + iVar2,piVar6,uVar7,local_dc);
          FUN_00409424(iVar2,iVar1,local_e4,local_e0,0,local_e8);
          FUN_00406a78(local_e4,local_f4 * 0x10 + local_e4);
          local_100 = local_e4;
          operator_delete();
        }
      }
      local_60 = 0x74;
    }
    (**(code **)(*param_1 + 4))();
    iVar2 = FUN_00405f48(param_1,(int)&local_2c,(int)&local_4c,param_4,param_5,param_6);
    if (iVar2 != 0) {
      local_54 = local_54 + -1;
      FUN_00406a90(&local_4c,local_48,local_44);
      local_108 = local_48;
      operator_delete();
      local_60 = 0x74;
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_10c = local_28;
      operator_delete();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
    local_54 = local_54 + -1;
    FUN_00406a90(&local_4c,local_48,local_44);
    operator_delete();
    local_60 = 0x2c;
  }
  local_54 = local_54 + -1;
  FUN_00406a90(&local_2c,local_28,local_24);
  operator_delete();
  *in_FS_OFFSET = local_70;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004092d4  FUN_004092d4   (334 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004092d4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x462ad0);
  while (iVar4 = param_6, iVar3 = param_2, iVar3 != param_3) {
    param_2 = iVar3 + 0x10;
    param_6 = iVar4 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = std::string::__getRep(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00471d5c) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = iVar4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409424  FUN_00409424   (225 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409424(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  uVar2 = (iVar1 >> 4) + 1;
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = iVar1 * 0x10 + param_1;
  if (param_4 < iVar1) {
    FUN_00409424(param_1,iVar4,param_3,param_4,0,param_6);
    FUN_00409424(iVar4,param_2,param_3,param_4,0,param_6);
  }
  else {
    FUN_00409508(param_1,iVar4,param_3,0,0,param_6);
    FUN_00409508(iVar4,param_2,param_3,0,0,param_6);
  }
  iVar1 = param_2 - iVar4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar3 = iVar4 - param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  FUN_0040989c(param_1,iVar4,param_2,iVar3 >> 4,iVar1 >> 4,param_3,param_4,0,param_6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409508  FUN_00409508   (149 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409508(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar1 = iVar1 >> 4;
  iVar2 = 7;
  FUN_004095a0(param_1,param_2,7,param_6);
  if (7 < iVar1) {
    do {
      FUN_004095fc(param_1,param_2,param_3,iVar2,param_6);
      FUN_004095fc(param_3,iVar1 * 0x10 + param_3,param_1,iVar2 * 2,param_6);
      iVar2 = iVar2 * 4;
    } while (iVar2 < iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004095a0  FUN_004095a0   (90 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004095a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_2 - param_1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < param_3) break;
    FUN_0040a094(param_1,param_3 * 0x10 + param_1,param_4);
    param_1 = param_1 + param_3 * 0x10;
  }
  FUN_0040a094(param_1,param_2,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004095fc  FUN_004095fc   (161 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004095fc(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  iVar1 = param_4;
  iVar3 = param_4 * 2;
  while( true ) {
    iVar2 = param_2 - param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar2 >> 4 < iVar3) break;
    iVar2 = param_4 * 0x10 + param_1;
    param_3 = FUN_004096a0(param_1,iVar2,iVar2,iVar1 * 0x20 + param_1,param_3,param_5);
    param_1 = param_1 + iVar1 * 0x20;
  }
  iVar3 = param_2 - param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  local_8 = iVar3 >> 4;
  if (iVar3 >> 4 < param_4) {
    piVar4 = &local_8;
  }
  else {
    piVar4 = &param_4;
  }
  param_4 = *piVar4;
  iVar3 = param_4 * 0x10 + param_1;
  FUN_004096a0(param_1,iVar3,iVar3,param_2,param_3,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004096a0  FUN_004096a0   (241 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004096a0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462b0c);
  while ((param_1 != param_2 && (param_3 != param_4))) {
    cVar1 = (**(code **)*param_6)();
    if (cVar1 == '\0') {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 1;
      puVar4 = &LAB_00409830;
      uVar3 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar3,puVar4,uVar5,uVar6,uVar7,uVar8);
    }
    iVar2 = FUN_00405984(param_3,param_1);
    if (iVar2 < 1) {
      FUN_0044ce78(param_5,param_1);
      param_1 = param_1 + 0x10;
      param_5 = param_5 + 0x10;
    }
    else {
      FUN_0044ce78(param_5,param_3);
      param_3 = param_3 + 0x10;
      param_5 = param_5 + 0x10;
    }
  }
  iVar2 = FUN_00409868(param_1,param_2,param_5);
  iVar2 = FUN_00409868(param_3,param_4,iVar2);
  *in_FS_OFFSET = local_2c;
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409794  FUN_00409794   (62 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00409794(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x462d5c);
  *param_1 = &std::exception::vftable;
  *param_1 = &Abandon_exception::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409868  FUN_00409868   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00409868(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_0044ce78(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040989c  FUN_0040989c   (493 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040989c(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7, undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if (((int)param_5 < (int)param_4) || (param_7 < (int)param_4)) {
    if (param_7 < (int)param_5) {
      FUN_00409bd4(&local_8,0);
      FUN_00409bd4(&local_c,0);
      if ((int)param_5 < (int)param_4) {
        local_8 = (int)param_4 >> 1;
        if ((int)local_8 < 0) {
          local_8 = local_8 + ((param_4 & 1) != 0);
        }
        iVar3 = param_1 + local_8 * 0x10;
        iVar1 = FUN_00409be4(param_2,param_3,iVar3,param_9);
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        local_c = iVar2 >> 4;
      }
      else {
        local_c = (int)param_5 >> 1;
        if ((int)local_c < 0) {
          local_c = local_c + ((param_5 & 1) != 0);
        }
        iVar1 = param_2 + local_c * 0x10;
        iVar3 = FUN_00409cb8(param_1,param_2,iVar1,param_9);
        iVar2 = iVar3 - param_1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        local_8 = iVar2 >> 4;
      }
      iVar2 = FUN_00409d8c(iVar3,param_2,iVar1,param_4 - local_8,local_c,param_6,param_7);
      FUN_0040989c(param_1,iVar3,iVar2,local_8,local_c,param_6,param_7,0,param_9);
      FUN_0040989c(iVar2,iVar1,param_3,param_4 - local_8,param_5 - local_c,param_6,param_7,0,param_9
                  );
    }
    else {
      iVar1 = FUN_00409868(param_2,param_3,param_6);
      FUN_00409a8c(param_1,param_2,param_6,iVar1,param_3,param_9);
    }
  }
  else {
    iVar1 = FUN_00409868(param_1,param_2,param_6);
    FUN_004096a0(param_6,iVar1,param_2,param_3,param_1,param_9);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409a8c  FUN_00409a8c   (326 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409a8c(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462b30);
  if (param_2 == param_1) {
    FUN_004068fc(param_3,param_4,param_5);
    *in_FS_OFFSET = local_2c;
  }
  else if (param_4 == param_3) {
    FUN_004068fc(param_1,param_2,param_5);
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = param_2 + -0x10;
    iVar3 = param_4 + -0x10;
    while( true ) {
      while( true ) {
        cVar1 = (**(code **)*param_6)();
        if (cVar1 == '\0') {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00409830;
          uVar5 = 0;
          FUN_00409794(&local_8);
          FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        iVar2 = FUN_00405984(iVar3,iVar4);
        if (iVar2 < 1) break;
        param_5 = param_5 + -0x10;
        FUN_0044ce78(param_5,iVar4);
        if (iVar4 == param_1) {
          FUN_004068fc(param_3,iVar3 + 0x10,param_5);
          *in_FS_OFFSET = local_2c;
          return;
        }
        iVar4 = iVar4 + -0x10;
      }
      param_5 = param_5 + -0x10;
      FUN_0044ce78(param_5,iVar3);
      if (iVar3 == param_3) break;
      iVar3 = iVar3 + -0x10;
    }
    FUN_004068fc(param_1,iVar4 + 0x10,param_5);
    *in_FS_OFFSET = local_2c;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409bd4  FUN_00409bd4   (13 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409bd4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409be4  FUN_00409be4   (211 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00409be4(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462b54);
  iVar4 = param_2 - param_1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  uVar5 = iVar4 >> 4;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = (int)uVar1 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar1 & 1) != 0);
    }
    iVar4 = uVar5 * 0x10 + param_1;
    cVar2 = (**(code **)*param_4)();
    if (cVar2 == '\0') {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00409830;
      uVar6 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    iVar3 = FUN_00405984(iVar4,param_3);
    if (0 < iVar3) {
      param_1 = iVar4 + 0x10;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409cb8  FUN_00409cb8   (211 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00409cb8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462b78);
  iVar4 = param_2 - param_1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  uVar5 = iVar4 >> 4;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = (int)uVar1 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar1 & 1) != 0);
    }
    iVar4 = uVar5 * 0x10 + param_1;
    cVar2 = (**(code **)*param_4)();
    if (cVar2 == '\0') {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00409830;
      uVar6 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    iVar3 = FUN_00405984(param_3,iVar4);
    if (iVar3 < 1) {
      param_1 = iVar4 + 0x10;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409d8c  FUN_00409d8c   (184 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00409d8c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar1 = FUN_00409868(param_2,param_3,param_6);
    FUN_004068fc(param_1,param_2,param_3);
    iVar1 = FUN_00409868(param_6,iVar1,param_1);
  }
  else if (param_7 < param_4) {
    if ((param_2 != param_1) && (param_2 != param_3)) {
      FUN_00409e44(param_1,param_2,param_3);
    }
    iVar1 = param_1 + param_5 * 0x10;
  }
  else {
    iVar1 = FUN_00409868(param_1,param_2,param_6);
    FUN_00409868(param_2,param_3,param_1);
    iVar1 = FUN_004068fc(param_6,iVar1,param_3);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409e44  FUN_00409e44   (107 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409e44(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar2 = param_3 - param_1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar1 = FUN_00409eb0(iVar2 >> 4,iVar1 >> 4);
  while (iVar1 != 0) {
    iVar2 = param_2 - param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    FUN_00409ed4(param_1,param_3,(iVar1 + -1) * 0x10 + param_1,iVar2 >> 4);
    iVar1 = iVar1 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409eb0  FUN_00409eb0   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00409eb0(int param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    iVar1 = param_1 % param_2;
    param_1 = param_2;
    param_2 = iVar1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409ed4  FUN_00409ed4   (448 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409ed4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x462bac);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_3 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_3 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar3 = param_4 * 0x10 + param_3;
  iVar2 = param_3;
  while (iVar3 != param_3) {
    FUN_0044ce78(iVar2,iVar3);
    iVar5 = param_2 - iVar3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar2 = iVar3;
    if (param_4 < iVar5 >> 4) {
      iVar3 = iVar3 + param_4 * 0x10;
    }
    else {
      iVar3 = param_2 - iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar3 = (param_4 - (iVar3 >> 4)) * 0x10 + param_1;
    }
  }
  FUN_0044ce78(iVar2,(int)local_14);
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040a07d;
    }
    operator_delete();
  }
LAB_0040a07d:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a094  FUN_0040a094   (764 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0040a094(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  uint in_stack_fffffef4;
  undefined4 in_stack_fffffef8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 local_3c;
  undefined4 local_18;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x462c10);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_0040a37f:
    *in_FS_OFFSET = local_3c;
    return;
  }
joined_r0x0040a0bf:
  do {
    iVar6 = iVar2 + 0x10;
    if (iVar6 == param_2) goto LAB_0040a37f;
    local_c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      local_c = std::string::__getRep(local_14,uVar1,uVar1);
      local_c = local_c + 3;
      in_stack_fffffef8 = 0x40a182;
      memcpy(local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(int **)(iVar2 + 0x18);
      piVar5 = local_c + -3;
      if (piVar5 != &DAT_00471d5c) {
        *piVar5 = *piVar5 + 1;
      }
    }
    cVar3 = (**(code **)*param_3)();
    if (cVar3 == '\0') {
      uVar11 = 0;
      uVar10 = 0;
      in_stack_fffffef8 = 0;
      in_stack_fffffef4 = 1;
      puVar9 = &LAB_00409830;
      uVar8 = 0;
      FUN_00409794(&local_18);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_18,uVar8,puVar9,in_stack_fffffef4,in_stack_fffffef8,
                   uVar10,uVar11);
    }
    puVar12 = local_14;
    iVar4 = FUN_00405984((int)puVar12,param_1);
    if (iVar4 < 1) {
      puVar13 = param_3;
      if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
        uVar1 = local_c[-1];
        piVar5 = std::string::__getRep(&GHIDRA_STACK(0xfffffef4),uVar1,uVar1);
        piVar5 = piVar5 + 3;
        memcpy(piVar5,local_c,uVar1);
      }
      else {
        piVar7 = local_c + -3;
        piVar5 = local_c;
        if (piVar7 != &DAT_00471d5c) {
          *piVar7 = *piVar7 + 1;
        }
      }
      FUN_0040a390(iVar6,in_stack_fffffef4,in_stack_fffffef8,(int)piVar5,puVar12,puVar13);
    }
    else {
      in_stack_fffffef8 = 0x40a1ef;
      FUN_004068fc(param_1,iVar6,iVar2 + 0x20);
      FUN_0044ce78(param_1,(int)local_14);
    }
    iVar2 = iVar6;
    if (local_c != (int *)0x0) {
      if (local_c[-3] != -1) {
        piVar5 = local_c + -3;
        if (piVar5 == &DAT_00471d5c) {
          iVar6 = 1;
        }
        else if (piVar5 == &DAT_00471d5c) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto joined_r0x0040a0bf;
      }
      operator_delete();
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a390  FUN_0040a390   (302 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040a390(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462c80);
  while( true ) {
    iVar3 = param_1 + -0x10;
    cVar1 = (**(code **)*param_6)();
    if (cVar1 == '\0') {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00409830;
      uVar5 = 0;
      FUN_00409794(&local_8);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
    }
    iVar2 = FUN_00405984((int)&param_2,iVar3);
    if (iVar2 < 1) break;
    FUN_0044ce78(param_1,iVar3);
    param_1 = iVar3;
  }
  FUN_0044ce78(param_1,(int)&param_2);
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      piVar4 = (int *)(param_4 + -0xc);
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040a4a7;
    }
    operator_delete();
  }
LAB_0040a4a7:
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a4c0  FUN_0040a4c0   (961 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040a4c0(int param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_80;
  uint local_7c [3];
  int *local_70;
  int *local_6c;
  int *local_68;
  undefined4 *local_64;
  uint local_60;
  undefined1 *local_5c;
  int *local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  undefined1 local_18 [8];
  int *local_10;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x462ccc);
  if ((param_4 == 0) || (param_5 == 0)) {
    *in_FS_OFFSET = local_3c;
    return local_3c;
  }
  if (param_4 + param_5 != 2) {
    FUN_00409bd4(local_7c,0);
    FUN_00409bd4(&local_80,0);
    if ((int)param_5 < (int)param_4) {
      local_7c[0] = (int)param_4 >> 1;
      if ((int)local_7c[0] < 0) {
        local_7c[0] = local_7c[0] + ((param_4 & 1) != 0);
      }
      iVar5 = param_1 + local_7c[0] * 0x10;
      iVar2 = FUN_00409be4(param_2,param_3,iVar5,param_6);
      iVar3 = iVar2 - param_2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      local_80 = iVar3 >> 4;
    }
    else {
      local_80 = (int)param_5 >> 1;
      if ((int)local_80 < 0) {
        local_80 = local_80 + ((param_5 & 1) != 0);
      }
      iVar2 = param_2 + local_80 * 0x10;
      iVar5 = FUN_00409cb8(param_1,param_2,iVar2,param_6);
      iVar3 = iVar5 - param_1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      local_7c[0] = iVar3 >> 4;
    }
    if ((param_2 != iVar5) && (param_2 != iVar2)) {
      FUN_00409e44(iVar5,param_2,iVar2);
    }
    iVar3 = iVar5 + local_80 * 0x10;
    FUN_0040a4c0(param_1,iVar5,iVar3,local_7c[0],local_80,param_6);
    uVar6 = FUN_0040a4c0(iVar3,iVar2,param_3,param_4 - local_7c[0],param_5 - local_80,param_6);
    *in_FS_OFFSET = local_3c;
    return uVar6;
  }
  cVar1 = (**(code **)*param_6)();
  if (cVar1 == '\0') {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00409830;
    uVar6 = 0;
    local_2c = 8;
    FUN_00409794(&local_8);
    local_20 = local_20 + 2;
    FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  iVar2 = FUN_00405984(param_2,param_1);
  if (0 < iVar2) {
    local_2c = 0x20;
    local_40 = 0;
    local_10 = (int *)0x0;
    iVar2 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar2 == -1 || iVar2 + 1 < 0) {
      local_50 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_58 = std::string::__getRep(local_18,local_50,local_50);
      local_5c = local_18;
      local_68 = local_58 + 3;
      local_60 = local_50;
      local_64 = *(undefined4 **)(param_1 + 8);
      local_54 = local_68;
      local_10 = local_68;
      memcpy(local_68,local_64,local_50);
    }
    else {
      local_44 = *(int **)(param_1 + 8);
      local_48 = local_18;
      local_4c = local_44 + -3;
      local_10 = local_44;
      if (local_4c != &DAT_00471d5c) {
        *local_4c = *local_4c + 1;
      }
    }
    local_20 = local_20 + 1;
    FUN_0044ce78(param_1,param_2);
    FUN_0044ce78(param_2,(int)local_18);
    local_20 = local_20 + -1;
    if (local_10 != (int *)0x0) {
      if (local_10[-3] != -1) {
        piVar4 = local_10 + -3;
        if (piVar4 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar4 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar2 = *piVar4 + 1;
        }
        if (iVar2 != 0) goto LAB_0040a6c6;
      }
      local_6c = local_10 + -3;
      local_70 = local_10 + -3;
      operator_delete();
    }
  }
LAB_0040a6c6:
  *in_FS_OFFSET = local_3c;
  return local_3c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a884  FUN_0040a884   (545 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040a884(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0xf) {
    FUN_0040a094(param_1,param_2,param_3);
  }
  else {
    iVar4 = iVar1 >> 5;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((iVar1 >> 4 & 1U) != 0);
    }
    iVar4 = iVar4 * 0x10 + param_1;
    iVar1 = iVar4 - param_1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < 0xf) {
      FUN_0040a094(param_1,iVar4,param_3);
    }
    else {
      iVar1 = iVar4 - param_1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar3 = iVar1 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iVar1 >> 4 & 1U) != 0);
      }
      iVar1 = iVar3 * 0x10 + param_1;
      FUN_0040a884(param_1,iVar1,param_3);
      FUN_0040a884(iVar1,iVar4,param_3);
      iVar3 = iVar4 - iVar1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = iVar1 - param_1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040a4c0(param_1,iVar1,iVar4,iVar2 >> 4,iVar3 >> 4,param_3);
    }
    iVar1 = param_2 - iVar4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < 0xf) {
      FUN_0040a094(iVar4,param_2,param_3);
    }
    else {
      iVar1 = param_2 - iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar3 = iVar1 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iVar1 >> 4 & 1U) != 0);
      }
      iVar1 = iVar3 * 0x10 + iVar4;
      FUN_0040a884(iVar4,iVar1,param_3);
      FUN_0040a884(iVar1,param_2,param_3);
      iVar3 = param_2 - iVar1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = iVar1 - iVar4;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040a4c0(iVar4,iVar1,param_2,iVar2 >> 4,iVar3 >> 4,param_3);
    }
    iVar1 = param_2 - iVar4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    iVar3 = iVar4 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0040a4c0(param_1,iVar4,param_2,iVar3 >> 4,iVar1 >> 4,param_3);
  }
  return;
}

} // namespace tea
