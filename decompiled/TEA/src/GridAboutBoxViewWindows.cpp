// TEA.exe — application module "GridAboutBoxViewWindows"
// 20 functions, 0x004350d4..0x00437fc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004350d4  GridAboutBoxViewWindows::~GridAboutBoxViewWindows   (471 bytes)   [rtti:dtor destructor]
//   written in code as GridAboutBoxViewWindows::_dtor
void __cdecl GridAboutBoxViewWindows::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f321c);
  if (param_1 == (int *)0x0) goto LAB_0043529b;
  param_1[3] = (int)&GridAboutBoxViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f3310;
  *(undefined ***)param_1[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f3328;
  if (param_1[0xb6] != 0) {
    if (*(int *)(param_1[0xb6] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xb6] + -0xc);
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
      if (iVar1 != 0) goto LAB_004351b0;
    }
    operator_delete();
    param_1[0xb6] = 0;
  }
LAB_004351b0:
  PVWURL::_dtor(param_1 + 0x7e,2);
  PVWURL::_dtor(param_1 + 0x48,2);
  PVWEdit::_dtor(param_1 + 0x18,2);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x280;
  PropertiesViewWindows::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x280;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0xbc,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0xba,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0043529b:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004352ac  GridAboutBoxViewWindows::vf11   (36 bytes)   [rtti:vtable virtual slot 11]
void __cdecl GridAboutBoxViewWindows::vf11(int *param_1)

