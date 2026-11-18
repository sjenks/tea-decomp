// TEA.exe — application module "GridAboutBoxViewWindows"
// 20 functions, 0x00434cd0..0x00437eb0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00434cd0  GridAboutBoxViewWindows::GridAboutBoxViewWindows   (988 bytes)   [rtti:vtable-store constructor]
//   constructor: stores GridAboutBoxViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl GridAboutBoxViewWindows::GridAboutBoxViewWindows(int *self,int vbasesBuilt,undefined4 parent,int module,int versionText)

{
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  int enabled;
  undefined4 sehPrevFrame;
  undefined1 mailUrl [8];
  int mailUrlData;
  undefined1 supportUrl [8];
  int supportUrlData;
  
  __InitExceptBlockLDTC(0x4f318c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xbc);
    self[0xbc] = (int)(self + 0xb9);
    self[0xbd] = (int)(self + 0xba);
    self[1] = (int)(self + 0xb9);
    self[2] = (int)(self + 0xba);
    self[0xb8] = 0;
    self[0xbb] = 0;
    self[0xb9] = (int)&OWL::TEventHandler::vftable;
    self[0xba] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xbc,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x280;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x280;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4f3154,parent,module,(uint *)0xfaa,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x280;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x280;
  self[3] = (int)&GridAboutBoxViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f3310;
  *(undefined ***)self[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*self + 8) = &GridAboutBoxViewWindows::vftable_TWindow;
  PVWEdit::PVWEdit(self + 0x18,0,self,0x2b98,0);
  enabled = 1;
  std::string::string_from_cstr((int)supportUrl,(uint *)"http://www.crosswordman.com/tea.html");
  PVWURL::PVWURL(self + 0x48,0,self,0x7526,(int)supportUrl,enabled);
  if (supportUrlData != 0) {
    if (*(int *)(supportUrlData + -0xc) != -1) {
      rep = (int *)(supportUrlData + -0xc);
      if (rep == &g_nullStringRep) {
        enabled = 1;
      }
      else if (rep == &g_nullStringRep) {
        enabled = 1;
      }
      else {
        *rep = *rep + -1;
        enabled = *rep + 1;
      }
      if (enabled != 0) goto LAB_00434ef6;
    }
    operator_delete();
    supportUrlData = 0;
  }
LAB_00434ef6:
  enabled = 1;
  std::string::string_from_cstr((int)mailUrl,(uint *)"mailto:support@crosswordman.com\?Subject=TEA Support Request");
  PVWURL::PVWURL(self + 0x7e,0,self,0x7527,(int)mailUrl,enabled);
  if (mailUrlData != 0) {
    if (*(int *)(mailUrlData + -0xc) != -1) {
      rep = (int *)(mailUrlData + -0xc);
      if (rep == &g_nullStringRep) {
        enabled = 1;
      }
      else if (rep == &g_nullStringRep) {
        enabled = 1;
      }
      else {
        *rep = *rep + -1;
        enabled = *rep + 1;
      }
      if (enabled != 0) goto LAB_00434fb2;
    }
    operator_delete();
    mailUrlData = 0;
  }
LAB_00434fb2:
  self[0xb6] = 0;
  enabled = *(int *)(*(int *)(versionText + 8) + -0xc);
  if (enabled == -1 || enabled + 1 < 0) {
    len = *(uint *)(*(int *)(versionText + 8) + -4);
    rep = std::string::__getRep(self + 0xb4,len,len);
    self[0xb6] = (int)(rep + 3);
    memcpy((undefined4 *)self[0xb6],*(undefined4 **)(versionText + 8),len);
  }
  else {
    self[0xb6] = *(int *)(versionText + 8);
    rep = (int *)(self[0xb6] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004350d4  GridAboutBoxViewWindows::~GridAboutBoxViewWindows   (471 bytes)   [rtti:dtor destructor]
//   written in code as GridAboutBoxViewWindows::_dtor
void __cdecl GridAboutBoxViewWindows::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f321c);
  if (self == (int *)0x0) goto LAB_0043529b;
  self[3] = (int)&GridAboutBoxViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f3310;
  *(undefined ***)self[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*self + 8) = &GridAboutBoxViewWindows::vftable_TWindow;
  if (self[0xb6] != 0) {
    if (*(int *)(self[0xb6] + -0xc) != -1) {
      strRep = (int *)(self[0xb6] + -0xc);
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
      if (prevRefs != 0) goto LAB_004351b0;
    }
    operator_delete();
    self[0xb6] = 0;
  }
LAB_004351b0:
  PVWURL::_dtor(self + 0x7e,2);
  PVWURL::_dtor(self + 0x48,2);
  PVWEdit::_dtor(self + 0x18,2);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x280;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x280;
  PropertiesViewWindows::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x280;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x280;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0xbc,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0xba,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0043529b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004352ac  GridAboutBoxViewWindows::SetupWindow   (36 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from GridAboutBoxViewWindows's OWL::TWindow subobject vtable at 0x004f3328 (through the this-adjusting thunk at 0x00435389); slot name identified from OWL::TWindow's own implementation of that slot
//   also: GridAboutBoxViewWindows::vf11 [rtti:vtable]
void __cdecl GridAboutBoxViewWindows::SetupWindow(int *self)

{
  PropertiesViewWindows::SetupWindow(self);
  PVWEdit::SetIntValue(self + 0x18,(int)(self + 0xb4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004354bc  FindHeaderControlProc   (77 bytes)   [analysis]
//   EnumChildWindows callback that finds the "SysHeader32" child
//   file placement: inferred (address adjacency)
undefined4 __stdcall FindHeaderControlProc(HWND hWnd,undefined4 *found)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  CHAR className;
  char local_37 [51];
  
  GetClassNameA(hWnd,&className,0x32);
  pcVar2 = &className;
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
    *found = hWnd;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043550c  BrowseFolderCallback   (39 bytes)   [analysis]
//   SHBrowseForFolder callback: selects the initial folder
//   file placement: inferred (address adjacency)
undefined4 __stdcall BrowseFolderCallback(HWND hWnd,int msg,undefined4 lParam,int data)

{
  if ((msg == 1) && (data != 0)) {
    SendMessageA(hWnd,0x466,1,data);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435534  SplitCommandLine   (341 bytes)   [analysis]
//   separates a program path from its arguments
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00435557) */
int __cdecl SplitCommandLine(int result,int commandLine)

{
  char *pcVar1;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  uint *word_;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  int str;
  
  __InitExceptBlockLDTC(0x4f33fc);
  pcVar1 = thunk_memchr(*(char **)(commandLine + 8),' ',*(int *)(*(int *)(commandLine + 8) + -4));
  iVar2 = (*(int *)&g_stringNpos);
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(commandLine + 8);
  }
  if (iVar2 == -1) {
    ExpandProgramPath(result,(uint *)&DAT_004f357f,commandLine);
    *sehChainHead = sehPrevFrame;
    return result;
  }
  word_ = (uint *)&DAT_004f357d;
  ExpandProgramPath((int)local_14,(uint *)&DAT_004f357c,commandLine);
  FindWordInString(result,(int)local_14,word_);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
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
      if (iVar2 != 0) goto LAB_00435644;
    }
    operator_delete();
  }
LAB_00435644:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043568c  BrowseForFolder   (497 bytes)   [analysis]
//   SHBrowseForFolder dialog starting at a folder
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
bool __cdecl BrowseForFolder(HWND hWnd,LPCSTR title,int folder)

{
  uint len;
  HRESULT hr;
  LPITEMIDLIST pidl;
  int iVar3;
  int *strRep;
  undefined4 *sehChainHead;
  bool bVar5;
  _browseinfoA lpbi;
  undefined1 path [268];
  int *newData;
  int *local_70;
  int *unused;
  IMalloc *ppMalloc;
  int *unused2;
  undefined4 *src;
  uint unused3;
  undefined1 *unused4;
  int *newRep;
  int *unused5;
  undefined1 *unused6;
  int *unused7;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 newStr [8];
  int *str;
  
  __InitExceptBlockLDTC(0x4f3640);
  ehContext = 0x14;
  str = (int *)0x0;
  bVar5 = false;
  iVar3 = *(int *)(*(int *)(folder + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    len = *(uint *)(*(int *)(folder + 8) + -4);
    newRep = std::string::__getRep(newStr,len,len);
    unused4 = newStr;
    newData = newRep + 3;
    src = *(undefined4 **)(folder + 8);
    unused2 = newData;
    unused3 = len;
    unused5 = newData;
    str = newData;
    memcpy(newData,src,len);
  }
  else {
    local_70 = *(int **)(folder + 8);
    unused6 = newStr;
    strRep = local_70 + -3;
    unused7 = local_70;
    str = local_70;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  path[0] = '\0';
  memset(&lpbi.hwndOwner,0,0x20);
  lpbi.hwndOwner = hWnd;
  lpbi.lpszTitle = title;
  lpbi.ulFlags = 1;
  lpbi.lpfn = BrowseFolderCallback;
  if (str[-1] != 0) {
    lpbi.lParam = (LPARAM)str;
  }
  hr = SHGetMalloc(&ppMalloc);
  if (hr == 0) {
    pidl = SHBrowseForFolderA(&lpbi);
    bVar5 = pidl != (LPITEMIDLIST)0x0;
    if (bVar5) {
      SHGetPathFromIDListA(pidl,path);
      std::string::assign_cstr(folder,(uint *)path);
      (*ppMalloc->lpVtbl->Free)(ppMalloc,ppMalloc->lpVtbl);
    }
    (*ppMalloc->lpVtbl->Release)((IMalloc *)ppMalloc->lpVtbl);
  }
  ehDtorCount = ehDtorCount + -1;
  if (str != (int *)0x0) {
    if (str[-3] != -1) {
      strRep = str + -3;
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
      if (iVar3 != 0) goto LAB_0043586b;
    }
    unused = str + -3;
    operator_delete();
  }
LAB_0043586b:
  *sehChainHead = sehPrevFrame;
  return bVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435880  ExpandProgramPath   (409 bytes)   [analysis]
//   resolves a program name against the program folder and PATH
//   file placement: inferred (address adjacency)
int __cdecl ExpandProgramPath(int result,uint *name,int fallback)

{
  uint len;
  int str;
  int iVar3;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  int str3;
  
  __InitExceptBlockLDTC(0x4f36a4);
  str = std::string::string_from_cstr((int)str2,name);
  iVar3 = std::string::append(str,fallback);
  *(undefined4 *)(result + 8) = 0;
  str = *(int *)(*(int *)(iVar3 + 8) + -0xc);
  if (str == -1 || str + 1 < 0) {
    len = *(uint *)(*(int *)(iVar3 + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(iVar3 + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(iVar3 + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      rep = (int *)(str3 + -0xc);
      if (rep == &g_nullStringRep) {
        str = 1;
      }
      else if (rep == &g_nullStringRep) {
        str = 1;
      }
      else {
        *rep = *rep + -1;
        str = *rep + 1;
      }
      if (str != 0) goto LAB_004359fe;
    }
    operator_delete();
  }
LAB_004359fe:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435a1c  LaunchProgram   (964 bytes)   [analysis]
//   CreateProcessA of a program with arguments
//   file placement: inferred (address adjacency)
undefined4 __cdecl LaunchProgram(int program,int arguments,int folder)

{
  int prevRefs;
  BOOL ok;
  int *strRep;
  undefined4 *sehChainHead;
  uint *word_;
  undefined4 uVar5;
  _PROCESS_INFORMATION processInformation;
  _STARTUPINFOA startupInfo;
  LPSTR unused;
  LPSTR unused2;
  BOOL unused3;
  BOOL unused4;
  undefined1 *unused5;
  int unused6;
  undefined1 *unused7;
  undefined4 unused8;
  int unused9;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str;
  undefined1 result2 [8];
  int str2;
  undefined1 local_24 [8];
  int str3;
  undefined1 text [8];
  LPSTR commandLine;
  
  __InitExceptBlockLDTC(0x4f3728);
  memset(&startupInfo.cb,0,0x44);
  startupInfo.cb = 0x44;
  ehContext = 0x14;
  word_ = (uint *)&DAT_004f357d;
  ExpandProgramPath((int)local_24,(uint *)&DAT_004f357d,program);
  ehDtorCount = ehDtorCount + 1;
  FindWordInString((int)text,(int)local_24,word_);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
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
      if (prevRefs != 0) goto LAB_00435b05;
    }
    unused13 = str3 + -0xc;
    unused12 = str3 + -0xc;
    operator_delete();
    unused11 = 0;
    unused10 = local_24;
    str3 = 0;
  }
LAB_00435b05:
  if (arguments != 0) {
    ehContext = 0x2c;
    SplitCommandLine((int)result2,arguments);
    ehDtorCount = ehDtorCount + 1;
    std::string::append((int)text,(int)result2);
    ehDtorCount = ehDtorCount + -1;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
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
        if (prevRefs != 0) goto LAB_00435bb3;
      }
      unused9 = str2 + -0xc;
      operator_delete();
      unused8 = 0;
      unused7 = result2;
      str2 = 0;
    }
  }
LAB_00435bb3:
  if (folder != 0) {
    ehContext = 0x44;
    SplitCommandLine((int)result,folder);
    ehDtorCount = ehDtorCount + 1;
    std::string::append((int)text,(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep = (int *)(str + -0xc);
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
        if (prevRefs != 0) goto LAB_00435c60;
      }
      unused6 = str + -0xc;
      operator_delete();
      unused5 = result;
      str = 0;
    }
  }
LAB_00435c60:
  ehContext = 8;
  ok = CreateProcessA((LPCSTR)0x0,commandLine,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&startupInfo,&processInformation);
  if (ok == 0) {
    uVar5 = 0;
    ehDtorCount = ehDtorCount + -1;
    if (commandLine != (LPSTR)0x0) {
      if (*(int *)(commandLine + -0xc) != -1) {
        strRep = (int *)(commandLine + -0xc);
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
        if (prevRefs != 0) goto LAB_00435dce;
      }
      unused = commandLine + -0xc;
      operator_delete();
    }
LAB_00435dce:
    *sehChainHead = sehPrevFrame;
    return uVar5;
  }
  if (processInformation.hThread != (HANDLE)0x0) {
    unused4 = CloseHandle(processInformation.hThread);
  }
  if (processInformation.hProcess != (HANDLE)0x0) {
    unused3 = CloseHandle(processInformation.hProcess);
  }
  uVar5 = 1;
  ehDtorCount = ehDtorCount + -1;
  if (commandLine != (LPSTR)0x0) {
    if (*(int *)(commandLine + -0xc) != -1) {
      strRep = (int *)(commandLine + -0xc);
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
      if (prevRefs != 0) goto LAB_00435d42;
    }
    unused2 = commandLine + -0xc;
    operator_delete();
  }
LAB_00435d42:
  *sehChainHead = sehPrevFrame;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435de0  ExpandLongPathName   (3505 bytes)   [analysis]
//   rebuilds a path component by component from the end, replacing each with the name FindFirstFileA reports (long name, on-disk case)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00435f7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl ExpandLongPathName(int result,int path)

{
  char *len;
  HANDLE hFindFile;
  int lhs;
  int *strRep;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 *rhs;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  int *unused2;
  undefined1 exceptMsg2 [264];
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  _WIN32_FIND_DATAA findData;
  undefined *unused6;
  int *newData2;
  int *local_250;
  int *unused7;
  int *unused8;
  int *strRep2;
  undefined1 *unused9;
  undefined4 unused10;
  undefined *unused11;
  undefined *unused12;
  int *strRep3;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep4;
  uint local_20c;
  undefined1 s;
  uint local_204;
  undefined1 *unused17;
  undefined4 unused18;
  int *unused19;
  int *unused20;
  int *strRep5;
  int *newData3;
  int *unused21;
  uint unused22;
  undefined1 *unused23;
  int *newRep;
  int *unused24;
  uint len2;
  int *strRep6;
  undefined1 *unused25;
  int *unused26;
  undefined4 unused27;
  uint *msgText;
  uint local_1b4;
  undefined1 *unused28;
  undefined4 unused29;
  int *unused30;
  int *unused31;
  int *strRep7;
  int *unused32;
  int *unused33;
  uint unused34;
  undefined1 *unused35;
  int *newRep2;
  int *unused36;
  uint len3;
  int *strRep8;
  undefined1 *unused37;
  int *unused38;
  undefined4 unused39;
  uint *msgText2;
  int *unused40;
  int *unused41;
  int *strRep9;
  undefined1 *unused42;
  undefined4 unused43;
  undefined *unused44;
  undefined *unused45;
  undefined1 *unused46;
  undefined4 unused47;
  int unused48;
  int unused49;
  int *strRep10;
  undefined1 *unused50;
  undefined4 unused51;
  int unused52;
  int unused53;
  int *strRep11;
  char *local_110;
  int local_10c;
  uint local_108;
  undefined1 *unused54;
  undefined *unused55;
  undefined4 unused56;
  int *unused57;
  undefined4 *src;
  uint unused58;
  undefined1 *unused59;
  int *newRep3;
  int *unused60;
  uint len4;
  int *strRep12;
  undefined1 *unused61;
  int *unused62;
  undefined4 unused63;
  int path2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_a4 [8];
  int str4;
  undefined1 str [8];
  int *str5;
  undefined1 str2 [8];
  int *str6;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused64;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused65;
  undefined1 result2 [8];
  int str7;
  undefined1 str3 [8];
  int str8;
  undefined1 rhs2 [8];
  undefined *local_1c;
  undefined1 lhs2 [8];
  int *fileName;
  
  __InitExceptBlockLDTC(0x4f3894);
  ehContext = 0x14;
  path2 = path;
  unused63 = 0;
  fileName = (int *)0x0;
  lhs = *(int *)(*(int *)(path + 8) + -0xc);
  if (lhs == -1 || lhs + 1 < 0) {
    len4 = *(uint *)(*(int *)(path + 8) + -4);
    newRep3 = std::string::__getRep(lhs2,len4,len4);
    newData2 = newRep3 + 3;
    unused58 = len4;
    src = *(undefined4 **)(path2 + 8);
    unused57 = newData2;
    unused59 = lhs2;
    unused60 = newData2;
    fileName = newData2;
    memcpy(newData2,src,len4);
  }
  else {
    local_250 = *(int **)(path + 8);
    strRep12 = local_250 + -3;
    unused61 = lhs2;
    unused62 = local_250;
    fileName = local_250;
    if (strRep12 != &g_nullStringRep) {
      *strRep12 = *strRep12 + 1;
    }
  }
  unused56 = 0;
  unused54 = rhs2;
  unused55 = &g_emptyStringData;
  local_1c = &g_emptyStringData;
  unused6 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  ehContext = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = g_stringNpos;
    if ((uint)fileName[-1] < g_stringNpos) {
      uVar4 = fileName[-1];
    }
    local_110 = memrchr((char *)fileName,'\\',uVar4);
    local_108 = g_stringNpos;
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)fileName;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < fileName[-1] - 1U) {
      if (local_10c != 0) {
        len = strlen((uint *)&DAT_004f3581);
        std::string::replace((int)rhs2,0,0,0x4f3581,(uint)len,0,(uint)len);
      }
      hFindFile = FindFirstFileA((LPCSTR)fileName,&findData);
      ehContext = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        ehContext = 0x68;
        std::operator_plus(result,(int)lhs2,(int)rhs2);
        ehContext = 0x74;
        ehDtorCount = ehDtorCount + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            strRep = (int *)(local_1c + -0xc);
            if (strRep == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep = *strRep + -1;
              lhs = *strRep + 1;
            }
            if (lhs != 0) goto LAB_00436265;
          }
          unused45 = local_1c + -0xc;
          unused44 = local_1c + -0xc;
          operator_delete();
          unused43 = 0;
          unused42 = rhs2;
          local_1c = (undefined *)0x0;
          unused3 = 0;
        }
LAB_00436265:
        ehDtorCount = ehDtorCount + -1;
        if (fileName != (int *)0x0) {
          if (fileName[-3] != -1) {
            strRep9 = fileName + -3;
            if (strRep9 == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep9 = *strRep9 + -1;
              lhs = *strRep9 + 1;
            }
            if (lhs != 0) goto LAB_00436311;
          }
          unused41 = fileName + -3;
          unused40 = fileName + -3;
          operator_delete();
        }
LAB_00436311:
        *sehChainHead = sehPrevFrame;
        return result;
      }
      FindClose(hFindFile);
      ehContext = 0x44;
      rhs = rhs2;
      lhs = std::string::string_from_cstr((int)str3,(uint *)findData.cFileName);
      ehDtorCount = ehDtorCount + 1;
      std::operator_plus((int)result2,lhs,(int)rhs);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)rhs2,(int)result2);
      ehDtorCount = ehDtorCount + -1;
      if (str7 != 0) {
        if (*(int *)(str7 + -0xc) != -1) {
          strRep11 = (int *)(str7 + -0xc);
          if (strRep11 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep11 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep11 = *strRep11 + -1;
            lhs = *strRep11 + 1;
          }
          if (lhs != 0) goto LAB_004360f3;
        }
        unused53 = str7 + -0xc;
        unused52 = str7 + -0xc;
        operator_delete();
        unused51 = 0;
        unused50 = result2;
        str7 = 0;
        unused5 = 0;
      }
LAB_004360f3:
      ehContext = 8;
      ehDtorCount = ehDtorCount + -1;
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          strRep10 = (int *)(str8 + -0xc);
          if (strRep10 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep10 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep10 = *strRep10 + -1;
            lhs = *strRep10 + 1;
          }
          if (lhs != 0) goto LAB_00436329;
        }
        unused49 = str8 + -0xc;
        unused48 = str8 + -0xc;
        operator_delete();
        unused47 = 0;
        unused46 = str3;
        str8 = 0;
        unused4 = 0;
      }
    }
LAB_00436329:
    uVar4 = local_108;
    if (g_stringNpos - 0xe < local_108) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00408370;
      objectDtor = 0;
      ehContext = 0xa4;
      msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
      std::string::string_from_cstr((int)str2,msgText2);
      ehDtorCount = ehDtorCount + 2;
      lengthError[0] = &std::logic_error::vftable;
      unused39 = 0;
      unused65 = (int *)0x0;
      ehContext = 0xb0;
      if (str6[-3] == -1 || str6[-3] + 1 < 0) {
        len3 = str6[-1];
        newRep2 = std::string::__getRep(newStr2,len3,len3);
        unused35 = newStr2;
        newData = newRep2 + 3;
        unused34 = len3;
        unused33 = str6;
        unused32 = newData;
        unused36 = newData;
        unused65 = newData;
        memcpy(newData,str6,len3);
      }
      else {
        unused37 = newStr2;
        unused38 = str6;
        unused65 = str6;
        unused2 = str6;
        strRep8 = str6 + -3;
        if (strRep8 != &g_nullStringRep) {
          *strRep8 = *strRep8 + 1;
        }
      }
      ehContext = 0xa4;
      lengthError[0] = &std::length_error::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str6 != (int *)0x0) {
        if (str6[-3] != -1) {
          strRep7 = str6 + -3;
          if (strRep7 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep7 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep7 = *strRep7 + -1;
            lhs = *strRep7 + 1;
          }
          if (lhs != 0) goto LAB_00436583;
        }
        unused31 = str6 + -3;
        unused30 = str6 + -3;
        operator_delete();
        unused29 = 0;
        unused28 = str2;
        str6 = (int *)0x0;
        unused = 0;
      }
