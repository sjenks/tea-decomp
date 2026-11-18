// TEA.exe — application module "LookupConfiguration"
// 17 functions, 0x00422de4..0x0042612c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00422de4  LookupConfiguration::LookupEntry::Clear   (12 bytes)   [analysis; function defined from prologue-scan]
//   empties the entry
void __cdecl LookupConfiguration::LookupEntry::Clear(undefined4 *self)

{
  *self = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422df0  OWL::TAPointer<char>::~TAPointer   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_char::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TAPointer_char::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      *self = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e14  LookupConfiguration::LookupStyleEntries::Clear   (12 bytes)   [analysis]
//   empties the entries
void __cdecl LookupConfiguration::LookupStyleEntries::Clear(undefined4 *self)

{
  *self = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e20  OWL::TAPointer<OWL::TColor>::~TAPointer   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TColor::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TAPointer_OWL_TColor::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      *self = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f80  DestroyLookupConfiguration   (65 bytes)   [analysis; function defined from prologue-scan]
//   static destructor of the lookup configuration singleton
//   file placement: inferred (address adjacency)
void __stdcall DestroyLookupConfiguration(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f0e14);
  if (DAT_004f0d98 != '\0') {
    LookupConfiguration::_dtor(0x519900,2);
    DAT_004f0d98 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422fc4  GetLookupConfiguration   (81 bytes)   [analysis]
//   the external-lookup configuration singleton, loaded from the profile on first use
//   file placement: inferred (address adjacency)
undefined * __cdecl GetLookupConfiguration(int owner)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f10ec);
  if (DAT_004f0d98 == '\0') {
    LookupConfiguration::LookupConfiguration((int *)&DAT_00519900,owner);
    DAT_004f0d98 = DAT_004f0d98 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00519900;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423078  LookupConfiguration::Run   (2982 bytes, 3 ranges)   [analysis]
//   runs an external lookup for a word: URL with %XX escaping and {entry} substitution (ShellExecute "open"), DDE execute, program, or window message
/* WARNING: Removing unreachable block (ram,0x00423278) */
/* WARNING: Removing unreachable block (ram,0x00423932) */
/* WARNING: Removing unreachable block (ram,0x00423a24) */
/* WARNING: Removing unreachable block (ram,0x004239d0) */
/* WARNING: Removing unreachable block (ram,0x00423a17) */
/* WARNING: Removing unreachable block (ram,0x00423abb) */
/* WARNING: Removing unreachable block (ram,0x00423adf) */
/* WARNING: Removing unreachable block (ram,0x00423aea) */
/* WARNING: Removing unreachable block (ram,0x00423b2a) */
/* WARNING: Removing unreachable block (ram,0x00423b03) */
/* WARNING: Removing unreachable block (ram,0x00423b23) */
/* WARNING: Removing unreachable block (ram,0x00423b10) */
/* WARNING: Removing unreachable block (ram,0x00423b2f) */
/* WARNING: Removing unreachable block (ram,0x00423b33) */
/* WARNING: Removing unreachable block (ram,0x00423b81) */
/* WARNING: Removing unreachable block (ram,0x0042351a) */
uint __cdecl LookupConfiguration::Run(int self,uint *word_,int index)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  LPARAM lParam;
  WPARAM wParam;
  char *len;
  HINSTANCE hInstance;
  int iVar6;
  int iVar7;
  int *strRep;
  int iVar9;
  undefined4 *sehChainHead;
  char cVar10;
  bool bVar11;
  undefined1 s;
  uint local_1b0;
  int str4;
  uint unused;
  undefined *unused2;
  undefined *unused3;
  int *strRep2;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *strRep3;
  int *newData;
  undefined4 *src;
  uint unused8;
  undefined1 *unused9;
  int *newRep;
  int *unused10;
  uint local_118;
  int *strRep4;
  undefined1 *unused11;
  int *local_10c;
  undefined4 unused12;
  int local_104;
  undefined1 ch;
  undefined1 *unused13;
  undefined *unused14;
  undefined4 unused15;
  undefined *unused16;
  undefined *unused17;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int local_c8;
  int str;
  undefined1 *unused22;
  undefined *unused23;
  undefined4 unused24;
  char *s2;
  HWND hWnd;
  int str2;
  int unused25;
  int local_a4;
  int local_a0;
  uint local_9c [3];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str3 [8];
  int *file;
  undefined1 str5 [8];
  undefined *local_2c;
  undefined1 str6 [8];
  int str7;
  undefined1 arguments [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f1198);
  local_a0 = 1;
LAB_00423098:
  local_a4 = 0;
  iVar9 = 0;
LAB_004230a2:
  iVar7 = 0;
LAB_004230a4:
  iVar6 = *(int *)(self + iVar9 * 4) + iVar7 * 0x38;
  if (*(int *)(iVar6 + 0x40) != 0) {
    if (index == 0x31a6) {
      if (*(int *)(*(int *)(self + 0x28) + -4) != 0) {
        unused25 = iVar6 + 0x48;
        str2 = self + 0x20;
        uVar2 = std::string::compare(str2,0,*(uint *)(*(int *)(self + 0x28) + -4),
                             *(byte **)(iVar6 + 0x50),*(uint *)(*(int *)(iVar6 + 0x50) + -4));
        if (uVar2 != 0) goto LAB_004238f3;
      }
    }
    else {
      iVar1 = local_a4 + 1;
      iVar3 = local_a4 + 0x3340;
      local_a4 = iVar1;
      if (iVar3 != index) goto LAB_004238f3;
    }
    if (iVar9 == 0) {
      if (*(int *)(*(int *)(iVar6 + 0x60) + -4) != 0) {
        unused15 = 0;
        unused13 = str5;
        unused14 = &g_emptyStringData;
        local_2c = &g_emptyStringData;
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x68;
        for (; (char)*word_ != '\0'; word_ = (uint *)((int)word_ + 1)) {
          iVar9 = isalnum((int)(char)*word_);
          if (iVar9 == 0) {
            sprintf((undefined1 *)local_9c,(byte *)"%%%02x");
            uVar2 = *(uint *)(local_2c + -4);
            len = strlen(local_9c);
            std::string::replace((int)str5,uVar2,0,(uint)local_9c,(uint)len,0,(uint)len);
          }
          else {
            ch = (undefined1)*word_;
            std::string::replace_fill((int)str5,*(uint *)(local_2c + -4),0,1,ch);
          }
        }
        ehContext = 0x74;
        local_104 = iVar6 + 0x58;
        unused12 = 0;
        file = (int *)0x0;
        iVar9 = *(int *)(*(int *)(iVar6 + 0x60) + -0xc);
        if (iVar9 == -1 || iVar9 + 1 < 0) {
          local_118 = *(uint *)(*(int *)(iVar6 + 0x60) + -4);
          newRep = std::string::__getRep(str3,local_118,local_118);
          unused9 = str3;
          newData = newRep + 3;
          unused8 = local_118;
          src = *(undefined4 **)(local_104 + 8);
          unused10 = newData;
          file = newData;
          memcpy(newData,src,local_118);
        }
        else {
          local_10c = *(int **)(iVar6 + 0x60);
          unused11 = str3;
          strRep4 = local_10c + -3;
          file = local_10c;
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = *strRep4 + 1;
          }
        }
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x68;
        uVar2 = file[-1];
        while (uVar2 != 0) {
          len = strlen((uint *)"{entry}");
          uVar2 = FUN_004d7cf0((int)str3,(byte *)"{entry}",uVar2 - 1,(uint)len);
          if (uVar2 == 0xffffffff) break;
          len = strlen((uint *)"{entry}");
          std::string::replace((int)str3,uVar2,(uint)len,(uint)local_2c,*(uint *)(local_2c + -4),0,
                       *(uint *)(local_2c + -4));
        }
        hInstance = ShellExecuteA((HWND)0x0,&DAT_004f0e54 /* "open" */,(LPCSTR)file,(LPCSTR)0x0,(LPCSTR)0x0,9);
        uVar2 = (uint)((HINSTANCE)0x20 < hInstance);
        ehDtorCount = ehDtorCount + -1;
        if (file != (int *)0x0) {
          if (file[-3] != -1) {
            strRep3 = file + -3;
            if (strRep3 == &g_nullStringRep) {
              iVar9 = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              iVar9 = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              iVar9 = *strRep3 + 1;
            }
            if (iVar9 != 0) goto LAB_00423825;
          }
          unused7 = file + -3;
          unused6 = file + -3;
          operator_delete();
          unused5 = 0;
          unused4 = str3;
          file = (int *)0x0;
        }
LAB_00423825:
        ehContext = 0x68;
        ehDtorCount = ehDtorCount + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            strRep2 = (int *)(local_2c + -0xc);
            if (strRep2 == &g_nullStringRep) {
              iVar9 = 1;
            }
            else if (strRep2 == &g_nullStringRep) {
              iVar9 = 1;
            }
            else {
              *strRep2 = *strRep2 + -1;
              iVar9 = *strRep2 + 1;
            }
            if (iVar9 != 0) goto LAB_004238da;
          }
          unused3 = local_2c + -0xc;
          unused2 = local_2c + -0xc;
          operator_delete();
        }
LAB_004238da:
        *sehChainHead = sehPrevFrame;
        return uVar2;
      }
    }
    else {
      if (iVar9 == 1) {
        iVar9 = SendDdeExecute(*(LPCSTR *)(iVar6 + 0x60),*(LPCSTR *)(iVar6 + 0x70),word_);
        *sehChainHead = sehPrevFrame;
        return (uint)(iVar9 == 0);
      }
      if (iVar9 == 2) {
        hWnd = FindWindowA((LPCSTR)0x0,*(LPCSTR *)(iVar6 + 0x60));
        if (hWnd == (HWND)0x0) {
          *sehChainHead = sehPrevFrame;
          return 0;
        }
        TEAAppWindows::CopyTextToClipboard(*(int *)(self + 0x30),word_,(uint *)0x0);
        lParam = TEAAppWindows::GetMainWindowHandle(*(int *)(self + 0x30));
        s2 = *(char **)(iVar6 + 0x70);
        wParam = atoi(s2);
        SendMessageA(hWnd,0x111,wParam,lParam);
        *sehChainHead = sehPrevFrame;
        return 1;
      }
      if (iVar9 == 3) {
        unused24 = 0;
        unused22 = arguments;
        unused23 = &g_emptyStringData;
        local_c = &g_emptyStringData;
        ehDtorCount = ehDtorCount + 1;
        str = iVar6 + 0x68;
        ehContext = 0x2c;
        local_c8 = std::string::string_from_cstr((int)str6,(uint *)&DAT_004f0e46);
        ehDtorCount = ehDtorCount + 1;
        uVar2 = std::string::compare(str,0,*(uint *)(*(int *)(str + 8) + -4),
                             *(byte **)(local_c8 + 8),*(uint *)(*(int *)(local_c8 + 8) + -4));
        cVar10 = uVar2 != 0;
        ehDtorCount = ehDtorCount + -1;
        if (str7 != 0) {
          if (*(int *)(str7 + -0xc) != -1) {
            strRep = (int *)(str7 + -0xc);
            if (strRep == &g_nullStringRep) {
              iVar9 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar9 = 1;
            }
            else {
              *strRep = *strRep + -1;
              iVar9 = *strRep + 1;
            }
            if (iVar9 != 0) goto LAB_0042338a;
          }
          unused21 = str7 + -0xc;
          unused20 = str7 + -0xc;
          operator_delete();
          unused19 = 0;
          unused18 = str6;
          str7 = 0;
        }
LAB_0042338a:
        if (cVar10 == '\0') {
          ehContext = 0x20;
          for (; (char)*word_ != '\0'; word_ = (uint *)((int)word_ + 1)) {
            sprintf((undefined1 *)local_9c,&DAT_004f0e48 /* "%02X" */);
            uVar2 = *(uint *)(local_c + -4);
            len = strlen(local_9c);
            std::string::replace((int)arguments,uVar2,0,(uint)local_9c,(uint)len,0,(uint)len);
          }
        }
        else {
          std::string::assign_cstr((int)arguments,word_);
        }
        uVar2 = LaunchProgram(iVar6 + 0x58,(int)arguments,0);
        ehDtorCount = ehDtorCount + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            strRep = (int *)(local_c + -0xc);
            if (strRep == &g_nullStringRep) {
              iVar9 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar9 = 1;
            }
            else {
              *strRep = *strRep + -1;
              iVar9 = *strRep + 1;
            }
            if (iVar9 != 0) goto LAB_004234a0;
          }
          unused17 = local_c + -0xc;
          unused16 = local_c + -0xc;
          operator_delete();
        }
LAB_004234a0:
        *sehChainHead = sehPrevFrame;
        return uVar2;
      }
    }
  }