{
  PropertiesViewWindows::vf11(param_1);
  FUN_0041b474(param_1 + 0x18,(int)(param_1 + 0xb4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004354bc  FUN_004354bc   (77 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_004354bc(HWND param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  CHAR local_38;
  char local_37 [51];
  
  GetClassNameA(param_1,&local_38,0x32);
  pcVar2 = &local_38;
  pcVar3 = "SysHeader32";
  do {
    if (*pcVar2 != *pcVar3) {
      return 1;
    }
    bVar4 = true;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 != pcVar3[1]) {
      return 1;
    }
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (bVar4) {
    *param_2 = param_1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043550c  FUN_0043550c   (39 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0043550c(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  if ((param_2 == 1) && (param_4 != 0)) {
    SendMessageA(param_1,0x466,1,param_4);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435534  FUN_00435534   (341 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00435557) */
int __cdecl FUN_00435534(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f33fc);
  pcVar1 = thunk_memchr(*(char **)(param_2 + 8),' ',*(int *)(*(int *)(param_2 + 8) + -4));
  iVar2 = (*(int *)&DAT_005140ac);
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_2 + 8);
  }
  if (iVar2 == -1) {
    FUN_00435880(param_1,(uint *)&DAT_004f357f,param_2);
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  puVar4 = (uint *)&DAT_004f357d;
  FUN_00435880((int)local_14,(uint *)&DAT_004f357c,param_2);
  FUN_00401d10(param_1,(int)local_14,puVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar2 != 0) goto LAB_00435644;
    }
    operator_delete();
  }
LAB_00435644:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043568c  FUN_0043568c   (497 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
bool __cdecl FUN_0043568c(HWND param_1,LPCSTR param_2,int param_3)

{
  uint uVar1;
  HRESULT HVar2;
  LPITEMIDLIST pidl;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  _browseinfoA local_1ac;
  undefined1 local_18c [268];
  int *local_80;
  int *local_70;
  int *local_60;
  IMalloc *local_5c;
  int *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined1 *local_4c;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f3640);
  local_28 = 0x14;
  local_c = (int *)0x0;
  bVar5 = false;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_48 = std::string::__getRep(local_14,uVar1,uVar1);
    local_4c = local_14;
    local_80 = local_48 + 3;
    local_54 = *(undefined4 **)(param_3 + 8);
    local_58 = local_80;
    local_50 = uVar1;
    local_44 = local_80;
    local_c = local_80;
    memcpy(local_80,local_54,uVar1);
  }
  else {
    local_70 = *(int **)(param_3 + 8);
    local_40 = local_14;
    piVar4 = local_70 + -3;
    local_3c = local_70;
    local_c = local_70;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_1c = local_1c + 1;
  local_28 = 8;
  local_18c[0] = '\0';
  memset(&local_1ac.hwndOwner,0,0x20);
  local_1ac.hwndOwner = param_1;
  local_1ac.lpszTitle = param_2;
  local_1ac.ulFlags = 1;
  local_1ac.lpfn = FUN_0043550c;
  if (local_c[-1] != 0) {
    local_1ac.lParam = (LPARAM)local_c;
  }
  HVar2 = SHGetMalloc(&local_5c);
  if (HVar2 == 0) {
    pidl = SHBrowseForFolderA(&local_1ac);
    bVar5 = pidl != (LPITEMIDLIST)0x0;
    if (bVar5) {
      SHGetPathFromIDListA(pidl,local_18c);
      FUN_004cf41c(param_3,(uint *)local_18c);
      (*local_5c->lpVtbl->Free)(local_5c,local_5c->lpVtbl);
    }
    (*local_5c->lpVtbl->Release)((IMalloc *)local_5c->lpVtbl);
  }
  local_1c = local_1c + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar3 != 0) goto LAB_0043586b;
    }
    local_60 = local_c + -3;
    operator_delete();
  }
LAB_0043586b:
  *in_FS_OFFSET = local_38;
  return bVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435880  FUN_00435880   (409 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00435880(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f36a4);
  iVar2 = std::string::string_from_cstr((int)local_14,param_2);
  iVar3 = std::string::append(iVar2,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar3 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar3 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004359fe;
    }
    operator_delete();
  }
LAB_004359fe:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435a1c  FUN_00435a1c   (964 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00435a1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 uVar5;
  _PROCESS_INFORMATION local_f8;
  _STARTUPINFOA local_e8;
  LPSTR local_a0;
  LPSTR local_98;
  BOOL local_94;
  BOOL local_90;
  undefined1 *local_8c;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPSTR local_c;
  
  __InitExceptBlockLDTC(0x4f3728);
  memset(&local_e8.cb,0,0x44);
  local_e8.cb = 0x44;
  local_58 = 0x14;
  puVar4 = (uint *)&DAT_004f357d;
  FUN_00435880((int)local_24,(uint *)&DAT_004f357d,param_1);
  local_4c = local_4c + 1;
  FUN_00401d10((int)local_14,(int)local_24,puVar4);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00435b05;
    }
    local_6c = local_1c + -0xc;
    local_70 = local_1c + -0xc;
    operator_delete();
    local_74 = 0;
    local_78 = local_24;
    local_1c = 0;
  }
LAB_00435b05:
  if (param_2 != 0) {
    local_58 = 0x2c;
    FUN_00435534((int)local_34,param_2);
    local_4c = local_4c + 1;
    std::string::append((int)local_14,(int)local_34);
    local_4c = local_4c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar3 = (int *)(local_2c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435bb3;
      }
      local_7c = local_2c + -0xc;
      operator_delete();
      local_80 = 0;
      local_84 = local_34;
      local_2c = 0;
    }
  }
LAB_00435bb3:
  if (param_3 != 0) {
    local_58 = 0x44;
    FUN_00435534((int)local_44,param_3);
    local_4c = local_4c + 1;
    std::string::append((int)local_14,(int)local_44);
    local_4c = local_4c + -1;
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar3 = (int *)(local_3c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435c60;
      }
      local_88 = local_3c + -0xc;
      operator_delete();
      local_8c = local_44;
      local_3c = 0;
    }
  }
LAB_00435c60:
  local_58 = 8;
  BVar2 = CreateProcessA((LPCSTR)0x0,local_c,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_e8,&local_f8);
  if (BVar2 == 0) {
    uVar5 = 0;
    local_4c = local_4c + -1;
    if (local_c != (LPSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435dce;
      }
      local_a0 = local_c + -0xc;
      operator_delete();
    }
LAB_00435dce:
    *in_FS_OFFSET = local_68;
    return uVar5;
  }
  if (local_f8.hThread != (HANDLE)0x0) {
    local_90 = CloseHandle(local_f8.hThread);
  }
  if (local_f8.hProcess != (HANDLE)0x0) {
    local_94 = CloseHandle(local_f8.hProcess);
  }
  uVar5 = 1;
  local_4c = local_4c + -1;
  if (local_c != (LPSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00435d42;
    }
    local_98 = local_c + -0xc;
    operator_delete();
  }
LAB_00435d42:
  *in_FS_OFFSET = local_68;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435de0  FUN_00435de0   (3505 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00435f7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00435de0(int param_1,int param_2)

{
  char *pcVar1;
  HANDLE hFindFile;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 local_608 [248];
  undefined4 local_510;
  int *local_500;
  int *local_4f0;
  undefined1 local_4e8 [264];
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3c0;
  _WIN32_FIND_DATAA local_3b8;
  undefined *local_270;
  int *local_260;
  int *local_250;
  int *local_240;
  int *local_23c;
  int *local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined *local_22c;
  undefined *local_228;
  int *local_224;
  undefined1 *local_220;
  undefined4 local_21c;
  int local_218;
  int local_214;
  int *local_210;
  uint local_20c;
  undefined1 local_205;
  uint local_204;
  undefined1 *local_200;
  undefined4 local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int *local_1e8;
  uint local_1e4;
  undefined1 *local_1e0;
  int *local_1dc;
  int *local_1d8;
  uint local_1d4;
  int *local_1d0;
  undefined1 *local_1cc;
  int *local_1c8;
  undefined4 local_1c4;
  uint *local_1b8;
  uint local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  int *local_198;
  uint local_194;
  undefined1 *local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  undefined1 *local_17c;
  int *local_178;
  undefined4 local_174;
  uint *local_168;
  int *local_15c;
  int *local_158;
  int *local_154;
  undefined1 *local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined *local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  int *local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int *local_11c;
  char *local_110;
  int local_10c;
  uint local_108;
  undefined1 *local_104;
  undefined *local_100;
  undefined4 local_fc;
  int *local_f8;
  undefined4 *local_f4;
  uint local_f0;
  undefined1 *local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int *local_dc;
  undefined1 *local_d8;
  int *local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int *local_8c;
  undefined1 local_84 [8];
  int *local_7c;
  undefined **local_74 [2];
  undefined1 local_6c [8];
  int *local_64;
  undefined **local_5c [2];
  undefined1 local_54 [8];
  int *local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f3894);
  local_b8 = 0x14;
  local_cc = param_2;
  local_d0 = 0;
  local_c = (int *)0x0;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    local_e0 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_e8 = std::string::__getRep(local_14,local_e0,local_e0);
    local_260 = local_e8 + 3;
    local_f0 = local_e0;
    local_f4 = *(undefined4 **)(local_cc + 8);
    local_f8 = local_260;
    local_ec = local_14;
    local_e4 = local_260;
    local_c = local_260;
    memcpy(local_260,local_f4,local_e0);
  }
  else {
    local_250 = *(int **)(param_2 + 8);
    local_dc = local_250 + -3;
    local_d8 = local_14;
    local_d4 = local_250;
    local_c = local_250;
    if (local_dc != &DAT_00513d58) {
      *local_dc = *local_dc + 1;
    }
  }
  local_fc = 0;
  local_104 = local_24;
  local_100 = &DAT_00513d64;
  local_1c = &DAT_00513d64;
  local_270 = &DAT_00513d64;
  local_ac = local_ac + 2;
  local_b8 = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = DAT_005140ac;
    if ((uint)local_c[-1] < DAT_005140ac) {
      uVar4 = local_c[-1];
    }
    local_110 = FUN_00420b88((char *)local_c,'\\',uVar4);
    local_108 = DAT_005140ac;
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)local_c;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < local_c[-1] - 1U) {
      if (local_10c != 0) {
        pcVar1 = strlen((uint *)&DAT_004f3581);
        FUN_004cfad4((int)local_24,0,0,0x4f3581,(uint)pcVar1,0,(uint)pcVar1);
      }
      hFindFile = FindFirstFileA((LPCSTR)local_c,&local_3b8);
      local_b8 = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        local_b8 = 0x68;
        FUN_00436b94(param_1,(int)local_14,(int)local_24);
        local_b8 = 0x74;
        local_ac = local_ac + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar3 = (int *)(local_1c + -0xc);
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
            if (iVar2 != 0) goto LAB_00436265;
          }
          local_144 = local_1c + -0xc;
          local_148 = local_1c + -0xc;
          operator_delete();
          local_14c = 0;
          local_150 = local_24;
          local_1c = (undefined *)0x0;
          local_3e0 = 0;
        }