LAB_00436583:
      ehContext = 0x98;
      _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    if (uVar4 < (uint)fileName[-1]) {
      local_1b4 = fileName[-1] - uVar4;
      if ((uint)fileName[-1] < uVar4) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004084c8;
        objectDtor = 0;
        ehContext = 0xd4;
        msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)str,msgText);
        ehDtorCount = ehDtorCount + 2;
        outOfRange[0] = &std::logic_error::vftable;
        unused27 = 0;
        unused64 = (int *)0x0;
        ehContext = 0xe0;
        if (str5[-3] == -1 || str5[-3] + 1 < 0) {
          len2 = str5[-1];
          newRep = std::string::__getRep(newStr,len2,len2);
          unused23 = newStr;
          newData3 = newRep + 3;
          unused22 = len2;
          unused21 = str5;
          unused24 = newData3;
          unused64 = newData3;
          memcpy(newData3,str5,len2);
        }
        else {
          unused25 = newStr;
          unused26 = str5;
          unused64 = str5;
          strRep6 = str5 + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = *strRep6 + 1;
          }
        }
        ehContext = 0xd4;
        outOfRange[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str5 != (int *)0x0) {
          if (str5[-3] != -1) {
            strRep5 = str5 + -3;
            if (strRep5 == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              lhs = *strRep5 + 1;
            }
            if (lhs != 0) goto LAB_00436826;
          }
          unused20 = str5 + -3;
          unused19 = str5 + -3;
          operator_delete();
          unused18 = 0;
          unused17 = str;
          str5 = (int *)0x0;
        }
