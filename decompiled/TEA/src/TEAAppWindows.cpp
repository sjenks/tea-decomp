// TEA.exe — application module "TEAAppWindows"
// 43 functions, 0x00462d9c..0x004757b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00462d9c  TEAAppWindows::TEAAppWindows   (665 bytes)   [analysis]
//   application constructor: profile, dictionary list, window settings
int __cdecl TEAAppWindows::TEAAppWindows(int self,int name)

{
  uint len;
  undefined4 *puVar2;
  int teaViewProfileWindows;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 keyPath [8];
  int str;
  
  __InitExceptBlockLDTC(0x4fb734);
  *(undefined4 *)(self + 8) = 0;
  teaViewProfileWindows = *(int *)(*(int *)(name + 8) + -0xc);
  if (teaViewProfileWindows == -1 || teaViewProfileWindows + 1 < 0) {
    len = *(uint *)(*(int *)(name + 8) + -4);
    rep = std::string::__getRep(self,len,len);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),*(undefined4 **)(name + 8),len);
  }
  else {
    *(undefined4 *)(self + 8) = *(undefined4 *)(name + 8);
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *(undefined4 *)(self + 0x18) = 0;
  _vector_new_ldtc_((int *)(self + 0x20),0x10,4,1,(undefined*)std::string::string_462d44);
  _vector_new_ldtc_((int *)(self + 0x60),0x10,4,1,(undefined*)std::string::string_462d44);
  _vector_new_ldtc_((int *)(self + 0xa0),0x10,4,1,(undefined*)std::string::string_462d44);
  _vector_new_ldtc_((int *)(self + 0xf0),0x10,4,1,(undefined*)std::string::string_462d44);
  puVar2 = TSDictionaryList::Open((uint *)("ViewWindowX" + 0xb));
  *(undefined4 **)(self + 0x140) = puVar2;
  teaViewProfileWindows = operator_new();
  if (teaViewProfileWindows != 0) {
    GetProfileKeyPath((int)keyPath);
    TEAViewProfileWindows::TEAViewProfileWindows(teaViewProfileWindows,(int)keyPath);
  }
  *(int *)(self + 0x144) = teaViewProfileWindows;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      rep = (int *)(str + -0xc);
      if (rep == &g_nullStringRep) {
        teaViewProfileWindows = 1;
      }
      else if (rep == &g_nullStringRep) {
        teaViewProfileWindows = 1;
      }
      else {
        *rep = *rep + -1;
        teaViewProfileWindows = *rep + 1;
      }
      if (teaViewProfileWindows != 0) goto LAB_00462fc9;
    }
    operator_delete();
    str = 0;
  }
LAB_00462fc9:
  std::string::string_from_cstr(self + 0x148,(uint *)"Nobody");
  std::string::string_from_cstr(self + 0x158,(uint *)"Nobody");
  *(undefined4 *)(self + 0x168) = 0;
  *(undefined4 *)(self + 0x16c) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463310  TEAAppWindows::LoadMainWindowSettings   (2206 bytes)   [analysis]
//   checks the data folder ("Folder Missing"), then reads the main window position (ViewWindowX/Y/W/H/Z) and loads the icons
/* WARNING: Removing unreachable block (ram,0x00463361) */
/* WARNING: Removing unreachable block (ram,0x0046338d) */
void __cdecl TEAAppWindows::LoadMainWindowSettings(int self,int *rect,undefined4 unused,undefined4 *x,undefined4 *y, undefined4 *width,undefined4 *height,undefined4 *state)

{
  HINSTANCE hInst;
  int create;
  HANDLE pvVar2;
  HICON hIcon;
  int *strRep;
  byte *strRep2;
  undefined4 *sehChainHead;
  int tryLocalMachine;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 local_4c [8];
  int str6;
  undefined1 result [16];
  undefined1 key [8];
  char *key2;
  undefined1 owner [8];
  byte *owner2;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4fb920);
  *(int **)(self + 0x10) = rect;
  *(undefined4 *)(self + 0x14) = unused;
  owner2 = &g_emptyStringData;
  key2 = &g_emptyStringData;
  GetCommonIniPath((int)result,0x51a850);
  create = Common::ReadLicense((int)result,(int)owner,(int)key);
  if (create == 0) {
    MessageBoxExA(*(HWND *)(*rect + 0xc),"Common application data folder wasn't created during the installation",
                  "Folder Missing",0x10,0);
    PostQuitMessage(1);
  }
  else if ((create == 2) && (create = CheckLicenseKey2(owner2,key2), create != 0)) {
    std::string::operator_assign(self + 0x148,(int)owner);
    std::string::operator_assign(self + 0x158,(int)key);
  }
  Common::_dtor((int)result,2);
  if (key2 != (char *)0x0) {
    if (*(int *)(key2 + -0xc) != -1) {
      strRep = (int *)(key2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_004634f9;
    }
    operator_delete();
    key2 = (char *)0x0;
  }
LAB_004634f9:
  if (owner2 != (byte *)0x0) {
    if (*(int *)(owner2 + -0xc) != -1) {
      strRep2 = owner2 + -0xc;
      if (strRep2 == (byte *)&g_nullStringRep) {
        create = 1;
      }
      else if (strRep2 == (byte *)&g_nullStringRep) {
        create = 1;
      }
      else {
        *(int *)strRep2 = *(int *)strRep2 + -1;
        create = *(int *)strRep2 + 1;
      }
      if (create != 0) goto LAB_0046359e;
    }
    operator_delete();
    owner2 = (byte *)0x0;
  }
LAB_0046359e:
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_4c);
  Persist::Persist(persist,(int)local_4c,create,tryLocalMachine);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463676;
    }
    operator_delete();
    str6 = 0;
  }
LAB_00463676:
  *state = 0;
  *height = 0;
  *width = 0;
  *y = 0;
  *x = 0;
  std::string::string_from_cstr((int)valueName5,(uint *)"ViewWindowX");
  Persist::QueryDword((int)persist,(int)valueName5,x);
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463771;
    }
    operator_delete();
    str5 = 0;
  }
LAB_00463771:
  std::string::string_from_cstr((int)valueName4,(uint *)"ViewWindowY");
  Persist::QueryDword((int)persist,(int)valueName4,y);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463851;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00463851:
  std::string::string_from_cstr((int)valueName3,(uint *)"ViewWindowW");
  Persist::QueryDword((int)persist,(int)valueName3,width);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463931;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00463931:
  std::string::string_from_cstr((int)valueName2,(uint *)"ViewWindowH");
  Persist::QueryDword((int)persist,(int)valueName2,height);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463a1a;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00463a1a:
  std::string::string_from_cstr((int)valueName,(uint *)"ViewWindowZ");
  Persist::QueryDword((int)persist,(int)valueName,state);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463b15;
    }
    operator_delete();
    str = 0;
  }