LAB_00436265:
        local_ac = local_ac + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_154 = local_c + -3;
            if (local_154 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_154 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_154 = *local_154 + -1;
              iVar2 = *local_154 + 1;
            }
            if (iVar2 != 0) goto LAB_00436311;
          }
          local_158 = local_c + -3;
          local_15c = local_c + -3;
          operator_delete();
        }
LAB_00436311:
        *in_FS_OFFSET = local_c8;
        return param_1;
      }
      FindClose(hFindFile);
      local_b8 = 0x44;
      puVar11 = local_24;
      iVar2 = std::string::string_from_cstr((int)local_34,(uint *)local_3b8.cFileName);
      local_ac = local_ac + 1;
      FUN_00436b94((int)local_44,iVar2,(int)puVar11);
      local_ac = local_ac + 1;
      FUN_004cf384((int)local_24,(int)local_44);
      local_ac = local_ac + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_11c = (int *)(local_3c + -0xc);
          if (local_11c == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (local_11c == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *local_11c = *local_11c + -1;
            iVar2 = *local_11c + 1;
          }
          if (iVar2 != 0) goto LAB_004360f3;
        }
        local_120 = local_3c + -0xc;
        local_124 = local_3c + -0xc;
        operator_delete();
        local_128 = 0;
        local_12c = local_44;
        local_3c = 0;
        local_3c0 = 0;
      }
LAB_004360f3:
      local_b8 = 8;
      local_ac = local_ac + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          local_130 = (int *)(local_2c + -0xc);
          if (local_130 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_00436329;
        }
        local_134 = local_2c + -0xc;
        local_138 = local_2c + -0xc;
        operator_delete();
        local_13c = 0;
        local_140 = local_34;
        local_2c = 0;
        local_3d0 = 0;
      }
    }
LAB_00436329:
    uVar4 = local_108;
    if (DAT_005140ac - 0xe < local_108) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00408370;
      uVar5 = 0;
      local_b8 = 0xa4;
      local_168 = (uint *)FUN_004dc320(local_4e8,PTR_s_invalid_string_size_parameter_in_00516d20);
      std::string::string_from_cstr((int)local_84,local_168);
      local_ac = local_ac + 2;
      local_5c[0] = &std::logic_error::vftable;
      local_174 = 0;
      local_4c = (int *)0x0;
      local_b8 = 0xb0;
      if (local_7c[-3] == -1 || local_7c[-3] + 1 < 0) {
        local_184 = local_7c[-1];
        local_18c = std::string::__getRep(local_54,local_184,local_184);
        local_190 = local_54;
        local_500 = local_18c + 3;
        local_194 = local_184;
        local_198 = local_7c;
        local_19c = local_500;
        local_188 = local_500;
        local_4c = local_500;
        memcpy(local_500,local_7c,local_184);
      }
      else {
        local_17c = local_54;
        local_178 = local_7c;
        local_4c = local_7c;
        local_4f0 = local_7c;
        local_180 = local_7c + -3;
        if (local_180 != &DAT_00513d58) {
          *local_180 = *local_180 + 1;
        }
      }
      local_b8 = 0xa4;
      local_5c[0] = &std::length_error::vftable;
      local_ac = local_ac + 2;
      if (local_7c != (int *)0x0) {
        if (local_7c[-3] != -1) {
          local_1a0 = local_7c + -3;
          if (local_1a0 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (local_1a0 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *local_1a0 = *local_1a0 + -1;
            iVar2 = *local_1a0 + 1;
          }
          if (iVar2 != 0) goto LAB_00436583;
        }
        local_1a4 = local_7c + -3;
        local_1a8 = local_7c + -3;
        operator_delete();
        local_1ac = 0;
        local_1b0 = local_84;
        local_7c = (int *)0x0;
        local_510 = 0;
      }
LAB_00436583:
      local_b8 = 0x98;
      FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_5c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
    }
    if (uVar4 < (uint)local_c[-1]) {
      local_1b4 = local_c[-1] - uVar4;
      if ((uint)local_c[-1] < uVar4) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004084c8;
        uVar5 = 0;
        local_b8 = 0xd4;
        local_1b8 = (uint *)FUN_004dc320(local_608,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)local_94,local_1b8);
        local_ac = local_ac + 2;
        local_74[0] = &std::logic_error::vftable;
        local_1c4 = 0;
        local_64 = (int *)0x0;
        local_b8 = 0xe0;
        if (local_8c[-3] == -1 || local_8c[-3] + 1 < 0) {
          local_1d4 = local_8c[-1];
          local_1dc = std::string::__getRep(local_6c,local_1d4,local_1d4);
          local_1e0 = local_6c;
          local_1ec = local_1dc + 3;
          local_1e4 = local_1d4;
          local_1e8 = local_8c;
          local_1d8 = local_1ec;
          local_64 = local_1ec;
          memcpy(local_1ec,local_8c,local_1d4);
        }
        else {
          local_1cc = local_6c;
          local_1c8 = local_8c;
          local_64 = local_8c;
          local_1d0 = local_8c + -3;
          if (local_1d0 != &DAT_00513d58) {
            *local_1d0 = *local_1d0 + 1;
          }
        }
        local_b8 = 0xd4;
        local_74[0] = &std::out_of_range::vftable;
        local_ac = local_ac + 2;
        if (local_8c != (int *)0x0) {
          if (local_8c[-3] != -1) {
            local_1f0 = local_8c + -3;
            if (local_1f0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1f0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1f0 = *local_1f0 + -1;
              iVar2 = *local_1f0 + 1;
            }
            if (iVar2 != 0) goto LAB_00436826;
          }
          local_1f4 = local_8c + -3;
          local_1f8 = local_8c + -3;
          operator_delete();
          local_1fc = 0;
          local_200 = local_94;
          local_8c = (int *)0x0;
        }
