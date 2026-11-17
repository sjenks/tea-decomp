// TEA.exe — application module "GridViewWindows"
// 36 functions, 0x00463058..0x004671dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00463058  GridViewWindows::~GridViewWindows   (662 bytes)   [rtti:dtor destructor]
//   written in code as GridViewWindows::_dtor
void __cdecl GridViewWindows::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x4fb7e4);
  if (param_1 == 0) goto LAB_004632de;
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x140));
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    TEAViewProfileWindows::_dtor(*(int *)(param_1 + 0x144),3);
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x160) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x160) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00463160;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
LAB_00463160:
  if (*(int *)(param_1 + 0x150) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x150) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x150) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004631dd;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
LAB_004631dd:
  _vector_delete_ldtc_(param_1 + 0xf0,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(param_1 + 0xa0,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(param_1 + 0x60,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(param_1 + 0x20,0x10,4,1,(undefined*)std::string::_dtor);
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004632ce;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004632ce:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004632de:
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463310  FUN_00463310   (2206 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00463361) */
/* WARNING: Removing unreachable block (ram,0x0046338d) */
void __cdecl FUN_00463310(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5, undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  HINSTANCE hInst;
  int iVar1;
  HANDLE pvVar2;
  HICON pHVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  undefined4 local_c0;
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
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char *local_24;
  undefined1 local_1c [8];
  byte *local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4fb920);
  *(int **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  local_14 = &DAT_00513d64;
  local_24 = &DAT_00513d64;
  FUN_00485bb8((int)local_3c,0x51a850);
  iVar1 = FUN_00485fac((int)local_3c,(int)local_1c,(int)local_2c);
  if (iVar1 == 0) {
    MessageBoxExA(*(HWND *)(*param_2 + 0xc),"Common application data folder wasn't created during the installation",
                  "Folder Missing",0x10,0);
    PostQuitMessage(1);
  }
  else if ((iVar1 == 2) && (iVar1 = FUN_004867e4(local_14,local_24), iVar1 != 0)) {
    FUN_004cf384(param_1 + 0x148,(int)local_1c);
    FUN_004cf384(param_1 + 0x158,(int)local_2c);
  }
  Common::_dtor((int)local_3c,2);
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_004634f9;
    }
    operator_delete();
    local_24 = (char *)0x0;
  }
LAB_004634f9:
  if (local_14 != (byte *)0x0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      pbVar5 = local_14 + -0xc;
      if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0046359e;
    }
    operator_delete();
    local_14 = (byte *)0x0;
  }
LAB_0046359e:
  iVar6 = 0;
  iVar1 = 0;
  FUN_004649b0((int)local_4c);
  Persist::Persist(local_c,(int)local_4c,iVar1,iVar6);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar4 = (int *)(local_44 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463676;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_00463676:
  *param_8 = 0;
  *param_7 = 0;
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  std::string::string_from_cstr((int)local_5c,(uint *)"ViewWindowX");
  Persist::QueryValue((int)local_c,(int)local_5c,param_4);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar4 = (int *)(local_54 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463771;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_00463771:
  std::string::string_from_cstr((int)local_6c,(uint *)"ViewWindowY");
  Persist::QueryValue((int)local_c,(int)local_6c,param_5);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar4 = (int *)(local_64 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463851;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_00463851:
  std::string::string_from_cstr((int)local_7c,(uint *)"ViewWindowW");
  Persist::QueryValue((int)local_c,(int)local_7c,param_6);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar4 = (int *)(local_74 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463931;
    }
    operator_delete();
    local_74 = 0;
  }
LAB_00463931:
  std::string::string_from_cstr((int)local_8c,(uint *)"ViewWindowH");
  Persist::QueryValue((int)local_c,(int)local_8c,param_7);
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar4 = (int *)(local_84 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463a1a;
    }
    operator_delete();
    local_84 = 0;
  }
LAB_00463a1a:
  std::string::string_from_cstr((int)local_9c,(uint *)"ViewWindowZ");
  Persist::QueryValue((int)local_c,(int)local_9c,param_8);
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      piVar4 = (int *)(local_94 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463b15;
    }
    operator_delete();
    local_94 = 0;
  }
LAB_00463b15:
  iVar1 = GetSystemMetrics(0x31);
  iVar6 = GetSystemMetrics(0x32);
  hInst = *(HINSTANCE *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0xc);
  if (((0 < iVar1) && (0 < iVar6)) && (hInst != (HINSTANCE)0x0)) {
    pvVar2 = LoadImageA(hInst,"GRIDICON",1,iVar1,iVar6,0);
    *(HANDLE *)(param_1 + 0x16c) = pvVar2;
  }
  if (hInst != (HINSTANCE)0x0) {
    pHVar3 = LoadIconA(hInst,"GRIDICON");
    *(HICON *)(param_1 + 0x168) = pHVar3;
  }
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_c0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463bfc  FUN_00463bfc   (2206 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004642e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00463bfc(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_254 [15];
  undefined4 local_218;
  undefined4 local_208;
  undefined4 local_1f8;
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined *local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 *local_1a0;
  undefined *local_19c;
  undefined1 *local_190;
  undefined4 local_18c;
  int local_188;
  int local_184;
  int *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  int local_174;
  int local_170;
  int *local_16c;
  undefined1 *local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  undefined1 *local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined1 *local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined1 *local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined2 local_c0;
  int local_b4;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  undefined *local_94;
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
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4fbad8);
  local_c0 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_b4 = local_b4 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463cd4;
    }
    local_d4 = local_14 + -0xc;
    local_d8 = local_14 + -0xc;
    operator_delete();
    local_dc = 0;
    local_e0 = local_1c;
    local_14 = 0;
    local_1c8 = 0;
  }
LAB_00463cd4:
  local_c0 = 0x2c;
  std::string::string_from_cstr((int)local_2c,(uint *)"ViewWindowX");
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_2c);
  local_b4 = local_b4 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463d96;
    }
    local_ec = local_24 + -0xc;
    local_f0 = local_24 + -0xc;
    operator_delete();
    local_f4 = 0;
    local_f8 = local_2c;
    local_24 = 0;
    local_1d8 = 0;
  }