LAB_00463b15:
  create = GetSystemMetrics(0x31);
  tryLocalMachine = GetSystemMetrics(0x32);
  hInst = *(HINSTANCE *)(*(int *)(**(int **)(self + 0x10) + 0x6c) + 0xc);
  if (((0 < create) && (0 < tryLocalMachine)) && (hInst != (HINSTANCE)0x0)) {
    pvVar2 = LoadImageA(hInst,"GRIDICON",1,create,tryLocalMachine,0);
    *(HANDLE *)(self + 0x16c) = pvVar2;
  }
  if (hInst != (HINSTANCE)0x0) {
    hIcon = LoadIconA(hInst,"GRIDICON");
    *(HICON *)(self + 0x168) = hIcon;
  }
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463bfc  TEAAppWindows::SaveMainWindowSettings   (2206 bytes)   [analysis]
//   writes the main window position and the open dictionaries (%s%d)
/* WARNING: Removing unreachable block (ram,0x004642e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::SaveMainWindowSettings(int self)

{
  uint *path;
  int *strRep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined1 *value;
  uint local_254 [15];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 unused6;
  undefined1 *unused7;
  undefined4 unused8;
  undefined *unused9;
  undefined *unused10;
  undefined1 *unused11;
  undefined4 unused12;
  int unused13;
  int unused14;
  undefined1 *unused15;
  undefined *unused16;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep2;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int *strRep3;
  undefined1 *unused25;
  undefined4 unused26;
  int unused27;
  int unused28;
  undefined1 *unused29;
  undefined4 unused30;
  int unused31;
  int unused32;
  undefined1 *unused33;
  undefined4 unused34;
  int unused35;
  int unused36;
  undefined1 *unused37;
  undefined4 unused38;
  int unused39;
  int unused40;
  undefined1 *unused41;
  undefined4 unused42;
  int unused43;
  int unused44;
  undefined1 *unused45;
  undefined4 unused46;
  int unused47;
  int unused48;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str2;
  undefined1 newStr [8];
  undefined *local_94;
  undefined1 valueName2 [8];
  int str3;
  undefined1 str [8];
  int str4;
  undefined1 valueName3 [8];
  int str5;
  undefined1 valueName4 [8];
  int str6;
  undefined1 valueName5 [8];
  int str7;
  undefined1 valueName6 [8];
  int str8;
  undefined1 valueName7 [8];
  int str9;
  undefined1 local_1c [8];
  int str10;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4fbad8);
  ehContext = 0x14;
  tryLocalMachine = 0;
  create = 1;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,create,tryLocalMachine);
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      strRep = (int *)(str10 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463cd4;
    }
    unused48 = str10 + -0xc;
    unused47 = str10 + -0xc;
    operator_delete();
    unused46 = 0;
    unused45 = local_1c;
    str10 = 0;
    unused6 = 0;
  }
LAB_00463cd4:
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName7,(uint *)"ViewWindowX");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName7);
  ehDtorCount = ehDtorCount + -1;
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      strRep = (int *)(str9 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463d96;
    }
    unused44 = str9 + -0xc;
    unused43 = str9 + -0xc;
    operator_delete();
    unused42 = 0;
    unused41 = valueName7;
    str9 = 0;
    unused5 = 0;
  }
LAB_00463d96:
  ehContext = 0x44;
  std::string::string_from_cstr((int)valueName6,(uint *)"ViewWindowY");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName6);
  ehDtorCount = ehDtorCount + -1;
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      strRep = (int *)(str8 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463e58;
    }
    unused40 = str8 + -0xc;
    unused39 = str8 + -0xc;
    operator_delete();
    unused38 = 0;
    unused37 = valueName6;
    str8 = 0;
    unused4 = 0;
  }
LAB_00463e58:
  ehContext = 0x5c;
  std::string::string_from_cstr((int)valueName5,(uint *)"ViewWindowW");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName5);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep = (int *)(str7 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463f1a;
    }
    unused36 = str7 + -0xc;
    unused35 = str7 + -0xc;
    operator_delete();
    unused34 = 0;
    unused33 = valueName5;
    str7 = 0;
    unused3 = 0;
  }
LAB_00463f1a:
  ehContext = 0x74;
  std::string::string_from_cstr((int)valueName4,(uint *)"ViewWindowH");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName4);
  ehDtorCount = ehDtorCount + -1;
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00463fdc;
    }
    unused32 = str6 + -0xc;
    unused31 = str6 + -0xc;
    operator_delete();
    unused30 = 0;
    unused29 = valueName4;
    str6 = 0;
    unused2 = 0;
  }
LAB_00463fdc:
  ehContext = 0x8c;
  std::string::string_from_cstr((int)valueName3,(uint *)"ViewWindowZ");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName3);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_0046409e;
    }
    unused28 = str5 + -0xc;
    unused27 = str5 + -0xc;
    operator_delete();
    unused26 = 0;
    unused25 = valueName3;
    str5 = 0;
    unused = 0;
  }
LAB_0046409e:
  ehContext = 8;
  create = 1;
  do {
    sprintf((undefined1 *)local_254,&DAT_004fb4e9 /* "%s%d" */);
    tryLocalMachine = TSDictionaryList::GetCount(*(int *)(self + 0x140));
    if (tryLocalMachine < create) {
      ehContext = 200;
      unused15 = newStr;
      unused16 = &g_emptyStringData;
      local_94 = &g_emptyStringData;
      value = newStr;
      ehDtorCount = ehDtorCount + 1;
      std::string::string_from_cstr((int)valueName,local_254);
      ehDtorCount = ehDtorCount + 1;
      Persist::SetString((int)persist,(int)valueName,(int)value);
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          strRep = (int *)(str2 + -0xc);
          if (strRep == &g_nullStringRep) {
            create = 1;
          }
          else if (strRep == &g_nullStringRep) {
            create = 1;
          }
          else {
            *strRep = *strRep + -1;
            create = *strRep + 1;
          }
          if (create != 0) goto LAB_004643c7;
        }
        unused14 = str2 + -0xc;
        unused13 = str2 + -0xc;
        operator_delete();
        unused12 = 0;
        unused11 = valueName;
        str2 = 0;
      }
LAB_004643c7:
      ehContext = 8;
      ehDtorCount = ehDtorCount + -1;
      if (local_94 == (undefined *)0x0) break;
      if (*(int *)(local_94 + -0xc) != -1) {
        strRep = (int *)(local_94 + -0xc);
        if (strRep == &g_nullStringRep) {
          create = 1;
        }
        else if (strRep == &g_nullStringRep) {
          create = 1;
        }
        else {
          *strRep = *strRep + -1;
          create = *strRep + 1;
        }
        if (create != 0) break;
      }
      unused10 = local_94 + -0xc;
      unused9 = local_94 + -0xc;
      operator_delete();
      unused8 = 0;
      unused7 = newStr;
      local_94 = (undefined *)0x0;
      break;
    }
    ehContext = 0xa4;
    path = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x140),create + -1);
    std::string::string_from_cstr((int)str,path);
    ehDtorCount = ehDtorCount + 1;
    value = str;
    std::string::string_from_cstr((int)valueName2,local_254);
    ehDtorCount = ehDtorCount + 1;
    Persist::SetString((int)persist,(int)valueName2,(int)value);
    ehDtorCount = ehDtorCount + -1;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep3 = (int *)(str3 + -0xc);
        if (strRep3 == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else if (strRep3 == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else {
          *strRep3 = *strRep3 + -1;
          tryLocalMachine = *strRep3 + 1;
        }
        if (tryLocalMachine != 0) goto LAB_004641f0;
      }
      unused24 = str3 + -0xc;
      unused23 = str3 + -0xc;
      operator_delete();
      unused22 = 0;
      unused21 = valueName2;
      str3 = 0;
    }
LAB_004641f0:
    ehContext = 8;
    ehDtorCount = ehDtorCount + -1;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep2 = (int *)(str4 + -0xc);
        if (strRep2 == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          tryLocalMachine = *strRep2 + 1;
        }
        if (tryLocalMachine != 0) goto LAB_0046446f;
      }
      unused20 = str4 + -0xc;
      unused19 = str4 + -0xc;
      operator_delete();
      unused18 = 0;
      unused17 = str;
      str4 = 0;
    }
LAB_0046446f:
    create = create + 1;
  } while (create < 10);
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046449c  TEAAppWindows::OpenStartupDictionaries   (1215 bytes)   [analysis]
//   reopens the dictionaries listed in the profile (falling back to the bundled ones in Dictionaries\) and records them in the file history
/* WARNING: Removing unreachable block (ram,0x004645d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::OpenStartupDictionaries(int self)

{
  char cVar1;
  bool isRelativePath;
  char *len;
  undefined3 regHigh;
  undefined *fileHistory;
  int *strRep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined1 *out;
  uint *path;
  uint local_114 [15];
  undefined4 unused;
  undefined1 *unused2;
  undefined4 unused3;
  uint *unused4;
  uint *unused5;
  undefined1 *unused6;
  undefined4 unused7;
  uint *unused8;
  undefined1 *unused9;
  undefined4 unused10;
  uint *unused11;
  uint *unused12;
  uint pos;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep2;
  int local_74;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  uint *paths;
  undefined1 valueName [8];
  int str;
  undefined1 local_2c [8];
  uint *paths2;
  undefined1 local_1c [8];
  int str2;
  int persist [2];
  undefined4 uVar3;
  
  __InitExceptBlockLDTC(0x4fbc4c);
  local_74 = 1;
  ehContext = 0x14;
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,create,tryLocalMachine);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep2 = (int *)(str2 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        create = *strRep2 + 1;
      }
      if (create != 0) goto LAB_0046457d;
    }
    unused20 = str2 + -0xc;
    unused19 = str2 + -0xc;
    operator_delete();
    unused18 = 0;
    unused17 = local_1c;
    str2 = 0;
    unused = 0;
  }
LAB_0046457d:
  create = 1;
  do {
    ehContext = 8;
    sprintf((undefined1 *)local_114,&DAT_004fb4e9 /* "%s%d" */);
    paths2 = (uint *)&g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    out = local_2c;
    std::string::string_from_cstr((int)valueName,local_114);
    ehDtorCount = ehDtorCount + 1;
    uVar3 = Persist::QueryString((int)persist,(int)valueName,(int)out);
    cVar1 = (char)uVar3;
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep = (int *)(str + -0xc);
        if (strRep == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else if (strRep == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else {
          *strRep = *strRep + -1;
          tryLocalMachine = *strRep + 1;
        }
        if (tryLocalMachine != 0) goto LAB_004646a7;
      }
      unused16 = str + -0xc;
      unused15 = str + -0xc;
      operator_delete();
      unused14 = 0;
      unused13 = valueName;
      str = 0;
    }