LAB_00436826:
        local_b8 = 0x98;
        FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_74,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      local_204 = local_c[-1] - uVar4;
      local_205 = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      FUN_004cfad4((int)local_14,uVar4,local_20c,(uint)&local_205,0,0,0);
    }
    else {
      std::string::replace_fill((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
    }
    if (local_c + -3 != &DAT_00513d58) {
      local_c[-3] = 0;
    }
    local_10c = 1;
  }
  local_b8 = 0x104;
  puVar11 = local_24;
  FUN_004248a4((int)local_a4,(int)local_14);
  local_ac = local_ac + 1;
  FUN_00436b94(param_1,(int)local_a4,(int)puVar11);
  local_b8 = 0x110;
  local_ac = local_ac + -1;
  if (local_9c != 0) {
    if (*(int *)(local_9c + -0xc) != -1) {
      local_210 = (int *)(local_9c + -0xc);
      if (local_210 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_210 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_210 = *local_210 + -1;
        iVar2 = *local_210 + 1;
      }
      if (iVar2 != 0) goto LAB_00436a1c;
    }
    local_214 = local_9c + -0xc;
    local_218 = local_9c + -0xc;
    operator_delete();
    local_21c = 0;
    local_220 = local_a4;
    local_9c = 0;
  }
LAB_00436a1c:
  local_ac = local_ac + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_224 = (int *)(local_1c + -0xc);
      if (local_224 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_224 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_224 = *local_224 + -1;
        iVar2 = *local_224 + 1;
      }
      if (iVar2 != 0) goto LAB_00436acb;
    }
    local_228 = local_1c + -0xc;
    local_22c = local_1c + -0xc;
    operator_delete();
    local_230 = 0;
    local_234 = local_24;
    local_1c = (undefined *)0x0;
  }
LAB_00436acb:
  local_ac = local_ac + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_238 = local_c + -3;
      if (local_238 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_238 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_238 = *local_238 + -1;
        iVar2 = *local_238 + 1;
      }
      if (iVar2 != 0) goto LAB_00436b77;
    }
    local_23c = local_c + -3;
    local_240 = local_c + -3;
    operator_delete();
  }
LAB_00436b77:
  *in_FS_OFFSET = local_c8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436b94  FUN_00436b94   (638 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00436b94(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f3a00);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar2 = std::string::append((int)local_14,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar3 != 0) goto LAB_00436df7;
    }
    operator_delete();
  }
LAB_00436df7:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e14  FUN_00436e14   (315 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00436e14(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_43c [250];
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x4f3a64);
  sVar3 = GetFileTitleA(*(LPCSTR *)(param_2 + 8),(LPSTR)local_43c,1000);
  if (sVar3 == 0) {
    local_18 = 8;
    std::string::string_from_cstr(param_1,local_43c);
    *in_FS_OFFSET = local_28;
  }
  else {
    local_18 = 0x14;
    local_34 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      local_44 = std::string::__getRep(param_1,uVar2,uVar2);
      local_40 = local_44 + 3;
      *(int **)(param_1 + 8) = local_40;
      local_48 = param_1;
      local_50 = *(undefined4 **)(param_2 + 8);
      local_54 = *(undefined4 **)(param_1 + 8);
      local_4c = uVar2;
      memcpy(local_54,local_50,uVar2);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436f50  FUN_00436f50   (153 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00436f67) */
bool __cdecl FUN_00436f50(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(param_1 + 8),':',*(int *)(*(int *)(param_1 + 8) + -4));
  iVar2 = (*(int *)&DAT_005140ac);
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_1 + 8);
  }
  if (iVar2 == -1) {
    if ((*(int *)(*(char **)(param_1 + 8) + -4) == 0) || (**(char **)(param_1 + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(param_1 + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436fec  GetProgramDirectory   (362 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040909c. GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00437136) */
int __cdecl GetProgramDirectory(int param_1)

{
  DWORD DVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_154 [68];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f3acc);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_strrchr(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 8) = &DAT_00513d64;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_004d1c6c((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_00435de0(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
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
      if (iVar3 != 0) goto LAB_004370ed;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_004370ed:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437158  FUN_00437158   (791 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00437199) */
int __cdecl FUN_00437158(int param_1)

{
  uint uVar1;
  HRESULT HVar2;
  IMalloc *This;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  uint local_1a4 [67];
  undefined *local_98;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  int local_54;
  LPCITEMIDLIST local_50;
  IMalloc *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f3b60);
  local_c = (undefined4 *)&DAT_00513d64;
  local_98 = &DAT_00513d64;
  local_2c = local_2c + 1;
  local_38 = 0x20;
  HVar2 = SHGetMalloc(&local_4c);
  if (HVar2 == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      BVar3 = SHGetPathFromIDListA(local_50,(LPSTR)local_1a4);
      if (BVar3 != 0) {
        FUN_004cf41c((int)local_14,local_1a4);
      }
      This = (IMalloc *)((code *)local_4c->lpVtbl->Free)((IMalloc *)local_4c->lpVtbl,local_50);
    }
    (*local_4c->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    local_38 = 0x2c;
    GetProgramDirectory((int)local_24);
    local_2c = local_2c + 1;
    FUN_004cf384((int)local_14,(int)local_24);
    local_2c = local_2c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00437301;
      }
      local_54 = local_1c + -0xc;
      operator_delete();
      local_58 = 0;
      local_5c = local_24;
      local_1c = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      FUN_004d48d8((int)local_14);
    }
    if (local_c + -3 != &DAT_00513d58) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x5c);
    }
  }
LAB_00437301:
  local_38 = 0x44;
  local_60 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_70 = std::string::__getRep(param_1,uVar1,uVar1);
    local_6c = local_70 + 3;
    *(int **)(param_1 + 8) = local_6c;
    local_74 = param_1;
    local_7c = local_c;
    local_80 = *(undefined4 **)(param_1 + 8);
    local_78 = uVar1;
    memcpy(local_80,local_c,uVar1);
  }
  else {
    local_64 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_68 = param_1;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_38 = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00437454;
    }
    local_84 = local_c + -3;
    local_88 = local_c + -3;
    operator_delete();
  }
LAB_00437454:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437470  FUN_00437470   (1103 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00437470(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f3c40);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_00436f50(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar5 = std::string::__getRep(param_1,uVar6,uVar6);
      *(int **)(param_1 + 8) = piVar5 + 3;
      memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar6);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    *in_FS_OFFSET = local_58;
    return param_1;
  }
  local_c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar6,uVar6);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar6);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_0043771d:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_00420b88((char *)local_c,';',uVar6);
    iVar4 = (*(int *)&DAT_005140ac);
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == -1) break;
    GetProgramDirectory((int)local_24);
    FUN_004d5a8c((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043771d;
      }
      operator_delete();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  GetProgramDirectory((int)local_34);
  FUN_00436b94(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00437811;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_00437811:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004378a4;
    }
    operator_delete();
  }