LAB_00463d96:
  local_c0 = 0x44;
  std::string::string_from_cstr((int)local_3c,(uint *)"ViewWindowY");
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_3c);
  local_b4 = local_b4 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463e58;
    }
    local_104 = local_34 + -0xc;
    local_108 = local_34 + -0xc;
    operator_delete();
    local_10c = 0;
    local_110 = local_3c;
    local_34 = 0;
    local_1e8 = 0;
  }
LAB_00463e58:
  local_c0 = 0x5c;
  std::string::string_from_cstr((int)local_4c,(uint *)"ViewWindowW");
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_4c);
  local_b4 = local_b4 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463f1a;
    }
    local_11c = local_44 + -0xc;
    local_120 = local_44 + -0xc;
    operator_delete();
    local_124 = 0;
    local_128 = local_4c;
    local_44 = 0;
    local_1f8 = 0;
  }
LAB_00463f1a:
  local_c0 = 0x74;
  std::string::string_from_cstr((int)local_5c,(uint *)"ViewWindowH");
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_5c);
  local_b4 = local_b4 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463fdc;
    }
    local_134 = local_54 + -0xc;
    local_138 = local_54 + -0xc;
    operator_delete();
    local_13c = 0;
    local_140 = local_5c;
    local_54 = 0;
    local_208 = 0;
  }
LAB_00463fdc:
  local_c0 = 0x8c;
  std::string::string_from_cstr((int)local_6c,(uint *)"ViewWindowZ");
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_6c);
  local_b4 = local_b4 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_0046409e;
    }
    local_14c = local_64 + -0xc;
    local_150 = local_64 + -0xc;
    operator_delete();
    local_154 = 0;
    local_158 = local_6c;
    local_64 = 0;
    local_218 = 0;
  }
LAB_0046409e:
  local_c0 = 8;
  iVar3 = 1;
  do {
    FUN_004e0344((undefined1 *)local_254,&DAT_004fb4e9 /* "%s%d" */);
    iVar4 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140));
    if (iVar4 < iVar3) {
      local_c0 = 200;
      local_1a0 = local_9c;
      local_19c = &DAT_00513d64;
      local_94 = &DAT_00513d64;
      puVar5 = local_9c;
      local_b4 = local_b4 + 1;
      std::string::string_from_cstr((int)local_ac,local_254);
      local_b4 = local_b4 + 1;
      FUN_0044ec78((int)local_c,(int)local_ac,(int)puVar5);
      local_b4 = local_b4 + -1;
      if (local_a4 != 0) {
        if (*(int *)(local_a4 + -0xc) != -1) {
          piVar2 = (int *)(local_a4 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2 + 1;
          }
          if (iVar3 != 0) goto LAB_004643c7;
        }
        local_1a4 = local_a4 + -0xc;
        local_1a8 = local_a4 + -0xc;
        operator_delete();
        local_1ac = 0;
        local_1b0 = local_ac;
        local_a4 = 0;
      }
LAB_004643c7:
      local_c0 = 8;
      local_b4 = local_b4 + -1;
      if (local_94 == (undefined *)0x0) break;
      if (*(int *)(local_94 + -0xc) != -1) {
        piVar2 = (int *)(local_94 + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) break;
      }
      local_1b4 = local_94 + -0xc;
      local_1b8 = local_94 + -0xc;
      operator_delete();
      local_1bc = 0;
      local_1c0 = local_9c;
      local_94 = (undefined *)0x0;
      break;
    }
    local_c0 = 0xa4;
    puVar1 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar3 + -1);
    std::string::string_from_cstr((int)local_7c,puVar1);
    local_b4 = local_b4 + 1;
    puVar5 = local_7c;
    std::string::string_from_cstr((int)local_8c,local_254);
    local_b4 = local_b4 + 1;
    FUN_0044ec78((int)local_c,(int)local_8c,(int)puVar5);
    local_b4 = local_b4 + -1;
    if (local_84 != 0) {
      if (*(int *)(local_84 + -0xc) != -1) {
        local_16c = (int *)(local_84 + -0xc);
        if (local_16c == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_16c == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_16c = *local_16c + -1;
          iVar4 = *local_16c + 1;
        }
        if (iVar4 != 0) goto LAB_004641f0;
      }
      local_170 = local_84 + -0xc;
      local_174 = local_84 + -0xc;
      operator_delete();
      local_178 = 0;
      local_17c = local_8c;
      local_84 = 0;
    }
LAB_004641f0:
    local_c0 = 8;
    local_b4 = local_b4 + -1;
    if (local_74 != 0) {
      if (*(int *)(local_74 + -0xc) != -1) {
        local_180 = (int *)(local_74 + -0xc);
        if (local_180 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_180 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_180 = *local_180 + -1;
          iVar4 = *local_180 + 1;
        }
        if (iVar4 != 0) goto LAB_0046446f;
      }
      local_184 = local_74 + -0xc;
      local_188 = local_74 + -0xc;
      operator_delete();
      local_18c = 0;
      local_190 = local_7c;
      local_74 = 0;
    }
LAB_0046446f:
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  local_b4 = local_b4 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_d0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046449c  FUN_0046449c   (1215 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004645d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046449c(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint local_114 [15];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined4 local_cc;
  uint *local_c8;
  uint *local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  uint *local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  uint *local_ac;
  uint *local_a8;
  uint local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined1 *local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int *local_78;
  int local_74;
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined1 local_4c [8];
  uint *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  uint *local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  undefined4 uVar3;
  
  __InitExceptBlockLDTC(0x4fbc4c);
  local_74 = 1;
  local_60 = 0x14;
  iVar8 = 0;
  iVar7 = 0;
  FUN_004649b0((int)local_1c);
  local_54 = local_54 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar7,iVar8);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      local_78 = (int *)(local_14 + -0xc);
      if (local_78 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (local_78 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *local_78 = *local_78 + -1;
        iVar7 = *local_78 + 1;
      }
      if (iVar7 != 0) goto LAB_0046457d;
    }
    local_7c = local_14 + -0xc;
    local_80 = local_14 + -0xc;
    operator_delete();
    local_84 = 0;
    local_88 = local_1c;
    local_14 = 0;
    local_d8 = 0;
  }