LAB_004646a7:
    if (cVar1 != '\0') {
      local_74 = 0;
    }
    if ((local_74 != 0) && (create < 5)) {
      std::string::assign_cstr((int)local_2c,(uint *)"Dictionaries\\");
      path = *(uint **)(create * 4 + 0x4fb324);
      pos = paths2[-1];
      len = strlen(path);
      std::string::replace((int)local_2c,pos,0,(uint)path,(uint)len,0,(uint)len);
    }
    if (paths2[-1] == 0) {
      ehDtorCount = ehDtorCount + -1;
      if (paths2 != (uint *)0x0) {
        if (paths2[-3] != 0xffffffff) {
          path = paths2 + -3;
          if (path == &g_nullStringRep) {
            create = 1;
          }
          else if (path == &g_nullStringRep) {
            create = 1;
          }
          else {
            *path = *path - 1;
            create = *path + 1;
          }
          if (create != 0) goto LAB_00464788;
        }
        unused8 = paths2 + -3;
        operator_delete();
        unused7 = 0;
        paths2 = (uint *)0x0;
        unused6 = local_2c;
      }
LAB_00464788:
      ehContext = 0x44;
      break;
    }
    isRelativePath = IsRelativePath((int)local_2c);
    if (CONCAT31(regHigh,isRelativePath) == 0) {
      TEAAppWindows::OpenDictionaries(self,paths2);
    }
    else {
      ehContext = 0x74;
      ResolveRelativePaths((int)result,(int)local_2c);
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x68;
      TEAAppWindows::OpenDictionaries(self,paths);
      path = paths;
      fileHistory = GetFileHistory(self,0);
      FileHistory::Add((int)fileHistory,path);
      ehDtorCount = ehDtorCount + -1;
      if (paths != (uint *)0x0) {
        if (paths[-3] != 0xffffffff) {
          path = paths + -3;
          if (path == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else if (path == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else {
            *path = *path - 1;
            tryLocalMachine = *path + 1;
          }
          if (tryLocalMachine != 0) goto LAB_0046487c;
        }
        unused12 = paths + -3;
        unused11 = paths + -3;
        operator_delete();
        unused10 = 0;
        unused9 = result;
        paths = (uint *)0x0;
      }
LAB_0046487c:
      ehContext = 0x44;
    }
    ehDtorCount = ehDtorCount + -1;
    if (paths2 != (uint *)0x0) {
      if (paths2[-3] != 0xffffffff) {
        path = paths2 + -3;
        if (path == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else if (path == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else {
          *path = *path - 1;
          tryLocalMachine = *path + 1;
        }
        if (tryLocalMachine != 0) goto LAB_00464924;
      }
      unused5 = paths2 + -3;
      unused4 = paths2 + -3;
      operator_delete();
      unused3 = 0;
      paths2 = (uint *)0x0;
      unused2 = local_2c;
    }
LAB_00464924:
    ehContext = 8;
    create = create + 1;
  } while (create < 10);
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046495c  TEAAppWindows::ShowHelpFor   (33 bytes)   [analysis]
//   opens the help for the main window
void __cdecl TEAAppWindows::ShowHelpFor(int self)

{
  TEAAppWindows::GetMainWindowHandle(self);
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464980  ShowHelpContents   (45 bytes)   [analysis]
//   opens the help file
//   file placement: inferred (address adjacency)
void __stdcall ShowHelpContents(void)

{
  ShowHtmlHelp((HWND)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004649b0  GetProfileKeyPath   (225 bytes)   [analysis]
//   the registry key path of the current profile, as a std::string
//   file placement: inferred (address adjacency)
int __cdecl GetProfileKeyPath(int param_1)

{
  uint uVar1;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fbd00);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(undefined4 * *)&DAT_0051a848)[-3] == -1 || (*(undefined4 * *)&DAT_0051a848)[-3] + 1 < 0) {
    uVar1 = (*(undefined4 * *)&DAT_0051a848)[-1];
    rep = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = rep + 3;
    memcpy(*(undefined4 **)(param_1 + 8),(*(undefined4 * *)&DAT_0051a848),uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = (*(undefined4 * *)&DAT_0051a848);
    rep = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464a94  TEAAppWindows::LoadResourceString   (75 bytes)   [analysis]
//   a string resource of the application module
int __cdecl TEAAppWindows::LoadResourceString(int result,int self,uint id)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fbd30);
  FUN_004c0e0c(result,*(int *)(**(int **)(self + 0x10) + 0x6c) + 4,id);
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464ae0  TEAAppWindows::GetMainWindowHandle   (16 bytes)   [analysis]
//   HWND of the main window
undefined4 __cdecl TEAAppWindows::GetMainWindowHandle(int self)

{
  return *(undefined4 *)(**(int **)(self + 0x10) + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x00464af0  TEAAppWindows::GetPrinter   (156 bytes)   [analysis]
//   the shared TPrinter (created on first use)
undefined4 __cdecl TEAAppWindows::GetPrinter(int self)

{
  undefined4 uVar1;
  int *printer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fbd64);
  if (*(int *)(self + 0x18) == 0) {
    printer = (int *)operator_new();
    if (printer != (int *)0x0) {
      OWL::TPrinter::TPrinter(printer,0);
    }
    *(int **)(self + 0x18) = printer;
    if (*(int *)(printer[2] + 4) == 0x1008) {
      if (printer != (int *)0x0) {
        (**(code **)*printer)();
      }
      *(undefined4 *)(self + 0x18) = 0;
    }
  }
  uVar1 = *(undefined4 *)(self + 0x18);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464ba4  TEAAppWindows::Nothing_464ba4   (5 bytes)   [analysis]
//   empty
//   file placement: inferred (address adjacency)
void __stdcall TEAAppWindows::Nothing_464ba4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464bac  TEAAppWindows::Nothing_464bac   (5 bytes)   [analysis]
//   empty
//   file placement: inferred (address adjacency)
void __stdcall TEAAppWindows::Nothing_464bac(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464bb4  TEAAppWindows::OpenDictionaries   (870 bytes, 2 ranges)   [analysis]
//   replaces the open dictionary list with `paths` (unless already open); reports files that are not valid dictionaries; recreates the panes and the title
undefined4 __cdecl TEAAppWindows::OpenDictionaries(int self,uint *paths)

{
  uint uVar1;
  int cmp;
  uint *pathList;
  char *pcVar4;
  undefined4 *tsDictionaryList;
  int *strRep;
  int iVar7;
  undefined4 *sehChainHead;
  undefined4 uVar8;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  LPCSTR text;
  undefined1 str2 [8];
  uint *paths2;
  
  __InitExceptBlockLDTC(0x4fbddc);
  for (iVar7 = 0; cmp = TSDictionaryList::GetCount(*(int *)(self + 0x140)), iVar7 < cmp; iVar7 = iVar7 + 1)
  {
    pcVar4 = (char *)TSDictionaryList::GetPath(*(int *)(self + 0x140),iVar7);
    cmp = strcmp((char *)paths,pcVar4);
    if (cmp == 0) {
      TEAViewWindows::SetCurrentPane(*(int **)(self + 0x10),iVar7);
      *sehChainHead = sehPrevFrame;
      return 1;
    }
  }
  iVar7 = TSDictionaryList::GetCount(*(int *)(self + 0x140));
  if (8 < iVar7) {
    (**(code **)(*(int *)(*(int *)(**(int **)(self + 0x10) + 0x6c) + 0x1b) + 0x30))();
    *sehChainHead = sehPrevFrame;
    return 0;
  }
  pathList = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self + 0x140));
  std::string::string_from_cstr((int)str2,pathList);
  if (paths2[-1] != 0) {
    std::string::replace_fill((int)str2,paths2[-1],0,1,0x3b);
  }
  uVar1 = paths2[-1];
  pcVar4 = strlen(paths);
  std::string::replace((int)str2,uVar1,0,(uint)paths,(uint)pcVar4,0,(uint)pcVar4);
  tsDictionaryList = TSDictionaryList::Open(paths2);
  iVar7 = TSDictionaryList::GetFirstMissingPath((int)tsDictionaryList);
  if (iVar7 == 0) {
    TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x140));
    *(undefined4 **)(self + 0x140) = tsDictionaryList;
    TEAViewWindows::CreatePanes(*(int **)(self + 0x10),1);
    TEAAppWindows::UpdateTitle(self);
    uVar8 = 1;
    if (paths2 != (uint *)0x0) {
      if (paths2[-3] != 0xffffffff) {
        paths2 = paths2 + -3;
        if (paths2 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else if (paths2 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else {
          *paths2 = *paths2 - 1;
          iVar7 = *paths2 + 1;
        }
        if (iVar7 != 0) goto LAB_00464f0a;
      }
      operator_delete();
    }
LAB_00464f0a:
    *sehChainHead = sehPrevFrame;
    return uVar8;
  }
  std::string::string_from_cstr((int)str,paths);
  uVar1 = *(uint *)(text + -4);
  pcVar4 = strlen((uint *)"\nis not a valid TEA&Sympathy Dictionary File");
  std::string::replace((int)str,uVar1,0,0x4fb5b3,(uint)pcVar4,0,(uint)pcVar4);
  MessageBoxExA(*(HWND *)(**(int **)(self + 0x10) + 0xc),text,
                "Dictionary Open Failed",0x30,0);
  TSDictionaryList::ReleaseDictionaries((int)tsDictionaryList);
  uVar8 = 0;
  if (text != (LPCSTR)0x0) {
    if (*(int *)(text + -0xc) != -1) {
      strRep = (int *)(text + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar7 = *strRep + 1;
      }
      if (iVar7 != 0) goto LAB_00464dda;
    }
    operator_delete();
    text = (LPCSTR)0x0;
  }
LAB_00464dda:
  if (paths2 != (uint *)0x0) {
    if (paths2[-3] != 0xffffffff) {
      paths2 = paths2 + -3;
      if (paths2 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (paths2 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *paths2 = *paths2 - 1;
        iVar7 = *paths2 + 1;
      }
      if (iVar7 != 0) goto LAB_00464e54;
    }
    operator_delete();
  }
LAB_00464e54:
  *sehChainHead = sehPrevFrame;
  return uVar8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464f24  TEAAppWindows::CloseDictionary   (387 bytes)   [analysis]
//   closes the dictionary of the current pane
/* WARNING: Removing unreachable block (ram,0x00464f6f) */
void __cdecl TEAAppWindows::CloseDictionary(int self)

{
  uint pos;
  int iVar2;
  uint *puVar3;
  char *len;
  int iVar5;
  undefined4 *puVar6;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *paths;
  
  __InitExceptBlockLDTC(0x4fbe58);
  iVar2 = TEAViewWindows::GetCurrentPane(*(int *)(self + 0x10));
  paths = (uint *)&g_emptyStringData;
  for (index = 0; iVar5 = TSDictionaryList::GetCount(*(int *)(self + 0x140)), index < iVar5; index = index + 1)
  {
    if (index != iVar2) {
      if (paths[-1] != 0) {
        std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
      }
      puVar3 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x140),index);
      pos = paths[-1];
      len = strlen(puVar3);
      std::string::replace((int)str,pos,0,(uint)puVar3,(uint)len,0,(uint)len);
    }
  }
  puVar6 = TSDictionaryList::Open(paths);
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x140));
  *(undefined4 **)(self + 0x140) = puVar6;
  TEAViewWindows::CreatePanes(*(int **)(self + 0x10),4);
  TEAAppWindows::UpdateTitle(self);
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      puVar3 = paths + -3;
      if (puVar3 == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (puVar3 == &g_nullStringRep) {
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004650a8  TEAAppWindows::MoveDictionary   (410 bytes)   [analysis]
//   promotes or demotes the current dictionary in the list
/* WARNING: Removing unreachable block (ram,0x004650fc) */
void __cdecl TEAAppWindows::MoveDictionary(int self,int direction)

{
  uint pos;
  uint *puVar2;
  char *len;
  int index;
  undefined4 *puVar5;
  int prevRefs;
  undefined4 *sehChainHead;
  int local_3c;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *paths;
  
  __InitExceptBlockLDTC(0x4fbeb0);
  local_3c = TEAViewWindows::GetCurrentPane(*(int *)(self + 0x10));
  if (direction == 2) {
    local_3c = local_3c + -1;
  }
  paths = (uint *)&g_emptyStringData;
  for (prevRefs = 0; index = TSDictionaryList::GetCount(*(int *)(self + 0x140)), prevRefs < index; prevRefs = prevRefs + 1)
  {
    if (paths[-1] != 0) {
      std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
    }
    index = prevRefs;
    if (prevRefs == local_3c) {
      index = prevRefs + 1;
    }
    if (prevRefs == local_3c + 1) {
      index = index + -1;
    }
    puVar2 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x140),index);
    pos = paths[-1];
    len = strlen(puVar2);
    std::string::replace((int)str,pos,0,(uint)puVar2,(uint)len,0,(uint)len);
  }
  puVar5 = TSDictionaryList::Open(paths);
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x140));
  *(undefined4 **)(self + 0x140) = puVar5;
  TEAViewWindows::CreatePanes(*(int **)(self + 0x10),direction);
  TEAAppWindows::UpdateTitle(self);
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      puVar2 = paths + -3;
      if (puVar2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (puVar2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        prevRefs = *puVar2 + 1;
      }
      if (prevRefs != 0) goto LAB_00465231;
    }
    operator_delete();
  }
LAB_00465231:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465244  TEAAppWindows::Nothing_465244   (5 bytes)   [analysis]
//   empty
//   file placement: inferred (address adjacency)
void __stdcall TEAAppWindows::Nothing_465244(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046524c  TEAAppWindows::Lookup   (1342 bytes, 2 ranges)   [analysis]
//   looks a word up: definitions (index 0) in a definition window, or external lookup `index` (dialog or LookupConfiguration::Run)
/* WARNING: Removing unreachable block (ram,0x0046533c) */
/* WARNING: Removing unreachable block (ram,0x0046537f) */
/* WARNING: Removing unreachable block (ram,0x004652c3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffc4c : 0x004652d1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl TEAAppWindows::Lookup(int self,int except,int index,int word_,int newWindow,int flags)

{
  int *piVar1;
  undefined *lookupConfiguration;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *sehChainHead;
  uint *word_2;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str;
  int externalLookupViewWindows [206];
  undefined1 word_3 [8];
  undefined *local_3c;
  undefined1 matchSet [8];
  undefined *local_2c;
  undefined4 local_24;
  int first;
  int last;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x4fbf74);
  if ((index == 0x1d42) || (index == 0x3160)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    first = 0;
    last = 0;
    unused = 0;
    local_24 = 8;
    TEAAppWindows::FindDefinitions(self,word_,(int)&local_24);
    iVar4 = last - first;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    if (iVar4 >> 7 != 0) {
      local_2c = &g_emptyStringData;
      local_3c = &g_emptyStringData;
      if (flags != 0) {
        std::string::operator_assign((int)matchSet,flags);
      }
      if (newWindow != 0) {
        std::string::operator_assign((int)word_3,newWindow);
      }
      piVar1 = TEAViewWindows::GetDefinitionWindow(*(undefined4 **)(self + 0x10),(uint)(index == 0x3160));
      DefinitionViewFrame::ShowDefinitions(piVar1,(int)&local_24,word_,(int)word_3,(int)matchSet,0,0,-1);
      uVar3 = (uint)(index == 0x3160);
      if (local_3c != (undefined *)0x0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          piVar1 = (int *)(local_3c + -0xc);
          if (piVar1 == &g_nullStringRep) {
            iVar5 = 1;
          }
          else if (piVar1 == &g_nullStringRep) {
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
          if (piVar1 == &g_nullStringRep) {
            iVar5 = 1;
          }
          else if (piVar1 == &g_nullStringRep) {
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
      std::_Destroy_range_DefinitionRecord(&local_24,first,last);
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return uVar3;
    }
    std::_Destroy_range_DefinitionRecord(&local_24,first,last);
    operator_delete();
  }
  if (iVar5 == 0) {
    piVar1 = (int *)GetLookupConfiguration(self);
    iVar4 = LookupConfiguration::GetCount(piVar1);
    if (iVar4 < 1) goto LAB_004655cd;
  }
  else {
LAB_004655cd:
    TEAViewWindows::BroadcastToOthers(*(int **)(self + 0x10),except);
    piVar1 = ExternalLookupViewWindows::ExternalLookupViewWindows(externalLookupViewWindows,0,except,self,word_,iVar5);
    iVar5 = (**(code **)(piVar1[3] + 0x14))();
    ExternalLookupViewWindows::_dtor(externalLookupViewWindows,2);
    TEAViewWindows::BroadcastToOthers(*(int **)(self + 0x10),except);
    if (iVar5 != 1) {
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    index = 0x31a6;
  }
  word_2 = *(uint **)(word_ + 8);
  lookupConfiguration = GetLookupConfiguration(self);
  uVar3 = LookupConfiguration::Run((int)lookupConfiguration,word_2,index);
  if (uVar3 == 0) {
    TEAAppWindows::LoadResourceString((int)result,self,0x18ec);
    (**(code **)(*(int *)(*(int *)(**(int **)(self + 0x10) + 0x6c) + 0x1b) + 0x30))();
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar1 = (int *)(str + -0xc);
        if (piVar1 == &g_nullStringRep) {
          iVar5 = 1;
        }
        else if (piVar1 == &g_nullStringRep) {
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
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046583c  TEAAppWindows::LaunchTool   (318 bytes)   [analysis]
//   starts a companion program from the program folder (Dictionary Builder, Word List Merge)
void __cdecl TEAAppWindows::LaunchTool(undefined4 self,uint *exeName)

{
  int *strRep;
  undefined4 *sehChainHead;
  int arguments;
  int folder;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  int str;
  undefined1 paths [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4fc064);
  folder = 0;
  arguments = 0;
  std::string::string_from_cstr((int)paths,exeName);
  ResolveRelativePaths((int)local_24,(int)paths);
  LaunchProgram((int)local_24,arguments,folder);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        arguments = 1;
      }
      else if (strRep == &g_nullStringRep) {
        arguments = 1;
      }
      else {
        *strRep = *strRep + -1;
        arguments = *strRep + 1;
      }
      if (arguments != 0) goto LAB_004658fc;
    }
    operator_delete();
    str = 0;
  }
LAB_004658fc:
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        arguments = 1;
      }
      else if (strRep == &g_nullStringRep) {
        arguments = 1;
      }
      else {
        *strRep = *strRep + -1;
        arguments = *strRep + 1;
      }
      if (arguments != 0) goto LAB_00465969;
    }
    operator_delete();
  }
LAB_00465969:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046597c  TEAAppWindows::CopyTextToClipboard   (231 bytes)   [analysis]
//   puts text on the clipboard (two formats)
void __cdecl TEAAppWindows::CopyTextToClipboard(int self,uint *text,uint *text2)

{
  BOOL ok;
  char *len;
  HGLOBAL hGlobal;
  LPSTR string1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  char clipboard;
  
  __InitExceptBlockLDTC(0x4fc0b0);
  FUN_0048ba8c(&clipboard,*(HWND *)(**(int **)(self + 0x10) + 0xc),'\x01');
  ok = EmptyClipboard();
  if (ok != 0) {
    if (text != (uint *)0x0) {
      len = strlen(text);
      hGlobal = GlobalAlloc(0x42,(SIZE_T)(len + 1));
      string1 = GlobalLock(hGlobal);
      lstrcpyA(string1,(LPCSTR)text);
      GlobalUnlock(hGlobal);
      SetClipboardData(1,hGlobal);
    }
    if (text2 != (uint *)0x0) {
      len = strlen(text2);
      hGlobal = GlobalAlloc(0x42,(SIZE_T)(len + 1));
      string1 = GlobalLock(hGlobal);
      lstrcpyA(string1,(LPCSTR)text2);
      GlobalUnlock(hGlobal);
      SetClipboardData(0x81,hGlobal);
    }
  }
  FUN_0048bc08(&clipboard);
  OWL::TClipboard::_dtor(&clipboard,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465a64  TEAAppWindows::SetStatusText   (27 bytes)   [analysis]
//   text in the status bar
void __cdecl TEAAppWindows::SetStatusText(int self,int text)

{
  FUN_004987c4(*(int *)(self + 0x14),*(uint **)(text + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465a80  TEAAppWindows::RunStartupSequence   (2143 bytes)   [analysis]
//   licence and introduction dialogs at start-up, then the panes
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
void __cdecl TEAAppWindows::RunStartupSequence(int self)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *strRep;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *sehChainHead;
  char cVar7;
  undefined *local_56c;
  undefined1 s;
  uint local_560;
  uint local_514;
  undefined4 *strRep2;
  uint local_4c4;
  uint ch;
  uint local_4bc;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int licenseViewWindows [154];
  int introductionViewWindows [3];
  int local_1d0;
  int local_a4;
  
  __InitExceptBlockLDTC(0x4fc154);
  iVar1 = CheckLicenseKey2(*(byte **)(self + 0x150),*(char **)(self + 0x160));
  if (iVar1 == 0) {
    ehContext = 8;
    if (*(int *)(self + 0x10) == 0) {
      uVar5 = *(undefined4 *)(self + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(self + 0x10);
    }
    IntroductionViewWindows::IntroductionViewWindows(introductionViewWindows,0,uVar5,self);
    ehDtorCount = ehDtorCount + 0xd;
    ehContext = 0x14;
    (**(code **)(local_1d0 + 0x14))();
    if (local_a4 == 0) {
      PostQuitMessage(1);
    }
    ehContext = 0x20;
    if (*(int *)(self + 0x10) == 0) {
      uVar5 = *(undefined4 *)(self + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(self + 0x10);
    }
    piVar2 = LicenseViewWindows::LicenseViewWindows(licenseViewWindows,0,uVar5,self,self + 0x148,self + 0x158);
    ehDtorCount = ehDtorCount + 0x10;
    iVar1 = (**(code **)(piVar2[3] + 0x14))();
    cVar7 = iVar1 == 1;
    ehDtorCount = ehDtorCount + -0x10;
    LicenseViewWindows::_dtor(licenseViewWindows,2);
    if (cVar7 != '\0') {
      local_4bc = 0;
      ehContext = 0x14;
      do {
        local_56c = &DAT_004fb288;
        uVar6 = 0;
        do {
          local_4c4 = uVar6;
          if (1 < *(int *)(*(int *)(self + 0x160) + -0xc) + 1) {
            std::string::__unshare(self + 0x158);
          }
          strRep2 = (undefined4 *)(*(int *)(self + 0x160) + -0xc);
          if (strRep2 != &g_nullStringRep) {
            *strRep2 = 0xffffffff;
          }
          ch = (uint)*(char *)(*(int *)(self + 0x160) + local_4c4);
          uVar3 = toupper(ch);
          ehContext = 0x14;
          if (uVar3 - 0x40 != *(int *)(local_56c + local_4bc * 0x28)) break;
          uVar6 = uVar6 + 1;
          local_56c = local_56c + 4;
        } while (uVar6 < 10);
        if (9 < uVar6) {
          if (*(int *)(*(int *)(self + 0x160) + -4) == 0) {
            std::string::replace_fill(self + 0x158,*(uint *)(*(int *)(self + 0x160) + -4),0,
                         -*(int *)(*(int *)(self + 0x160) + -4),0);
          }
          else {
            local_514 = *(uint *)(*(int *)(self + 0x160) + -4);
            local_560 = *(uint *)(*(int *)(self + 0x160) + -4);
            s = 0;
            uVar6 = local_560;
            if (local_514 < local_560) {
              uVar6 = local_514;
            }
            std::string::replace(self + 0x158,0,uVar6,(uint)&s,0,0,0);
          }
          strRep = (undefined4 *)(*(int *)(self + 0x160) + -0xc);
          if (strRep != &g_nullStringRep) {
            *strRep = 0;
          }
        }
        local_4bc = local_4bc + 1;
      } while (local_4bc < 4);
      TEAAppWindows::CheckLicense(self);
    }
    ehDtorCount = ehDtorCount + -0xd;
    IntroductionViewWindows::_dtor(introductionViewWindows,2);
    ehContext = 0;
  }
  TEAViewWindows::CreatePanes(*(int **)(self + 0x10),0);
  iVar1 = CheckLicenseKey(*(byte **)(self + 0x150),*(char **)(self + 0x160));
  if (iVar1 == 0) {
    PostQuitMessage(1);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466370  TEAAppWindows::ActivateWindow   (48 bytes)   [analysis]
//   cycles to the next/previous TEA window
void __cdecl TEAAppWindows::ActivateWindow(int self,int window,int backwards)

{
  int iVar1;
  
  if (*(int *)(self + 0x10) == 0) {
    iVar1 = *(int *)(self + 0x10);
  }
  else {
    iVar1 = **(int **)(self + 0x10);
  }
  if (backwards == iVar1) {
    TEAViewWindows::ActivateWindow(*(int **)(self + 0x10),window,backwards);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004663a0  TEAAppWindows::UpdateFileMenu   (1776 bytes)   [analysis]
//   the File menu's dictionary list and recent files
/* WARNING: Removing unreachable block (ram,0x0046641b) */
/* WARNING: Removing unreachable block (ram,0x00466570) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::UpdateFileMenu(int self,int hMenu)

{
  uint uVar1;
  char *pcVar2;
  BOOL ok;
  int index;
  int prevRefs;
  UINT *pUVar6;
  int *strRep;
  UINT *pUVar8;
  undefined4 *sehChainHead;
  byte bVar9;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar12;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined *unused2;
  undefined *unused3;
  undefined *unused4;
  int *strRep2;
  undefined1 *unused5;
  undefined4 unused6;
  char *unused7;
  char *unused8;
  UINT position;
  UINT flags;
  UINT_PTR idNewItem;
  LPCSTR unused9;
  undefined1 unused10;
  undefined1 s;
  undefined1 *unused11;
  undefined4 unused12;
  int *unused13;
  int *unused14;
  int *strRep3;
  int *newData;
  int *unused15;
  uint unused16;
  undefined1 *unused17;
  int *newRep;
  int *unused18;
  uint len;
  int *strRep4;
  undefined1 *unused19;
  int *unused20;
  undefined4 unused21;
  uint *msgText;
  uint local_10c;
  char *unused22;
  int local_104;
  undefined1 unused23;
  undefined1 *unused24;
  undefined4 unused25;
  int unused26;
  int unused27;
  int *strRep5;
  undefined1 *unused28;
  undefined *unused29;
  undefined4 unused30;
  UINT local_d4;
  uint auStack_d0 [20];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused31;
  undefined1 str2 [8];
  char *newItem;
  undefined1 result [8];
  int str5;
  undefined1 str3 [8];
  undefined *local_c;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x4fc268);
  pUVar6 = &DAT_004fb350;
  pUVar8 = &local_d4;
  for (index = 0x15; index != 0; index = index + -1) {
    *pUVar8 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar9 * -2 + 1;
    pUVar8 = pUVar8 + (uint)bVar9 * -2 + 1;
  }
  unused30 = 0;
  unused28 = str3;
  unused29 = &g_emptyStringData;
  local_c = &g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  index = TSDictionaryList::GetCount(*(int *)(self + 0x140));
  if (0 < index) {
    ehContext = 0x2c;
    index = TEAViewWindows::GetCurrentPane(*(int *)(self + 0x10));
    TSDictionaryList::GetFileTitle(result,*(int *)(self + 0x140),index);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)str3,(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep5 = (int *)(str5 + -0xc);
        if (strRep5 == &g_nullStringRep) {
          index = 1;
        }
        else if (strRep5 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *strRep5 = *strRep5 + -1;
          index = *strRep5 + 1;
        }
        if (index != 0) goto LAB_00466534;
      }
      unused27 = str5 + -0xc;
      unused26 = str5 + -0xc;
      operator_delete();
      unused25 = 0;
      unused24 = result;
      str5 = 0;
      unused = 0;
    }
  }
LAB_00466534:
  index = 0;
  do {
    ehContext = 0x50;
    std::string::string_from_cstr((int)str2,(uint *)auStack_d0[index * 3 + 1]);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x44;
    unused23 = 0x2a;
    local_104 = *(int *)(newItem + -4);
    unused22 = newItem;
    pcVar2 = thunk_memchr(newItem,'*',local_104);
    uVar12 = g_stringNpos;
    if (pcVar2 != (char *)0x0) {
      uVar12 = (int)pcVar2 - (int)newItem;
    }
    if (*(int *)(local_c + -4) == 0) {
      uVar1 = auStack_d0[index * 3];
      local_10c = (uVar12 + 2) - uVar1;
      if (*(uint *)(newItem + -4) < uVar1) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar12 = 1;
        copyCtor = &LAB_004084c8;
        objectDtor = 0;
        ehContext = 0x68;
        msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)str,msgText);
        ehDtorCount = ehDtorCount + 2;
        outOfRange[0] = &std::logic_error::vftable;
        unused21 = 0;
        unused31 = (int *)0x0;
        ehContext = 0x74;
        if (str4[-3] == -1 || str4[-3] + 1 < 0) {
          len = str4[-1];
          newRep = std::string::__getRep(newStr,len,len);
          unused17 = newStr;
          newData = newRep + 3;
          unused16 = len;
          unused15 = str4;
          unused18 = newData;
          unused31 = newData;
          memcpy(newData,str4,len);
        }
        else {
          unused19 = newStr;
          unused20 = str4;
          unused31 = str4;
          strRep4 = str4 + -3;
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = *strRep4 + 1;
          }
        }
        ehContext = 0x68;
        outOfRange[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str4 != (int *)0x0) {
          if (str4[-3] != -1) {
            strRep3 = str4 + -3;
            if (strRep3 == &g_nullStringRep) {
              prevRefs = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              prevRefs = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              prevRefs = *strRep3 + 1;
            }
            if (prevRefs != 0) goto LAB_00466834;
          }
          unused14 = str4 + -3;
          unused13 = str4 + -3;
          operator_delete();
          unused12 = 0;
          unused11 = str;
          str4 = (int *)0x0;
        }
LAB_00466834:
        ehContext = 0x5c;
        _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,uVar12,throwFlags,throwFile,throwLine);
      }
      uVar12 = *(int *)(newItem + -4) - uVar1;
      s = 0;
      if (local_10c < uVar12) {
        uVar12 = local_10c;
      }
      std::string::replace((int)str2,uVar1,uVar12,(uint)&s,0,0,0);
    }
    else {
      std::string::replace((int)str2,uVar12,1,(uint)local_c,*(uint *)(local_c + -4),0,
                   *(uint *)(local_c + -4));
    }
    flags = GetMenuState(*(HMENU *)(hMenu + 4),(&local_d4)[index * 3],0);
    ehContext = 0x44;
    unused9 = newItem;
    idNewItem = (&local_d4)[index * 3];
    position = (&local_d4)[index * 3];
    ok = ModifyMenuA(*(HMENU *)(hMenu + 4),position,flags,idNewItem,newItem);
    unused10 = ok != 0;
    ehDtorCount = ehDtorCount + -1;
    if (newItem != (char *)0x0) {
      if (*(int *)(newItem + -0xc) != -1) {
        strRep = (int *)(newItem + -0xc);
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
        if (prevRefs != 0) goto LAB_004669bb;
      }
      unused8 = newItem + -0xc;
      unused7 = newItem + -0xc;
      operator_delete();
      unused6 = 0;
      newItem = (char *)0x0;
      unused5 = str2;
    }
LAB_004669bb:
    ehContext = 0x20;
    index = index + 1;
  } while (index < 7);
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep2 = (int *)(local_c + -0xc);
      if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        index = *strRep2 + 1;
      }
      if (index != 0) goto LAB_00466a7a;
    }
    unused4 = local_c + -0xc;
    unused3 = local_c + -0xc;
    operator_delete();
  }
LAB_00466a7a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466a90  TEAAppWindows::GetLicenseInfo   (14 bytes)   [analysis]
//   licence state (+0x150)
undefined4 __cdecl TEAAppWindows::GetLicenseInfo(int self)

{
  return *(undefined4 *)(self + 0x150);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466aa0  TEAAppWindows::CheckLicense   (112 bytes)   [analysis]
//   reads the licence from common.ini and checks it
void __cdecl TEAAppWindows::CheckLicense(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [16];
  
  __InitExceptBlockLDTC(0x4fc338);
  GetCommonIniPath((int)result,0x51a850);
  Common::WriteLicense((int)result,self + 0x148,self + 0x158);
  Common::_dtor((int)result,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b10  TEAAppWindows::Nothing_466b10   (5 bytes)   [analysis]
//   empty
//   file placement: inferred (address adjacency)
void __stdcall TEAAppWindows::Nothing_466b10(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b18  TEAAppWindows::GetDictionaryList   (14 bytes)   [analysis]
//   the open TSDictionaryList
undefined4 __cdecl TEAAppWindows::GetDictionaryList(int self)

{
  return *(undefined4 *)(self + 0x140);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b28  TEAAppWindows::GetProfile   (14 bytes)   [analysis]
//   the settings (TEAViewProfileWindows)
undefined4 __cdecl TEAAppWindows::GetProfile(int self)

{
  return *(undefined4 *)(self + 0x144);
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b38  TEAAppWindows::UpdateTitle   (829 bytes)   [analysis]
//   main window caption from the open dictionaries
/* WARNING: Removing unreachable block (ram,0x00466b7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::UpdateTitle(int self)

{
  int prevRefs;
  uint *strRep;
  int index;
  int *strRep2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str2;
  undefined1 result2 [8];
  int str3;
  undefined1 result3 [8];
  int str4;
  undefined1 str [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fc3a8);
  local_c = (uint *)&g_emptyStringData;
  for (index = 0; prevRefs = TSDictionaryList::GetCount(*(int *)(self + 0x140)), index < prevRefs; index = index + 1)
  {
    if (local_c[-1] != 0) {
      TEAAppWindows::LoadResourceString((int)result3,self,0x2e4a);
      std::string::append((int)str,(int)result3);
      if (str4 != 0) {
        if (*(int *)(str4 + -0xc) != -1) {
          strRep2 = (int *)(str4 + -0xc);
          if (strRep2 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (strRep2 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *strRep2 = *strRep2 + -1;
            prevRefs = *strRep2 + 1;
          }
          if (prevRefs != 0) goto LAB_00466c4a;
        }
        operator_delete();
        str4 = 0;
      }
    }
LAB_00466c4a:
    TSDictionaryList::GetFileTitle(result2,*(int *)(self + 0x140),index);
    std::string::append((int)str,(int)result2);
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep2 = (int *)(str3 + -0xc);
        if (strRep2 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          prevRefs = *strRep2 + 1;
        }
        if (prevRefs != 0) goto LAB_00466cf7;
      }
      operator_delete();
      str3 = 0;
    }
LAB_00466cf7:
  }
  TEAAppWindows::LoadResourceString((int)result,self,0x116c);
  std::string::append((int)str,(int)result);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep2 = (int *)(str2 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        index = *strRep2 + 1;
      }
      if (index != 0) goto LAB_00466dc1;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00466dc1:
  FUN_004a7780(**(int **)(*(int *)(**(int **)(self + 0x10) + 0x6c) + 0x2b),local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep - 1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00466e64;
    }
    operator_delete();
  }
LAB_00466e64:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e78  TEAAppWindows::Nothing_466e78   (5 bytes)   [analysis]
//   empty
//   file placement: inferred (address adjacency)
void __stdcall TEAAppWindows::Nothing_466e78(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e80  TEAAppWindows::GetDefinitionWindow   (24 bytes)   [analysis]
//   the definition window to show results in
int * __cdecl TEAAppWindows::GetDefinitionWindow(int self,int view)

{
  int *definitionWindow;
  
  definitionWindow = TEAViewWindows::GetDefinitionWindow(*(undefined4 **)(self + 0x10),view);
  return definitionWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e98  TEAAppWindows::FindDefinitions   (427 bytes)   [analysis]
//   looks a word up in the open dictionaries (or the given list)
void __cdecl TEAAppWindows::FindDefinitions(int self,int word_,int results)

{
  uint pos;
  uint *puVar2;
  int tsDictionaryList;
  char *path;
  int cmp;
  char *pcVar6;
  int iVar7;
  undefined4 *tsDictionaryList2;
  int index;
  int index2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *paths;
  
  __InitExceptBlockLDTC(0x4fc448);
  puVar2 = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self + 0x140));
  std::string::string_from_cstr((int)str,puVar2);
  tsDictionaryList = TEAAppWindows::GetProfile(self);
  tsDictionaryList = *(int *)(tsDictionaryList + 0x28);
  index2 = 0;
  while( true ) {
    iVar7 = TSDictionaryList::GetCount(tsDictionaryList);
    if (iVar7 <= index2) break;
    iVar7 = TSDictionaryList::GetCount(*(int *)(self + 0x140));
    do {
      index = iVar7 + -1;
      if (iVar7 < 1) break;
      pcVar6 = (char *)TSDictionaryList::GetPath(*(int *)(self + 0x140),index);
      path = (char *)TSDictionaryList::GetPath(tsDictionaryList,index2);
      cmp = strcmp(path,pcVar6);
      iVar7 = index;
    } while (cmp != 0);
    if (index < 0) {
      if (paths[-1] != 0) {
        std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
      }
      puVar2 = (uint *)TSDictionaryList::GetPath(tsDictionaryList,index2);
      pos = paths[-1];
      pcVar6 = strlen(puVar2);
      std::string::replace((int)str,pos,0,(uint)puVar2,(uint)pcVar6,0,(uint)pcVar6);
    }
    index2 = index2 + 1;
  }
  tsDictionaryList2 = TSDictionaryList::Open(paths);
  TSDictionaryList::FindDefinitions((int)tsDictionaryList2,word_,results);
  TSDictionaryList::ReleaseDictionaries((int)tsDictionaryList2);
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      paths = paths + -3;
      if (paths == &g_nullStringRep) {
        tsDictionaryList = 1;
      }
      else if (paths == &g_nullStringRep) {
        tsDictionaryList = 1;
      }
      else {
        *paths = *paths - 1;
        tsDictionaryList = *paths + 1;
      }
      if (tsDictionaryList != 0) goto LAB_00467032;
    }
    operator_delete();
  }
LAB_00467032:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467044  TEAAppWindows::MoveCaretAndShowDefinition   (32 bytes)   [analysis]
//   forwards to the main view
undefined4 __cdecl TEAAppWindows::MoveCaretAndShowDefinition(int self,int list,int key,int extend)

{
  undefined4 uVar1;
  
  uVar1 = TEAViewWindows::MoveCaretAndShowDefinition(*(int **)(self + 0x10),list,key,extend);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046715c  SetFontOnControlsProc   (61 bytes)   [analysis]
//   EnumChildWindows callback: WM_SETFONT on the controls with ids 0x2e72..0x2e85
//   file placement: inferred (address adjacency)
undefined4 __stdcall SetFontOnControlsProc(HWND hWnd,WPARAM hFont)

{
  int ctrlId;
  
  ctrlId = GetDlgCtrlID(hWnd);
  if ((0x2e71 < ctrlId) && (ctrlId < 0x2e86)) {
    SendMessageA(hWnd,0x30,hFont,1);
    InvalidateRect(hWnd,(RECT *)0x0,0);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046719c  SetFontOnControlsProc2   (61 bytes)   [analysis]
//   EnumChildWindows callback: WM_SETFONT on a second range of controls
//   file placement: inferred (address adjacency)
undefined4 __stdcall SetFontOnControlsProc2(HWND hWnd,WPARAM hFont)

{
  int ctrlId;
  
  ctrlId = GetDlgCtrlID(hWnd);
  if ((0x2e99 < ctrlId) && (ctrlId < 0x2eae)) {
    SendMessageA(hWnd,0x30,hFont,1);
    InvalidateRect(hWnd,(RECT *)0x0,0);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474e1c  TEAAppWindows::TEAAppWindows_base   (182 bytes)   [analysis]
//   application base constructor ("TEA for Windows")
int * __cdecl TEAAppWindows::TEAAppWindows_base(int *self,int name)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ffa54);
  if (name == 0) {
    *self = (int)(self + 0x20);
    self[0x1f] = 0;
    self[0x20] = (int)&OWL::TEventHandler::vftable;
  }
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xd;
  FUN_004a8c70(self,1,(uint *)"TEA for Windows",&DAT_00512a1c,(undefined *)0x0);
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xd;
  *(undefined ***)((int)self + 0x1b) = &TEAAppWindows::vftable;
  self[1] = (int)&PTR_LAB_004ffc9c;
  *(undefined ***)((int)self + 0x11) = &PTR_LAB_004ffcac;
  *(undefined ***)*self = &PTR_LAB_004ffccc;
  self[0x1c] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474ef0  TEAAppWindows::~TEAAppWindows   (198 bytes)   [rtti:dtor destructor]
//   written in code as TEAAppWindows::_dtor
void __cdecl TEAAppWindows::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ffa88);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 0x1b) = &TEAAppWindows::vftable;
    self[1] = (int)&PTR_LAB_004ffc9c;
    *(undefined ***)((int)self + 0x11) = &PTR_LAB_004ffcac;
    *(undefined ***)*self = &PTR_LAB_004ffccc;
    if (self[0x1c] != 0) {
      GridViewWindows::_dtor(self[0x1c],3);
    }
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xd;
    OWL::TApplication::_dtor(self,0);
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xd;
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474fb8  TEAAppWindows::vf17   (1083 bytes)   [rtti:vtable virtual slot 17]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::vf17(int self)

{
  char *fileName;
  int iVar2;
  BOOL ok;
  undefined4 uVar4;
  undefined *fileHistory;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  int *unused;
  undefined4 *sehChainHead;
  int param;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 unused2;
  undefined4 unused3;
  char *local_90;
  int state;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 *unused4;
  undefined4 unused5;
  int unused6;
  undefined1 *unused7;
  undefined4 unused8;
  int unused9;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *gripBar;
  int *teaFrameWindow;
  int *teaViewWindows;
  int teaAppWindows;
  undefined1 local_24 [8];
  int str;
  undefined1 paths [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4ffb28);
  teaAppWindows = operator_new();
  if (teaAppWindows != 0) {
    ehContext = 0x14;
    std::string::string_from_cstr((int)paths,(uint *)"tea.chm");
    ehDtorCount = ehDtorCount + 1;
    ResolveRelativePaths((int)local_24,(int)paths);
    ehDtorCount = ehDtorCount + 1;
    TEAAppWindows::TEAAppWindows(teaAppWindows,(int)local_24);
    ehContext = 8;
  }
  *(int *)(self + 0x70) = teaAppWindows;
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      unused = (int *)(str + -0xc);
      if (unused == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (unused == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *unused = *unused + -1;
        iVar2 = *unused + 1;
      }
      if (iVar2 != 0) goto LAB_004750a9;
    }
    unused9 = str + -0xc;
    operator_delete();
    unused8 = 0;
    unused7 = local_24;
    str = 0;
    unused3 = 0;
  }
LAB_004750a9:
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      unused = (int *)(str2 + -0xc);
      if (unused == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (unused == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *unused = *unused + -1;
        iVar2 = *unused + 1;
      }
      if (iVar2 != 0) goto LAB_0047511d;
    }
    unused6 = str2 + -0xc;
    operator_delete();
    unused5 = 0;
    unused4 = paths;
    str2 = 0;
    unused2 = 0;
  }
LAB_0047511d:
  teaViewWindows = (int *)operator_new();
  if (teaViewWindows != (int *)0x0) {
    ehContext = 0x44;
    TEAViewWindows::TEAViewWindows(teaViewWindows,0,0,*(int *)(self + 0x70),0x4ff3d1,0);
    ehContext = 0x38;
  }
  *(int **)(self + 0x74) = teaViewWindows;
  teaFrameWindow = (int *)operator_new();
  if (teaFrameWindow != (int *)0x0) {
    ehContext = 0x5c;
    TEAFrameWindow::TEAFrameWindow(teaFrameWindow,0,*(int *)(self + 0x70),*(int **)(self + 0x74));
    ehContext = 0x50;
  }
  *(int **)(self + 0x78) = teaFrameWindow;
  gripBar = (int *)operator_new();
  if (gripBar != (int *)0x0) {
    ehContext = 0x74;
    if (*(int *)(self + 0x78) == 0) {
      uVar4 = *(undefined4 *)(self + 0x78);
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(self + 0x78) + 4);
    }
    GripBar::GripBar(gripBar,0,uVar4,3,0x40);
    ehContext = 0x68;
  }
  unused = gripBar;
  (**(code **)(*(int *)(*(int *)(self + 0x78) + 0x35) + 4))();
  TEAAppWindows::LoadMainWindowSettings(*(int *)(self + 0x70),*(int **)(self + 0x74),unused,&local_7c,&local_80,
               &local_84,&local_88,&state);
  iVar2 = FitRectToMonitor(local_7c,local_80,local_84,local_88);
  if (iVar2 == 0) {
    param = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    ok = SystemParametersInfoA(0x30,0,&param,0);
    if (ok != 0) {
      iVar2 = *(int *)(*(int *)(self + 0x78) + 4);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(int *)(iVar2 + 0x28) = (local_b8 - param) / 3;
      iVar8 = (local_b4 - local_bc) * 0xf;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xf;
      }
      *(int *)(iVar2 + 0x2c) = iVar8 >> 4;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(self + 0x78) + 4);
    *(int *)(iVar2 + 0x20) = local_7c;
    *(int *)(iVar2 + 0x24) = local_80;
    *(int *)(iVar2 + 0x28) = local_84;
    *(int *)(iVar2 + 0x2c) = local_88;
    if (state != 0) {
      *(undefined4 *)(self + 0x23) = 3;
    }
  }
  if (*(int *)(self + 0x78) == 0) {
    uVar4 = *(undefined4 *)(self + 0x78);
  }
  else {
    uVar4 = **(undefined4 **)(self + 0x78);
  }
  FUN_004a95d8(self,uVar4);
  fileHistory = GetFileHistory(*(int *)(self + 0x70),0);
  puVar6 = FUN_004a8c00();
  fileName = *(char **)(puVar6 + 8);
  if (DAT_0051c440 == 1) {
    TEAAppWindows::OpenStartupDictionaries(*(int *)(self + 0x70));
  }
  else if (((DAT_0051c440 < 3) ||
           (local_90 = thunk_strchr(fileName,':'), local_90 == (char *)0x0)) ||
          (pcVar7 = thunk_strchr(local_90 + 1,':'), pcVar7 != (char *)0x0)) {
    for (iVar2 = 1; iVar2 < DAT_0051c440; iVar2 = iVar2 + 1) {
      TEAAppWindows::OpenFile(self,(int)fileHistory,*(LPCSTR *)(DAT_0051c408 + iVar2 * 4));
    }
  }
  else {
    TEAAppWindows::OpenFile(self,(int)fileHistory,fileName);
  }
  (**(code **)(*(int *)(**(int **)(self + 0x78) + 0xc) + 4))();
  FUN_004be1e0((int *)**(undefined4 **)(self + 0x78),self + 4,"GRIDICON");
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004753f4  TEAAppWindows::OpenFile   (398 bytes)   [analysis]
//   opens a dictionary given on the command line or dropped: full path, long name, file history, OpenDictionaries
void __cdecl TEAAppWindows::OpenFile(int self,int fileHistory,LPCSTR fileName)

{
  DWORD DVar1;
  int prevRefs;
  uint *strRep;
  int *strRep2;
  undefined4 *sehChainHead;
  uint buffer [67];
  uint *unused;
  undefined1 *unused2;
  undefined4 unused3;
  int unused4;
  LPSTR filePart;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 path [8];
  int str;
  undefined1 result [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4ffbd4);
  DVar1 = GetFullPathNameA(fileName,0x104,(LPSTR)buffer,&filePart);
  if (DVar1 == 0) goto LAB_00475571;
  ehContext = 0x14;
  std::string::string_from_cstr((int)path,buffer);
  ehDtorCount = ehDtorCount + 1;
  ExpandLongPathName((int)result,(int)path);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep2 = (int *)(str + -0xc);
      if (strRep2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        prevRefs = *strRep2 + 1;
      }
      if (prevRefs != 0) goto LAB_004754d5;
    }
    unused4 = str + -0xc;
    operator_delete();
    unused3 = 0;
    unused2 = path;
    str = 0;
  }
LAB_004754d5:
  ehContext = 8;
  FileHistory::Add(fileHistory,local_c);
  TEAAppWindows::OpenDictionaries(*(int *)(self + 0x70),local_c);
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00475571;
    }
    unused = local_c + -3;
    operator_delete();
  }
LAB_00475571:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475584  TEAAppWindows::vf16   (37 bytes)   [rtti:vtable virtual slot 16]
void __cdecl TEAAppWindows::vf16(int self)

{
  OWL::TApplication::vf16(self);
  TEAAppWindows::RunStartupSequence(*(int *)(self + 0x70));
  TEAViewWindows::RestoreAuxiliaryWindows(*(int **)(self + 0x74));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004755ac  OwlMain   (149 bytes)   [analysis]
//   creates and runs the TEA application object
//   file placement: inferred (address adjacency)
undefined4 __stdcall OwlMain(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int teaAppWindows [33];
  
  __InitExceptBlockLDTC(0x4ffc1c);
  set_new_handler(&LAB_00437ba4);
  uVar1 = FUN_004e7624((int *)0x0);
  FUN_004e4280(uVar1);
  piVar2 = TEAAppWindows::TEAAppWindows_base(teaAppWindows,0);
  uVar1 = (**(code **)(*(int *)((int)piVar2 + 0x1b) + 8))();
  TEAAppWindows::_dtor(teaAppWindows,2);
  std::vector_ptr::operator_assign();
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004757ac  OWL::TApplication::vf9   (5 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall OWL::TApplication::vf9(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004757b4  OWL::TApplication::vf13   (11 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TApplication::vf13(int self)

{
  return *(undefined4 *)(self + 0x31);
}

} // namespace tea
