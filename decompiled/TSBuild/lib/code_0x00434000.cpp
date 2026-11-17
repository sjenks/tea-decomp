// TSBuild.exe — runtime / library code "code_0x00434000"
// 41 functions, 0x00434000..0x00437d74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00434000  FUN_00434000   (352 bytes)   [unnamed]
void __cdecl FUN_00434000(int *param_1)

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
  
  __InitExceptBlockLDTC(0x47dd28);
  GH_PIECE(local_48, 0, undefined4) = 0;
  GH_PIECE(local_48, 4, undefined4) = 0;
  GH_PIECE(local_48, 8, undefined4) = 0;
  local_3c = 0;
  FUN_004386c0(*param_1,(LPRECT)local_48);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)local_48);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(local_48 + 8));
  }
  local_20 = 8;
  FUN_0042b3f0((int *)local_c,0x104);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  FUN_00423ce0(&local_38,param_1[6],local_c[0]);
  uVar1 = FUN_00438580(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = GH_PIECE(local_48, 4, undefined4) + local_34;
  }
  else {
    uVar2 = -((local_3c - GH_PIECE(local_48, 4, undefined4)) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_004288b4((int *)local_48,0,iVar3);
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
    FUN_004288b4((int *)local_48,iVar3,0);
  }
  FUN_00438730(*param_1,(HWND)0x0,GH_PIECE(local_48, 0, undefined4),GH_PIECE(local_48, 4, undefined4),GH_PIECE(local_48, 8, undefined4) - GH_PIECE(local_48, 0, undefined4),
               local_3c - GH_PIECE(local_48, 4, undefined4),4);
  local_14 = local_14 + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434f74  FUN_00434f74   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00434f74(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47df74);
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
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00434ef0,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434fdc  FUN_00434fdc   (358 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00435129) */
int * __cdecl FUN_00434fdc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47df8c);
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
    FUN_00435d18((int *)((int)param_1 + 0x4f),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  FUN_004530f4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  param_1[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047e07c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047e088;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047e094;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = (int)&DAT_00485bd8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435210  FUN_00435210   (87 bytes)   [unnamed]
void __cdecl FUN_00435210(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_0045308c(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435324  FUN_00435324   (81 bytes)   [unnamed]
void __cdecl FUN_00435324(int param_1,int *param_2)

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
  FUN_0045308c(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TStatic::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435378  FUN_00435378   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00435378(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47dfcc);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00434fdc(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00434f74(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004355c0  FUN_004355c0   (12 bytes)   [unnamed]
void __cdecl FUN_004355c0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435630  FUN_00435630   (90 bytes)   [unnamed]
void __cdecl FUN_00435630(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47e164);
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043568a  FUN_0043568a   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_0043568a(int *param_1,int *param_2)

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
// 0x004356b3  FUN_004356b3   (101 bytes)   [unnamed]
undefined * __stdcall FUN_004356b3(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e195);
  if (DAT_0047e184 == '\0') {
    _vector_new_ldtc_((int *)&DAT_0048c904,0x10,0x1f,1,(undefined*)FUN_004369a0);
    DAT_0048caf4 = 1;
    DAT_0047e184 = DAT_0047e184 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c904;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435718  FUN_00435718   (400 bytes)   [unnamed]
uint __stdcall FUN_00435718(void)

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
  
  __InitExceptBlockLDTC(0x47e1ca);
  uVar2 = DAT_0047e1b0;
  if (DAT_0047e1ac == '\0') {
    DAT_0047e1ac = '\x01';
    if (DAT_0047e1b8 == 0) {
      DAT_0047e1b4 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
      if (DAT_0047e1b4 == 0) {
        DAT_0047e1b8 = 1;
      }
      else {
        DAT_0047e1b8 = 2;
      }
    }
    if (((DAT_0047e1b8 == 2) &&
        (hWnd = FindWindowA("MouseZ","Magellan MSWHEEL"), hWnd != (HWND)0x0)) &&
       (DAT_0047e1b4 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0047e1b4,0,0);
      DAT_0047e1b0 = uVar2;
      *in_FS_OFFSET = local_44[2];
      return uVar2;
    }
    DAT_0047e1b0 = 3;
    bVar1 = FUN_0041b9e4();
    if (bVar1) {
      puVar5 = FUN_0041b958();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0047e1b0,0);
      }
    }
    else {
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_0041bbd0(local_18,(HKEY)0x80000001,(uint *)"Control Panel\\Desktop",
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,"WheelScrollLines",(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      OWL::TRegKey::_dtor((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0047e1b0 = FUN_0046f444((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0047e1b0;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004358a8  FUN_004358a8   (48 bytes)   [unnamed]
void __cdecl FUN_004358a8(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    *param_2 = *param_2 + iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004358d8  FUN_004358d8   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_004358d8(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004358fd  FUN_004358fd   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_004358fd(int param_1)

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
// 0x00435986  FUN_00435986   (23 bytes)   [unnamed]
bool __cdecl FUN_00435986(int param_1,int param_2)

{
  DAT_0048cb20 = DAT_0048cb20 + 1;
  return param_1 == param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043599d  FUN_0043599d   (22 bytes)   [unnamed]
bool __cdecl FUN_0043599d(int param_1,int *param_2)

{
  return *(int *)(param_1 + 0x34) == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004359b3  FUN_004359b3   (309 bytes)   [unnamed]
undefined * __cdecl FUN_004359b3(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  __InitExceptBlockLDTC(0x47e218);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
    return "MSWHEEL_ROLLMSG" + 0xf;
  }
  FUN_0044e764(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_00468310(param_1,iVar2,0x403c70);
  FUN_00468420((int)puVar1);
  FUN_0046a5c8(&DAT_0048cb24,(byte *)"%s, %u, %s.\nError: %s");
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00435ac1;
    }
    operator_delete();
  }
LAB_00435ac1:
  *in_FS_OFFSET = local_3c;
  return &DAT_0048cb24;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435ae8  FUN_00435ae8   (115 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00435ae8(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0041b958();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_00435b28:
    DAT_0047e150 = RegisterWindowMessageA("MSWHEEL_ROLLMSG");
  }
  else {
    puVar1 = FUN_0041b958();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_0041b958();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_00435b28;
    }
    DAT_0047e150 = 0;
  }
  if (DAT_0047e608 == '\0') {
    DAT_0047e608 = '\x01';
    _DAT_0047e5d8 = DAT_0047e150;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435b5b  FUN_00435b5b   (49 bytes)   [unnamed]
void __stdcall FUN_00435b5b(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e238);
  if (DAT_0047e184 != '\0') {
    DAT_0047e184 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435bb0  FUN_00435bb0   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_00435bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e60c);
  *param_1 = &OWL::TCommandEnabler::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435bfc  FUN_00435bfc   (42 bytes)   [unnamed]
void __cdecl FUN_00435bfc(int param_1)

{
  WINDOWPLACEMENT local_30;
  
  local_30.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&local_30);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435c28  FUN_00435c28   (237 bytes)   [unnamed]
int * __cdecl FUN_00435c28(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e624);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0047ce48;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ce54;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  FUN_00435df4((int)param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435d18  FUN_00435d18   (218 bytes)   [unnamed]
int * __cdecl FUN_00435d18(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e648);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0047ce48;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ce54;
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
// 0x00435df4  FUN_00435df4   (82 bytes)   [unnamed]
void __cdecl FUN_00435df4(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = FUN_0042aea0(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_00435e48(param_1,param_2,param_4);
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
// 0x00435e48  FUN_00435e48   (300 bytes)   [unnamed]
void __cdecl FUN_00435e48(int param_1,undefined4 param_2,int param_3)

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
  *(undefined4 *)(param_1 + 0x5c) = (*(undefined4 *)&DAT_0048c654);
  puVar1 = FUN_0042e8f4(param_1);
  *(undefined1 **)(param_1 + 0x68) = puVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  else {
    FUN_004381f0(*(int *)(param_1 + 0x14),param_1);
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
    puVar2 = FUN_00468488(*(int *)(param_1 + 0x70),iVar4,(int *)&DAT_00404d74,(int *)&DAT_004039bc,0
                         );
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
    if (*(int *)(param_1 + 0x6c) == 0) {
      piVar3 = FUN_0041ca18(0);
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
  FUN_00436adc(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004363ac  FUN_004363ac   (86 bytes)   [unnamed]
void __cdecl FUN_004363ac(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47e6b8);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436428  FUN_00436428   (496 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_00436428(int param_1)

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
        uVar3 = FUN_00422b40(*puVar6,(int)&local_1c);
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
          FUN_00422b40(*puVar6,(int)&local_2c);
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
        uVar3 = FUN_00436428((int)puVar6);
      }
      else {
        uVar3 = FUN_00422b40(*puVar6,(int)&local_3c);
      }
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436810  FUN_00436810   (369 bytes)   [unnamed]
void __cdecl FUN_00436810(undefined4 *param_1,HWND param_2,undefined4 *param_3)

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
      LVar3 = FUN_00436e00(hWnd,param_1[0x1b]);
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
    while ((local_10 = param_2, LVar3 = FUN_00436e00(param_2,param_1[0x1b]), LVar3 == 0 ||
           (cVar2 = (**(code **)(*(int *)(LVar3 + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((param_2 == (HWND)0x0) || (param_2 == (HWND)param_1[3])) goto LAB_0043690d;
      param_2 = GetParent(param_2);
    }
    local_9 = '\x01';
LAB_0043690d:
    if (local_9 == '\0') {
      local_2c = param_3[1];
      local_30 = 0x7fff;
      local_24 = 0;
      puVar1 = (undefined4 *)param_1[0x1b];
      cVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
      if ((cVar2 != '\0') &&
         (FUN_00422b40(*puVar1,(int)&local_30), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
      local_9 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
    }
    (**(code **)*param_3)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004369a0  FUN_004369a0   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_004369a0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47e938);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436a28  FUN_00436a28   (44 bytes)   [unnamed]
void __cdecl FUN_00436a28(int param_1,int param_2)

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
// 0x00436a54  FUN_00436a54   (45 bytes)   [unnamed]
void __cdecl FUN_00436a54(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6)

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
// 0x00436a84  FUN_00436a84   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_00436a84(int param_1,int param_2,int param_3,int param_4)

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
// 0x00436ac4  FUN_00436ac4   (22 bytes)   [unnamed]
void __cdecl FUN_00436ac4(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004356b3();
  FUN_00436a28((int)puVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436adc  FUN_00436adc   (16 bytes)   [unnamed]
void __cdecl FUN_00436adc(int param_1)

{
  *(undefined4 *)(param_1 + 0x82) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436d48  FUN_00436d48   (101 bytes)   [unnamed]
undefined4 __cdecl FUN_00436d48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
// 0x00436db0  FUN_00436db0   (78 bytes)   [unnamed]
int __cdecl FUN_00436db0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if ((param_2 != DAT_0047eb5c) || ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x6c))))) {
    cVar1 = FUN_0041b984();
    if (cVar1 == '\0') {
      if (param_2 == 1) {
        param_1 = -1;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      param_1 = FUN_00436d48(param_1,param_2,param_3,param_4);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e00  FUN_00436e00   (85 bytes)   [unnamed]
LRESULT __cdecl FUN_00436e00(HWND param_1,LPARAM param_2)

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
        LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,(*(UINT *)&DAT_0047eb5c),0,param_2);
      }
    }
    else {
      LVar1 = 0;
    }
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437270  FUN_00437270   (118 bytes)   [unnamed]
void __cdecl FUN_00437270(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  if (param_4 == (HWND)0x0) {
    FUN_00436428(param_1);
  }
  else {
    LVar2 = FUN_00436e00(param_4,*(LPARAM *)(param_1 + 0x6c));
    if (LVar2 != 0) {
      FUN_00438398(LVar2,'\x01');
    }
    uVar3 = GetDlgCtrlID(param_4);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | uVar3 & 0xffff;
    *(HWND *)(iVar1 + 99) = param_4;
    (**(code **)(*(int *)(param_1 + 8) + 0x48))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437880  FUN_00437880   (18 bytes)   [unnamed]
void __cdecl FUN_00437880(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437a30  FUN_00437a30   (43 bytes)   [unnamed]
void __cdecl FUN_00437a30(int param_1)

{
  HACCEL pHVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    pHVar1 = FUN_0044fe7c(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = pHVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d74  FUN_00437d74   (96 bytes)   [unnamed]
void __cdecl FUN_00437d74(int param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD local_8;
  
  local_8 = 0;
  GetWindowThreadProcessId(*(HWND *)(param_1 + 0xc),&local_8);
  DVar1 = GetCurrentProcessId();
  if (DVar1 == local_8) {
    LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-4);
    if (LVar2 == *(int *)(param_1 + 0x68)) {
      if (*(int *)(param_1 + 0x40) == 0) {
        *(code **)(param_1 + 0x40) = DefWindowProcA;
      }
    }
    else {
      FUN_0042ea74();
      LVar2 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-4,*(LONG *)(param_1 + 0x68));
      *(LONG *)(param_1 + 0x40) = LVar2;
    }
  }
  return;
}

} // namespace tea
