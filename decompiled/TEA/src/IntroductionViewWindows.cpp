// TEA.exe — application module "IntroductionViewWindows"
// 8 functions, 0x00413260..0x00413990. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00413260  IntroductionViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: IntroductionViewWindows::Find [rtti:vtable]; IntroductionViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl IntroductionViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&IntroductionViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132a8  IntroductionViewWindows::IntroductionViewWindows   (543 bytes)   [rtti:vtable-store constructor]
//   constructor: stores IntroductionViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl IntroductionViewWindows::IntroductionViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4)

{
  int *strRep;
  undefined4 *sehChainHead;
  int prevRefs;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4ecfe4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x54);
    self[0x54] = (int)(self + 0x51);
    self[0x55] = (int)(self + 0x52);
    self[1] = (int)(self + 0x51);
    self[2] = (int)(self + 0x52);
    self[0x50] = 0;
    self[0x53] = 0;
    self[0x51] = (int)&OWL::TEventHandler::vftable;
    self[0x52] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x54,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xe0;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4ece7c,param_3,param_4,(uint *)0x50,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xe0;
  self[3] = (int)&IntroductionViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004ed114;
  *(undefined ***)self[2] = &PTR_LAB_004ed120;
  *(undefined ***)(*self + 8) = &IntroductionViewWindows::vftable_TWindow;
  prevRefs = 1;
  std::string::string_from_cstr((int)str,(uint *)"http://www.crosswordman.com/teatutor/index.html");
  PVWURL::PVWURL(self + 0x18,0,self,0x7529,(int)str,prevRefs);
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
      if (prevRefs != 0) goto LAB_004134a4;
    }
    operator_delete();
  }
LAB_004134a4:
  self[0x4e] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004134f0  IntroductionViewWindows::~IntroductionViewWindows   (288 bytes)   [rtti:dtor destructor]
//   written in code as IntroductionViewWindows::_dtor
void __cdecl IntroductionViewWindows::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed02c);
  if (self != (int *)0x0) {
    self[3] = (int)&IntroductionViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004ed114;
    *(undefined ***)self[2] = &PTR_LAB_004ed120;
    *(undefined ***)(*self + 8) = &IntroductionViewWindows::vftable_TWindow;
    PVWURL::_dtor(self + 0x18,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xe0;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xe0;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x54,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x52,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413610  IntroductionViewWindows::Cmd1530   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1530)
void __stdcall IntroductionViewWindows::Cmd1530(void)

{
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413630  IntroductionViewWindows::Cmd29991   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(29991)
void __stdcall IntroductionViewWindows::Cmd29991(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ece89 /* "open" */,"mailto:support@crosswordman.com\?Subject=TEA Support Request",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041364c  IntroductionViewWindows::Cmd90   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(90)
void __stdcall IntroductionViewWindows::Cmd90(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ece89 /* "open" */,"http://www.crosswordman.com/teabuy.html",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413668  IntroductionViewWindows::Cmd100   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(100)
void __cdecl IntroductionViewWindows::Cmd100(int self)

{
  *(undefined4 *)(self + 0x138) = 1;
  (**(code **)(*(int *)(self + 0xc) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413990  IntroductionViewWindows::GetEditText   (518 bytes)   [analysis]
//   an edit control's text as a std::string
/* WARNING: Removing unreachable block (ram,0x004139d1) */
int __cdecl IntroductionViewWindows::GetEditText(int self,int out)

{
  char cVar1;
  uint len;
  int iVar3;
  LPSTR lpString;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ed1f4);
  local_c = (undefined4 *)&g_emptyStringData;
  iVar3 = GetWindowTextLengthA(*(HWND *)(out + 0xc));
  lpString = (LPSTR)operator_new_array();
  GetWindowTextA(*(HWND *)(out + 0xc),lpString,iVar3 + 1);
  for (; *lpString != '\0'; lpString = lpString + 1) {
    cVar1 = *lpString;
    if ((cVar1 != ':') && (cVar1 != '&')) {
      std::string::replace_fill((int)str,local_c[-1],0,1,cVar1);
    }
  }
  operator_delete_array();
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    rep = std::string::__getRep(self,len,len);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_c,len);
  }
  else {
    *(undefined4 **)(self + 8) = local_c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar3 = *rep + 1;
      }
      if (iVar3 != 0) goto LAB_00413b7b;
    }
    operator_delete();
  }
LAB_00413b7b:
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