LAB_0046457d:
  iVar7 = 1;
  do {
    local_60 = 8;
    FUN_004e0344((undefined1 *)local_114,&DAT_004fb4e9 /* "%s%d" */);
    local_24 = (uint *)&DAT_00513d64;
    local_54 = local_54 + 1;
    local_60 = 0x50;
    puVar9 = local_2c;
    std::string::string_from_cstr((int)local_3c,local_114);
    local_54 = local_54 + 1;
    uVar3 = Persist::QueryValueSized((int)local_c,(int)local_3c,(int)puVar9);
    cVar1 = (char)uVar3;
    local_54 = local_54 + -1;
    if (local_34 != 0) {
      if (*(int *)(local_34 + -0xc) != -1) {
        piVar6 = (int *)(local_34 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar8 = *piVar6 + 1;
        }
        if (iVar8 != 0) goto LAB_004646a7;
      }
      local_94 = local_34 + -0xc;
      local_98 = local_34 + -0xc;
      operator_delete();
      local_9c = 0;
      local_a0 = local_3c;
      local_34 = 0;
    }
LAB_004646a7:
    if (cVar1 != '\0') {
      local_74 = 0;
    }
    if ((local_74 != 0) && (iVar7 < 5)) {
      FUN_004cf41c((int)local_2c,(uint *)"Dictionaries\\");
      puVar10 = *(uint **)(iVar7 * 4 + 0x4fb324);
      local_a4 = local_24[-1];
      pcVar4 = strlen(puVar10);
      FUN_004cfad4((int)local_2c,local_a4,0,(uint)puVar10,(uint)pcVar4,0,(uint)pcVar4);
    }
    if (local_24[-1] == 0) {
      local_54 = local_54 + -1;
      if (local_24 != (uint *)0x0) {
        if (local_24[-3] != 0xffffffff) {
          puVar10 = local_24 + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar7 = *puVar10 + 1;
          }
          if (iVar7 != 0) goto LAB_00464788;
        }
        local_b8 = local_24 + -3;
        operator_delete();
        local_bc = 0;
        local_24 = (uint *)0x0;
        local_c0 = local_2c;
      }
LAB_00464788:
      local_60 = 0x44;
      break;
    }
    bVar2 = FUN_00436f50((int)local_2c);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_00464bb4(param_1,local_24);
    }
    else {
      local_60 = 0x74;
      FUN_00437470((int)local_4c,(int)local_2c);
      local_54 = local_54 + 1;
      local_60 = 0x68;
      FUN_00464bb4(param_1,local_44);
      puVar10 = local_44;
      puVar5 = FUN_0041238c(param_1,0);
      FUN_0041251c((int)puVar5,puVar10);
      local_54 = local_54 + -1;
      if (local_44 != (uint *)0x0) {
        if (local_44[-3] != 0xffffffff) {
          puVar10 = local_44 + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar8 = *puVar10 + 1;
          }
          if (iVar8 != 0) goto LAB_0046487c;
        }
        local_a8 = local_44 + -3;
        local_ac = local_44 + -3;
        operator_delete();
        local_b0 = 0;
        local_b4 = local_4c;
        local_44 = (uint *)0x0;
      }
LAB_0046487c:
      local_60 = 0x44;
    }
    local_54 = local_54 + -1;
    if (local_24 != (uint *)0x0) {
      if (local_24[-3] != 0xffffffff) {
        puVar10 = local_24 + -3;
        if (puVar10 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (puVar10 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *puVar10 = *puVar10 - 1;
          iVar8 = *puVar10 + 1;
        }
        if (iVar8 != 0) goto LAB_00464924;
      }
      local_c4 = local_24 + -3;
      local_c8 = local_24 + -3;
      operator_delete();
      local_cc = 0;
      local_24 = (uint *)0x0;
      local_d0 = local_2c;
    }
LAB_00464924:
    local_60 = 8;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  local_54 = local_54 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046495c  FUN_0046495c   (33 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046495c(int param_1)

{
  FUN_00464ae0(param_1);
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464980  FUN_00464980   (45 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00464980(void)

{
  FUN_0048597c((HWND)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004649b0  FUN_004649b0   (225 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004649b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fbd00);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(undefined4 * *)&DAT_0051a848)[-3] == -1 || (*(undefined4 * *)&DAT_0051a848)[-3] + 1 < 0) {
    uVar1 = (*(undefined4 * *)&DAT_0051a848)[-1];
    piVar2 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar2 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),(*(undefined4 * *)&DAT_0051a848),uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = (*(undefined4 * *)&DAT_0051a848);
    piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar2 != &DAT_00513d58) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464a94  FUN_00464a94   (75 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00464a94(int param_1,int param_2,uint param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fbd30);
  FUN_004c0e0c(param_1,*(int *)(**(int **)(param_2 + 0x10) + 0x6c) + 4,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464ae0  FUN_00464ae0   (16 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00464ae0(int param_1)

{
  return *(undefined4 *)(**(int **)(param_1 + 0x10) + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x00464af0  FUN_00464af0   (156 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00464af0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x4fbd64);
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      FUN_004c4c74(piVar2,0);
    }
    *(int **)(param_1 + 0x18) = piVar2;
    if (*(int *)(piVar2[2] + 4) == 0x1008) {
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *in_FS_OFFSET = local_34;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464ba4  FUN_00464ba4   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00464ba4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464bac  FUN_00464bac   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00464bac(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464bb4  FUN_00464bb4   (870 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00464bb4(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 local_48;
  undefined1 local_24 [8];
  LPCSTR local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fbddc);
  for (iVar7 = 0; iVar2 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140)), iVar7 < iVar2; iVar7 = iVar7 + 1)
  {
    pcVar4 = (char *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar7);
    iVar2 = FUN_004dcbf8((char *)param_2,pcVar4);
    if (iVar2 == 0) {
      FUN_00452b50(*(int **)(param_1 + 0x10),iVar7);
      *in_FS_OFFSET = local_48;
      return 1;
    }
  }
  iVar7 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140));
  if (8 < iVar7) {
    (**(code **)(*(int *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x1b) + 0x30))();
    *in_FS_OFFSET = local_48;
    return 0;
  }
  puVar3 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x140));
  std::string::string_from_cstr((int)local_14,puVar3);
  if (local_c[-1] != 0) {
    std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
  }
  uVar1 = local_c[-1];
  pcVar4 = strlen(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar4,0,(uint)pcVar4);
  puVar5 = FUN_00407734(local_c);
  iVar7 = FUN_00408b34((int)puVar5);
  if (iVar7 == 0) {
    TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x140));
    *(undefined4 **)(param_1 + 0x140) = puVar5;
    FUN_00451784(*(int **)(param_1 + 0x10),1);
    FUN_00466b38(param_1);
    uVar8 = 1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        local_c = local_c + -3;
        if (local_c == &DAT_00513d58) {
          iVar7 = 1;
        }
        else if (local_c == &DAT_00513d58) {
          iVar7 = 1;
        }
        else {
          *local_c = *local_c - 1;
          iVar7 = *local_c + 1;
        }
        if (iVar7 != 0) goto LAB_00464f0a;
      }
      operator_delete();
    }
LAB_00464f0a:
    *in_FS_OFFSET = local_48;
    return uVar8;
  }
  std::string::string_from_cstr((int)local_24,param_2);
  uVar1 = *(uint *)(local_1c + -4);
  pcVar4 = strlen((uint *)"\nis not a valid TEA&Sympathy Dictionary File");
  FUN_004cfad4((int)local_24,uVar1,0,0x4fb5b3,(uint)pcVar4,0,(uint)pcVar4);
  MessageBoxExA(*(HWND *)(**(int **)(param_1 + 0x10) + 0xc),local_1c,
                "Dictionary Open Failed",0x30,0);
  TSDictionaryList::ReleaseDictionaries((int)puVar5);
  uVar8 = 0;
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar6 = (int *)(local_1c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar7 = *piVar6 + 1;
      }
      if (iVar7 != 0) goto LAB_00464dda;
    }
    operator_delete();
    local_1c = (LPCSTR)0x0;
  }
