// TSMerge.exe — runtime / library code "code_0x00434000"
// 37 functions, 0x00434265..0x004374fc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00434265  Child4407951_Notify4407972_434265   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4407951, code 4407972)
void __cdecl Child4407951_Notify4407972_434265(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf17((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043427a  FUN_0043427a   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043427a(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf16((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004342b9  FUN_004342b9   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_004342b9(int param_1,LPMSG lParam)

{
  OWL::TDecoratedFrame::TFrameWindow_vf10((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1),lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004342f8  Child4469472_Notify4464720_4342f8   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4469472, code 4464720)
void __cdecl Child4469472_Notify4464720_4342f8(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf5((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043430d  FUN_0043430d   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043430d(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf4((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004346e8  FUN_004346e8   (28 bytes)   [unnamed]
bool __cdecl FUN_004346e8(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return cVar1 == '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x00434704  FUN_00434704   (92 bytes)   [unnamed]
void __cdecl FUN_00434704(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_0042ac60(*param_1,param_2,(uint *)0x0,param_4);
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
// 0x00434a30  EvSetfont_434a30   (34 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl EvSetfont_434a30(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x20) != 0) {
    FUN_0042b294(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434a54  EvPaint_434a54   (16 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl EvPaint_434a54(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434a64  EvMsg_19_434a64   (93 bytes)   [owl:response-table message-handler]
//   message 0x0019
void __cdecl EvMsg_19_434a64(int *param_1,HDC hdc,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') &&
     (iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x19))(), iVar1 != 0)) {
    return;
  }
  OWL::TWindow::EvMsg_19(*param_1,hdc,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ac4  EvMsg_400_434ac4   (18 bytes)   [owl:response-table message-handler]
//   message 0x0400
void __cdecl EvMsg_400_434ac4(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ad8  EvMsg_401_434ad8   (26 bytes)   [owl:response-table message-handler]
//   message 0x0401
bool __cdecl EvMsg_401_434ad8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042b294(*param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434af4  EvMsg_402_434af4   (16 bytes)   [owl:response-table message-handler]
//   message 0x0402
void __cdecl EvMsg_402_434af4(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434bec  FUN_00434bec   (188 bytes)   [unnamed]
undefined1 __stdcall FUN_00434bec(HWND hWnd,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT lResult;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0046ad80) {
    uVar2 = 0;
  }
  else {
    lResult = FUN_0042bc6c(hWnd,0);
    if (lResult == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lResult + 8);
    }
    piVar4 = FUN_004567e4(lResult,iVar5,(int *)&DAT_0040467c,(int *)&DAT_00403714,0);
    if ((((DAT_0046c060 != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0046c060 + 0xc) = hWnd;
      FUN_0042cbe0(*DAT_0046c060);
      piVar4 = DAT_0046c060;
      DAT_0046c060 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00410960();
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
// 0x00434ca8  FUN_00434ca8   (46 bytes)   [unnamed]
void __cdecl FUN_00434ca8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042d08c(*param_1,(undefined*)FUN_004346e8);
  if (iVar1 != 0) {
    FUN_0042e05c(*param_1,0x7fec);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ec0  FUN_00434ec0   (306 bytes)   [unnamed]
char __cdecl FUN_00434ec0(int *param_1)

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
// 0x00435124  FUN_00435124   (38 bytes)   [unnamed]
void __cdecl FUN_00435124(int *param_1,uint *param_2)

{
  if (((short)((uint)param_2 >> 0x10) != 0) && ((short)param_2 != -1)) {
    FUN_0042d27c(*param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043514c  Cmd1_43514c   (81 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1)
void __cdecl Cmd1_43514c(int *param_1)

{
  (**(code **)(param_1[3] + 0x20))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_00430928(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004351a0  Cmd2_4351a0   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(2)
void __cdecl Cmd2_4351a0(int *param_1)

{
  EvClose_4351b0(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004351b0  EvClose_4351b0   (81 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl EvClose_4351b0(int *param_1)

{
  (**(code **)(param_1[3] + 0x24))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_00430928(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004353fc  FUN_004353fc   (103 bytes)   [unnamed]
void __cdecl FUN_004353fc(int *param_1,undefined4 *param_2)

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
    FUN_00418860();
  }
  lockedMem = GlobalLock((HGLOBAL)*param_1);
  *(LPVOID *)((int)param_1 + 9) = lockedMem;
  puVar5 = *(undefined4 **)((int)param_1 + 9);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00435464(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435464  FUN_00435464   (182 bytes)   [unnamed]
void __cdecl FUN_00435464(undefined4 *param_1)

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
    FUN_0041cad0(0x7fdc,0);
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
    iVar2 = FUN_004152b4(*(short *)(*(int *)((int)param_1 + 9) + 0xe));
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
// 0x0043551c  FUN_0043551c   (90 bytes)   [unnamed]
void __cdecl FUN_0043551c(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *lockedMem;
  SIZE_T dwBytes;
  
  dwBytes = (*(int *)(*(int *)((int)param_1 + 9) + 0x14) + *(int *)((int)param_1 + 0x15)) -
            *(int *)((int)param_1 + 9);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    FUN_00418860();
  }
  lockedMem = GlobalLock(hMem);
  memcpy(lockedMem,*(undefined4 **)((int)param_1 + 9),dwBytes);
  *param_1 = hMem;
  *(undefined4 **)((int)param_1 + 9) = lockedMem;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  FUN_00435464(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004355bc  FUN_004355bc   (83 bytes)   [unnamed]
void __cdecl FUN_004355bc(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x19))) && (*(short *)(param_1 + 0x1d) == 0))
  {
    uVar1 = FUN_00415374(param_3);
    iVar2 = FUN_00415388(param_3);
    uVar3 = FUN_004153a0(param_3);
    local_8 = CONCAT31(CONCAT21((short)uVar1,(char)iVar2),(char)uVar3) & 0xffffff;
    *(uint *)(*(int *)(param_1 + 0x11) + param_2 * 4) = local_8;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435610  FUN_00435610   (172 bytes)   [unnamed]
int __cdecl FUN_00435610(int param_1,uint *param_2,uint *param_3,char param_4)

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
      uVar2 = FUN_00415374(param_3);
      iVar3 = FUN_00415388(param_3);
      uVar4 = FUN_004153a0(param_3);
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
// 0x004356bc  FUN_004356bc   (171 bytes)   [unnamed]
void __cdecl FUN_004356bc(int param_1,uint param_2,uint *param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b88,&DAT_00476bf0,'\0');
  }
  if ((param_2 & 2) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b84,(uint *)&DAT_00476bfc,'\0');
  }
  if ((param_2 & 4) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b8c,&DAT_00476bf4,'\0');
  }
  if ((param_2 & 8) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476ba8,&DAT_00476c04,'\0');
  }
  if ((param_2 & 0x10) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476ba0,(uint *)&DAT_00476bcc,'\0');
  }
  if (param_3 != (uint *)0x0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b98,param_3,'\0');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004359e4  FUN_004359e4   (147 bytes)   [unnamed]
int * __cdecl FUN_004359e4(int *param_1,HMODULE hModule,LPCSTR name)

{
  bool bVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c31c);
  FUN_0041c798(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDib::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  bVar1 = FUN_00435a78(param_1,hModule,name);
  if (!bVar1) {
    FUN_0041cad0(0x7fe0,0);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435a78  FUN_00435a78   (76 bytes)   [unnamed]
bool __cdecl FUN_00435a78(int *param_1,HMODULE hModule,LPCSTR name)

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
    FUN_00435464(param_1);
    FUN_0043551c(param_1);
  }
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435b3c  FUN_00435b3c   (396 bytes)   [unnamed]
int * __cdecl FUN_00435b3c(int *param_1,int param_2,int param_3,uint cEntries,undefined2 param_5)

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
  
  __InitExceptBlockLDTC(0x46c360);
  ehContext2 = 8;
  FUN_0041c798(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDib::vftable;
  local_78 = 0x28;
  unused = param_2;
  unused2 = param_3;
  ehContext = 1;
  uVar1 = FUN_004152f4(cEntries);
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
  FUN_004353fc(param_1,&local_78);
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
    FUN_0042e298((int *)&hdc);
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
// 0x004360a8  FUN_004360a8   (62 bytes)   [unnamed]
void __cdecl FUN_004360a8(int *param_1,int *param_2,int param_3)

{
  LRESULT lResult;
  undefined4 uVar2;
  
  lResult = SendDlgItemMessageA(*(HWND *)(*param_1 + 0xc),0x470,0x147,0,0);
  if (-1 < lResult) {
    uVar2 = FUN_00439774(*(int *)(*(int *)(*param_2 + 0x30) + lResult * 4));
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004360e6  FUN_004360e6   (130 bytes)   [unnamed]
undefined4 __cdecl FUN_004360e6(uint *param_1,uint *param_2)

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
// 0x00436168  FUN_00436168   (92 bytes)   [unnamed]
uint * __cdecl FUN_00436168(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c3dc);
  FUN_004459e8(param_1,param_2,param_3,0,param_4,param_5,0,param_6,0);
  param_1[10] = param_8;
  param_1[0xc] = param_7;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004361e8  FUN_004361e8   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_004361e8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c3f0);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043680c  FUN_0043680c   (93 bytes)   [unnamed]
int __cdecl FUN_0043680c(int param_1,int param_2,int param_3)

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
// 0x00436e60  FUN_00436e60   (711 bytes)   [unnamed]
int * __cdecl FUN_00436e60(int param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c764);
  iVar2 = *(int *)((int)param_2 + 0x22);
  if (iVar2 == 0) {
    *sehChainHead = sehPrevFrame;
    return (int *)0x0;
  }
  uVar3 = param_4 ^ *(uint *)(iVar2 + 0x14);
  if ((uVar3 & 0x80000000) == 0) {
    if (param_3 == 0) {
      iVar2 = FUN_00439734(iVar2);
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
     (iVar2 = FUN_004371f8(param_1,(int)param_2,(int *)0x0), iVar2 == 0)) {
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
// 0x004371f8  FUN_004371f8   (40 bytes)   [unnamed]
int __cdecl FUN_004371f8(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(param_2 + 0x22);
  }
  iVar1 = (**(code **)(*param_3 + 8))();
  iVar1 = FUN_00439d70(param_2,iVar1);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004374fc  FUN_004374fc   (2831 bytes)   [unnamed]
undefined4 __cdecl FUN_004374fc(uint *param_1,uint *param_2)

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
  
  __InitExceptBlockLDTC(0x46c96c);
  FUN_004409f4((int)str,param_1,'\0');
  bVar1 = FUN_00440ce8((int)str,8);
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
        if (prevRefs != 0) goto LAB_004375e9;
      }
      operator_delete();
      str9 = 0;
    }
LAB_004375e9:
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
        if (prevRefs != 0) goto LAB_00437690;
      }
      operator_delete();
      str8 = 0;
    }
LAB_00437690:
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
        if (prevRefs != 0) goto LAB_00437737;
      }
      operator_delete();
      str7 = 0;
    }
LAB_00437737:
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
        if (prevRefs != 0) goto LAB_004377de;
      }
      operator_delete();
      str6 = 0;
    }
LAB_004377de:
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
        if (prevRefs != 0) goto LAB_00437885;
      }
      operator_delete();
      str5 = 0;
    }
LAB_00437885:
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
        if (prevRefs != 0) goto LAB_00437929;
      }
      operator_delete();
    }
LAB_00437929:
    *sehChainHead = sehPrevFrame;
    return uVar7;
  }
  puVar3 = (uint *)FUN_00440b74((int)str,8);
  std::string::string_from_cstr((int)str3,puVar3);
  puVar3 = (uint *)FUN_00440b74((int)str,0x10);
  std::string::string_from_cstr((int)str2,puVar3);
  puVar3 = local_174;
  bVar1 = FUN_00440ce8((int)str,0x10);
  local_240 = local_184;
  if (!bVar1) {
    local_240 = (uint *)&DAT_0046c39e;
  }
  if ((char)*local_240 == '.') {
    local_240 = (uint *)((int)local_240 + 1);
  }
  puVar4 = (uint *)FUN_0041fd2c(param_2);
  puVar5 = thunk_strrchr(puVar4,'.');
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)&DAT_0046c39e;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar7 = FUN_004360e6(puVar3,puVar4);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_004360e6(local_240,puVar5), (char)uVar7 == '\0')) {
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
      if (prevRefs != 0) goto LAB_00437b4d;
    }
    operator_delete();
    local_184 = (uint *)0x0;
  }
LAB_00437b4d:
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
      if (prevRefs != 0) goto LAB_00437c09;
    }
    operator_delete();
    local_174 = (uint *)0x0;
  }
LAB_00437c09:
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
      if (prevRefs != 0) goto LAB_00437cb6;
    }
    operator_delete();
    str9 = 0;
  }
LAB_00437cb6:
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
      if (prevRefs != 0) goto LAB_00437d5d;
    }
    operator_delete();
    str8 = 0;
  }
LAB_00437d5d:
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
      if (prevRefs != 0) goto LAB_00437e04;
    }
    operator_delete();
    str7 = 0;
  }
LAB_00437e04:
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
      if (prevRefs != 0) goto LAB_00437eab;
    }
    operator_delete();
    str6 = 0;
  }
LAB_00437eab:
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
      if (prevRefs != 0) goto LAB_00437f52;
    }
    operator_delete();
    str5 = 0;
  }
LAB_00437f52:
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
      if (prevRefs != 0) goto LAB_00437ff6;
    }
    operator_delete();
  }
LAB_00437ff6:
  *sehChainHead = sehPrevFrame;
  return uVar7;
}

} // namespace tea
