// TEA.exe — runtime / library code "code_0x004a4000"
// 73 functions, 0x004a412c..0x004a7fdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a412c  FUN_004a412c   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a412c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50a9b8);
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
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_004a40a8,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4194  FUN_004a4194   (358 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004a42e1) */
int * __cdecl FUN_004a4194(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50a9d0);
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
    FUN_004a4fbc((int *)((int)param_1 + 0x4f),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  FUN_004c7d50(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  param_1[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050aac0;
  *(undefined ***)param_1[2] = &PTR_LAB_0050aacc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050aad8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = (int)&DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a43c8  FUN_004a43c8   (87 bytes)   [unnamed]
void __cdecl FUN_004a43c8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_004c7ce8(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a44dc  FUN_004a44dc   (81 bytes)   [unnamed]
void __cdecl FUN_004a44dc(int param_1,int *param_2)

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
  FUN_004c7ce8(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TStatic::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4530  FUN_004a4530   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a4530(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50aa10);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004a4194(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004a412c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4778  FUN_004a4778   (12 bytes)   [unnamed]
void __cdecl FUN_004a4778(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a47e8  FUN_004a47e8   (90 bytes)   [unnamed]
void __cdecl FUN_004a47e8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50aba8);
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4842  FUN_004a4842   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_004a4842(int *param_1,int *param_2)

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
// 0x004a486b  FUN_004a486b   (101 bytes)   [unnamed]
undefined * __stdcall FUN_004a486b(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50abd9);
  if (DAT_0050abc8 == '\0') {
    _vector_new_ldtc_((int *)&DAT_0051b458,0x10,0x1f,1,(undefined*)FUN_004a5cec);
    DAT_0051b648 = 1;
    DAT_0050abc8 = DAT_0050abc8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b458;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a48d0  FUN_004a48d0   (400 bytes)   [unnamed]
uint __stdcall FUN_004a48d0(void)

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
  
  __InitExceptBlockLDTC(0x50ac0e);
  uVar2 = DAT_0050abf4;
  if (DAT_0050abf0 == '\0') {
    DAT_0050abf0 = '\x01';
    if (DAT_0050abfc == 0) {
      DAT_0050abf8 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
      if (DAT_0050abf8 == 0) {
        DAT_0050abfc = 1;
      }
      else {
        DAT_0050abfc = 2;
      }
    }
    if (((DAT_0050abfc == 2) &&
        (hWnd = FindWindowA("MouseZ","Magellan MSWHEEL"), hWnd != (HWND)0x0)) &&
       (DAT_0050abf8 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0050abf8,0,0);
      DAT_0050abf4 = uVar2;
      *in_FS_OFFSET = local_44[2];
      return uVar2;
    }
    DAT_0050abf4 = 3;
    bVar1 = FUN_004875a8();
    if (bVar1) {
      puVar5 = FUN_0048751c();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0050abf4,0);
      }
    }
    else {
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_00487794(local_18,(HKEY)0x80000001,(uint *)"Control Panel\\Desktop",
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,"WheelScrollLines",(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      OWL::TRegKey::_dtor((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0050abf4 = FUN_004e532c((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0050abf4;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4a60  FUN_004a4a60   (48 bytes)   [unnamed]
void __cdecl FUN_004a4a60(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    *param_2 = *param_2 + iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4a90  FUN_004a4a90   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_004a4a90(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4ab5  FUN_004a4ab5   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_004a4ab5(int param_1)

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
// 0x004a4b3e  FUN_004a4b3e   (23 bytes)   [unnamed]
bool __cdecl FUN_004a4b3e(int param_1,int param_2)

{
  DAT_0051b674 = DAT_0051b674 + 1;
  return param_1 == param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4b55  FUN_004a4b55   (22 bytes)   [unnamed]
bool __cdecl FUN_004a4b55(int param_1,int *param_2)

{
  return *(int *)(param_1 + 0x34) == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4b6b  FUN_004a4b6b   (309 bytes)   [unnamed]
undefined * __cdecl FUN_004a4b6b(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  __InitExceptBlockLDTC(0x50ac5c);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
    return "MSWHEEL_ROLLMSG" + 0xf;
  }
  FUN_004c0384(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_004dd5cc(param_1,iVar2,0x40299c);
  FUN_004dd6dc((int)puVar1);
  FUN_004e0344(&DAT_0051b678,(byte *)"%s, %u, %s.\nError: %s");
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
      if (iVar2 != 0) goto LAB_004a4c79;
    }
    operator_delete();
  }
LAB_004a4c79:
  *in_FS_OFFSET = local_3c;
  return &DAT_0051b678;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4ca0  FUN_004a4ca0   (115 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004a4ca0(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0048751c();
  if (*(int *)(puVar1 + 0x10) == 1) {
LAB_004a4ce0:
    DAT_0050ab94 = RegisterWindowMessageA("MSWHEEL_ROLLMSG");
  }
  else {
    puVar1 = FUN_0048751c();
    if (*(int *)(puVar1 + 0x10) == 2) {
      puVar1 = FUN_0048751c();
      if (*(int *)(puVar1 + 4) == 3) goto LAB_004a4ce0;
    }
    DAT_0050ab94 = 0;
  }
  if (DAT_0050b04c == '\0') {
    DAT_0050b04c = '\x01';
    _DAT_0050b01c = DAT_0050ab94;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4d13  FUN_004a4d13   (49 bytes)   [unnamed]
void __stdcall FUN_004a4d13(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ac7c);
  if (DAT_0050abc8 != '\0') {
    DAT_0050abc8 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4d68  FUN_004a4d68   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a4d68(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b050);
  *param_1 = &OWL::TCommandEnabler::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4db4  FUN_004a4db4   (42 bytes)   [unnamed]
void __cdecl FUN_004a4db4(int param_1)

{
  WINDOWPLACEMENT local_30;
  
  local_30.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&local_30);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4de0  FUN_004a4de0   (237 bytes)   [unnamed]
int * __cdecl FUN_004a4de0(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b068);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0050948c;
  *(undefined ***)param_1[1] = &PTR_LAB_00509498;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  FUN_004a5098((int)param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4ed0  FUN_004a4ed0   (234 bytes)   [unnamed]
int * __cdecl FUN_004a4ed0(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b08c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0050948c;
  *(undefined ***)param_1[1] = &PTR_LAB_00509498;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  FUN_004a50ec((int)param_1,param_3,param_4);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4fbc  FUN_004a4fbc   (218 bytes)   [unnamed]
int * __cdecl FUN_004a4fbc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b0b0);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0050948c;
  *(undefined ***)param_1[1] = &PTR_LAB_00509498;
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
// 0x004a5098  FUN_004a5098   (82 bytes)   [unnamed]
void __cdecl FUN_004a5098(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = FUN_00496d48(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_004a5194(param_1,param_2,param_4);
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
// 0x004a50ec  FUN_004a50ec   (167 bytes)   [unnamed]
void __cdecl FUN_004a50ec(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (param_3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_3;
    }
    puVar1 = FUN_004dd744((int)param_3,iVar4,(int *)&DAT_00469dc4,(int *)&DAT_004756a8,0);
    *(undefined4 **)(param_1 + 0x6c) = puVar1;
    if (*(int *)(param_1 + 0xc) == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (pHVar2 == (HWND)0x0) {
      LVar3 = 0;
    }
    else {
      LVar3 = FUN_004a614c(pHVar2,*(LPARAM *)(param_1 + 0x6c));
    }
    FUN_004a5194(param_1,LVar3,(int)param_3);
    FUN_004a70e4(param_1);
    FUN_004a77c8(param_1);
    FUN_004a783c(param_1,'\x01');
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x21;
    FUN_004a5e28(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5194  FUN_004a5194   (300 bytes)   [unnamed]
void __cdecl FUN_004a5194(int param_1,undefined4 param_2,int param_3)

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
  *(undefined4 *)(param_1 + 0x5c) = (*(undefined4 *)&DAT_0051b19c);
  puVar1 = FUN_0049acf4(param_1);
  *(undefined1 **)(param_1 + 0x68) = puVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  else {
    FUN_004a7560(*(int *)(param_1 + 0x14),param_1);
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
    puVar2 = FUN_004dd744(*(int *)(param_1 + 0x70),iVar4,(int *)&DAT_00469dc4,(int *)&DAT_004756a8,0
                         );
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
    if (*(int *)(param_1 + 0x6c) == 0) {
      piVar3 = FUN_00488138(0);
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
  FUN_004a5e28(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a56f8  FUN_004a56f8   (86 bytes)   [unnamed]
void __cdecl FUN_004a56f8(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50b120);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5774  FUN_004a5774   (496 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004a5774(int param_1)

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
        uVar3 = FUN_0048e7e0(*puVar6,(int)&local_1c);
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
          FUN_0048e7e0(*puVar6,(int)&local_2c);
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
        uVar3 = FUN_004a5774((int)puVar6);
      }
      else {
        uVar3 = FUN_0048e7e0(*puVar6,(int)&local_3c);
      }
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5b5c  FUN_004a5b5c   (369 bytes)   [unnamed]
void __cdecl FUN_004a5b5c(undefined4 *param_1,HWND param_2,undefined4 *param_3)

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
      LVar3 = FUN_004a614c(hWnd,param_1[0x1b]);
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
    while ((local_10 = param_2, LVar3 = FUN_004a614c(param_2,param_1[0x1b]), LVar3 == 0 ||
           (cVar2 = (**(code **)(*(int *)(LVar3 + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((param_2 == (HWND)0x0) || (param_2 == (HWND)param_1[3])) goto LAB_004a5c59;
      param_2 = GetParent(param_2);
    }
    local_9 = '\x01';
LAB_004a5c59:
    if (local_9 == '\0') {
      local_2c = param_3[1];
      local_30 = 0x7fff;
      local_24 = 0;
      puVar1 = (undefined4 *)param_1[0x1b];
      cVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
      if ((cVar2 != '\0') &&
         (FUN_0048e7e0(*puVar1,(int)&local_30), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
      local_9 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
    }
    (**(code **)*param_3)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5cec  FUN_004a5cec   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a5cec(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b3a0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5d74  FUN_004a5d74   (44 bytes)   [unnamed]
void __cdecl FUN_004a5d74(int param_1,int param_2)

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
// 0x004a5da0  FUN_004a5da0   (45 bytes)   [unnamed]
void __cdecl FUN_004a5da0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6)

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
// 0x004a5dd0  FUN_004a5dd0   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_004a5dd0(int param_1,int param_2,int param_3,int param_4)

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
// 0x004a5e10  FUN_004a5e10   (22 bytes)   [unnamed]
void __cdecl FUN_004a5e10(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004a486b();
  FUN_004a5d74((int)puVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a5e28  FUN_004a5e28   (16 bytes)   [unnamed]
void __cdecl FUN_004a5e28(int param_1)

{
  *(undefined4 *)(param_1 + 0x82) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a6094  FUN_004a6094   (101 bytes)   [unnamed]
undefined4 __cdecl FUN_004a6094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
// 0x004a60fc  FUN_004a60fc   (78 bytes)   [unnamed]
int __cdecl FUN_004a60fc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if ((param_2 != DAT_0050b5c4) || ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x6c))))) {
    cVar1 = FUN_00487548();
    if (cVar1 == '\0') {
      if (param_2 == 1) {
        param_1 = -1;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      param_1 = FUN_004a6094(param_1,param_2,param_3,param_4);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a614c  FUN_004a614c   (85 bytes)   [unnamed]
LRESULT __cdecl FUN_004a614c(HWND param_1,LPARAM param_2)

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
        LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,(*(UINT *)&DAT_0050b5c4),0,param_2);
      }
    }
    else {
      LVar1 = 0;
    }
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a65bc  FUN_004a65bc   (118 bytes)   [unnamed]
void __cdecl FUN_004a65bc(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  if (param_4 == (HWND)0x0) {
    FUN_004a5774(param_1);
  }
  else {
    LVar2 = FUN_004a614c(param_4,*(LPARAM *)(param_1 + 0x6c));
    if (LVar2 != 0) {
      FUN_004a7708(LVar2,'\x01');
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
// 0x004a6bcc  FUN_004a6bcc   (18 bytes)   [unnamed]
void __cdecl FUN_004a6bcc(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a6d7c  FUN_004a6d7c   (34 bytes)   [unnamed]
void __cdecl FUN_004a6d7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004a6da0(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a6da0  FUN_004a6da0   (43 bytes)   [unnamed]
void __cdecl FUN_004a6da0(int param_1)

{
  HACCEL pHVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    pHVar1 = FUN_004c1a9c(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = pHVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a70e4  FUN_004a70e4   (96 bytes)   [unnamed]
void __cdecl FUN_004a70e4(int param_1)

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
      FUN_0049ae74();
      LVar2 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-4,*(LONG *)(param_1 + 0x68));
      *(LONG *)(param_1 + 0x40) = LVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a743c  FUN_004a743c   (23 bytes)   [unnamed]
int __cdecl FUN_004a743c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7658(param_1);
  return iVar1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7454  FUN_004a7454   (101 bytes)   [unnamed]
void __cdecl FUN_004a7454(int param_1)

{
  short sVar1;
  HWND pHVar2;
  LRESULT LVar3;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (pHVar2 = GetWindow(*(HWND *)(param_1 + 0xc),5), pHVar2 != (HWND)0x0)) {
    sVar1 = 1;
    for (pHVar2 = GetWindow(pHVar2,1); pHVar2 != (HWND)0x0; pHVar2 = GetWindow(pHVar2,3)) {
      LVar3 = FUN_004a614c(pHVar2,*(LPARAM *)(param_1 + 0x6c));
      if (LVar3 != 0) {
        *(short *)(LVar3 + 0x78) = sVar1;
        sVar1 = sVar1 + 1;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a74bc  FUN_004a74bc   (23 bytes)   [unnamed]
bool __cdecl FUN_004a74bc(undefined4 param_1,int param_2,uint *param_3)

{
  return (uint)*(ushort *)(param_2 + 0x78) == *param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a74d4  FUN_004a74d4   (139 bytes)   [unnamed]
undefined4 __cdecl FUN_004a74d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  uint3 extraout_var;
  
  iVar1 = FUN_004a7590(param_1,(undefined*)FUN_004a4ab5);
  if (iVar1 != 0) {
    FUN_004a857c(iVar1,0x7fe9);
  }
  pHVar4 = (HWND)0x0;
  iVar1 = FUN_004a743c(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_004a7604(param_1,PTR_FUN_0050ac37);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_004a7aa0(iVar2,pHVar4,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      pHVar4 = *(HWND *)(iVar2 + 0xc);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7560  FUN_004a7560   (47 bytes)   [unnamed]
void __cdecl FUN_004a7560(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x7a) != 0) {
      *(undefined4 *)(param_2 + 0x7e) = *(undefined4 *)(*(int *)(param_1 + 0x7a) + 0x7e);
      *(int *)(*(int *)(param_1 + 0x7a) + 0x7e) = param_2;
      *(int *)(param_1 + 0x7a) = param_2;
      return;
    }
    *(int *)(param_1 + 0x7a) = param_2;
    *(int *)(param_2 + 0x7e) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7590  FUN_004a7590   (62 bytes)   [unnamed]
int __cdecl FUN_004a7590(int param_1,undefined *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar3 + 0x7e);
      cVar2 = (*(code *)param_2)();
      if (cVar2 != '\0') {
        return iVar3;
      }
    } while ((iVar3 != *(int *)(param_1 + 0x7a)) && (iVar3 = iVar1, *(int *)(param_1 + 0x7a) != 0));
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a75d0  FUN_004a75d0   (52 bytes)   [unnamed]
void __cdecl FUN_004a75d0(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar2 + 0x7e);
      (*(code *)param_2)();
      if (iVar2 == *(int *)(param_1 + 0x7a)) {
        return;
      }
      iVar2 = iVar1;
    } while (*(int *)(param_1 + 0x7a) != 0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7604  FUN_004a7604   (83 bytes)   [unnamed]
int __cdecl FUN_004a7604(int param_1,undefined *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar3 + 0x7e);
      cVar2 = (*(code *)param_2)();
      if (cVar2 != '\0') {
        return iVar3;
      }
    } while ((iVar3 != *(int *)(param_1 + 0x7a)) && (iVar3 = iVar1, *(int *)(param_1 + 0x7a) != 0));
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7658  FUN_004a7658   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7658(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined4 *)&DAT_0051b674) = 0xffffffff;
  iVar1 = FUN_004a7590(param_1,(undefined*)FUN_004a4b3e);
  uVar2 = (*(undefined4 *)&DAT_0051b674);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a768c  FUN_004a768c   (26 bytes)   [unnamed]
int __cdecl FUN_004a768c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7590(param_1,(undefined*)FUN_004a4b55);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a76a8  FUN_004a76a8   (25 bytes)   [unnamed]
LRESULT __cdecl FUN_004a76a8(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a76c4  FUN_004a76c4   (65 bytes, 2 ranges)   [unnamed]
LRESULT __cdecl FUN_004a76c4(int param_1,HWND param_2,char param_3)

{
  int iVar1;
  LRESULT LVar2;
  BOOL BVar3;
  
  if (param_2 == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    LVar2 = SendMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return LVar2;
  }
  BVar3 = PostMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return BVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7708  FUN_004a7708   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7708(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_004a6094(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  LVar3 = FUN_004a76c4(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return LVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7740  FUN_004a7740   (62 bytes)   [unnamed]
void __cdecl FUN_004a7740(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  HWND pHVar1;
  
  hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5);
  while (hWnd != (HWND)0x0) {
    pHVar1 = GetWindow(hWnd,2);
    SendMessageA(hWnd,param_2,param_3,param_4);
    hWnd = pHVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7780  FUN_004a7780   (71 bytes)   [unnamed]
void __cdecl FUN_004a7780(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    uVar1 = FUN_00496d48(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a77c8  FUN_004a77c8   (116 bytes)   [unnamed]
void __cdecl FUN_004a77c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (iVar1 < 0) {
      uVar2 = FUN_00496d48((uint *)("MSWHEEL_ROLLMSG" + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = operator_new_array();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),iVar1 + 1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a783c  FUN_004a783c   (177 bytes)   [unnamed]
LONG __cdecl FUN_004a783c(int param_1,char param_2)

{
  LONG LVar1;
  HWND hWnd;
  tagRECT local_14;
  
  if (((*(byte *)(param_1 + 0x74) & 4) != 0) || (param_2 != '\0')) {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    *(LONG *)(param_1 + 0x18) = LVar1;
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
    *(LONG *)(param_1 + 0x1c) = LVar1;
  }
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = 0;
  local_14.bottom = 0;
  FUN_004a7a30(param_1,&local_14);
  *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
  if (*(int *)(param_1 + 0xc) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = GetParent(*(HWND *)(param_1 + 0xc));
  }
  if (((*(byte *)(param_1 + 0x1b) & 0x40) != 0) && (hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&local_14);
  }
  *(LONG *)(param_1 + 0x20) = local_14.left;
  *(LONG *)(param_1 + 0x24) = local_14.top;
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0xc);
  *(LONG *)(param_1 + 0x34) = LVar1;
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a78f0  FUN_004a78f0   (31 bytes)   [unnamed]
LONG __cdecl FUN_004a78f0(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7910  FUN_004a7910   (44 bytes)   [unnamed]
LONG __cdecl FUN_004a7910(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
    *(LONG *)(param_1 + 0x18) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10,param_2);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a793c  FUN_004a793c   (31 bytes)   [unnamed]
LONG __cdecl FUN_004a793c(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a795c  FUN_004a795c   (44 bytes)   [unnamed]
LONG __cdecl FUN_004a795c(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
    *(LONG *)(param_1 + 0x1c) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14,param_2);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7988  FUN_004a7988   (85 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7988(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint uVar4;
  
  uVar1 = FUN_004a78f0(param_1);
  uVar4 = ~param_2 & uVar1 | param_3;
  if (uVar4 == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a7910(param_1,uVar4);
    if ((param_4 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_004a7aa0(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a79e0  FUN_004a79e0   (79 bytes)   [unnamed]
undefined4 __cdecl FUN_004a79e0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint uVar4;
  
  uVar1 = FUN_004a793c(param_1);
  uVar4 = ~param_2 & uVar1 | param_3;
  if (uVar4 == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a795c(param_1,uVar4);
    if (param_4 != 0) {
      FUN_004a7aa0(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7a30  FUN_004a7a30   (59 bytes)   [unnamed]
void __cdecl FUN_004a7a30(int param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x20);
    param_2->left = iVar4;
    param_2->top = iVar3;
    param_2->right = iVar2 + iVar4;
    param_2->bottom = iVar1 + iVar3;
  }
  else {
    GetWindowRect(*(HWND *)(param_1 + 0xc),param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7a6c  FUN_004a7a6c   (52 bytes)   [unnamed]
void __cdecl FUN_004a7a6c(int param_1,LPRECT param_2)

{
  LONG LVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    GetClientRect(*(HWND *)(param_1 + 0xc),param_2);
    return;
  }
  LVar1 = *(LONG *)(param_1 + 0x2c);
  LVar2 = *(LONG *)(param_1 + 0x28);
  param_2->left = 0;
  param_2->top = 0;
  param_2->right = LVar2;
  param_2->bottom = LVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7aa0  FUN_004a7aa0   (129 bytes)   [unnamed]
bool __cdecl FUN_004a7aa0(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  BOOL BVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((param_7 & 2) == 0) {
      *(int *)(param_1 + 0x20) = param_3;
      *(int *)(param_1 + 0x24) = param_4;
    }
    if ((param_7 & 1) == 0) {
      *(int *)(param_1 + 0x28) = param_5;
      *(int *)(param_1 + 0x2c) = param_6;
    }
    if ((param_7 & 0x40) == 0) {
      if ((param_7 & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    BVar1 = SetWindowPos(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7bfc  FUN_004a7bfc   (286 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7bfc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR hCursor;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT local_20;
  char local_d;
  tagPOINT local_c;
  
  if ((param_2 == *(int *)(param_1 + 0x50)) && (param_3 == *(int *)(param_1 + 0x54))) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x50) == 0)) {
      hCursor = (HCURSOR)0x0;
    }
    else {
      hCursor = *(HCURSOR *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 0x54) = param_3;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else if (*(int *)(param_1 + 0x50) == 0) {
      param_3 = (int)LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    else {
      param_3 = (int)FUN_004c1b34(*(int *)(param_1 + 0x50),*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&local_c);
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_004a7a6c(param_1,&local_20);
      ptVar3 = &local_20;
      pLVar4 = local_30;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = local_c.x;
      if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1]))
         || (param_3 = local_c.y, local_30[3] <= local_c.y)) {
        local_d = '\0';
      }
      else {
        local_d = '\x01';
      }
      if (local_d != '\0') {
        param_3 = (int)SetCursor(*(HCURSOR *)(param_1 + 0x58));
      }
    }
    if (hCursor != (HCURSOR)0x0) {
      param_3 = DestroyCursor(hCursor);
    }
    uVar1 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7f40  FUN_004a7f40   (64 bytes)   [unnamed]
int __cdecl FUN_004a7f40(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  FUN_004a8260(param_1,param_2,&local_20);
  return local_20.nPos;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7f80  FUN_004a7f80   (90 bytes)   [unnamed]
int __cdecl FUN_004a7f80(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  SCROLLINFO local_20;
  
  iVar1 = FUN_004a7f40(param_1,param_2);
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  local_20.nPos = param_3;
  FUN_004a8244(param_1,param_2,&local_20,param_4);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7fdc  FUN_004a7fdc   (77 bytes)   [unnamed]
void __cdecl FUN_004a7fdc(int param_1,int param_2,int *param_3,int *param_4)

{
  tagSCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  FUN_004a8260(param_1,param_2,&local_20);
  *param_3 = local_20.nMin;
  *param_4 = local_20.nMax;
  return;
}

} // namespace tea
