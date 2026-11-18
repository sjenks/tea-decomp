// TSMerge.exe — runtime / library code "code_0x00428000"
// 35 functions, 0x004284cc..0x0042bc6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004284cc  FUN_004284cc   (346 bytes)   [unnamed]
void __cdecl FUN_004284cc(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  tagRECT rect;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 lParam [12];
  int local_c;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x469cc8);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        unused = *(undefined4 *)(local_c + 0xc);
        ehContext = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        ehContext = 8;
      }
    }
    else {
      FUN_0042d1a4(*(int *)param_1[7],0x10,0,0);
    }
  }
  param_1[7] = param_2;
  if (((param_1[7] != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_0042d484(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_0042d568(*param_1,&rect);
    ehContext = 0x20;
    FUN_00425634(lParam,*(undefined4 *)(*param_1 + 0xc),&rect.left,0x3eb,(uint *)0xffffffff);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_004256d0((int)lParam,(uint *)param_1[0xd],'\x01');
    FUN_0042d1a4(*(int *)param_1[7],0x404,0,(LPARAM)lParam);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004286b0  FUN_004286b0   (42 bytes)   [unnamed]
LRESULT __stdcall FUN_004286b0(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  if (msg == 0x87) {
    lResult = 0x104;
  }
  else {
    lResult = DefWindowProcA(hWnd,msg,wParam,lParam);
  }
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428e48  FUN_00428e48   (36 bytes)   [unnamed]
void __cdecl FUN_00428e48(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x3d) = param_2;
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428e6c  FUN_00428e6c   (352 bytes)   [unnamed]
void __cdecl FUN_00428e6c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined1 rect [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x469f4c);
  GH_PIECE(rect, 0, undefined4) = 0;
  GH_PIECE(rect, 4, undefined4) = 0;
  GH_PIECE(rect, 8, undefined4) = 0;
  local_3c = 0;
  FUN_0042d52c(*param_1,(LPRECT)rect);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)rect);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(rect + 8));
  }
  ehContext = 8;
  FUN_0042027c((int *)tmpBufferBase,0x104);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)tmpBufferBase[0],0x104);
  FUN_00418b6c(&local_38,param_1[6],tmpBufferBase[0]);
  uVar1 = FUN_0042d3ec(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = GH_PIECE(rect, 4, undefined4) + local_34;
  }
  else {
    uVar2 = -((local_3c - GH_PIECE(rect, 4, undefined4)) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_0041d740((int *)rect,0,iVar3);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      GH_PIECE(rect, 8, undefined4) = GH_PIECE(rect, 0, undefined4) + local_38;
    }
    else {
      GH_PIECE(rect, 0, undefined4) = GH_PIECE(rect, 8, undefined4) - local_38;
    }
  }
  else {
    uVar1 = -((GH_PIECE(rect, 8, undefined4) - GH_PIECE(rect, 0, undefined4)) - local_38);
    iVar3 = (int)uVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
    }
    FUN_0041d740((int *)rect,iVar3,0);
  }
  FUN_0042d59c(*param_1,(HWND)0x0,GH_PIECE(rect, 0, undefined4),GH_PIECE(rect, 4, undefined4),GH_PIECE(rect, 8, undefined4) - GH_PIECE(rect, 0, undefined4),
               local_3c - GH_PIECE(rect, 4, undefined4),4);
  ehDtorCount = ehDtorCount + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a07c  FUN_0042a07c   (87 bytes)   [unnamed]
void __cdecl FUN_0042a07c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = OWL::TStatic::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a190  FUN_0042a190   (81 bytes)   [unnamed]
void __cdecl FUN_0042a190(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TStatic::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TStatic::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a1e4  FUN_0042a1e4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a1e4(int *param_1)

{
  undefined4 *streamer;
  int *urlLink;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a1f0);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      urlLink = (int *)operator_new();
      if (urlLink == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TUrlLink::TUrlLink(urlLink,0);
        param_1 = (int *)urlLink[2];
      }
    }
    OWL::TUrlLink::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a42c  FUN_0042a42c   (12 bytes)   [unnamed]