LAB_00436826:
        ehContext = 0x98;
        _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      local_204 = fileName[-1] - uVar4;
      s = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      std::string::replace((int)lhs2,uVar4,local_20c,(uint)&s,0,0,0);
    }
    else {
      std::string::replace_fill((int)lhs2,fileName[-1],0,uVar4 - fileName[-1],0);
    }
    if (fileName + -3 != &g_nullStringRep) {
      fileName[-3] = 0;
    }
    local_10c = 1;
  }
  ehContext = 0x104;
  rhs = rhs2;
  AppendChar((int)local_a4,(int)lhs2);
  ehDtorCount = ehDtorCount + 1;
  std::operator_plus(result,(int)local_a4,(int)rhs);
  ehContext = 0x110;
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep4 = (int *)(str4 + -0xc);
      if (strRep4 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        lhs = *strRep4 + 1;
      }
      if (lhs != 0) goto LAB_00436a1c;
    }
    unused16 = str4 + -0xc;
    unused15 = str4 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = local_a4;
    str4 = 0;
  }
LAB_00436a1c:
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep3 = (int *)(local_1c + -0xc);
      if (strRep3 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        lhs = *strRep3 + 1;
      }
      if (lhs != 0) goto LAB_00436acb;
    }
    unused12 = local_1c + -0xc;
    unused11 = local_1c + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = rhs2;
    local_1c = (undefined *)0x0;
  }
