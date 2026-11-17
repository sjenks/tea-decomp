// TEA.exe — application module "IntroductionViewWindows"
// 8 functions, 0x00413260..0x00413990. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00413260  IntroductionViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: IntroductionViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl IntroductionViewWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&IntroductionViewWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PropertiesViewWindows::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132a8  FUN_004132a8   (543 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004132a8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ecfe4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x54);
    param_1[0x54] = (int)(param_1 + 0x51);
    param_1[0x55] = (int)(param_1 + 0x52);
    param_1[1] = (int)(param_1 + 0x51);
    param_1[2] = (int)(param_1 + 0x52);
    param_1[0x50] = 0;
    param_1[0x53] = 0;
    param_1[0x51] = (int)&OWL::TEventHandler::vftable;
    param_1[0x52] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x54,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe0;
  FUN_00413cf4(param_1,1,0x4ece7c,param_3,param_4,(uint *)0x50,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe0;
  param_1[3] = (int)&IntroductionViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004ed114;
  *(undefined ***)param_1[2] = &PTR_LAB_004ed120;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ed12c;
  iVar2 = 1;
  std::string::string_from_cstr((int)local_14,(uint *)"http://www.crosswordman.com/teatutor/index.html");
  FUN_0041d588(param_1 + 0x18,0,param_1,0x7529,(int)local_14,iVar2);
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
      if (iVar2 != 0) goto LAB_004134a4;
    }
    operator_delete();
  }
LAB_004134a4:
  param_1[0x4e] = 0;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004134f0  IntroductionViewWindows::~IntroductionViewWindows   (288 bytes)   [rtti:dtor destructor]
//   written in code as IntroductionViewWindows::_dtor
void __cdecl IntroductionViewWindows::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed02c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&IntroductionViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004ed114;
    *(undefined ***)param_1[2] = &PTR_LAB_004ed120;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ed12c;
    PVWURL::_dtor(param_1 + 0x18,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe0;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x54,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x52,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413610  IntroductionViewWindows::Cmd1530   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1530)
void __stdcall IntroductionViewWindows::Cmd1530(void)

{
  FUN_00464980();
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
void __cdecl IntroductionViewWindows::Cmd100(int param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 1;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413990  FUN_00413990   (518 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004139d1) */
int __cdecl FUN_00413990(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LPSTR lpString;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ed1f4);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar3 = GetWindowTextLengthA(*(HWND *)(param_2 + 0xc));
  lpString = (LPSTR)operator_new_array();
  GetWindowTextA(*(HWND *)(param_2 + 0xc),lpString,iVar3 + 1);
  for (; *lpString != '\0'; lpString = lpString + 1) {
    cVar1 = *lpString;
    if ((cVar1 != ':') && (cVar1 != '&')) {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,cVar1);
    }
  }
  operator_delete_array();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    piVar4 = std::string::__getRep(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar2);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
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
      if (iVar3 != 0) goto LAB_00413b7b;
    }
    operator_delete();
  }
LAB_00413b7b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

} // namespace tea
