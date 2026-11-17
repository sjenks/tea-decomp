// TSMerge.exe — runtime / library code "code_0x00428000"
// 40 functions, 0x004284cc..0x0042bc6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004284cc  FUN_004284cc   (346 bytes)   [unnamed]
void __cdecl FUN_004284cc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  tagRECT local_70;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined4 local_3c [12];
  int local_c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x469cc8);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        local_8 = *(undefined4 *)(local_c + 0xc);
        local_50 = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        local_50 = 8;
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
    local_70.left = 0;
    local_70.top = 0;
    local_70.right = 0;
    local_70.bottom = 0;
    FUN_0042d568(*param_1,&local_70);
    local_50 = 0x20;
    FUN_00425634(local_3c,*(undefined4 *)(*param_1 + 0xc),&local_70.left,0x3eb,(uint *)0xffffffff);
    local_44 = local_44 + 2;
    local_50 = 0x2c;
    FUN_004256d0((int)local_3c,(uint *)param_1[0xd],'\x01');
    FUN_0042d1a4(*(int *)param_1[7],0x404,0,(LPARAM)local_3c);
    local_44 = local_44 + -2;
    operator_delete_array();
  }
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004286b0  FUN_004286b0   (42 bytes)   [unnamed]
LRESULT __stdcall FUN_004286b0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x87) {
    LVar1 = 0x104;
  }
  else {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return LVar1;
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
  undefined4 *in_FS_OFFSET;
  undefined1 local_48 [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c [2];
  
  __InitExceptBlockLDTC(0x469f4c);
  GH_PIECE(local_48, 0, undefined4) = 0;
  GH_PIECE(local_48, 4, undefined4) = 0;
  GH_PIECE(local_48, 8, undefined4) = 0;
  local_3c = 0;
  FUN_0042d52c(*param_1,(LPRECT)local_48);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)local_48);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(local_48 + 8));
  }
  local_20 = 8;
  FUN_0042027c((int *)local_c,0x104);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  FUN_00418b6c(&local_38,param_1[6],local_c[0]);
  uVar1 = FUN_0042d3ec(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = GH_PIECE(local_48, 4, undefined4) + local_34;
  }
  else {
    uVar2 = -((local_3c - GH_PIECE(local_48, 4, undefined4)) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_0041d740((int *)local_48,0,iVar3);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      GH_PIECE(local_48, 8, undefined4) = GH_PIECE(local_48, 0, undefined4) + local_38;
    }
    else {
      GH_PIECE(local_48, 0, undefined4) = GH_PIECE(local_48, 8, undefined4) - local_38;
    }
  }
  else {
    uVar1 = -((GH_PIECE(local_48, 8, undefined4) - GH_PIECE(local_48, 0, undefined4)) - local_38);
    iVar3 = (int)uVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
    }
    FUN_0041d740((int *)local_48,iVar3,0);
  }
  FUN_0042d59c(*param_1,(HWND)0x0,GH_PIECE(local_48, 0, undefined4),GH_PIECE(local_48, 4, undefined4),GH_PIECE(local_48, 8, undefined4) - GH_PIECE(local_48, 0, undefined4),
               local_3c - GH_PIECE(local_48, 4, undefined4),4);
  local_14 = local_14 + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429de0  FUN_00429de0   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00429de0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a198);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TUrlLink::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00429d5c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429e48  FUN_00429e48   (358 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00429f95) */