LAB_00436acb:
  ehDtorCount = ehDtorCount + -1;
  if (fileName != (int *)0x0) {
    if (fileName[-3] != -1) {
      strRep2 = fileName + -3;
      if (strRep2 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        lhs = *strRep2 + 1;
      }
      if (lhs != 0) goto LAB_00436b77;
    }
    unused8 = fileName + -3;
    unused7 = fileName + -3;
    operator_delete();
  }
LAB_00436b77:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436b94  std::operator_plus   (638 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004088c0. result = lhs + rhs for two std::string
//   file placement: inferred (address adjacency)
int __cdecl std::operator_plus(int result,int lhs,int rhs)

{
  uint len;
  int sum;
  int refs;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 tmp [8];
  int *tmpData;
  
  __InitExceptBlockLDTC(0x4f3a00);
  tmpData = (int *)0x0;
  refs = *(int *)(*(int *)(lhs + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(lhs + 8) + -4);
    tmpData = std::string::__getRep(tmp,len,len);
    tmpData = tmpData + 3;
    memcpy(tmpData,*(undefined4 **)(lhs + 8),len);
  }
  else {
    tmpData = *(int **)(lhs + 8);
    rep = tmpData + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  sum = std::string::append((int)tmp,rhs);
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
      if (refs != 0) goto LAB_00436df7;
    }
    operator_delete();
  }
LAB_00436df7:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e14  GetFileTitleString   (315 bytes)   [analysis]
//   GetFileTitleA wrapper returning a std::string
//   file placement: inferred (address adjacency)
int __cdecl GetFileTitleString(int result,int path)

{
  int refs;
  uint len;
  short sVar3;
  int *strRep;
  undefined4 *sehChainHead;
  uint buf [250];
  undefined4 *dest;
  undefined4 *src;
  uint unused;
  int unused2;
  int *newRep;
  int *newData;
  undefined4 unused3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x4f3a64);
  sVar3 = GetFileTitleA(*(LPCSTR *)(path + 8),(LPSTR)buf,1000);
  if (sVar3 == 0) {
    ehContext = 8;
    std::string::string_from_cstr(result,buf);
    *sehChainHead = sehPrevFrame;
  }
  else {
    ehContext = 0x14;
    unused3 = 0;
    *(undefined4 *)(result + 8) = 0;
    refs = *(int *)(*(int *)(path + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(path + 8) + -4);
      newRep = std::string::__getRep(result,len,len);
      newData = newRep + 3;
      *(int **)(result + 8) = newData;
      unused2 = result;
      src = *(undefined4 **)(path + 8);
      dest = *(undefined4 **)(result + 8);
      unused = len;
      memcpy(dest,src,len);
    }
    else {
      *(undefined4 *)(result + 8) = *(undefined4 *)(path + 8);
      strRep = (int *)(*(int *)(result + 8) + -0xc);
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436f50  IsRelativePath   (153 bytes)   [analysis]
//   true unless the path starts with '\' or has a drive colon followed by '\'
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00436f67) */
bool __cdecl IsRelativePath(int path)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(path + 8),':',*(int *)(*(int *)(path + 8) + -4));
  iVar2 = (*(int *)&g_stringNpos);
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(path + 8);
  }
  if (iVar2 == -1) {
    if ((*(int *)(*(char **)(path + 8) + -4) == 0) || (**(char **)(path + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(path + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436fec  GetProgramDirectory   (362 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040909c. GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00437136) */
int __cdecl GetProgramDirectory(int result)

{
  DWORD len;
  uint *lastSep;
  int dir;
  int *strRep;
  undefined4 *sehChainHead;
  uint filename [68];
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 dirStr [8];
  int dirData;
  
  __InitExceptBlockLDTC(0x4f3acc);
  len = GetModuleFileNameA((HMODULE)0x0,(LPSTR)filename,0x104);
  *(undefined1 *)((int)filename + len) = 0;
  lastSep = thunk_strrchr(filename,'\\');
  if (lastSep == (uint *)0x0) {
    *(undefined4 *)(result + 8) = 0;
    *(undefined **)(result + 8) = &g_emptyStringData;
    *sehChainHead = sehPrevFrame;
    return result;
  }
  ehContext = 8;
  dir = std::string::string_from_buf((int)dirStr,filename,(int)lastSep + (1 - (int)filename));
  ehDtorCount = ehDtorCount + 1;
  ExpandLongPathName(result,dir);
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + -1;
  if (dirData != 0) {
    if (*(int *)(dirData + -0xc) != -1) {
      strRep = (int *)(dirData + -0xc);
      if (strRep == &g_nullStringRep) {
        dir = 1;
      }
      else if (strRep == &g_nullStringRep) {
        dir = 1;
      }
      else {
        *strRep = *strRep + -1;
        dir = *strRep + 1;
      }
      if (dir != 0) goto LAB_004370ed;
    }
    unused = dirData + -0xc;
    operator_delete();
  }
LAB_004370ed:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437158  GetMyDocumentsDirectory   (791 bytes)   [analysis]
//   the user's documents folder (SHGetSpecialFolderLocation), or the program directory
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00437199) */
int __cdecl GetMyDocumentsDirectory(int result)

{
  uint len;
  HRESULT hr;
  IMalloc *This;
  BOOL ok;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  uint path [67];
  undefined *unused;
  undefined4 *unused2;
  undefined4 *unused3;
  undefined4 *dest;
  undefined4 *unused4;
  uint unused5;
  int unused6;
  int *newRep;
  int *newData;
  int unused7;
  undefined4 *unused8;
  undefined4 unused9;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  LPCITEMIDLIST local_50;
  IMalloc *ppMalloc;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result2 [8];
  int str2;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f3b60);
  local_c = (undefined4 *)&g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  hr = SHGetMalloc(&ppMalloc);
  if (hr == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      ok = SHGetPathFromIDListA(local_50,(LPSTR)path);
      if (ok != 0) {
        std::string::assign_cstr((int)str,path);
      }
      This = (IMalloc *)((code *)ppMalloc->lpVtbl->Free)((IMalloc *)ppMalloc->lpVtbl,local_50);
    }
    (*ppMalloc->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    ehContext = 0x2c;
    GetProgramDirectory((int)result2);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)str,(int)result2);
    ehDtorCount = ehDtorCount + -1;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
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
        if (iVar4 != 0) goto LAB_00437301;
      }
      unused12 = str2 + -0xc;
      operator_delete();
      unused11 = 0;
      unused10 = result2;
      str2 = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      std::string::__unshare((int)str);
    }
    if (local_c + -3 != &g_nullStringRep) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      std::string::replace_fill((int)str,local_c[-1],0,1,0x5c);
    }
  }