void __cdecl FUN_0042a42c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a49c  FUN_0042a49c   (90 bytes)   [unnamed]
void __cdecl FUN_0042a49c(int param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a388);
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a4f6  FUN_0042a4f6   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_0042a4f6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1[1] == param_2[1]) && ((*param_1 == -1 || (*param_1 == *param_2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a51f  FUN_0042a51f   (101 bytes)   [unnamed]
undefined * __stdcall FUN_0042a51f(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a3b9);
  if (DAT_0046a3a8 == '\0') {
    _vector_new_ldtc_((int *)&DAT_00476e5c,0x10,0x1f,1,(undefined*)FUN_0042b80c);
    DAT_0047704c = 1;
    DAT_0046a3a8 = DAT_0046a3a8 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476e5c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a584  FUN_0042a584   (400 bytes)   [unnamed]
uint __stdcall FUN_0042a584(void)

{
  bool bVar1;
  HWND hWnd;
  uint uVar2;
  PHKEY ppHVar3;
  LSTATUS regStatus;
  undefined *puVar5;
  undefined4 *sehChainHead;
  char cVar6;
  BYTE data [128];
  DWORD type [6];
  undefined2 ehContext;
  int ehDtorCount;
  HKEY phkResult [5];
  
  __InitExceptBlockLDTC(0x46a3ee);
  uVar2 = DAT_0046a3d4;
  if (DAT_0046a3d0 == '\0') {
    DAT_0046a3d0 = '\x01';
    if (DAT_0046a3dc == 0) {
      DAT_0046a3d8 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
      if (DAT_0046a3d8 == 0) {
        DAT_0046a3dc = 1;
      }
      else {
        DAT_0046a3dc = 2;
      }
    }
    if (((DAT_0046a3dc == 2) &&
        (hWnd = FindWindowA("MouseZ","Magellan MSWHEEL"), hWnd != (HWND)0x0)) &&
       (DAT_0046a3d8 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0046a3d8,0,0);
      DAT_0046a3d4 = uVar2;
      *sehChainHead = type[2];
      return uVar2;
    }
    DAT_0046a3d4 = 3;
    bVar1 = FUN_004109c0();
    if (bVar1) {
      puVar5 = FUN_00410934();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0046a3d4,0);
      }
    }
    else {
      type[1] = 0x80;
      ehContext = 8;
      ppHVar3 = FUN_00410bac(phkResult,(HKEY)0x80000001,(uint *)"Control Panel\\Desktop",
                             0xf003f,0);
      ehDtorCount = ehDtorCount + 1;
      regStatus = RegQueryValueExA(*ppHVar3,"WheelScrollLines",(LPDWORD)0x0,type,data,
                               type + 1);
      cVar6 = regStatus != 0;
      ehDtorCount = ehDtorCount + -1;
      OWL::TRegKey::_dtor((int *)phkResult,2);
      if (cVar6 != '\0') {
        DAT_0046a3d4 = FUN_0045c908((char *)data,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0046a3d4;
    *sehChainHead = type[2];
  }
  else {
    *sehChainHead = type[2];
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a714  FUN_0042a714   (48 bytes)   [unnamed]
void __cdecl FUN_0042a714(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    *param_2 = *param_2 + iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a744  FUN_0042a744   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0042a744(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a769  FUN_0042a769   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_0042a769(int param_1)

{
  undefined4 uVar1;
  BOOL ok;
  int textLen;
  LPSTR lpString;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((*(byte *)(param_1 + 0x74) & 2) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
      if ((char)uVar1 == '\0') {
        uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      else {
        ok = IsIconic(*(HWND *)(param_1 + 0xc));
        if (ok != 0) {
          textLen = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
          lpString = (LPSTR)operator_new_array();
          GetWindowTextA(*(HWND *)(param_1 + 0xc),lpString,textLen + 1);
          SetWindowTextA(*(HWND *)(param_1 + 0xc),lpString);
          operator_delete_array();
        }
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a7f2  FUN_0042a7f2   (23 bytes)   [unnamed]
bool __cdecl FUN_0042a7f2(int param_1,int param_2)

{
  DAT_00477078 = DAT_00477078 + 1;
  return param_1 == param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a809  FUN_0042a809   (22 bytes)   [unnamed]
bool __cdecl FUN_0042a809(int param_1,int *param_2)

{
  return *(int *)(param_1 + 0x34) == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a81f  FUN_0042a81f   (309 bytes)   [unnamed]
undefined * __cdecl FUN_0042a81f(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  DWORD local_18 [3];
  int str;
  
  __InitExceptBlockLDTC(0x46a43c);
  if (param_1 == 0) {
    *sehChainHead = sehPrevFrame;
    return "MSWHEEL_ROLLMSG" + 0xf;
  }
  FUN_004435d0(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_0045666c(param_1,iVar2,0x40467c);
  FUN_0045677c((int)puVar1);
  sprintf(&DAT_0047707c,(byte *)"%s, %u, %s.\nError: %s");
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
      if (iVar2 != 0) goto LAB_0042a92d;
    }
    operator_delete();
  }
LAB_0042a92d:
  *sehChainHead = sehPrevFrame;
  return &DAT_0047707c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a954  FUN_0042a954   (115 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0042a954(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_00410934();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_0042a994:
    DAT_0046a374 = RegisterWindowMessageA("MSWHEEL_ROLLMSG");
  }
  else {
    puVar1 = FUN_00410934();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_00410934();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_0042a994;
    }
    DAT_0046a374 = 0;
  }
  if (DAT_0046a82c == '\0') {
    DAT_0046a82c = '\x01';
    _DAT_0046a7fc = DAT_0046a374;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a9c7  FUN_0042a9c7   (49 bytes)   [unnamed]
void __stdcall FUN_0042a9c7(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a45c);
  if (DAT_0046a3a8 != '\0') {
    DAT_0046a3a8 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa68  FUN_0042aa68   (42 bytes)   [unnamed]
void __cdecl FUN_0042aa68(int param_1)

{
  WINDOWPLACEMENT placement;
  
  placement.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&placement);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ac60  FUN_0042ac60   (82 bytes)   [unnamed]
void __cdecl FUN_0042ac60(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = FUN_0041fd2c(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_0042acb4(param_1,param_2,param_4);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
    *(undefined4 *)(param_1 + 0x18) = 0x50000000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042acb4  FUN_0042acb4   (300 bytes)   [unnamed]
void __cdecl FUN_0042acb4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x800;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = (*(undefined4 *)&DAT_00476bac);
  puVar1 = FUN_00423760(param_1);
  *(undefined1 **)(param_1 + 0x68) = puVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  else {
    FUN_0042d05c(*(int *)(param_1 + 0x14),param_1);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_3 == 0) {
      param_3 = 0;
    }
    *(int *)(param_1 + 0x70) = param_3;
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(param_1 + 0x70);
    }
    puVar2 = FUN_004567e4(*(int *)(param_1 + 0x70),iVar4,(int *)&DAT_004056d8,(int *)&DAT_004043c8,0
                         );
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
    if (*(int *)(param_1 + 0x6c) == 0) {
      piVar3 = FUN_004119f4(0);
      *(int **)(param_1 + 0x6c) = piVar3;
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar4 = *(int *)(param_1 + 0x6c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x6c) + 4;
        }
        *(int *)(param_1 + 0x70) = iVar4;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6c);
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x14) + 0x70);
    }
    *(int *)(param_1 + 0x70) = param_3;
  }
  FUN_0042b948(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b218  FUN_0042b218   (86 bytes)   [unnamed]
void __cdecl FUN_0042b218(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a8dc);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b294  FUN_0042b294   (496 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0042b294(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint local_3c;
  uint unused;
  undefined4 unused2;
  undefined4 local_2c;
  uint unused3;
  undefined4 unused4;
  undefined4 local_1c;
  undefined4 unused5;
  undefined4 unused6;
  uint local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x6c);
  piVar5 = (int *)(iVar4 + 0x57);
  if (*(int *)(iVar4 + 0x5b) == 0x7fff) {
    if (param_1 != *piVar5) {
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar6 = (undefined4 *)*piVar5;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x14);
      }
      unused5 = *(undefined4 *)(*(int *)(iVar4 + 99) + 4);
      local_1c = 0x7fff;
      unused6 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 != '\0') {
        uVar3 = FUN_004179cc(*puVar6,(int)&local_1c);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  else if ((*(int *)(iVar4 + 0x5b) == 0x111) || (*(int *)(iVar4 + 0x5b) == 0x4e)) {
    if (*(int *)(iVar4 + 0x5b) == 0x111) {
      local_8 = *(uint *)(iVar4 + 0x5f) >> 0x10;
      local_c = (uint)*(ushort *)(iVar4 + 0x5f);
      iVar4 = *(int *)(iVar4 + 99);
    }
    else {
      piVar1 = *(int **)(iVar4 + 99);
      local_8 = piVar1[2];
      local_c = piVar1[1];
      if ((piVar1[2] == -0x208) && ((*(byte *)(piVar1 + 0x19) & 1) != 0)) {
        local_c = GetDlgCtrlID((HWND)piVar1[1]);
      }
      iVar4 = *piVar1;
    }
    if (param_1 == *piVar5) {
      if (iVar4 == 0) {
        local_2c = 0;
        unused3 = local_c;
        unused4 = 0;
        puVar6 = *(undefined4 **)(param_1 + 0x6c);
        cVar2 = (**(code **)(*(int *)((int)puVar6 + 0x1b) + 0x2c))();
        if (cVar2 != '\0') {
          FUN_004179cc(*puVar6,(int)&local_2c);
          return 0;
        }
      }
      uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
    }
    else {
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          puVar6 = (undefined4 *)*piVar5;
        }
        else {
          puVar6 = *(undefined4 **)(param_1 + 0x14);
        }
        local_8 = 0;
      }
      else {
        puVar6 = (undefined4 *)*piVar5;
        if (((*(byte *)(puVar6 + 0x1d) & 1) != 0) || (local_c == 0)) {
          uVar3 = (**(code **)(puVar6[2] + 0x44))();
          return uVar3;
        }
      }
      local_3c = local_8;
      unused = local_c;
      unused2 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 == '\0') {
        uVar3 = FUN_0042b294((int)puVar6);
      }
      else {
        uVar3 = FUN_004179cc(*puVar6,(int)&local_3c);
      }
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b67c  FUN_0042b67c   (369 bytes)   [unnamed]
void __cdecl FUN_0042b67c(undefined4 *window,HWND hWnd2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  HWND hWnd;
  LRESULT lResult;
  undefined4 local_30;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  HWND hWnd3;
  char local_9;
  HWND unused6;
  
  hWnd = hWnd2;
  if (param_3[2] == window[3]) {
    for (; (hWnd != (HWND)0x0 && (hWnd != (HWND)window[3])); hWnd = GetParent(hWnd)) {
      unused6 = hWnd;
      lResult = FUN_0042bc6c(hWnd,window[0x1b]);
      if ((lResult != 0) &&
         ((**(code **)(*(int *)(lResult + 8) + 0x50))(), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
    }
  }
  OWL::TWindow::EvCommandEnable(window,(int)param_3);
  if (((param_3[2] == window[3]) && ((*(byte *)(param_3 + 3) & 1) == 0)) &&
     ((*(byte *)(param_3 + 3) & 2) == 0)) {
    local_9 = '\0';
    unused4 = param_3[1];
    unused3 = 0;
    unused5 = 0;
    while ((hWnd3 = hWnd2, lResult = FUN_0042bc6c(hWnd2,window[0x1b]), lResult == 0 ||
           (cVar2 = (**(code **)(*(int *)(lResult + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((hWnd2 == (HWND)0x0) || (hWnd2 == (HWND)window[3])) goto LAB_0042b779;
      hWnd2 = GetParent(hWnd2);
    }
    local_9 = '\x01';
LAB_0042b779:
    if (local_9 == '\0') {
      unused = param_3[1];
      local_30 = 0x7fff;
      unused2 = 0;
      puVar1 = (undefined4 *)window[0x1b];
      cVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
      if ((cVar2 != '\0') &&
         (FUN_004179cc(*puVar1,(int)&local_30), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
      local_9 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
    }
    (**(code **)*param_3)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b80c  FUN_0042b80c   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042b80c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ab5c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b894  FUN_0042b894   (44 bytes)   [unnamed]
void __cdecl FUN_0042b894(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 0x10)) {
      *(undefined4 *)(param_1 + 8 + iVar1 * 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b8c0  FUN_0042b8c0   (45 bytes)   [unnamed]
void __cdecl FUN_0042b8c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_5;
  puVar1[2] = param_4;
  puVar1[3] = param_6;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b8f0  FUN_0042b8f0   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_0042b8f0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    piVar2 = (int *)(param_2 * 0x10 + param_1);
    if ((param_3 == piVar2[2]) && (param_4 == *piVar2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b930  FUN_0042b930   (22 bytes)   [unnamed]
void __cdecl FUN_0042b930(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_0042a51f();
  FUN_0042b894((int)puVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b948  FUN_0042b948   (16 bytes)   [unnamed]
void __cdecl FUN_0042b948(int param_1)

{
  *(undefined4 *)(param_1 + 0x82) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bbb4  FUN_0042bbb4   (101 bytes)   [unnamed]
undefined4 __cdecl FUN_0042bbb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int local_14;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  
  bVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x6c);
  piVar3 = (int *)(iVar2 + 0x57);
  local_14 = *piVar3;
  unused = *(undefined4 *)(iVar2 + 0x5b);
  unused2 = *(undefined4 *)(iVar2 + 0x5f);
  unused3 = *(undefined4 *)(iVar2 + 99);
  *piVar3 = param_1;
  *(undefined4 *)(iVar2 + 0x5b) = param_2;
  *(undefined4 *)(iVar2 + 0x5f) = param_3;
  *(undefined4 *)(iVar2 + 99) = param_4;
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x40))();
  piVar4 = &local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar4;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc1c  FUN_0042bc1c   (78 bytes)   [unnamed]
int __cdecl FUN_0042bc1c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if ((param_2 != DAT_0046ad80) || ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x6c))))) {
    cVar1 = FUN_00410960();
    if (cVar1 == '\0') {
      if (param_2 == 1) {
        param_1 = -1;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      param_1 = FUN_0042bbb4(param_1,param_2,param_3,param_4);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc6c  FUN_0042bc6c   (85 bytes)   [unnamed]
LRESULT __cdecl FUN_0042bc6c(HWND hWnd,LPARAM lParam)

{
  LRESULT lResult;
  DWORD DVar2;
  WNDPROC lpPrevWndFunc;
  DWORD lpdwProcessId;
  
  if (hWnd == (HWND)0x0) {
    lResult = 0;
  }
  else {
    GetWindowThreadProcessId(hWnd,&lpdwProcessId);
    DVar2 = GetCurrentProcessId();
    if (DVar2 == lpdwProcessId) {
      lpPrevWndFunc = (WNDPROC)GetWindowLongA(hWnd,-4);
      if (lpPrevWndFunc == (WNDPROC)0x0) {
        lResult = 0;
      }
      else {
        lResult = CallWindowProcA(lpPrevWndFunc,hWnd,(*(UINT *)&DAT_0046ad80),0,lParam);
      }
    }
    else {
      lResult = 0;
    }
  }
  return lResult;
}

} // namespace tea