LAB_00464dda:
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar7 = *local_c + 1;
      }
      if (iVar7 != 0) goto LAB_00464e54;
    }
    operator_delete();
  }
LAB_00464e54:
  *in_FS_OFFSET = local_48;
  return uVar8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464f24  FUN_00464f24   (387 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00464f6f) */
void __cdecl FUN_00464f24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fbe58);
  iVar2 = FUN_00452bcc(*(int *)(param_1 + 0x10));
  local_c = (uint *)&DAT_00513d64;
  for (iVar7 = 0; iVar5 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140)), iVar7 < iVar5; iVar7 = iVar7 + 1)
  {
    if (iVar7 != iVar2) {
      if (local_c[-1] != 0) {
        std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
      }
      puVar3 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar7);
      uVar1 = local_c[-1];
      pcVar4 = strlen(puVar3);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar3,(uint)pcVar4,0,(uint)pcVar4);
    }
  }
  puVar6 = FUN_00407734(local_c);
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x140));
  *(undefined4 **)(param_1 + 0x140) = puVar6;
  FUN_00451784(*(int **)(param_1 + 0x10),4);
  FUN_00466b38(param_1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00465096;
    }
    operator_delete();
  }
LAB_00465096:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004650a8  FUN_004650a8   (410 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004650fc) */
void __cdecl FUN_004650a8(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fbeb0);
  local_3c = FUN_00452bcc(*(int *)(param_1 + 0x10));
  if (param_2 == 2) {
    local_3c = local_3c + -1;
  }
  local_c = (uint *)&DAT_00513d64;
  for (iVar6 = 0; iVar4 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140)), iVar6 < iVar4; iVar6 = iVar6 + 1)
  {
    if (local_c[-1] != 0) {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
    }
    iVar4 = iVar6;
    if (iVar6 == local_3c) {
      iVar4 = iVar6 + 1;
    }
    if (iVar6 == local_3c + 1) {
      iVar4 = iVar4 + -1;
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar4);
    uVar1 = local_c[-1];
    pcVar3 = strlen(puVar2);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
  }
  puVar5 = FUN_00407734(local_c);
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x140));
  *(undefined4 **)(param_1 + 0x140) = puVar5;
  FUN_00451784(*(int **)(param_1 + 0x10),param_2);
  FUN_00466b38(param_1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar6 = *puVar2 + 1;
      }
      if (iVar6 != 0) goto LAB_00465231;
    }
    operator_delete();
  }