LAB_00437301:
  ehContext = 0x44;
  unused9 = 0;
  *(undefined4 *)(result + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(result,len,len);
    newData = newRep + 3;
    *(int **)(result + 8) = newData;
    unused6 = result;
    unused4 = local_c;
    dest = *(undefined4 **)(result + 8);
    unused5 = len;
    memcpy(dest,local_c,len);
  }
  else {
    unused8 = local_c;
    *(undefined4 **)(result + 8) = local_c;
    unused7 = result;
    strRep = (int *)(*(int *)(result + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
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
      if (iVar4 != 0) goto LAB_00437454;
    }
    unused3 = local_c + -3;
    unused2 = local_c + -3;
    operator_delete();
  }
LAB_00437454:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437470  ResolveRelativePaths   (1103 bytes)   [analysis]
//   prefixes the program directory to each relative entry of a ';'-separated path list
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl ResolveRelativePaths(int result,int paths)

{
  bool bVar1;
  undefined3 regHigh;
  int prevRefs;
  char *pcVar3;
  int iVar4;
  int *rep;
  uint uVar6;
  undefined4 *sehChainHead;
  undefined1 *rhs;
  undefined4 sehPrevFrame;
  undefined1 local_34 [8];
  int str2;
  undefined1 result2 [8];
  int str3;
  undefined1 str [8];
  int *str4;
  
  __InitExceptBlockLDTC(0x4f3c40);
  if ((*(int *)(*(int *)(paths + 8) + -4) == 0) ||
     (bVar1 = IsRelativePath(paths), CONCAT31(regHigh,bVar1) == 0)) {
    *(undefined4 *)(result + 8) = 0;
    iVar4 = *(int *)(*(int *)(paths + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(paths + 8) + -4);
      rep = std::string::__getRep(result,uVar6,uVar6);
      *(int **)(result + 8) = rep + 3;
      memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(paths + 8),uVar6);
    }
    else {
      *(undefined4 *)(result + 8) = *(undefined4 *)(paths + 8);
      rep = (int *)(*(int *)(result + 8) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
    return result;
  }
  str4 = (int *)0x0;
  iVar4 = *(int *)(*(int *)(paths + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(paths + 8) + -4);
    str4 = std::string::__getRep(str,uVar6,uVar6);
    str4 = str4 + 3;
    memcpy(str4,*(undefined4 **)(paths + 8),uVar6);
  }
  else {
    str4 = *(int **)(paths + 8);
    rep = str4 + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  iVar4 = str4[-1];
LAB_0043771d:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)str4[-1] < uVar6) {
      uVar6 = str4[-1];
    }
    pcVar3 = memrchr((char *)str4,';',uVar6);
    iVar4 = (*(int *)&g_stringNpos);
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)str4;
    }
    if (iVar4 == -1) break;
    GetProgramDirectory((int)result2);
    std::string::insert((int)str,iVar4 + 1,(int)result2);
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        rep = (int *)(str3 + -0xc);
        if (rep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (rep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *rep = *rep + -1;
          prevRefs = *rep + 1;
        }
        if (prevRefs != 0) goto LAB_0043771d;
      }
      operator_delete();
      str3 = 0;
    }
  } while( true );
  rhs = str;
  GetProgramDirectory((int)local_34);
  std::operator_plus(result,(int)local_34,(int)rhs);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar4 = *rep + 1;
      }
      if (iVar4 != 0) goto LAB_00437811;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00437811:
  if (str4 != (int *)0x0) {
    if (str4[-3] != -1) {
      rep = str4 + -3;
      if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar4 = *rep + 1;
      }
      if (iVar4 != 0) goto LAB_004378a4;
    }
    operator_delete();
  }
