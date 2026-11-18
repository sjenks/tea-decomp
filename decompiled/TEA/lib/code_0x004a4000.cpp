// TEA.exe — runtime / library code "code_0x004a4000"
// 67 functions, 0x004a43c8..0x004a7fdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a43c8  FUN_004a43c8   (87 bytes)   [unnamed]
void __cdecl FUN_004a43c8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
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
  piVar1 = OWL::TStatic::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a44dc  FUN_004a44dc   (81 bytes)   [unnamed]
void __cdecl FUN_004a44dc(int param_1,int *param_2)

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
  FUN_0049a294(param_2,&local_8,4);
  OWL::TStatic::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4530  FUN_004a4530   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a4530(int *param_1)

{
  undefined4 *streamer;
  int *urlLink;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50aa10);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50aba8);
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))();
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50abd9);
  if (DAT_0050abc8 == '\0') {
    _vector_new_ldtc_((int *)&DAT_0051b458,0x10,0x1f,1,(undefined*)FUN_004a5cec);
    DAT_0051b648 = 1;
    DAT_0050abc8 = DAT_0050abc8 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
  LSTATUS regStatus;
  undefined *puVar5;
  undefined4 *sehChainHead;
  char cVar6;
  BYTE data [128];
  DWORD type [6];
  undefined2 ehContext;
  int ehDtorCount;
  HKEY phkResult [5];
  
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
      *sehChainHead = type[2];
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
      type[1] = 0x80;
      ehContext = 8;
      ppHVar3 = FUN_00487794(phkResult,(HKEY)0x80000001,(uint *)"Control Panel\\Desktop",
                             0xf003f,0);
      ehDtorCount = ehDtorCount + 1;
      regStatus = RegQueryValueExA(*ppHVar3,"WheelScrollLines",(LPDWORD)0x0,type,data,
                               type + 1);
      cVar6 = regStatus != 0;
      ehDtorCount = ehDtorCount + -1;
      OWL::TRegKey::_dtor((int *)phkResult,2);
      if (cVar6 != '\0') {
        DAT_0050abf4 = FUN_004e532c((char *)data,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0050abf4;
    *sehChainHead = type[2];
  }
  else {
    *sehChainHead = type[2];
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
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  DWORD local_18 [3];
  int str;
  
  __InitExceptBlockLDTC(0x50ac5c);
  if (param_1 == 0) {
    *sehChainHead = sehPrevFrame;
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
  sprintf(&DAT_0051b678,(byte *)"%s, %u, %s.\nError: %s");
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
      if (iVar2 != 0) goto LAB_004a4c79;
    }
    operator_delete();
  }
LAB_004a4c79:
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ac7c);
  if (DAT_0050abc8 != '\0') {
    DAT_0050abc8 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4db4  FUN_004a4db4   (42 bytes)   [unnamed]
void __cdecl FUN_004a4db4(int param_1)

{
  WINDOWPLACEMENT placement;
  
  placement.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&placement);
  return;
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
  HWND hWnd;
  LRESULT lResult;
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
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (hWnd == (HWND)0x0) {
      lResult = 0;
    }
    else {
      lResult = FUN_004a614c(hWnd,*(LPARAM *)(param_1 + 0x6c));
    }
    FUN_004a5194(param_1,lResult,(int)param_3);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b120);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *sehChainHead = sehPrevFrame;
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
        unused3 = local_c;
        unused4 = 0;
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
      unused = local_c;
      unused2 = 0;
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
void __cdecl FUN_004a5b5c(undefined4 *window,HWND hWnd2,undefined4 *param_3)

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
      lResult = FUN_004a614c(hWnd,window[0x1b]);
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
    while ((hWnd3 = hWnd2, lResult = FUN_004a614c(hWnd2,window[0x1b]), lResult == 0 ||
           (cVar2 = (**(code **)(*(int *)(lResult + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((hWnd2 == (HWND)0x0) || (hWnd2 == (HWND)window[3])) goto LAB_004a5c59;
      hWnd2 = GetParent(hWnd2);
    }
    local_9 = '\x01';
LAB_004a5c59:
    if (local_9 == '\0') {
      unused = param_3[1];
      local_30 = 0x7fff;
      unused2 = 0;
      puVar1 = (undefined4 *)window[0x1b];
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b3a0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
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
LRESULT __cdecl FUN_004a614c(HWND hWnd,LPARAM lParam)

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
        lResult = CallWindowProcA(lpPrevWndFunc,hWnd,(*(UINT *)&DAT_0050b5c4),0,lParam);
      }
    }
    else {
      lResult = 0;
    }
  }
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a65bc  FUN_004a65bc   (118 bytes)   [unnamed]
void __cdecl FUN_004a65bc(int param_1,int param_2,undefined4 param_3,HWND hWnd)

{
  int iVar1;
  LRESULT lResult;
  uint ctrlId;
  
  if (hWnd == (HWND)0x0) {
    FUN_004a5774(param_1);
  }
  else {
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(param_1 + 0x6c));
    if (lResult != 0) {
      FUN_004a7708(lResult,'\x01');
    }
    ctrlId = GetDlgCtrlID(hWnd);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | ctrlId & 0xffff;
    *(HWND *)(iVar1 + 99) = hWnd;
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
  HACCEL hAccel;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    hAccel = FUN_004c1a9c(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = hAccel;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a70e4  FUN_004a70e4   (96 bytes)   [unnamed]
void __cdecl FUN_004a70e4(int param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD lpdwProcessId;
  
  lpdwProcessId = 0;
  GetWindowThreadProcessId(*(HWND *)(param_1 + 0xc),&lpdwProcessId);
  DVar1 = GetCurrentProcessId();
  if (DVar1 == lpdwProcessId) {
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
  HWND hWnd;
  LRESULT lResult;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5), hWnd != (HWND)0x0)) {
    sVar1 = 1;
    for (hWnd = GetWindow(hWnd,1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,3)) {
      lResult = FUN_004a614c(hWnd,*(LPARAM *)(param_1 + 0x6c));
      if (lResult != 0) {
        *(short *)(lResult + 0x78) = sVar1;
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
  HWND hWnd;
  uint3 extraout_var;
  
  iVar1 = FUN_004a7590(param_1,(undefined*)FUN_004a4ab5);
  if (iVar1 != 0) {
    FUN_004a857c(iVar1,0x7fe9);
  }
  hWnd = (HWND)0x0;
  iVar1 = FUN_004a743c(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_004a7604(param_1,PTR_FUN_0050ac37);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_004a7aa0(iVar2,hWnd,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      hWnd = *(HWND *)(iVar2 + 0xc);
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
LRESULT __cdecl FUN_004a76a8(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  lResult = SendMessageA(*(HWND *)(param_1 + 0xc),msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a76c4  FUN_004a76c4   (65 bytes, 2 ranges)   [unnamed]
LRESULT __cdecl FUN_004a76c4(int param_1,HWND hWnd,char param_3)

{
  int iVar1;
  LRESULT lResult;
  BOOL ok;
  
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    lResult = SendMessageA(hWnd,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return lResult;
  }
  ok = PostMessageA(hWnd,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7708  FUN_004a7708   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7708(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT lResult;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_004a6094(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  lResult = FUN_004a76c4(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7740  FUN_004a7740   (62 bytes)   [unnamed]
void __cdecl FUN_004a7740(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

{
  HWND hWnd;
  HWND hWnd2;
  
  hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5);
  while (hWnd != (HWND)0x0) {
    hWnd2 = GetWindow(hWnd,2);
    SendMessageA(hWnd,msg,wParam,lParam);
    hWnd = hWnd2;
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
  int textLen;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    textLen = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (textLen < 0) {
      uVar2 = FUN_00496d48((uint *)("MSWHEEL_ROLLMSG" + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = operator_new_array();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + textLen) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),textLen + 1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a783c  FUN_004a783c   (177 bytes)   [unnamed]
LONG __cdecl FUN_004a783c(int param_1,char param_2)

{
  LONG windowLong;
  HWND hWnd;
  tagRECT rect;
  
  if (((*(byte *)(param_1 + 0x74) & 4) != 0) || (param_2 != '\0')) {
    windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    *(LONG *)(param_1 + 0x18) = windowLong;
    windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
    *(LONG *)(param_1 + 0x1c) = windowLong;
  }
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a30(param_1,&rect);
  *(LONG *)(param_1 + 0x2c) = rect.bottom - rect.top;
  *(LONG *)(param_1 + 0x28) = rect.right - rect.left;
  if (*(int *)(param_1 + 0xc) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = GetParent(*(HWND *)(param_1 + 0xc));
  }
  if (((*(byte *)(param_1 + 0x1b) & 0x40) != 0) && (hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&rect);
  }
  *(LONG *)(param_1 + 0x20) = rect.left;
  *(LONG *)(param_1 + 0x24) = rect.top;
  windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0xc);
  *(LONG *)(param_1 + 0x34) = windowLong;
  return windowLong;
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
LONG __cdecl FUN_004a7910(int param_1,LONG newLong)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
    *(LONG *)(param_1 + 0x18) = newLong;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10,newLong);
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
LONG __cdecl FUN_004a795c(int param_1,LONG newLong)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
    *(LONG *)(param_1 + 0x1c) = newLong;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14,newLong);
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
  uint newLong;
  
  uVar1 = FUN_004a78f0(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a7910(param_1,newLong);
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
  uint newLong;
  
  uVar1 = FUN_004a793c(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a795c(param_1,newLong);
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
void __cdecl FUN_004a7a30(int param_1,LPRECT rect)

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
    rect->left = iVar4;
    rect->top = iVar3;
    rect->right = iVar2 + iVar4;
    rect->bottom = iVar1 + iVar3;
  }
  else {
    GetWindowRect(*(HWND *)(param_1 + 0xc),rect);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7a6c  FUN_004a7a6c   (52 bytes)   [unnamed]
void __cdecl FUN_004a7a6c(int param_1,LPRECT rect)

{
  LONG LVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    GetClientRect(*(HWND *)(param_1 + 0xc),rect);
    return;
  }
  LVar1 = *(LONG *)(param_1 + 0x2c);
  LVar2 = *(LONG *)(param_1 + 0x28);
  rect->left = 0;
  rect->top = 0;
  rect->right = LVar2;
  rect->bottom = LVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7aa0  FUN_004a7aa0   (129 bytes)   [unnamed]
bool __cdecl FUN_004a7aa0(int param_1,HWND hWnd,int x,int y,int cx,int cy,uint flags)

{
  BOOL ok;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((flags & 2) == 0) {
      *(int *)(param_1 + 0x20) = x;
      *(int *)(param_1 + 0x24) = y;
    }
    if ((flags & 1) == 0) {
      *(int *)(param_1 + 0x28) = cx;
      *(int *)(param_1 + 0x2c) = cy;
    }
    if ((flags & 0x40) == 0) {
      if ((flags & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    ok = SetWindowPos(*(HWND *)(param_1 + 0xc),hWnd,x,y,cx,cy,flags);
    bVar2 = ok != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7bfc  FUN_004a7bfc   (286 bytes)   [unnamed]
undefined4 __cdecl FUN_004a7bfc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int i;
  HCURSOR hCursor;
  tagRECT *pRect;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT rect;
  char local_d;
  tagPOINT pt;
  
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
      pt.x = 0;
      pt.y = 0;
      GetCursorPos(&pt);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&pt);
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004a7a6c(param_1,&rect);
      pRect = &rect;
      pLVar4 = local_30;
      for (i = 4; i != 0; i = i + -1) {
        *pLVar4 = pRect->left;
        pRect = (tagRECT *)&pRect->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = pt.x;
      if ((((pt.x < local_30[0]) || (local_30[2] <= pt.x)) || (pt.y < local_30[1]))
         || (param_3 = pt.y, local_30[3] <= pt.y)) {
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
int __cdecl FUN_004a7f40(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 4;
  FUN_004a8260(param_1,bar,&scrollInfo);
  return scrollInfo.nPos;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7f80  FUN_004a7f80   (90 bytes)   [unnamed]
int __cdecl FUN_004a7f80(int param_1,int bar,int param_3,byte redraw)

{
  int iVar1;
  SCROLLINFO lpsi;
  
  iVar1 = FUN_004a7f40(param_1,bar);
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 4;
  lpsi.nPos = param_3;
  FUN_004a8244(param_1,bar,&lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a7fdc  FUN_004a7fdc   (77 bytes)   [unnamed]
void __cdecl FUN_004a7fdc(int param_1,int bar,int *param_3,int *param_4)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 1;
  FUN_004a8260(param_1,bar,&scrollInfo);
  *param_3 = scrollInfo.nMin;
  *param_4 = scrollInfo.nMax;
  return;
}

} // namespace tea