LAB_004378a4:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004378c0  FUN_004378c0   (102 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004378c0(int param_1,int param_2,LPFILETIME param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  LPFILETIME lpLastWriteTime;
  bool bVar2;
  
  bVar2 = false;
  hFile = CreateFileA(*(LPCSTR *)(param_1 + 8),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    if (param_2 == 0) {
      lpLastWriteTime = (LPFILETIME)0x0;
    }
    else {
      lpLastWriteTime = param_3;
      param_3 = (LPFILETIME)0x0;
    }
    BVar1 = GetFileTime(hFile,param_3,(LPFILETIME)0x0,lpLastWriteTime);
    bVar2 = BVar1 != 0;
    CloseHandle(hFile);
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437928  FUN_00437928   (492 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00437928(int param_1,LPFILETIME param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  _SYSTEMTIME local_74;
  int *local_60;
  char *local_5c;
  int *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined1 *local_4c;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f3cec);
  bVar1 = FUN_004378c0(param_1,0,param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    GetSystemTime(&local_74);
    SystemTimeToFileTime(&local_74,param_2);
  }
  local_28 = 0x14;
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar5 = *(uint *)(*(int *)(param_1 + 8) + -4);
    local_48 = std::string::__getRep(local_14,uVar5,uVar5);
    local_4c = local_14;
    local_58 = local_48 + 3;
    local_54 = *(undefined4 **)(param_1 + 8);
    local_50 = uVar5;
    local_44 = local_58;
    local_c = local_58;
    memcpy(local_58,local_54,uVar5);
  }
  else {
    local_3c = *(int **)(param_1 + 8);
    local_40 = local_14;
    piVar4 = local_3c + -3;
    local_c = local_3c;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_1c = local_1c + 1;
  local_28 = 8;
  uVar5 = DAT_005140ac;
  if ((uint)local_c[-1] < DAT_005140ac) {
    uVar5 = local_c[-1];
  }
  local_5c = FUN_00420b88((char *)local_c,'\\',uVar5);
  uVar5 = DAT_005140ac;
  if (local_5c != (char *)0x0) {
    uVar5 = (int)local_5c - (int)local_c;
  }
  if (uVar5 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar5 + 1;
  }
  pcVar2 = strlen((uint *)"Backup of ");
  FUN_004cfad4((int)local_14,uVar5,0,0x4f35ea,(uint)pcVar2,0,(uint)pcVar2);
  thunk_FUN_004e0588((LPCSTR)local_c);
  FUN_004df65c(*(LPCSTR *)(param_1 + 8),(LPCSTR)local_c);
  local_1c = local_1c + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar3 != 0) goto LAB_00437b03;
    }
    local_60 = local_c + -3;
    operator_delete();
  }
LAB_00437b03:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437bd4  FUN_00437bd4   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00437bd4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  uint local_44 [7];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x4f3d34);
  FUN_004e0344((undefined1 *)local_44,&DAT_004f360f);
  local_18 = 8;
  std::string::string_from_cstr(param_1,local_44);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437eb0  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4f3d58);
  if (param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437fc4  FUN_00437fc4   (7864 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00438034) */
/* WARNING: Removing unreachable block (ram,0x00438089) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00437fc4(int param_1,int param_2)

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
  undefined *local_204;
  undefined4 local_200;
  int local_1fc;
  undefined *local_1f8;
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
  int local_c [2];
  
  bVar13 = 0;
  __InitExceptBlockLDTC(0x4f43e0);
  local_1f4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_1f8 = &DAT_00513d64;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  local_1fc = param_1;
  local_200 = 0;
  local_208 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_204 = &DAT_00513d64;
  *(undefined **)(param_1 + 0x18) = &DAT_00513d64;
  local_1d4 = local_1d4 + 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
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
    local_224 = std::string::__getRep(iVar8,local_21c,local_21c);
    local_220 = local_224 + 3;
    *(int **)(param_1 + 0x1e8) = local_220;
    local_22c = local_21c;
    local_230 = *(undefined4 **)(param_2 + 8);
    local_234 = *(undefined4 **)(param_1 + 0x1e8);
    local_228 = iVar8;
    memcpy(local_234,local_230,local_21c);
  }
  else {
    local_210 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x1e8) = local_210;
    local_218 = (int *)(*(int *)(param_1 + 0x1e8) + -0xc);
    local_214 = iVar8;
    if (local_218 != &DAT_00513d58) {
      *local_218 = *local_218 + 1;
    }
  }
  local_1d4 = local_1d4 + 1;
  local_1e0 = 8;
  LoadPatternOptions(param_1,param_2);
  local_1e0 = 0x44;
  Persist::Persist(local_c,param_2,0,0);
  local_1d4 = local_1d4 + 1;
  puVar7 = (uint *)(param_1 + 0x30);
  local_1e0 = 0x5c;
  iVar2 = std::string::string_from_cstr((int)local_2c,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_3c,(uint *)"FontPattern");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_3c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar9 = (int *)(local_34 + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_0043832c;
    }
    local_248 = local_34 + -0xc;
    local_24c = local_34 + -0xc;
    operator_delete();
    local_250 = 0;
    local_254 = local_3c;
    local_34 = 0;
  }
LAB_0043832c:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      local_258 = (int *)(local_24 + -0xc);
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
      if (iVar2 != 0) goto LAB_004383e1;
    }
    local_25c = local_24 + -0xc;
    local_260 = local_24 + -0xc;
    operator_delete();
    local_264 = 0;
    local_268 = local_2c;
    local_24 = 0;
  }
LAB_004383e1:
  puVar7 = (uint *)(param_1 + 0x70);
  local_1e0 = 0x80;
  iVar2 = std::string::string_from_cstr((int)local_4c,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_5c,(uint *)"FontOutput");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_5c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      local_27c = (int *)(local_54 + -0xc);
      if (local_27c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_27c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_27c = *local_27c + -1;
        iVar2 = *local_27c + 1;
      }
      if (iVar2 != 0) goto LAB_004384e4;
    }
    local_280 = local_54 + -0xc;
    local_284 = local_54 + -0xc;
    operator_delete();
    local_288 = 0;
    local_28c = local_5c;
    local_54 = 0;
  }
LAB_004384e4:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      local_290 = (int *)(local_44 + -0xc);
      if (local_290 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_290 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_290 = *local_290 + -1;
        iVar2 = *local_290 + 1;
      }
      if (iVar2 != 0) goto LAB_00438599;
    }
    local_294 = local_44 + -0xc;
    local_298 = local_44 + -0xc;
    operator_delete();
    local_29c = 0;
    local_2a0 = local_4c;
    local_44 = 0;
  }
LAB_00438599:
  puVar7 = (uint *)(param_1 + 0xb0);
  local_1e0 = 0xa4;
  iVar2 = std::string::string_from_cstr((int)local_6c,(uint *)"0,0,0,-16,0,0,0,400,255,0,0,0,0,0,0,49,Courier New");
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_7c,(uint *)"FontOutputAnnotation");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_7c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      local_2b4 = (int *)(local_74 + -0xc);
      if (local_2b4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2b4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2b4 = *local_2b4 + -1;
        iVar2 = *local_2b4 + 1;
      }
      if (iVar2 != 0) goto LAB_0043869e;
    }
    local_2b8 = local_74 + -0xc;
    local_2bc = local_74 + -0xc;
    operator_delete();
    local_2c0 = 0;
    local_2c4 = local_7c;
    local_74 = 0;
  }
LAB_0043869e:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      local_2c8 = (int *)(local_64 + -0xc);
      if (local_2c8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2c8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2c8 = *local_2c8 + -1;
        iVar2 = *local_2c8 + 1;
      }
      if (iVar2 != 0) goto LAB_00438753;
    }
    local_2cc = local_64 + -0xc;
    local_2d0 = local_64 + -0xc;
    operator_delete();
    local_2d4 = 0;
    local_2d8 = local_6c;
    local_64 = 0;
  }
LAB_00438753:
  puVar7 = (uint *)(param_1 + 0xf0);
  local_1e0 = 200;
  iVar2 = std::string::string_from_cstr((int)local_8c,(uint *)"0,0,0,-13,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_9c,(uint *)"FontPrinting");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_9c,iVar2,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      local_2ec = (int *)(local_94 + -0xc);
      if (local_2ec == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2ec == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2ec = *local_2ec + -1;
        iVar2 = *local_2ec + 1;
      }
      if (iVar2 != 0) goto LAB_00438876;
    }
    local_2f0 = local_94 + -0xc;
    local_2f4 = local_94 + -0xc;
    operator_delete();
    local_2f8 = 0;
    local_2fc = local_9c;
    local_94 = 0;
  }
LAB_00438876:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      local_300 = (int *)(local_84 + -0xc);
      if (local_300 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_300 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_300 = *local_300 + -1;
        iVar2 = *local_300 + 1;
      }
      if (iVar2 != 0) goto LAB_0043892e;
    }
    local_304 = local_84 + -0xc;
    local_308 = local_84 + -0xc;
    operator_delete();
    local_30c = 0;
    local_310 = local_8c;
    local_84 = 0;
  }
LAB_0043892e:
  puVar7 = (uint *)(param_1 + 0x2c);
  local_1e0 = 0xec;
  std::string::string_from_cstr((int)local_ac,(uint *)"DefinitionBackgroundColor");
  local_1d4 = local_1d4 + 1;
  FUN_0044eb80((int)local_c,(int)local_ac,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_a4 != 0) {
    if (*(int *)(local_a4 + -0xc) != -1) {
      local_31c = (int *)(local_a4 + -0xc);
      if (local_31c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_31c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_31c = *local_31c + -1;
        iVar2 = *local_31c + 1;
      }
      if (iVar2 != 0) goto LAB_00438a30;
    }
    local_320 = local_a4 + -0xc;
    local_324 = local_a4 + -0xc;
    operator_delete();
    local_328 = 0;
    local_32c = local_ac;
    local_a4 = 0;
  }
LAB_00438a30:
  puVar7 = (uint *)(param_1 + 0x170);
  local_1e0 = 0x104;
  std::string::string_from_cstr((int)local_bc,(uint *)"255,0,0,-16,0,0,0,400,255,0,0,0,3,2,1,18,Times New Roman");
  puVar14 = local_bc;
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_cc,(uint *)"DefinitionHighlightFont");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_cc,(int)puVar14,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_c4 != 0) {
    if (*(int *)(local_c4 + -0xc) != -1) {
      local_340 = (int *)(local_c4 + -0xc);
      if (local_340 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_340 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_340 = *local_340 + -1;
        iVar2 = *local_340 + 1;
      }
      if (iVar2 != 0) goto LAB_00438b5f;
    }
    local_344 = local_c4 + -0xc;
    local_348 = local_c4 + -0xc;
    operator_delete();
    local_34c = 0;
    local_350 = local_cc;
    local_c4 = 0;
  }
LAB_00438b5f:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_b4 != 0) {
    if (*(int *)(local_b4 + -0xc) != -1) {
      local_354 = (int *)(local_b4 + -0xc);
      if (local_354 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_354 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_354 = *local_354 + -1;
        iVar2 = *local_354 + 1;
      }
      if (iVar2 != 0) goto LAB_00438c29;
    }
    local_358 = local_b4 + -0xc;
    local_35c = local_b4 + -0xc;
    operator_delete();
    local_360 = 0;
    local_364 = local_bc;
    local_b4 = 0;
  }
LAB_00438c29:
  puVar7 = (uint *)(param_1 + 0x130);
  local_1e0 = 0x128;
  std::string::string_from_cstr((int)local_dc,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,3,2,1,18,Times New Roman");
  puVar14 = local_dc;
  local_1d4 = local_1d4 + 1;
  std::string::string_from_cstr((int)local_ec,(uint *)"DefinitionDefaultFont");
  local_1d4 = local_1d4 + 1;
  FUN_0044ea14((int)local_c,(int)local_ec,(int)puVar14,puVar7);
  local_1d4 = local_1d4 + -1;
  if (local_e4 != 0) {
    if (*(int *)(local_e4 + -0xc) != -1) {
      local_378 = (int *)(local_e4 + -0xc);
      if (local_378 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_378 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_378 = *local_378 + -1;
        iVar2 = *local_378 + 1;
      }
      if (iVar2 != 0) goto LAB_00438d52;
    }
    local_37c = local_e4 + -0xc;
    local_380 = local_e4 + -0xc;
    operator_delete();
    local_384 = 0;
    local_388 = local_ec;
    local_e4 = 0;
  }
LAB_00438d52:
  local_1e0 = 0x50;
  local_1d4 = local_1d4 + -1;
  if (local_d4 != 0) {
    if (*(int *)(local_d4 + -0xc) != -1) {
      local_38c = (int *)(local_d4 + -0xc);
      if (local_38c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_38c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_38c = *local_38c + -1;
        iVar2 = *local_38c + 1;
      }
      if (iVar2 != 0) goto LAB_00438e1c;
    }
    local_390 = local_d4 + -0xc;
    local_394 = local_d4 + -0xc;
    operator_delete();
    local_398 = 0;
    local_39c = local_dc;
    local_d4 = 0;
  }
LAB_00438e1c:
  puVar3 = (undefined4 *)(param_1 + 0x24);
  local_1e0 = 0x14c;
  std::string::string_from_cstr((int)local_fc,(uint *)"ViewMultipleDictionaries");
  local_1d4 = local_1d4 + 1;
  uVar4 = Persist::QueryValue((int)local_c,(int)local_fc,puVar3);
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
      if (local_3a8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_3a8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_3a8 = *local_3a8 + -1;
        iVar2 = *local_3a8 + 1;
      }
      if (iVar2 != 0) goto LAB_00438f3e;
    }
    local_3ac = local_f4 + -0xc;
    local_3b0 = local_f4 + -0xc;
    operator_delete();
    local_3b4 = 0;
    local_3b8 = local_fc;
    local_f4 = 0;
  }
LAB_00438f3e:
  if (cVar12 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1b0);
  local_1e0 = 0x164;
  std::string::string_from_cstr((int)local_10c,(uint *)"ViewSorting");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_10c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_104 != 0) {
    if (*(int *)(local_104 + -0xc) != -1) {
      local_3c4 = (int *)(local_104 + -0xc);
      if (local_3c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_3c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_3c4 = *local_3c4 + -1;
        iVar2 = *local_3c4 + 1;
      }
      if (iVar2 != 0) goto LAB_0043904f;
    }
    local_3c8 = local_104 + -0xc;
    local_3cc = local_104 + -0xc;
    operator_delete();
    local_3d0 = 0;
    local_3d4 = local_10c;
    local_104 = 0;
  }
LAB_0043904f:
  puVar3 = (undefined4 *)(param_1 + 0x1b4);
  local_1e0 = 0x17c;
  std::string::string_from_cstr((int)local_11c,(uint *)"ViewSortingAscending");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_11c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_114 != 0) {
    if (*(int *)(local_114 + -0xc) != -1) {
      local_3e0 = (int *)(local_114 + -0xc);
      if (local_3e0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_3e0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_3e0 = *local_3e0 + -1;
        iVar2 = *local_3e0 + 1;
      }
      if (iVar2 != 0) goto LAB_00439159;
    }
    local_3e4 = local_114 + -0xc;
    local_3e8 = local_114 + -0xc;
    operator_delete();
    local_3ec = 0;
    local_3f0 = local_11c;
    local_114 = 0;
  }
LAB_00439159:
  puVar3 = (undefined4 *)(param_1 + 0x1b8);
  local_1e0 = 0x194;
  std::string::string_from_cstr((int)local_12c,(uint *)"ViewLengthGrouping");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_12c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_124 != 0) {
    if (*(int *)(local_124 + -0xc) != -1) {
      local_3fc = (int *)(local_124 + -0xc);
      if (local_3fc == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_3fc == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_3fc = *local_3fc + -1;
        iVar2 = *local_3fc + 1;
      }
      if (iVar2 != 0) goto LAB_00439263;
    }
    local_400 = local_124 + -0xc;
    local_404 = local_124 + -0xc;
    operator_delete();
    local_408 = 0;
    local_40c = local_12c;
    local_124 = 0;
  }
LAB_00439263:
  puVar3 = (undefined4 *)(param_1 + 0x1c0);
  local_1e0 = 0x1ac;
  std::string::string_from_cstr((int)local_13c,(uint *)"ViewShowAnnotations");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_13c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_134 != 0) {
    if (*(int *)(local_134 + -0xc) != -1) {
      local_418 = (int *)(local_134 + -0xc);
      if (local_418 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_418 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_418 = *local_418 + -1;
        iVar2 = *local_418 + 1;
      }
      if (iVar2 != 0) goto LAB_0043936d;
    }
    local_41c = local_134 + -0xc;
    local_420 = local_134 + -0xc;
    operator_delete();
    local_424 = 0;
    local_428 = local_13c;
    local_134 = 0;
  }
LAB_0043936d:
  puVar3 = (undefined4 *)(param_1 + 0x1c4);
  local_1e0 = 0x1c4;
  std::string::string_from_cstr((int)local_14c,(uint *)"ViewShowBalances");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_14c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_144 != 0) {
    if (*(int *)(local_144 + -0xc) != -1) {
      local_434 = (int *)(local_144 + -0xc);
      if (local_434 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_434 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_434 = *local_434 + -1;
        iVar2 = *local_434 + 1;
      }
      if (iVar2 != 0) goto LAB_00439477;
    }
    local_438 = local_144 + -0xc;
    local_43c = local_144 + -0xc;
    operator_delete();
    local_440 = 0;
    local_444 = local_14c;
    local_144 = 0;
  }
LAB_00439477:
  puVar3 = (undefined4 *)(param_1 + 0x1c8);
  local_1e0 = 0x1dc;
  std::string::string_from_cstr((int)local_15c,(uint *)"ViewDoubleClick");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValue((int)local_c,(int)local_15c,puVar3);
  local_1d4 = local_1d4 + -1;
  if (local_154 != 0) {
    if (*(int *)(local_154 + -0xc) != -1) {
      local_450 = (int *)(local_154 + -0xc);
      if (local_450 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_450 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_450 = *local_450 + -1;
        iVar2 = *local_450 + 1;
      }
      if (iVar2 != 0) goto LAB_00439581;
    }
    local_454 = local_154 + -0xc;
    local_458 = local_154 + -0xc;
    operator_delete();
    local_45c = 0;
    local_460 = local_15c;
    local_154 = 0;
  }
LAB_00439581:
  piVar9 = &local_464;
  local_1e0 = 500;
  std::string::string_from_cstr((int)local_16c,(uint *)"ViewLengthGroupingSense");
  local_1d4 = local_1d4 + 1;
  uVar4 = Persist::QueryValue((int)local_c,(int)local_16c,piVar9);
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
      if (local_470 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_470 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_470 = *local_470 + -1;
        iVar2 = *local_470 + 1;
      }
      if (iVar2 != 0) goto LAB_004396a9;
    }
    local_474 = local_164 + -0xc;
    local_478 = local_164 + -0xc;
    operator_delete();
    local_47c = 0;
    local_480 = local_16c;
    local_164 = 0;
  }
LAB_004396a9:
  if (cVar12 != '\0') {
    *(int *)(param_1 + 0x1bc) = local_464;
  }
  local_55c = &PTR_s_OutputLower_004f3d78;
  uVar11 = 0;
  do {
    puVar3 = (undefined4 *)(uVar11 * 4 + param_1 + 0x1cc);
    local_1e0 = 0x20c;
    std::string::string_from_cstr((int)local_17c,(uint *)*local_55c);
    local_1d4 = local_1d4 + 1;
    uVar5 = Persist::QueryValue((int)local_c,(int)local_17c,puVar3);
    cVar12 = (uVar5 & 0xff) == 0;
    local_1d4 = local_1d4 + -1;
    if (local_174 != 0) {
      if (*(int *)(local_174 + -0xc) != -1) {
        piVar9 = (int *)(local_174 + -0xc);
        if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_004397cc;
      }
      local_48c = local_174 + -0xc;
      local_490 = local_174 + -0xc;
      operator_delete();
      local_494 = 0;
      local_498 = local_17c;
      local_174 = 0;
    }
LAB_004397cc:
    if (cVar12 != '\0') {
      *(undefined4 *)(param_1 + 0x1cc + uVar11 * 4) = 1;
    }
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 4);
  local_1e0 = 0x224;
  std::string::string_from_cstr((int)local_18c,(uint *)"Dictionaries\\Unedited English.tsd");
  local_1d4 = local_1d4 + 1;
  FUN_00437470((int)local_1c,(int)local_18c);
  if (local_184 != 0) {
    if (*(int *)(local_184 + -0xc) != -1) {
      local_4a4 = (int *)(local_184 + -0xc);
      if (local_4a4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_4a4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_4a4 = *local_4a4 + -1;
        iVar2 = *local_4a4 + 1;
      }
      if (iVar2 != 0) goto LAB_004398ee;
    }
    local_4a8 = local_184 + -0xc;
    local_4ac = local_184 + -0xc;
    operator_delete();
    local_4b0 = 0;
    local_4b4 = local_18c;
    local_184 = 0;
  }
LAB_004398ee:
  ppuVar10 = &PTR_s_1913_Webster_s_Unabridged_004f3d88;
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
    std::string::string_from_cstr((int)local_19c,(uint *)"Dictionaries\\");
    local_1d4 = local_1d4 + 1;
    local_1e0 = 0x248;
    puVar7 = (uint *)*local_55c;
    uVar5 = *(uint *)(local_194 + -4);
    pcVar6 = strlen(puVar7);
    FUN_004cfad4((int)local_19c,uVar5,0,(uint)puVar7,(uint)pcVar6,0,(uint)pcVar6);
    puVar1 = PTR_DAT_004f33b8;
    uVar5 = *(uint *)(local_194 + -4);
    pcVar6 = strlen((uint *)PTR_DAT_004f33b8);
    FUN_004cfad4((int)local_19c,uVar5,0,(uint)puVar1,(uint)pcVar6,0,(uint)pcVar6);
    local_1e0 = 0x254;
    FUN_00437470((int)local_1ac,(int)local_19c);
    local_1d4 = local_1d4 + 1;
    FUN_004cf384((int)local_19c,(int)local_1ac);
    local_1d4 = local_1d4 + -1;
    if (local_1a4 != 0) {
      if (*(int *)(local_1a4 + -0xc) != -1) {
        piVar9 = (int *)(local_1a4 + -0xc);
        if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_00439a8f;
      }
      operator_delete();
      local_1a4 = 0;
    }
LAB_00439a8f:
    local_1e0 = 0x248;
    iVar2 = thunk_FUN_004ddd54(local_194,0);
    if (iVar2 == 0) {
      std::string::replace_fill((int)local_1c,local_14[-1],0,1,0x3b);
      std::string::append((int)local_1c,(int)local_19c);
    }
    local_1d4 = local_1d4 + -1;
    if (local_194 != (LPCSTR)0x0) {
      if (*(int *)(local_194 + -0xc) != -1) {
        piVar9 = (int *)(local_194 + -0xc);
        if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar9 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar9 = *piVar9 + -1;
          iVar2 = *piVar9 + 1;
        }
        if (iVar2 != 0) goto LAB_00439b7e;
      }
      operator_delete();
      local_194 = (LPCSTR)0x0;
    }
LAB_00439b7e:
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 0xc);
  puVar14 = local_1c;
  local_1e0 = 0x278;
  std::string::string_from_cstr((int)local_1bc,(uint *)"ViewDefinitionDictionary");
  local_1d4 = local_1d4 + 1;
  Persist::QueryValueSized((int)local_c,(int)local_1bc,(int)puVar14);
  local_1d4 = local_1d4 + -1;
  if (local_1b4 != 0) {
    if (*(int *)(local_1b4 + -0xc) != -1) {
      piVar9 = (int *)(local_1b4 + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00439c94;
    }
    operator_delete();
    local_1b4 = 0;
  }
LAB_00439c94:
  local_1e0 = 0x290;
  FUN_00437470((int)local_1cc,(int)local_1c);
  local_1d4 = local_1d4 + 1;
  FUN_004cf384((int)local_1c,(int)local_1cc);
  local_1d4 = local_1d4 + -1;
  if (local_1c4 != 0) {
    if (*(int *)(local_1c4 + -0xc) != -1) {
      piVar9 = (int *)(local_1c4 + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00439d8d;
    }
    operator_delete();
    local_1c4 = 0;
  }
LAB_00439d8d:
  local_1e0 = 0x50;
  puVar3 = FUN_00407734(local_14);
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  local_1d4 = local_1d4 + -1;
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar7 = local_14 + -3;
      if (puVar7 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar7 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar7 = *puVar7 - 1;
        iVar2 = *puVar7 + 1;
      }
      if (iVar2 != 0) goto LAB_00439e52;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_00439e52:
  local_1d4 = local_1d4 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_1f0;
  return param_1;
}

} // namespace tea