LAB_004378a4:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004378c0  ReadFileTime   (102 bytes)   [analysis]
//   opens the file read-only and calls GetFileTime
//   file placement: inferred (address adjacency)
bool __cdecl ReadFileTime(int path,int wantWriteTime,LPFILETIME timeOut)

{
  HANDLE hFile;
  BOOL ok;
  LPFILETIME lpLastWriteTime;
  bool bVar2;
  
  bVar2 = false;
  hFile = CreateFileA(*(LPCSTR *)(path + 8),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    if (wantWriteTime == 0) {
      lpLastWriteTime = (LPFILETIME)0x0;
    }
    else {
      lpLastWriteTime = timeOut;
      timeOut = (LPFILETIME)0x0;
    }
    ok = GetFileTime(hFile,timeOut,(LPFILETIME)0x0,lpLastWriteTime);
    bVar2 = ok != 0;
    CloseHandle(hFile);
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437928  BackupFile   (492 bytes)   [analysis]
//   renames an existing file to "Backup of <name>" before it is overwritten, keeping its time
//   file placement: inferred (address adjacency)
void __cdecl BackupFile(int path,LPFILETIME timeOut)

{
  bool bVar1;
  undefined3 regHigh;
  char *len;
  int iVar3;
  int *strRep;
  uint uVar5;
  undefined4 *sehChainHead;
  _SYSTEMTIME sysTime;
  int *unused;
  char *local_5c;
  int *newData;
  undefined4 *src;
  uint unused2;
  undefined1 *unused3;
  int *newRep;
  int *unused4;
  undefined1 *unused5;
  int *local_3c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str2;
  
  __InitExceptBlockLDTC(0x4f3cec);
  bVar1 = ReadFileTime(path,0,timeOut);
  if (CONCAT31(regHigh,bVar1) == 0) {
    GetSystemTime(&sysTime);
    SystemTimeToFileTime(&sysTime,timeOut);
  }
  ehContext = 0x14;
  str2 = (int *)0x0;
  iVar3 = *(int *)(*(int *)(path + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar5 = *(uint *)(*(int *)(path + 8) + -4);
    newRep = std::string::__getRep(str,uVar5,uVar5);
    unused3 = str;
    newData = newRep + 3;
    src = *(undefined4 **)(path + 8);
    unused2 = uVar5;
    unused4 = newData;
    str2 = newData;
    memcpy(newData,src,uVar5);
  }
  else {
    local_3c = *(int **)(path + 8);
    unused5 = str;
    strRep = local_3c + -3;
    str2 = local_3c;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  uVar5 = g_stringNpos;
  if ((uint)str2[-1] < g_stringNpos) {
    uVar5 = str2[-1];
  }
  local_5c = memrchr((char *)str2,'\\',uVar5);
  uVar5 = g_stringNpos;
  if (local_5c != (char *)0x0) {
    uVar5 = (int)local_5c - (int)str2;
  }
  if (uVar5 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar5 + 1;
  }
  len = strlen((uint *)"Backup of ");
  std::string::replace((int)str,uVar5,0,0x4f35ea,(uint)len,0,(uint)len);
  thunk_FUN_004e0588((LPCSTR)str2);
  FUN_004df65c(*(LPCSTR *)(path + 8),(LPCSTR)str2);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
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
      if (iVar3 != 0) goto LAB_00437b03;
    }
    unused = str2 + -3;
    operator_delete();
  }
LAB_00437b03:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437bd4  FormatInt   (86 bytes)   [analysis]
//   a number as a std::string
//   file placement: inferred (address adjacency)
int __cdecl FormatInt(int result)

{
  undefined4 *sehChainHead;
  uint local_44 [7];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x4f3d34);
  sprintf((undefined1 *)local_44,&DAT_004f360f);
  ehContext = 8;
  std::string::string_from_cstr(result,local_44);
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437eb0  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f3d58);
  if (self != (int *)0x0) {
    puVar1 = (undefined4 *)*self;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