LAB_004238f3:
  iVar7 = iVar7 + 1;
  if (3 < iVar7) goto code_r0x004238fd;
  goto LAB_004230a4;
code_r0x004238fd:
  iVar9 = iVar9 + 1;
  if (3 < iVar9) goto code_r0x00423907;
  goto LAB_004230a2;
code_r0x00423907:
  unused = g_stringNpos;
  str4 = self + 0x20;
  local_1b0 = *(uint *)(*(int *)(self + 0x28) + -4);
  s = 0;
  uVar2 = local_1b0;
  if (g_stringNpos < local_1b0) {
    uVar2 = g_stringNpos;
  }
  std::string::replace(str4,0,uVar2,(uint)&s,0,0,0);
  if ((index != 0x31a6) || (bVar11 = local_a0 != 1, local_a0 = local_a0 + 1, bVar11)) {
    *sehChainHead = sehPrevFrame;
    return 0;
  }
  goto LAB_00423098;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c2c  LookupConfiguration::GetCount   (62 bytes)   [analysis]
//   number of configured lookups
int __cdecl LookupConfiguration::GetCount(int *self)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + *(int *)(*self + 0x40 + iVar1 * 0x38);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    local_8 = local_8 + 1;
    self = self + 1;
  } while (local_8 < 4);
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c6c  LookupConfiguration::UpdateMenuLabels   (424 bytes)   [analysis]
//   refreshes the menu captions of the lookups
/* WARNING: Removing unreachable block (ram,0x00423cac) */
void __cdecl LookupConfiguration::UpdateMenuLabels(int *self)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int str;
  int iVar5;
  int *strRep;
  undefined4 *sehChainHead;
  int *local_54;
  int local_40;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f1298);
  bVar1 = false;
  local_c = &g_emptyStringData;
  local_40 = 0;
  local_54 = self;
  do {
    iVar5 = 0;
    do {
      if (*(int *)(*local_54 + 0x40 + iVar5 * 0x38) != 0) {
        iVar3 = iVar5 * 0x38 + *local_54;
        str = iVar3 + 0x48;
        uVar2 = std::string::compare(str,0,*(uint *)(*(int *)(iVar3 + 0x50) + -4),(byte *)self[10],
                             *(uint *)(self[10] + -4));
        if (uVar2 == 0) {
          bVar1 = true;
        }
        else if (*(int *)(local_c + -4) == 0) {
          std::string::operator_assign((int)str2,str);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_40 = local_40 + 1;
    local_54 = local_54 + 1;
  } while (local_40 < 4);
  if (!bVar1) {
    std::string::operator_assign((int)(self + 8),(int)str2);
  }
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar5 = *strRep + 1;
      }
      if (iVar5 != 0) goto LAB_00423dfd;
    }
    operator_delete();
  }