int * __cdecl FUN_00429e48(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a1b0);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x4f;
    *(int *)((int)param_1 + 0x4f) = (int)param_1 + 0x43;
    *(int *)((int)param_1 + 0x53) = (int)param_1 + 0x47;
    param_1[1] = (int)param_1 + 0x43;
    param_1[2] = (int)param_1 + 0x47;
    *(undefined4 *)((int)param_1 + 0x3f) = 0;
    *(undefined4 *)((int)param_1 + 0x4b) = 0;
    *(undefined ***)((int)param_1 + 0x43) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x47) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x4f),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  FUN_00447bb4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  param_1[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046a2a0;
  *(undefined ***)param_1[2] = &PTR_LAB_0046a2ac;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046a2b8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = (int)&DAT_00471d68;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a07c  FUN_0042a07c   (87 bytes)   [unnamed]
void __cdecl FUN_0042a07c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
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
  piVar1 = FUN_00447b4c(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a190  FUN_0042a190   (81 bytes)   [unnamed]
void __cdecl FUN_0042a190(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_00447b4c(local_14,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TStatic::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a1e4  FUN_0042a1e4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a1e4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46a1f0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00429e48(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00429de0(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46a388);
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))();
  }
  *in_FS_OFFSET = local_30;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a3b9);
  if (DAT_0046a3a8 == '\0') {
    _vector_new_ldtc_((int *)&DAT_00476e5c,0x10,0x1f,1,(undefined*)FUN_0042b80c);
    DAT_0047704c = 1;
    DAT_0046a3a8 = DAT_0046a3a8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
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
  LSTATUS LVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  BYTE local_c4 [128];
  DWORD local_44 [6];
  undefined2 local_2c;
  int local_20;
  HKEY local_18 [5];
  
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
      *in_FS_OFFSET = local_44[2];
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
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_00410bac(local_18,(HKEY)0x80000001,(uint *)"Control Panel\\Desktop",
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,"WheelScrollLines",(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      OWL::TRegKey::_dtor((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0046a3d4 = FUN_0045c908((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0046a3d4;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
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
  BOOL BVar2;
  int iVar3;
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
        BVar2 = IsIconic(*(HWND *)(param_1 + 0xc));
        if (BVar2 != 0) {
          iVar3 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
          lpString = (LPSTR)operator_new_array();
          GetWindowTextA(*(HWND *)(param_1 + 0xc),lpString,iVar3 + 1);
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
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  __InitExceptBlockLDTC(0x46a43c);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
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
  FUN_00457ef4(&DAT_0047707c,(byte *)"%s, %u, %s.\nError: %s");
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar2 != 0) goto LAB_0042a92d;
    }
    operator_delete();
  }
LAB_0042a92d:
  *in_FS_OFFSET = local_3c;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a45c);
  if (DAT_0046a3a8 != '\0') {
    DAT_0046a3a8 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa1c  FUN_0042aa1c   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042aa1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a830);
  *param_1 = &OWL::TCommandEnabler::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa68  FUN_0042aa68   (42 bytes)   [unnamed]
void __cdecl FUN_0042aa68(int param_1)

{
  WINDOWPLACEMENT local_30;
  
  local_30.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&local_30);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa94  FUN_0042aa94   (237 bytes)   [unnamed]
int * __cdecl FUN_0042aa94(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a848);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0046906c;
  *(undefined ***)param_1[1] = &PTR_LAB_00469078;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  FUN_0042ac60((int)param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ab84  FUN_0042ab84   (218 bytes)   [unnamed]
int * __cdecl FUN_0042ab84(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46a86c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0046906c;
  *(undefined ***)param_1[1] = &PTR_LAB_00469078;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46a8dc);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *in_FS_OFFSET = local_30;
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
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
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
      local_18 = *(undefined4 *)(*(int *)(iVar4 + 99) + 4);
      local_1c = 0x7fff;
      local_10 = 0;
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
        local_28 = local_c;
        local_20 = 0;
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
      local_38 = local_c;
      local_30 = 0;
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
void __cdecl FUN_0042b67c(undefined4 *param_1,HWND param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  HWND hWnd;
  LRESULT LVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  HWND local_10;
  char local_9;
  HWND local_8;
  
  hWnd = param_2;
  if (param_3[2] == param_1[3]) {
    for (; (hWnd != (HWND)0x0 && (hWnd != (HWND)param_1[3])); hWnd = GetParent(hWnd)) {
      local_8 = hWnd;
      LVar3 = FUN_0042bc6c(hWnd,param_1[0x1b]);
      if ((LVar3 != 0) &&
         ((**(code **)(*(int *)(LVar3 + 8) + 0x50))(), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
    }
  }
  OWL::TWindow::vf20(param_1,(int)param_3);
  if (((param_3[2] == param_1[3]) && ((*(byte *)(param_3 + 3) & 1) == 0)) &&
     ((*(byte *)(param_3 + 3) & 2) == 0)) {
    local_9 = '\0';
    local_1c = param_3[1];
    local_20 = 0;
    local_14 = 0;
    while ((local_10 = param_2, LVar3 = FUN_0042bc6c(param_2,param_1[0x1b]), LVar3 == 0 ||
           (cVar2 = (**(code **)(*(int *)(LVar3 + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((param_2 == (HWND)0x0) || (param_2 == (HWND)param_1[3])) goto LAB_0042b779;
      param_2 = GetParent(param_2);
    }
    local_9 = '\x01';
LAB_0042b779:
    if (local_9 == '\0') {
      local_2c = param_3[1];
      local_30 = 0x7fff;
      local_24 = 0;
      puVar1 = (undefined4 *)param_1[0x1b];
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ab5c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
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
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x6c);
  piVar3 = (int *)(iVar2 + 0x57);
  local_14 = *piVar3;
  local_10 = *(undefined4 *)(iVar2 + 0x5b);
  local_c = *(undefined4 *)(iVar2 + 0x5f);
  local_8 = *(undefined4 *)(iVar2 + 99);
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
LRESULT __cdecl FUN_0042bc6c(HWND param_1,LPARAM param_2)

{
  LRESULT LVar1;
  DWORD DVar2;
  WNDPROC lpPrevWndFunc;
  DWORD local_8;
  
  if (param_1 == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    GetWindowThreadProcessId(param_1,&local_8);
    DVar2 = GetCurrentProcessId();
    if (DVar2 == local_8) {
      lpPrevWndFunc = (WNDPROC)GetWindowLongA(param_1,-4);
      if (lpPrevWndFunc == (WNDPROC)0x0) {
        LVar1 = 0;
      }
      else {
        LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,(*(UINT *)&DAT_0046ad80),0,param_2);
      }
    }
    else {
      LVar1 = 0;
    }
  }
  return LVar1;
}

} // namespace tea