LAB_00465231:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465244  FUN_00465244   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00465244(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046524c  FUN_0046524c   (1342 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046533c) */
/* WARNING: Removing unreachable block (ram,0x0046537f) */
/* WARNING: Removing unreachable block (ram,0x004652c3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffc4c : 0x004652d1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl FUN_0046524c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  uint *puVar6;
  undefined4 local_3b0;
  undefined1 local_38c [8];
  int local_384;
  int local_37c [206];
  undefined1 local_44 [8];
  undefined *local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_c;
  
  __InitExceptBlockLDTC(0x4fbf74);
  if ((param_3 == 0x1d42) || (param_3 == 0x3160)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    local_20 = 0;
    local_1c = 0;
    local_c = 0;
    local_24 = 8;
    FUN_00466e98(param_1,param_4,(int)&local_24);
    iVar4 = local_1c - local_20;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    if (iVar4 >> 7 != 0) {
      local_2c = &DAT_00513d64;
      local_3c = &DAT_00513d64;
      if (param_6 != 0) {
        FUN_004cf384((int)local_34,param_6);
      }
      if (param_5 != 0) {
        FUN_004cf384((int)local_44,param_5);
      }
      piVar1 = FUN_0045e25c(*(undefined4 **)(param_1 + 0x10),(uint)(param_3 == 0x3160));
      FUN_004733d8(piVar1,(int)&local_24,param_4,(int)local_44,(int)local_34,0,0,-1);
      uVar3 = (uint)(param_3 == 0x3160);
      if (local_3c != (undefined *)0x0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          piVar1 = (int *)(local_3c + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1 + 1;
          }
          if (iVar5 != 0) goto LAB_0046549b;
        }
        operator_delete();
        local_3c = (undefined *)0x0;
      }
LAB_0046549b:
      if (local_2c != (undefined *)0x0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar1 = (int *)(local_2c + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1 + 1;
          }
          if (iVar5 != 0) goto LAB_00465531;
        }
        operator_delete();
        local_2c = (undefined *)0x0;
      }
LAB_00465531:
      FUN_0040b62c(&local_24,local_20,local_1c);
      operator_delete();
      *in_FS_OFFSET = local_3b0;
      return uVar3;
    }
    FUN_0040b62c(&local_24,local_20,local_1c);
    operator_delete();
  }
  if (iVar5 == 0) {
    piVar1 = (int *)FUN_00422fc4(param_1);
    iVar4 = FUN_00423c2c(piVar1);
    if (iVar4 < 1) goto LAB_004655cd;
  }
  else {
LAB_004655cd:
    FUN_0045dbd8(*(int **)(param_1 + 0x10),param_2);
    piVar1 = FUN_00475a74(local_37c,0,param_2,param_1,param_4,iVar5);
    iVar5 = (**(code **)(piVar1[3] + 0x14))();
    ExternalLookupViewWindows::_dtor(local_37c,2);
    FUN_0045dbd8(*(int **)(param_1 + 0x10),param_2);
    if (iVar5 != 1) {
      *in_FS_OFFSET = local_3b0;
      return 0;
    }
    param_3 = 0x31a6;
  }
  puVar6 = *(uint **)(param_4 + 8);
  puVar2 = FUN_00422fc4(param_1);
  uVar3 = FUN_00423078((int)puVar2,puVar6,param_3);
  if (uVar3 == 0) {
    FUN_00464a94((int)local_38c,param_1,0x18ec);
    (**(code **)(*(int *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x1b) + 0x30))();
    if (local_384 != 0) {
      if (*(int *)(local_384 + -0xc) != -1) {
        piVar1 = (int *)(local_384 + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1 + 1;
        }
        if (iVar5 != 0) goto LAB_0046577d;
      }
      operator_delete();
    }
  }
LAB_0046577d:
  *in_FS_OFFSET = local_3b0;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046583c  FUN_0046583c   (318 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046583c(undefined4 param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4fc064);
  iVar3 = 0;
  iVar2 = 0;
  std::string::string_from_cstr((int)local_14,param_2);
  FUN_00437470((int)local_24,(int)local_14);
  FUN_00435a1c((int)local_24,iVar2,iVar3);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar1 = (int *)(local_1c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004658fc;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_004658fc:
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00465969;
    }
    operator_delete();
  }
LAB_00465969:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046597c  FUN_0046597c   (231 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046597c(int param_1,uint *param_2,uint *param_3)

{
  BOOL BVar1;
  char *pcVar2;
  HGLOBAL pvVar3;
  LPSTR pCVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  __InitExceptBlockLDTC(0x4fc0b0);
  FUN_0048ba8c(&local_5,*(HWND *)(**(int **)(param_1 + 0x10) + 0xc),'\x01');
  BVar1 = EmptyClipboard();
  if (BVar1 != 0) {
    if (param_2 != (uint *)0x0) {
      pcVar2 = strlen(param_2);
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)(pcVar2 + 1));
      pCVar4 = GlobalLock(pvVar3);
      lstrcpyA(pCVar4,(LPCSTR)param_2);
      GlobalUnlock(pvVar3);
      SetClipboardData(1,pvVar3);
    }
    if (param_3 != (uint *)0x0) {
      pcVar2 = strlen(param_3);
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)(pcVar2 + 1));
      pCVar4 = GlobalLock(pvVar3);
      lstrcpyA(pCVar4,(LPCSTR)param_3);
      GlobalUnlock(pvVar3);
      SetClipboardData(0x81,pvVar3);
    }
  }
  FUN_0048bc08(&local_5);
  OWL::TClipboard::_dtor(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465a64  FUN_00465a64   (27 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00465a64(int param_1,int param_2)

{
  FUN_004987c4(*(int *)(param_1 + 0x14),*(uint **)(param_2 + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465a80  FUN_00465a80   (2143 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00465c66) */
/* WARNING: Removing unreachable block (ram,0x00465d78) */
/* WARNING: Removing unreachable block (ram,0x00465d18) */
/* WARNING: Removing unreachable block (ram,0x00465d6b) */
/* WARNING: Removing unreachable block (ram,0x00465e21) */
/* WARNING: Removing unreachable block (ram,0x00465e5a) */
/* WARNING: Removing unreachable block (ram,0x00465e68) */
/* WARNING: Removing unreachable block (ram,0x00465e8f) */
/* WARNING: Removing unreachable block (ram,0x00465e79) */
/* WARNING: Removing unreachable block (ram,0x00465e88) */
/* WARNING: Removing unreachable block (ram,0x00465e81) */
/* WARNING: Removing unreachable block (ram,0x00465e94) */
/* WARNING: Removing unreachable block (ram,0x00465e98) */
/* WARNING: Removing unreachable block (ram,0x00465ef2) */
/* WARNING: Removing unreachable block (ram,0x00465f35) */
/* WARNING: Removing unreachable block (ram,0x00466047) */
/* WARNING: Removing unreachable block (ram,0x00465fe7) */
/* WARNING: Removing unreachable block (ram,0x0046603a) */
/* WARNING: Removing unreachable block (ram,0x004660f0) */
/* WARNING: Removing unreachable block (ram,0x00466129) */
/* WARNING: Removing unreachable block (ram,0x00466137) */
/* WARNING: Removing unreachable block (ram,0x0046615e) */
/* WARNING: Removing unreachable block (ram,0x00466148) */
/* WARNING: Removing unreachable block (ram,0x00466157) */
/* WARNING: Removing unreachable block (ram,0x00466150) */
/* WARNING: Removing unreachable block (ram,0x00466163) */
/* WARNING: Removing unreachable block (ram,0x00466167) */
/* WARNING: Removing unreachable block (ram,0x004661c1) */
void __cdecl FUN_00465a80(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined *local_56c;
  undefined1 local_561;
  uint local_560;
  uint local_514;
  undefined4 *local_4c8;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  undefined4 local_4b8;
  undefined2 local_4a8;
  int local_49c;
  int local_444 [154];
  int local_1dc [3];
  int local_1d0;
  int local_a4;
  
  __InitExceptBlockLDTC(0x4fc154);
  iVar1 = FUN_004867e4(*(byte **)(param_1 + 0x150),*(char **)(param_1 + 0x160));
  if (iVar1 == 0) {
    local_4a8 = 8;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x10);
    }
    FUN_004132a8(local_1dc,0,uVar5,param_1);
    local_49c = local_49c + 0xd;
    local_4a8 = 0x14;
    (**(code **)(local_1d0 + 0x14))();
    if (local_a4 == 0) {
      PostQuitMessage(1);
    }
    local_4a8 = 0x20;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x10);
    }
    piVar2 = FUN_004862b0(local_444,0,uVar5,param_1,param_1 + 0x148,param_1 + 0x158);
    local_49c = local_49c + 0x10;
    iVar1 = (**(code **)(piVar2[3] + 0x14))();
    cVar7 = iVar1 == 1;
    local_49c = local_49c + -0x10;
    LicenseViewWindows::_dtor(local_444,2);
    if (cVar7 != '\0') {
      local_4bc = 0;
      local_4a8 = 0x14;
      do {
        local_56c = &DAT_004fb288;
        uVar6 = 0;
        do {
          local_4c4 = uVar6;
          if (1 < *(int *)(*(int *)(param_1 + 0x160) + -0xc) + 1) {
            FUN_004d48d8(param_1 + 0x158);
          }
          local_4c8 = (undefined4 *)(*(int *)(param_1 + 0x160) + -0xc);
          if (local_4c8 != &DAT_00513d58) {
            *local_4c8 = 0xffffffff;
          }
          local_4c0 = (uint)*(char *)(*(int *)(param_1 + 0x160) + local_4c4);
          uVar3 = FUN_004e3054(local_4c0);
          local_4a8 = 0x14;
          if (uVar3 - 0x40 != *(int *)(local_56c + local_4bc * 0x28)) break;
          uVar6 = uVar6 + 1;
          local_56c = local_56c + 4;
        } while (uVar6 < 10);
        if (9 < uVar6) {
          if (*(int *)(*(int *)(param_1 + 0x160) + -4) == 0) {
            std::string::replace_fill(param_1 + 0x158,*(uint *)(*(int *)(param_1 + 0x160) + -4),0,
                         -*(int *)(*(int *)(param_1 + 0x160) + -4),0);
          }
          else {
            local_514 = *(uint *)(*(int *)(param_1 + 0x160) + -4);
            local_560 = *(uint *)(*(int *)(param_1 + 0x160) + -4);
            local_561 = 0;
            uVar6 = local_560;
            if (local_514 < local_560) {
              uVar6 = local_514;
            }
            FUN_004cfad4(param_1 + 0x158,0,uVar6,(uint)&local_561,0,0,0);
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x160) + -0xc);
          if (puVar4 != &DAT_00513d58) {
            *puVar4 = 0;
          }
        }
        local_4bc = local_4bc + 1;
      } while (local_4bc < 4);
      FUN_00466aa0(param_1);
    }
    local_49c = local_49c + -0xd;
    IntroductionViewWindows::_dtor(local_1dc,2);
    local_4a8 = 0;
  }
  FUN_00451784(*(int **)(param_1 + 0x10),0);
  iVar1 = FUN_004867cc(*(byte **)(param_1 + 0x150),*(char **)(param_1 + 0x160));
  if (iVar1 == 0) {
    PostQuitMessage(1);
  }
  *in_FS_OFFSET = local_4b8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466370  FUN_00466370   (48 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00466370(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = **(int **)(param_1 + 0x10);
  }
  if (param_3 == iVar1) {
    FUN_0045de08(*(int **)(param_1 + 0x10),param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004663a0  FUN_004663a0   (1776 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046641b) */
/* WARNING: Removing unreachable block (ram,0x00466570) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004663a0(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  UINT *pUVar6;
  int *piVar7;
  UINT *pUVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_2a0 [248];
  undefined4 local_1a8;
  undefined *local_198;
  undefined *local_188;
  undefined *local_184;
  int *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  char *local_174;
  char *local_170;
  UINT local_16c;
  UINT local_168;
  UINT_PTR local_164;
  LPCSTR local_160;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 *local_158;
  undefined4 local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  undefined1 *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  int *local_128;
  undefined1 *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_110;
  uint local_10c;
  char *local_108;
  int local_104;
  undefined1 local_fd;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  undefined1 *local_e0;
  undefined *local_dc;
  undefined4 local_d8;
  UINT local_d4;
  uint auStack_d0 [20];
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int *local_54;
  undefined **local_4c [2];
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  char *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x4fc268);
  pUVar6 = &DAT_004fb350;
  pUVar8 = &local_d4;
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pUVar8 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar9 * -2 + 1;
    pUVar8 = pUVar8 + (uint)bVar9 * -2 + 1;
  }
  local_d8 = 0;
  local_e0 = local_14;
  local_dc = &DAT_00513d64;
  local_c = &DAT_00513d64;
  local_198 = &DAT_00513d64;
  local_64 = local_64 + 1;
  local_70 = 0x20;
  iVar4 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140));
  if (0 < iVar4) {
    local_70 = 0x2c;
    iVar4 = FUN_00452bcc(*(int *)(param_1 + 0x10));
    FUN_00408cbc(local_24,*(int *)(param_1 + 0x140),iVar4);
    local_64 = local_64 + 1;
    FUN_004cf384((int)local_14,(int)local_24);
    local_64 = local_64 + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_e4 = (int *)(local_1c + -0xc);
        if (local_e4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_e4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_e4 = *local_e4 + -1;
          iVar4 = *local_e4 + 1;
        }
        if (iVar4 != 0) goto LAB_00466534;
      }
      local_e8 = local_1c + -0xc;
      local_ec = local_1c + -0xc;
      operator_delete();
      local_f0 = 0;
      local_f4 = local_24;
      local_1c = 0;
      local_1a8 = 0;
    }
  }
LAB_00466534:
  iVar4 = 0;
  do {
    local_70 = 0x50;
    std::string::string_from_cstr((int)local_34,(uint *)auStack_d0[iVar4 * 3 + 1]);
    local_64 = local_64 + 1;
    local_70 = 0x44;
    local_fd = 0x2a;
    local_104 = *(int *)(local_2c + -4);
    local_108 = local_2c;
    pcVar2 = thunk_memchr(local_2c,'*',local_104);
    uVar12 = DAT_005140ac;
    if (pcVar2 != (char *)0x0) {
      uVar12 = (int)pcVar2 - (int)local_2c;
    }
    if (*(int *)(local_c + -4) == 0) {
      uVar1 = auStack_d0[iVar4 * 3];
      local_10c = (uVar12 + 2) - uVar1;
      if (*(uint *)(local_2c + -4) < uVar1) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 1;
        puVar11 = &LAB_004084c8;
        uVar10 = 0;
        local_70 = 0x68;
        local_110 = (uint *)FUN_004dc320(local_2a0,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)local_5c,local_110);
        local_64 = local_64 + 2;
        local_4c[0] = &std::logic_error::vftable;
        local_11c = 0;
        local_3c = (int *)0x0;
        local_70 = 0x74;
        if (local_54[-3] == -1 || local_54[-3] + 1 < 0) {
          local_12c = local_54[-1];
          local_134 = std::string::__getRep(local_44,local_12c,local_12c);
          local_138 = local_44;
          local_144 = local_134 + 3;
          local_13c = local_12c;
          local_140 = local_54;
          local_130 = local_144;
          local_3c = local_144;
          memcpy(local_144,local_54,local_12c);
        }
        else {
          local_124 = local_44;
          local_120 = local_54;
          local_3c = local_54;
          local_128 = local_54 + -3;
          if (local_128 != &DAT_00513d58) {
            *local_128 = *local_128 + 1;
          }
        }
        local_70 = 0x68;
        local_4c[0] = &std::out_of_range::vftable;
        local_64 = local_64 + 2;
        if (local_54 != (int *)0x0) {
          if (local_54[-3] != -1) {
            local_148 = local_54 + -3;
            if (local_148 == &DAT_00513d58) {
              iVar5 = 1;
            }
            else if (local_148 == &DAT_00513d58) {
              iVar5 = 1;
            }
            else {
              *local_148 = *local_148 + -1;
              iVar5 = *local_148 + 1;
            }
            if (iVar5 != 0) goto LAB_00466834;
          }
          local_14c = local_54 + -3;
          local_150 = local_54 + -3;
          operator_delete();
          local_154 = 0;
          local_158 = local_5c;
          local_54 = (int *)0x0;
        }
LAB_00466834:
        local_70 = 0x5c;
        FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_4c,uVar10,puVar11,uVar12,uVar13,uVar14,uVar15);
      }
      uVar12 = *(int *)(local_2c + -4) - uVar1;
      local_159 = 0;
      if (local_10c < uVar12) {
        uVar12 = local_10c;
      }
      FUN_004cfad4((int)local_34,uVar1,uVar12,(uint)&local_159,0,0,0);
    }
    else {
      FUN_004cfad4((int)local_34,uVar12,1,(uint)local_c,*(uint *)(local_c + -4),0,
                   *(uint *)(local_c + -4));
    }
    local_168 = GetMenuState(*(HMENU *)(param_2 + 4),(&local_d4)[iVar4 * 3],0);
    local_70 = 0x44;
    local_160 = local_2c;
    local_164 = (&local_d4)[iVar4 * 3];
    local_16c = (&local_d4)[iVar4 * 3];
    BVar3 = ModifyMenuA(*(HMENU *)(param_2 + 4),local_16c,local_168,local_164,local_2c);
    local_15a = BVar3 != 0;
    local_64 = local_64 + -1;
    if (local_2c != (char *)0x0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar7 = (int *)(local_2c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar5 = *piVar7 + 1;
        }
        if (iVar5 != 0) goto LAB_004669bb;
      }
      local_170 = local_2c + -0xc;
      local_174 = local_2c + -0xc;
      operator_delete();
      local_178 = 0;
      local_2c = (char *)0x0;
      local_17c = local_34;
    }
LAB_004669bb:
    local_70 = 0x20;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  local_64 = local_64 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_180 = (int *)(local_c + -0xc);
      if (local_180 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_180 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_180 = *local_180 + -1;
        iVar4 = *local_180 + 1;
      }
      if (iVar4 != 0) goto LAB_00466a7a;
    }
    local_184 = local_c + -0xc;
    local_188 = local_c + -0xc;
    operator_delete();
  }
LAB_00466a7a:
  *in_FS_OFFSET = local_80;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466a90  FUN_00466a90   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00466a90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x150);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466aa0  FUN_00466aa0   (112 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00466aa0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [16];
  
  __InitExceptBlockLDTC(0x4fc338);
  FUN_00485bb8((int)local_14,0x51a850);
  FUN_00486058((int)local_14,param_1 + 0x148,param_1 + 0x158);
  Common::_dtor((int)local_14,2);
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b10  FUN_00466b10   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00466b10(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b18  FUN_00466b18   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00466b18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x140);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b28  FUN_00466b28   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00466b28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x144);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b38  FUN_00466b38   (829 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00466b7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00466b38(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fc3a8);
  local_c = (uint *)&DAT_00513d64;
  for (iVar3 = 0; iVar1 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140)), iVar3 < iVar1; iVar3 = iVar3 + 1)
  {
    if (local_c[-1] != 0) {
      FUN_00464a94((int)local_24,param_1,0x2e4a);
      std::string::append((int)local_14,(int)local_24);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar4 = (int *)(local_1c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar1 = *piVar4 + 1;
          }
          if (iVar1 != 0) goto LAB_00466c4a;
        }
        operator_delete();
        local_1c = 0;
      }
    }
LAB_00466c4a:
    FUN_00408cbc(local_34,*(int *)(param_1 + 0x140),iVar3);
    std::string::append((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar4 = (int *)(local_2c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00466cf7;
      }
      operator_delete();
      local_2c = 0;
    }
LAB_00466cf7:
  }
  FUN_00464a94((int)local_44,param_1,0x116c);
  std::string::append((int)local_14,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar4 = (int *)(local_3c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00466dc1;
    }
    operator_delete();
    local_3c = 0;
  }
LAB_00466dc1:
  FUN_004a7780(**(int **)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x2b),local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar3 = *puVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00466e64;
    }
    operator_delete();
  }
LAB_00466e64:
  *in_FS_OFFSET = local_68;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e78  FUN_00466e78   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00466e78(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e80  FUN_00466e80   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00466e80(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0045e25c(*(undefined4 **)(param_1 + 0x10),param_2);
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e98  FUN_00466e98   (427 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00466e98(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fc448);
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x140));
  std::string::string_from_cstr((int)local_14,puVar2);
  iVar3 = FUN_00466b28(param_1);
  iVar3 = *(int *)(iVar3 + 0x28);
  iVar10 = 0;
  while( true ) {
    iVar7 = TSDictionaryList::GetCount(iVar3);
    if (iVar7 <= iVar10) break;
    iVar7 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x140));
    do {
      iVar9 = iVar7 + -1;
      if (iVar7 < 1) break;
      pcVar6 = (char *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar9);
      pcVar4 = (char *)FUN_00408c98(iVar3,iVar10);
      iVar5 = FUN_004dcbf8(pcVar4,pcVar6);
      iVar7 = iVar9;
    } while (iVar5 != 0);
    if (iVar9 < 0) {
      if (local_c[-1] != 0) {
        std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
      }
      puVar2 = (uint *)FUN_00408c98(iVar3,iVar10);
      uVar1 = local_c[-1];
      pcVar6 = strlen(puVar2);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar6,0,(uint)pcVar6);
    }
    iVar10 = iVar10 + 1;
  }
  puVar8 = FUN_00407734(local_c);
  FUN_00409594((int)puVar8,param_2,param_3);
  TSDictionaryList::ReleaseDictionaries((int)puVar8);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_00467032;
    }
    operator_delete();
  }
LAB_00467032:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467044  FUN_00467044   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00467044(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045e4dc(*(int **)(param_1 + 0x10),param_2,param_3,param_4);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046715c  FUN_0046715c   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0046715c(HWND param_1,WPARAM param_2)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(param_1);
  if ((0x2e71 < iVar1) && (iVar1 < 0x2e86)) {
    SendMessageA(param_1,0x30,param_2,1);
    InvalidateRect(param_1,(RECT *)0x0,0);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046719c  FUN_0046719c   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0046719c(HWND param_1,WPARAM param_2)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(param_1);
  if ((0x2e99 < iVar1) && (iVar1 < 0x2eae)) {
    SendMessageA(param_1,0x30,param_2,1);
    InvalidateRect(param_1,(RECT *)0x0,0);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004671dc  FUN_004671dc   (952 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_004671dc(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_50;
  undefined1 local_28 [8];
  int local_20;
  int *local_18;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4fc4f0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x60);
    param_1[0x60] = (int)(param_1 + 0x5d);
    param_1[0x61] = (int)(param_1 + 0x5e);
    param_1[1] = (int)(param_1 + 0x5d);
    param_1[2] = (int)(param_1 + 0x5e);
    param_1[0x5c] = 0;
    param_1[0x5f] = 0;
    param_1[0x5d] = (int)&OWL::TEventHandler::vftable;
    param_1[0x5e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x60,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x110;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x110;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00413cf4(param_1,1,0x4fc474,uVar1,param_4,(uint *)0x2e68,1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x110;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x110;
  param_1[3] = (int)&TEAQuickReferenceViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fc7c4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fc7d0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fc7dc;
  param_1[0x18] = (int)param_3;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_5;
  FUN_004ac4b8(param_1 + 0x2f,0,*param_1,0x2eae,0,0);
  param_1[0x5b] = 0;
  uVar2 = 0;
  do {
    local_18 = (int *)operator_new();
    if (local_18 != (int *)0x0) {
      iVar4 = 1;
      std::string::string_from_cstr((int)local_14,(uint *)("TEAQuickReference" + 0x11));
      FUN_0041d588(local_18,0,param_1,uVar2 + 0x2e86,(int)local_14,iVar4);
    }
    param_1[uVar2 + 0x19] = (int)local_18;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_0046747f;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0046747f:
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 0;
  do {
    piVar3 = (int *)operator_new();
    if (piVar3 != (int *)0x0) {
      iVar4 = 0;
      std::string::string_from_cstr((int)local_28,(uint *)("TEAQuickReference" + 0x11));
      FUN_0041d588(piVar3,0,param_1,uVar2 + 0x2e72,(int)local_28,iVar4);
    }
    param_1[uVar2 + 0x23] = (int)piVar3;
    if (local_20 != 0) {
      if (*(int *)(local_20 + -0xc) != -1) {
        piVar3 = (int *)(local_20 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00467572;
      }
      operator_delete();
      local_20 = 0;
    }
LAB_00467572:
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      *in_FS_OFFSET = local_50;
      return param_1;
    }
  } while( true );
}

} // namespace tea
