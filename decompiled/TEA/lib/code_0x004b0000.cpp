// TEA.exe — runtime / library code "code_0x004b0000"
// 33 functions, 0x004b0208..0x004b3b84. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b0208  FUN_004b0208   (28 bytes)   [unnamed]
bool __cdecl FUN_004b0208(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return cVar1 == '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0224  FUN_004b0224   (92 bytes)   [unnamed]
void __cdecl FUN_004b0224(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_004a5098(*param_1,param_2,(uint *)0x0,param_4);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffffd;
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    operator_delete_array();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0xffff;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffff7ff;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0550  EvSetfont_4b0550   (34 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl EvSetfont_4b0550(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x20) != 0) {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0574  EvPaint_4b0574   (16 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl EvPaint_4b0574(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0584  EvMsg_19_4b0584   (93 bytes)   [owl:response-table message-handler]
//   message 0x0019
uint __cdecl EvMsg_19_4b0584(int *param_1,HDC hdc,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') &&
     (iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x19))(), iVar1 != 0)) {
    return iVar1;
  }
  uVar2 = OWL::TWindow::EvMsg_19(*param_1,hdc,param_3,param_4);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b05e4  EvMsg_400_4b05e4   (18 bytes)   [owl:response-table message-handler]
//   message 0x0400
void __cdecl EvMsg_400_4b05e4(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b05f8  EvMsg_401_4b05f8   (26 bytes)   [owl:response-table message-handler]
//   message 0x0401
bool __cdecl EvMsg_401_4b05f8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a5774(*param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0614  EvMsg_402_4b0614   (16 bytes)   [owl:response-table message-handler]
//   message 0x0402
void __cdecl EvMsg_402_4b0614(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b070c  FUN_004b070c   (188 bytes)   [unnamed]
undefined1 __stdcall FUN_004b070c(HWND hWnd,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT lResult;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0050b5c4) {
    uVar2 = 0;
  }
  else {
    lResult = FUN_004a614c(hWnd,0);
    if (lResult == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lResult + 8);
    }
    piVar4 = FUN_004dd744(lResult,iVar5,(int *)&DAT_0040299c,(int *)&DAT_00402e14,0);
    if ((((DAT_0050cd7c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0050cd7c + 0xc) = hWnd;
      FUN_004a70e4(*DAT_0050cd7c);
      piVar4 = DAT_0050cd7c;
      DAT_0050cd7c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00487548();
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(piVar4[3] + 4))();
      }
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b07c8  FUN_004b07c8   (46 bytes)   [unnamed]
void __cdecl FUN_004b07c8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7590(*param_1,(undefined*)FUN_004b0208);
  if (iVar1 != 0) {
    FUN_004a857c(*param_1,0x7fec);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b09e0  FUN_004b09e0   (306 bytes)   [unnamed]
char __cdecl FUN_004b09e0(int *param_1)

{
  int iVar1;
  bool bVar2;
  HGLOBAL hResData;
  ushort *puVar3;
  LRESULT lResult;
  HRSRC hResInfo;
  
  bVar2 = true;
  if (param_1[4] != 0) {
    hResInfo = (HRSRC)0x1;
    if (((*(byte *)(*param_1 + 0x76) & 0xf) == 0) &&
       (hResInfo = FindResourceExA(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)0xf0,
                                   (LPCSTR)param_1[4],*(WORD *)(*(int *)(*param_1 + 0x6c) + 0x2f)),
       hResInfo == (HRSRC)0x0)) {
      hResInfo = FindResourceA(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_1[4],
                               (LPCSTR)0xf0);
    }
    if (hResInfo != (HRSRC)0x0) {
      hResData = (HGLOBAL)0x1;
      if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
        hResData = LoadResource(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),hResInfo);
      }
      if (hResData != (HGLOBAL)0x0) {
        puVar3 = (ushort *)param_1[4];
        if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
          puVar3 = LockResource(hResData);
        }
        if (puVar3 != (ushort *)0x0) {
          for (; (bVar2 && ((char)*puVar3 != '\0')); puVar3 = (ushort *)((int)(puVar3 + 4) + iVar1))
          {
            iVar1 = *(int *)(puVar3 + 2);
            lResult = SendDlgItemMessageA(*(HWND *)(*param_1 + 0xc),(uint)*puVar3,(uint)puVar3[1],0,
                                        (LPARAM)(puVar3 + 4));
            if (lResult == -1) {
              bVar2 = false;
            }
          }
        }
      }
    }
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0c44  FUN_004b0c44   (38 bytes)   [unnamed]
void __cdecl FUN_004b0c44(int *param_1,uint *param_2)

{
  if (((short)((uint)param_2 >> 0x10) != 0) && ((short)param_2 != -1)) {
    FUN_004a7780(*param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0c6c  Cmd1_4b0c6c   (81 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1)
void __cdecl Cmd1_4b0c6c(int *param_1)

{
  (**(code **)(param_1[3] + 0x20))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_004aae70(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0cc0  Cmd2_4b0cc0   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(2)
void __cdecl Cmd2_4b0cc0(int *param_1)

{
  EvClose_4b0cd0(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0cd0  EvClose_4b0cd0   (81 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl EvClose_4b0cd0(int *param_1)

{
  (**(code **)(param_1[3] + 0x24))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_004aae70(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0f1c  FUN_004b0f1c   (103 bytes)   [unnamed]
void __cdecl FUN_004b0f1c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  HGLOBAL hGlobal;
  LPVOID lockedMem;
  undefined4 *puVar5;
  
  if (param_2[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = 0;
  }
  iVar1 = param_2[8];
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  hGlobal = GlobalAlloc(2,iVar2 + iVar1 * 4 + param_2[5] + 0x28);
  *param_1 = (int)hGlobal;
  if (*param_1 == 0) {
    FUN_0048f674();
  }
  lockedMem = GlobalLock((HGLOBAL)*param_1);
  *(LPVOID *)((int)param_1 + 9) = lockedMem;
  puVar5 = *(undefined4 **)((int)param_1 + 9);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004b0f84(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0f84  FUN_004b0f84   (182 bytes)   [unnamed]
void __cdecl FUN_004b0f84(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 9) == 0) {
    if (*(char *)((int)param_1 + 0x1f) == '\0') {
      pvVar1 = GlobalLock((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
    else {
      pvVar1 = LockResource((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
  }
  if (**(int **)((int)param_1 + 9) != 0x28) {
    GlobalUnlock((HGLOBAL)*param_1);
    FUN_00493800(0x7fdc,0);
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x10) == 3) {
    *(int *)((int)param_1 + 0xd) = *(int *)((int)param_1 + 9) + 0x28;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x34;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xd) = 0;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x28;
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x20) == 0) {
    iVar2 = FUN_0048c0a0(*(short *)(*(int *)((int)param_1 + 9) + 0xe));
  }
  else {
    iVar2 = *(int *)(*(int *)((int)param_1 + 9) + 0x20);
  }
  *(int *)((int)param_1 + 0x19) = iVar2;
  *(int *)((int)param_1 + 0x15) = *(int *)((int)param_1 + 0x19) * 4 + *(int *)((int)param_1 + 0x11);
  if (*(int *)((int)param_1 + 0x19) == 0) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x1d) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b103c  FUN_004b103c   (90 bytes)   [unnamed]
void __cdecl FUN_004b103c(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *lockedMem;
  SIZE_T dwBytes;
  
  dwBytes = (*(int *)(*(int *)((int)param_1 + 9) + 0x14) + *(int *)((int)param_1 + 0x15)) -
            *(int *)((int)param_1 + 9);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    FUN_0048f674();
  }
  lockedMem = GlobalLock(hMem);
  memcpy(lockedMem,*(undefined4 **)((int)param_1 + 9),dwBytes);
  *param_1 = hMem;
  *(undefined4 **)((int)param_1 + 9) = lockedMem;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  FUN_004b0f84(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b10dc  FUN_004b10dc   (83 bytes)   [unnamed]
void __cdecl FUN_004b10dc(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x19))) && (*(short *)(param_1 + 0x1d) == 0))
  {
    uVar1 = FUN_0048c160(param_3);
    iVar2 = FUN_0048c174(param_3);
    uVar3 = FUN_0048c18c(param_3);
    local_8 = CONCAT31(CONCAT21((short)uVar1,(char)iVar2),(char)uVar3) & 0xffffff;
    *(uint *)(*(int *)(param_1 + 0x11) + param_2 * 4) = local_8;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1130  FUN_004b1130   (172 bytes)   [unnamed]
int __cdecl FUN_004b1130(int param_1,uint *param_2,uint *param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x19) <= iVar5) {
      return local_8;
    }
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x11) + iVar5 * 4);
    if (*param_2 == (uint)CONCAT12(*puVar1,CONCAT11(puVar1[1],puVar1[2]))) {
      uVar2 = FUN_0048c160(param_3);
      iVar3 = FUN_0048c174(param_3);
      uVar4 = FUN_0048c18c(param_3);
      local_10 = CONCAT31(CONCAT21((short)uVar2,(char)iVar3),(char)uVar4) & 0xffffff;
      *(uint *)(*(int *)(param_1 + 0x11) + iVar5 * 4) = local_10;
      local_8 = local_8 + 1;
      if (param_4 == '\0') {
        return local_8;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004b11dc  FUN_004b11dc   (171 bytes)   [unnamed]
void __cdecl FUN_004b11dc(int param_1,uint param_2,uint *param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b178,&DAT_0051b1e0,'\0');
  }
  if ((param_2 & 2) != 0) {
    FUN_004b1130(param_1,&DAT_0051b174,&DAT_0051b1ec,'\0');
  }
  if ((param_2 & 4) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b17c,&DAT_0051b1e4,'\0');
  }
  if ((param_2 & 8) != 0) {
    FUN_004b1130(param_1,&DAT_0051b198,&DAT_0051b1f4,'\0');
  }
  if ((param_2 & 0x10) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b190,(uint *)&DAT_0051b1bc,'\0');
  }
  if (param_3 != (uint *)0x0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b188,param_3,'\0');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1504  FUN_004b1504   (147 bytes)   [unnamed]
int * __cdecl FUN_004b1504(int *param_1,HMODULE hModule,LPCSTR name)

{
  bool bVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d038);
  FUN_004934c8(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDib::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  bVar1 = FUN_004b1598(param_1,hModule,name);
  if (!bVar1) {
    FUN_00493800(0x7fe0,0);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1598  FUN_004b1598   (76 bytes)   [unnamed]
bool __cdecl FUN_004b1598(int *param_1,HMODULE hModule,LPCSTR name)

{
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hGlobal;
  
  hResInfo = FindResourceA(hModule,name,(LPCSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    hGlobal = (HGLOBAL)0x0;
  }
  else {
    hGlobal = LoadResource(hModule,hResInfo);
  }
  *param_1 = (int)hGlobal;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 0x1f) = 1;
    FUN_004b0f84(param_1);
    FUN_004b103c(param_1);
  }
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b165c  FUN_004b165c   (396 bytes)   [unnamed]
int * __cdecl FUN_004b165c(int *param_1,int param_2,int param_3,uint cEntries,undefined2 param_5)

{
  uint uVar1;
  UINT UVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *sehChainHead;
  undefined4 local_78;
  int unused;
  int unused2;
  undefined2 ehContext;
  ushort local_6a;
  undefined4 unused3;
  int unused4;
  undefined4 unused5;
  undefined4 unused6;
  uint unused7;
  undefined4 unused8;
  undefined4 sehPrevFrame;
  undefined2 ehContext2;
  int ehDtorCount;
  HDC hdc;
  int local_27;
  
  __InitExceptBlockLDTC(0x50d07c);
  ehContext2 = 8;
  FUN_004934c8(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDib::vftable;
  local_78 = 0x28;
  unused = param_2;
  unused2 = param_3;
  ehContext = 1;
  uVar1 = FUN_0048c0e0(cEntries);
  local_6a = (ushort)uVar1;
  unused3 = 0;
  uVar1 = (uVar1 & 0xffff) * param_2 + 0x1f & 0xffffffe0;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  unused4 = ((int)uVar1 >> 3) * param_3;
  unused5 = 0;
  unused6 = 0;
  unused7 = cEntries;
  if (8 < local_6a) {
    unused7 = 0;
  }
  unused8 = 0;
  FUN_004b0f1c(param_1,&local_78);
  *(undefined2 *)((int)param_1 + 0x1d) = param_5;
  if (*(short *)((int)param_1 + 0x1d) == 1) {
    uVar1 = 0;
    if (cEntries != 0) {
      do {
        *(short *)(*(int *)((int)param_1 + 0x11) + uVar1 * 2) = (short)uVar1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < cEntries);
    }
  }
  else if (cEntries != 0) {
    ehContext2 = 0x14;
    FUN_004a8760((int *)&hdc);
    ehDtorCount = ehDtorCount + 3;
    ehContext2 = 0x20;
    uVar1 = (**(code **)(local_27 + 0xc))();
    if ((uVar1 & 0x100) != 0) {
      UVar2 = GetSystemPaletteEntries(hdc,0,cEntries,*(LPPALETTEENTRY *)((int)param_1 + 0x11));
      uVar1 = 0;
      if (UVar2 != 0) {
        do {
          pbVar4 = (byte *)(*(int *)((int)param_1 + 0x11) + uVar1 * 4);
          pbVar3 = (byte *)(*(int *)((int)param_1 + 0x11) + uVar1 * 4 + 2);
          *pbVar3 = *pbVar3 ^ *pbVar4;
          *pbVar4 = *pbVar4 ^ *pbVar3;
          *pbVar3 = *pbVar3 ^ *pbVar4;
          *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 3 + uVar1 * 4) = 0;
          uVar1 = uVar1 + 1;
        } while (uVar1 < UVar2);
      }
    }
    ehDtorCount = ehDtorCount + -3;
    OWL::TWindowDC::_dtor((int *)&hdc,0);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1bc8  FUN_004b1bc8   (62 bytes)   [unnamed]
void __cdecl FUN_004b1bc8(int *param_1,int *param_2,int param_3)

{
  LRESULT lResult;
  undefined4 uVar2;
  
  lResult = SendDlgItemMessageA(*(HWND *)(*param_1 + 0xc),0x470,0x147,0,0);
  if (-1 < lResult) {
    uVar2 = FUN_004b5294(*(int *)(*(int *)(*param_2 + 0x30) + lResult * 4));
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1c06  FUN_004b1c06   (130 bytes)   [unnamed]
undefined4 __cdecl FUN_004b1c06(uint *param_1,uint *param_2)

{
  char *len;
  char *len2;
  uint uVar3;
  uint uVar4;
  
  for (; (((char)*param_2 != '*' || (*(char *)((int)param_2 + 1) != '\0')) &&
         (((char)*param_2 != '\0' || ((char)*param_1 != '\0'))));
      param_1 = (uint *)((int)param_1 + 1)) {
    if ((char)*param_2 == '*') {
      param_2 = (uint *)((int)param_2 + 1);
      len = strlen(param_1);
      len2 = strlen(param_2);
      if (len2 < len) {
        param_1 = (uint *)((int)param_1 + ((int)len - (int)len2));
      }
    }
    if (((char)*param_2 != '?') || ((char)*param_1 == '\0')) {
      uVar3 = toupper((int)(char)*param_1);
      uVar4 = toupper((int)(char)*param_2);
      if (uVar3 != uVar4) {
        return 0;
      }
    }
    param_2 = (uint *)((int)param_2 + 1);
  }
  return CONCAT31((char)*param_2 >> 7,1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1c88  FUN_004b1c88   (92 bytes)   [unnamed]
uint * __cdecl FUN_004b1c88(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d0f8);
  FUN_004c279c(param_1,param_2,param_3,0,param_4,param_5,0,param_6,0);
  param_1[10] = param_8;
  param_1[0xc] = param_7;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1d08  FUN_004b1d08   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_004b1d08(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d10c);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b232c  FUN_004b232c   (93 bytes)   [unnamed]
int __cdecl FUN_004b232c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (((param_2 == 0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(), iVar2 != 0)) &&
         ((param_3 == 0 || (iVar2 = (**(code **)(*piVar1 + 0x10))(), iVar2 != 0)))) {
        local_8 = local_8 + 1;
      }
    }
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b2980  FUN_004b2980   (711 bytes)   [unnamed]
int * __cdecl FUN_004b2980(int param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d480);
  iVar2 = *(int *)((int)param_2 + 0x22);
  if (iVar2 == 0) {
    *sehChainHead = sehPrevFrame;
    return (int *)0x0;
  }
  uVar3 = param_4 ^ *(uint *)(iVar2 + 0x14);
  if ((uVar3 & 0x80000000) == 0) {
    if (param_3 == 0) {
      iVar2 = FUN_004b5254(iVar2);
      if (iVar2 == 0) {
        *sehChainHead = sehPrevFrame;
        return (int *)0x0;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
      if (iVar2 == 0) {
        if (param_2 != (int *)0x0) {
          (**(code **)*param_2)();
        }
        *sehChainHead = sehPrevFrame;
        return (int *)0x0;
      }
    }
    (**(code **)(*param_2 + 0x20))();
    cVar1 = (**(code **)(*param_2 + 0x58))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      (**(code **)(*param_2 + 0x20))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *sehChainHead = sehPrevFrame;
      return (int *)0x0;
    }
    if (((uVar3 & 0x8000000) != 0) && (cVar1 = (**(code **)(*param_2 + 0xc))(), cVar1 == '\0')) {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      (**(code **)(*param_2 + 0x20))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *sehChainHead = sehPrevFrame;
      return (int *)0x0;
    }
  }
  else {
    (**(code **)(*param_2 + 0x20))();
    cVar1 = (**(code **)(*param_2 + 0x58))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *sehChainHead = sehPrevFrame;
      return (int *)0x0;
    }
  }
  if (((uVar3 & 0x20000000) == 0) &&
     (iVar2 = FUN_004b2d18(param_1,(int)param_2,(int *)0x0), iVar2 == 0)) {
    if ((uVar3 & 0x40000000) != 0) {
      cVar1 = (**(code **)(*param_2 + 0x2c))();
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x10))();
      }
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
    }
    param_2 = (int *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x50))();
    *sehChainHead = sehPrevFrame;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b2d18  FUN_004b2d18   (40 bytes)   [unnamed]
int __cdecl FUN_004b2d18(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(param_2 + 0x22);
  }
  iVar1 = (**(code **)(*param_3 + 8))();
  iVar1 = FUN_004b5890(param_2,iVar1);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b301c  FUN_004b301c   (2831 bytes)   [unnamed]
undefined4 __cdecl FUN_004b301c(uint *param_1,uint *param_2)

{
  bool bVar1;
  int prevRefs;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 uVar7;
  uint *local_240;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  uint *local_184;
  undefined1 str3 [8];
  uint *local_174;
  undefined1 str [8];
  int str4;
  int str5;
  int str6;
  int str7;
  int str8;
  int str9;
  
  __InitExceptBlockLDTC(0x50d688);
  FUN_004bc960((int)str,param_1,'\0');
  bVar1 = FUN_004bcc54((int)str,8);
  if (!bVar1) {
    uVar7 = 0;
    if (str9 != 0) {
      if (*(int *)(str9 + -0xc) != -1) {
        strRep = (int *)(str9 + -0xc);
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
        if (prevRefs != 0) goto LAB_004b3109;
      }
      operator_delete();
      str9 = 0;
    }
LAB_004b3109:
    if (str8 != 0) {
      if (*(int *)(str8 + -0xc) != -1) {
        strRep = (int *)(str8 + -0xc);
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
        if (prevRefs != 0) goto LAB_004b31b0;
      }
      operator_delete();
      str8 = 0;
    }
LAB_004b31b0:
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
        if (prevRefs != 0) goto LAB_004b3257;
      }
      operator_delete();
      str7 = 0;
    }
LAB_004b3257:
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
        if (prevRefs != 0) goto LAB_004b32fe;
      }
      operator_delete();
      str6 = 0;
    }
LAB_004b32fe:
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
        if (prevRefs != 0) goto LAB_004b33a5;
      }
      operator_delete();
      str5 = 0;
    }
LAB_004b33a5:
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
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
        if (prevRefs != 0) goto LAB_004b3449;
      }
      operator_delete();
    }
LAB_004b3449:
    *sehChainHead = sehPrevFrame;
    return uVar7;
  }
  puVar3 = (uint *)FUN_004bcae0((int)str,8);
  std::string::string_from_cstr((int)str3,puVar3);
  puVar3 = (uint *)FUN_004bcae0((int)str,0x10);
  std::string::string_from_cstr((int)str2,puVar3);
  puVar3 = local_174;
  bVar1 = FUN_004bcc54((int)str,0x10);
  local_240 = local_184;
  if (!bVar1) {
    local_240 = (uint *)&DAT_0050d0ba;
  }
  if ((char)*local_240 == '.') {
    local_240 = (uint *)((int)local_240 + 1);
  }
  puVar4 = (uint *)FUN_00496d48(param_2);
  puVar5 = thunk_strrchr(puVar4,'.');
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)&DAT_0050d0ba;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar7 = FUN_004b1c06(puVar3,puVar4);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_004b1c06(local_240,puVar5), (char)uVar7 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  operator_delete_array();
  if (local_184 != (uint *)0x0) {
    if (local_184[-3] != 0xffffffff) {
      puVar3 = local_184 + -3;
      if (puVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (puVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        prevRefs = *puVar3 + 1;
      }
      if (prevRefs != 0) goto LAB_004b366d;
    }
    operator_delete();
    local_184 = (uint *)0x0;
  }
LAB_004b366d:
  if (local_174 != (uint *)0x0) {
    if (local_174[-3] != 0xffffffff) {
      puVar3 = local_174 + -3;
      if (puVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (puVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        prevRefs = *puVar3 + 1;
      }
      if (prevRefs != 0) goto LAB_004b3729;
    }
    operator_delete();
    local_174 = (uint *)0x0;
  }
LAB_004b3729:
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      strRep = (int *)(str9 + -0xc);
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
      if (prevRefs != 0) goto LAB_004b37d6;
    }
    operator_delete();
    str9 = 0;
  }
LAB_004b37d6:
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      strRep = (int *)(str8 + -0xc);
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
      if (prevRefs != 0) goto LAB_004b387d;
    }
    operator_delete();
    str8 = 0;
  }
LAB_004b387d:
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
      if (prevRefs != 0) goto LAB_004b3924;
    }
    operator_delete();
    str7 = 0;
  }
LAB_004b3924:
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
      if (prevRefs != 0) goto LAB_004b39cb;
    }
    operator_delete();
    str6 = 0;
  }
LAB_004b39cb:
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
      if (prevRefs != 0) goto LAB_004b3a72;
    }
    operator_delete();
    str5 = 0;
  }
LAB_004b3a72:
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
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
      if (prevRefs != 0) goto LAB_004b3b16;
    }
    operator_delete();
  }
LAB_004b3b16:
  *sehChainHead = sehPrevFrame;
  return uVar7;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b3b84  FUN_004b3b84   (76 bytes)   [unnamed]
int __cdecl FUN_004b3b84(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    while( true ) {
      iVar2 = FUN_004b5d60((undefined4 *)(param_1 + 0x14),iVar2);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_2 != (char *)0x0) break;
      if (*(int *)(iVar2 + 0x2e) == 0) {
        return iVar2;
      }
    }
  } while ((*(int *)(iVar2 + 0x2e) == 0) ||
          (iVar1 = FUN_004dc978(*(char **)(iVar2 + 0x2e),param_2), iVar1 != 0));
  return iVar2;
}

} // namespace tea