LAB_00423dfd:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e14  LookupConfiguration::FillMenu   (849 bytes)   [analysis]
//   adds the lookup commands to a menu ("\tCtrl+Alt+Enter" on the default one)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl LookupConfiguration::FillMenu(int *self,int hMenu,int position)

{
  int iVar1;
  uint uVar2;
  char *len;
  BOOL ok;
  int iVar5;
  UINT uPosition;
  int iVar6;
  undefined4 *sehChainHead;
  MENUITEMINFOA local_e8;
  int *newData;
  int *local_a0;
  UINT unused;
  undefined1 unused2;
  int local_90;
  undefined1 *unused3;
  undefined4 unused4;
  int *unused5;
  int *unused6;
  int *strRep;
  undefined1 unused7;
  undefined1 unused8;
  uint pos;
  int *unused9;
  uint local_6c;
  int *unused10;
  undefined4 *src;
  uint unused11;
  undefined1 *unused12;
  int *newRep;
  int *unused13;
  uint local_50;
  int *strRep2;
  undefined1 *unused14;
  int *unused15;
  int local_40;
  int local_3c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str2;
  
  __InitExceptBlockLDTC(0x4f12f0);
  LookupConfiguration::UpdateMenuLabels(self);
  uPosition = 0;
  local_3c = 0;
  do {
    iVar6 = 0;
    do {
      if (*(int *)(self[local_3c] + 0x40 + iVar6 * 0x38) != 0) {
        ehContext = 0x14;
        iVar1 = self[local_3c] + iVar6 * 0x38;
        local_40 = iVar1 + 0x48;
        str2 = (int *)0x0;
        iVar5 = *(int *)(*(int *)(iVar1 + 0x50) + -0xc);
        if (iVar5 == -1 || iVar5 + 1 < 0) {
          local_50 = *(uint *)(*(int *)(iVar1 + 0x50) + -4);
          newRep = std::string::__getRep(str,local_50,local_50);
          newData = newRep + 3;
          unused11 = local_50;
          src = *(undefined4 **)(local_40 + 8);
          unused10 = newData;
          unused12 = str;
          unused13 = newData;
          str2 = newData;
          memcpy(newData,src,local_50);
        }
        else {
          local_a0 = *(int **)(iVar1 + 0x50);
          strRep2 = local_a0 + -3;
          unused14 = str;
          unused15 = local_a0;
          str2 = local_a0;
          if (strRep2 != &g_nullStringRep) {
            *strRep2 = *strRep2 + 1;
          }
        }
        ehDtorCount = ehDtorCount + 1;
        ehContext = 8;
        unused9 = self + 8;
        uVar2 = std::string::compare((int)str,0,str2[-1],(byte *)self[10],
                             *(uint *)(self[10] + -4));
        local_6c = (uint)(uVar2 == 0);
        if (local_6c != 0) {
          pos = str2[-1];
          len = strlen((uint *)"\tCtrl+Alt+Enter");
          std::string::replace((int)str,pos,0,0x4f0e7c,(uint)len,0,(uint)len);
        }
        FUN_004979c4(&local_e8.cbSize,0);
        local_e8.fMask = local_e8.fMask | 0x13;
        local_e8.fType = 0x200;
        local_e8.dwTypeData = (LPSTR)str2;
        if (local_6c == 0) {
          local_e8.fState = local_e8.fState & 0xfffffff7;
        }
        else {
          local_e8.fState = local_e8.fState | 8;
        }
        if (position == 0) {
          local_e8.fState = local_e8.fState | 3;
        }
        else {
          local_e8.fState = local_e8.fState & 0xfffffffc;
        }
        local_e8.wID = uPosition + 0x3340;
        uVar2 = GetMenuItemCount(*(HMENU *)(hMenu + 4));
        if (uPosition + 2 < uVar2) {
          unused8 = FUN_00497d04(hMenu,uPosition,'\x01',&local_e8);
        }
        else {
          unused7 = FUN_00497d34(hMenu,uPosition,'\x01',&local_e8);
        }
        uPosition = uPosition + 1;
        ehDtorCount = ehDtorCount + -1;
        if (str2 != (int *)0x0) {
          if (str2[-3] != -1) {
            strRep = str2 + -3;
            if (strRep == &g_nullStringRep) {
              iVar5 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar5 = 1;
            }
            else {
              *strRep = *strRep + -1;
              iVar5 = *strRep + 1;
            }
            if (iVar5 != 0) goto LAB_004240e2;
          }
          unused6 = str2 + -3;
          unused5 = str2 + -3;
          operator_delete();
          unused4 = 0;
          str2 = (int *)0x0;
          unused3 = str;
        }
LAB_004240e2:
        ehContext = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    local_3c = local_3c + 1;
    if (3 < local_3c) {
      iVar6 = GetMenuItemCount(*(HMENU *)(hMenu + 4));
      local_90 = (iVar6 + -2) - uPosition;
      while (0 < local_90) {
        unused = uPosition;
        local_90 = local_90 + -1;
        ok = DeleteMenu(*(HMENU *)(hMenu + 4),uPosition,0x400);
        unused2 = ok != 0;
      }
      *sehChainHead = sehPrevFrame;
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00424168  LookupConfiguration::Save   (1849 bytes)   [analysis]
//   writes every lookup's settings, LookupTestWord and LookupDefaultLabel
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl LookupConfiguration::Save(int self)

{
  int *strRep;
  int prevRefs;
  int iVar3;
  undefined4 *sehChainHead;
  int iVar4;
  int valueName;
  int local_b8;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str3;
  undefined1 str2 [8];
  int str4;
  undefined1 result [8];
  int str5;
  undefined1 result2 [8];
  int str6;
  undefined1 result3 [8];
  int str7;
  undefined1 local_2c [8];
  int str8;
  undefined1 local_1c [8];
  int str9;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f13c4);
  valueName = 0;
  iVar4 = 1;
  GetProfileKeyPath((int)local_1c);
  Persist::Persist(persist,(int)local_1c,iVar4,valueName);
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      strRep = (int *)(str9 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00424263;
    }
    operator_delete();
    str9 = 0;
  }
LAB_00424263:
  local_b8 = 0;
  do {
    iVar4 = *(int *)(self + local_b8 * 4);
    valueName = 0;
    do {
      iVar3 = valueName * 0x38 + iVar4;
      AppendChar((int)local_2c,iVar4);
      Persist::SetDword((int)persist,(int)local_2c);
      AppendChar((int)result3,iVar4 + 0x10);
      std::string::operator_assign((int)local_2c,(int)result3);
      if (str7 != 0) {
        if (*(int *)(str7 + -0xc) != -1) {
          strRep = (int *)(str7 + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_004243be;
        }
        operator_delete();
        str7 = 0;
      }
LAB_004243be:
      Persist::SetString((int)persist,(int)local_2c,iVar3 + 0x48);
      AppendChar((int)result2,iVar4 + 0x20);
      std::string::operator_assign((int)local_2c,(int)result2);
      if (str6 != 0) {
        if (*(int *)(str6 + -0xc) != -1) {
          strRep = (int *)(str6 + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_004244bb;
        }
        operator_delete();
        str6 = 0;
      }
LAB_004244bb:
      Persist::SetString((int)persist,(int)local_2c,iVar3 + 0x58);
      if (*(int *)(*(int *)(iVar4 + 0x38) + -4) != 0) {
        AppendChar((int)result,iVar4 + 0x30);
        std::string::operator_assign((int)local_2c,(int)result);
        if (str5 != 0) {
          if (*(int *)(str5 + -0xc) != -1) {
            strRep = (int *)(str5 + -0xc);
            if (strRep == &g_nullStringRep) {
              prevRefs = 1;
            }
            else if (strRep == &g_nullStringRep) {
              prevRefs = 1;
            }
            else {
              *strRep = *strRep + -1;
              prevRefs = *strRep + 1;
            }
            if (prevRefs != 0) goto LAB_004245c6;
          }
          operator_delete();
          str5 = 0;
        }
LAB_004245c6:
        Persist::SetString((int)persist,(int)local_2c,iVar3 + 0x68);
      }
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          strRep = (int *)(str8 + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar3 = *strRep + 1;
          }
          if (iVar3 != 0) goto LAB_00424676;
        }
        operator_delete();
        str8 = 0;
      }
LAB_00424676:
      valueName = valueName + 1;
    } while (valueName < 4);
    local_b8 = local_b8 + 1;
  } while (local_b8 < 4);
  iVar4 = self + 0x10;
  valueName = std::string::string_from_cstr((int)str2,(uint *)"LookupTestWord");
  Persist::SetString((int)persist,valueName,iVar4);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00424783;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00424783:
  iVar4 = self + 0x20;
  valueName = std::string::string_from_cstr((int)str,(uint *)"LookupDefaultLabel");
  Persist::SetString((int)persist,valueName,iVar4);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00424873;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00424873:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004248a4  AppendChar   (899 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00408b40. result = str + std::string(1, c) (the character is not visible in the decompiled call to the fill constructor)
//   file placement: inferred (address adjacency)
int __cdecl AppendChar(int result,int str)

{
  uint len;
  int sum;
  int *rep;
  int refs;
  undefined4 *sehChainHead;
  undefined1 *suffixArg;
  undefined4 sehPrevFrame;
  undefined1 tmp [8];
  int *tmpData;
  undefined1 suffix [8];
  int suffixData;
  
  __InitExceptBlockLDTC(0x4f14c4);
  suffixData = 0;
  std::string::string_fill((int)suffix,1);
  suffixArg = suffix;
  tmpData = (int *)0x0;
  refs = *(int *)(*(int *)(str + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(str + 8) + -4);
    tmpData = std::string::__getRep(tmp,len,len);
    tmpData = tmpData + 3;
    memcpy(tmpData,*(undefined4 **)(str + 8),len);
  }
  else {
    tmpData = *(int **)(str + 8);
    rep = tmpData + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  sum = std::string::append((int)tmp,(int)suffixArg);
  *(undefined4 *)(result + 8) = 0;
  refs = *(int *)(*(int *)(sum + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(sum + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(sum + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(sum + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (suffixData != 0) {
    if (*(int *)(suffixData + -0xc) != -1) {
      rep = (int *)(suffixData + -0xc);
      if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *rep = *rep + -1;
        refs = *rep + 1;
      }
      if (refs != 0) goto LAB_00424b5d;
    }
    operator_delete();
    suffixData = 0;
  }
LAB_00424b5d:
  if (tmpData != (int *)0x0) {
    if (tmpData[-3] != -1) {
      rep = tmpData + -3;
      if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *rep = *rep + -1;
        refs = *rep + 1;
      }
      if (refs != 0) goto LAB_00424c0c;
    }
    operator_delete();
  }
LAB_00424c0c:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c28  LookupConfiguration::LookupConfiguration   (3261 bytes)   [analysis]
//   constructor: reads the web-search, DDE, program and message lookups from the profile
/* WARNING: Removing unreachable block (ram,0x00424ccb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl LookupConfiguration::LookupConfiguration(int *self,int owner)

{
  int *out;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *out2;
  undefined4 *sehChainHead;
  bool bVar8;
  char cVar9;
  int iVar10;
  int tryLocalMachine;
  int local_180;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str5;
  undefined1 result [8];
  int str6;
  undefined1 result2 [8];
  int str7;
  undefined1 result3 [8];
  int str8;
  undefined1 local_4c [8];
  int str9;
  undefined1 valueName2 [8];
  int str10;
  undefined1 local_2c [8];
  int str11;
  int str;
  int str2;
  int str3;
  int str4;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f160c);
  std::string::string_from_cstr((int)(self + 4),(uint *)"example");
  self[10] = 0;
  self[10] = (int)&g_emptyStringData;
  self[0xc] = owner;
  str4 = operator_new();
  if (str4 != 0) {
    std::string::string_from_cstr(str4,(uint *)"LookupWebSearchEnabled");
    std::string::string_from_cstr(str4 + 0x10,(uint *)"LookupWebSearchLabel");
    std::string::string_from_cstr(str4 + 0x20,(uint *)"LookupWebSearchScript");
    std::string::string_from_cstr(str4 + 0x30,(uint *)("LookupTestWord" + 0xe));
    _vector_new_ldtc_((int *)(str4 + 0x40),0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::LookupEntry);
  }
  *self = str4;
  str3 = operator_new();
  if (str3 != 0) {
    std::string::string_from_cstr(str3,(uint *)"LookupDDEEnabled");
    std::string::string_from_cstr(str3 + 0x10,(uint *)"LookupDDELabel");
    std::string::string_from_cstr(str3 + 0x20,(uint *)"LookupDDEService");
    std::string::string_from_cstr(str3 + 0x30,(uint *)"DDETopic");
    _vector_new_ldtc_((int *)(str3 + 0x40),0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::LookupEntry);
  }
  self[1] = str3;
  str2 = operator_new();
  if (str2 != 0) {
    std::string::string_from_cstr(str2,(uint *)"LookupMessageEnabled");
    std::string::string_from_cstr(str2 + 0x10,(uint *)"LookupMessageLabel");
    std::string::string_from_cstr(str2 + 0x20,(uint *)"LookupMessageWindow");
    std::string::string_from_cstr(str2 + 0x30,(uint *)"MessageCommand");
    _vector_new_ldtc_((int *)(str2 + 0x40),0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::LookupEntry);
  }
  self[2] = str2;
  str = operator_new();
  if (str != 0) {
    std::string::string_from_cstr(str,(uint *)"LookupExecEnabled");
    std::string::string_from_cstr(str + 0x10,(uint *)"LookupExecLabel");
    std::string::string_from_cstr(str + 0x20,(uint *)"LookupExecProgram");
    std::string::string_from_cstr(str + 0x30,(uint *)"ExecEncoding");
    _vector_new_ldtc_((int *)(str + 0x40),0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::LookupEntry);
  }
  self[3] = str;
  tryLocalMachine = 0;
  iVar10 = 0;
  GetProfileKeyPath((int)local_2c);
  Persist::Persist(persist,(int)local_2c,iVar10,tryLocalMachine);
  if (str11 != 0) {
    if (*(int *)(str11 + -0xc) != -1) {
      out = (int *)(str11 + -0xc);
      if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else {
        *out = *out + -1;
        iVar10 = *out + 1;
      }
      if (iVar10 != 0) goto LAB_00425165;
    }
    operator_delete();
    str11 = 0;
  }
LAB_00425165:
  out = self + 4;
  std::string::string_from_cstr((int)valueName2,(uint *)"LookupTestWord");
  uVar2 = Persist::QueryString((int)persist,(int)valueName2,(int)out);
  bVar8 = (uVar2 & 0xff) == 0;
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      out = (int *)(str10 + -0xc);
      if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else {
        *out = *out + -1;
        iVar10 = *out + 1;
      }
      if (iVar10 != 0) goto LAB_0042526f;
    }
    operator_delete();
    str10 = 0;
  }
LAB_0042526f:
  local_180 = 0;
  do {
    iVar10 = self[local_180];
    tryLocalMachine = 0;
    do {
      iVar6 = tryLocalMachine * 0x38 + iVar10;
      out2 = (undefined4 *)(iVar6 + 0x40);
      iVar3 = local_180 * 4 + tryLocalMachine;
      if ((bVar8) && (iVar3 < 9)) {
        puVar5 = (undefined4 *)(&PTR_PTR_004f0df0)[iVar3];
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      AppendChar((int)local_4c,iVar10 + 0x10);
      uVar4 = Persist::QueryString((int)persist,(int)local_4c,iVar6 + 0x48);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        std::string::assign_cstr(iVar6 + 0x48,(uint *)*puVar5);
      }
      AppendChar((int)result3,iVar10 + 0x20);
      std::string::operator_assign((int)local_4c,(int)result3);
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          out = (int *)(str8 + -0xc);
          if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *out = *out + -1;
            iVar3 = *out + 1;
          }
          if (iVar3 != 0) goto LAB_00425423;
        }
        operator_delete();
        str8 = 0;
      }
LAB_00425423:
      uVar4 = Persist::QueryString((int)persist,(int)local_4c,iVar6 + 0x58);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        std::string::assign_cstr(iVar6 + 0x58,(uint *)puVar5[1]);
      }
      AppendChar((int)result2,iVar10 + 0x30);
      std::string::operator_assign((int)local_4c,(int)result2);
      if (str7 != 0) {
        if (*(int *)(str7 + -0xc) != -1) {
          out = (int *)(str7 + -0xc);
          if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *out = *out + -1;
            iVar3 = *out + 1;
          }
          if (iVar3 != 0) goto LAB_00425549;
        }
        operator_delete();
        str7 = 0;
      }
LAB_00425549:
      uVar4 = Persist::QueryString((int)persist,(int)local_4c,iVar6 + 0x68);
      if ((char)uVar4 == '\0') {
        if (puVar5 != (undefined4 *)0x0) {
          std::string::assign_cstr(iVar6 + 0x68,(uint *)puVar5[2]);
        }
        if (local_180 == 3) {
          std::string::assign_cstr(iVar6 + 0x68,(uint *)&DAT_004f10d8);
        }
      }
      AppendChar((int)result,iVar10);
      std::string::operator_assign((int)local_4c,(int)result);
      if (str6 != 0) {
        if (*(int *)(str6 + -0xc) != -1) {
          out = (int *)(str6 + -0xc);
          if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *out = *out + -1;
            iVar3 = *out + 1;
          }
          if (iVar3 != 0) goto LAB_00425687;
        }
        operator_delete();
        str6 = 0;
      }
LAB_00425687:
      *out2 = 0;
      if ((((*(int *)(*(int *)(iVar6 + 0x50) + -4) != 0) &&
           (uVar4 = Persist::QueryDword((int)persist,(int)local_4c,out2), (char)uVar4 == '\0')) &&
          (puVar5 != (undefined4 *)0x0)) && (local_180 == 0)) {
        *out2 = 1;
      }
      if (str9 != 0) {
        if (*(int *)(str9 + -0xc) != -1) {
          out = (int *)(str9 + -0xc);
          if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *out = *out + -1;
            iVar3 = *out + 1;
          }
          if (iVar3 != 0) goto LAB_00425760;
        }
        operator_delete();
        str9 = 0;
      }
LAB_00425760:
      tryLocalMachine = tryLocalMachine + 1;
    } while (tryLocalMachine < 4);
    local_180 = local_180 + 1;
  } while (local_180 < 4);
  out = self + 8;
  std::string::string_from_cstr((int)valueName,(uint *)"LookupDefaultLabel");
  uVar2 = Persist::QueryString((int)persist,(int)valueName,(int)out);
  cVar9 = (uVar2 & 0xff) == 0;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      out = (int *)(str5 + -0xc);
      if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar10 = 1;
      }
      else {
        *out = *out + -1;
        iVar10 = *out + 1;
      }
      if (iVar10 != 0) goto LAB_0042588b;
    }
    operator_delete();
    str5 = 0;
  }
LAB_0042588b:
  if ((cVar9 != '\0') && (bVar8)) {
    std::string::assign_cstr((int)(self + 8),*(uint **)PTR_PTR_004f0df0);
  }
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004258e8  LookupConfiguration::LookupEntry::LookupEntry   (154 bytes)   [analysis]
//   constructor: empty label, script and flags
/* WARNING: Removing unreachable block (ram,0x0042594a) */
/* WARNING: Removing unreachable block (ram,0x00425928) */
/* WARNING: Removing unreachable block (ram,0x0042596c) */
undefined4 * __cdecl LookupConfiguration::LookupEntry::LookupEntry(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f18bc);
  *self = 0;
  self[4] = 0;
  self[4] = &g_emptyStringData;
  self[8] = 0;
  self[8] = &g_emptyStringData;
  self[0xc] = 0;
  self[0xc] = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425984  LookupConfiguration::LookupEntry::~LookupEntry   (472 bytes)   [rtti:dtor destructor]
//   written in code as LookupConfiguration::LookupEntry::_dtor
void __cdecl LookupConfiguration::LookupEntry::_dtor(int self,byte dtorFlags)

{
  int *strRep;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f18f4);
  if (self == 0) goto LAB_00425b4c;
  if (*(int *)(self + 0x30) != 0) {
    if (*(int *)(*(int *)(self + 0x30) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x30) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00425a2b;
    }
    operator_delete();
    *(undefined4 *)(self + 0x30) = 0;
  }
LAB_00425a2b:
  if (*(int *)(self + 0x20) != 0) {
    if (*(int *)(*(int *)(self + 0x20) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x20) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00425ab2;
    }
    operator_delete();
    *(undefined4 *)(self + 0x20) = 0;
  }
LAB_00425ab2:
  if (*(int *)(self + 0x10) != 0) {
    if (*(int *)(*(int *)(self + 0x10) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x10) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00425b3c;
    }
    operator_delete();
    *(undefined4 *)(self + 0x10) = 0;
  }
LAB_00425b3c:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00425b4c:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425bb8  LookupConfiguration::~LookupConfiguration   (1087 bytes)   [rtti:dtor destructor]
//   written in code as LookupConfiguration::_dtor
void __cdecl LookupConfiguration::_dtor(int self,byte dtorFlags)

{
  int *strRep;
  int prevRefs;
  int iVar3;
  undefined4 *sehChainHead;
  uint local_30;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1838);
  if (self == 0) goto LAB_00425fe7;
  local_30 = 0;
  do {
    iVar3 = *(int *)(self + local_30 * 4);
    if (iVar3 != 0) {
      _vector_delete_ldtc_(iVar3 + 0x40,0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::_dtor);
      if (*(int *)(iVar3 + 0x38) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x38) + -0xc) != -1) {
          strRep = (int *)(*(int *)(iVar3 + 0x38) + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_00425cae;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
LAB_00425cae:
      if (*(int *)(iVar3 + 0x28) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x28) + -0xc) != -1) {
          strRep = (int *)(*(int *)(iVar3 + 0x28) + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_00425d38;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
LAB_00425d38:
      if (*(int *)(iVar3 + 0x18) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x18) + -0xc) != -1) {
          strRep = (int *)(*(int *)(iVar3 + 0x18) + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_00425dc2;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
LAB_00425dc2:
      if (*(int *)(iVar3 + 8) != 0) {
        if (*(int *)(*(int *)(iVar3 + 8) + -0xc) != -1) {
          strRep = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep = *strRep + -1;
            prevRefs = *strRep + 1;
          }
          if (prevRefs != 0) goto LAB_00425e5f;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 8) = 0;
      }
LAB_00425e5f:
      operator_delete();
    }
    local_30 = local_30 + 1;
  } while (local_30 < 4);
  if (*(int *)(self + 0x28) != 0) {
    if (*(int *)(*(int *)(self + 0x28) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x28) + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00425f1f;
    }
    operator_delete();
    *(undefined4 *)(self + 0x28) = 0;
  }
LAB_00425f1f:
  if (*(int *)(self + 0x18) != 0) {
    if (*(int *)(*(int *)(self + 0x18) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x18) + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00425fd7;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_00425fd7:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00425fe7:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042612c  LookupConfiguration::LookupStyleEntries::~LookupStyleEntries   (652 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as LookupConfiguration::LookupStyleEntries::_dtor
void __cdecl LookupConfiguration::LookupStyleEntries::_dtor(int self,byte dtorFlags)

{
  int *strRep;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1920);
  if (self == 0) goto LAB_004263a7;
  _vector_delete_ldtc_(self + 0x40,0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::_dtor);
  if (*(int *)(self + 0x38) != 0) {
    if (*(int *)(*(int *)(self + 0x38) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x38) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004261ec;
    }
    operator_delete();
    *(undefined4 *)(self + 0x38) = 0;
  }
LAB_004261ec:
  if (*(int *)(self + 0x28) != 0) {
    if (*(int *)(*(int *)(self + 0x28) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x28) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00426273;
    }
    operator_delete();
    *(undefined4 *)(self + 0x28) = 0;
  }
LAB_00426273:
  if (*(int *)(self + 0x18) != 0) {
    if (*(int *)(*(int *)(self + 0x18) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x18) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00426316;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_00426316:
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0042639a;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0042639a:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004263a7:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
