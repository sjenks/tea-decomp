// TSBuild.exe — runtime / library code "code_0x00468000"
// 124 functions, 0x00468029..0x0046bfb4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00468029  FUN_00468029   (162 bytes)   [unnamed]
undefined4 __cdecl FUN_00468029(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_0046fe00(&DAT_00488e85 /* "addr" */,"xxtype.cpp",0x515);
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (undefined4 *)(*param_4 + param_1[1]);
    if (param_2 != 0) {
      local_8 = (undefined4 *)*local_8;
    }
    iVar2 = FUN_00468104(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_00468029((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int *)&local_8), iVar2 != 0)) {
      *param_4 = (int)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int)local_8;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004680cc  FUN_004680cc   (55 bytes)   [unnamed]
char * __cdecl FUN_004680cc(int param_1)

{
  if (param_1 == 0) {
    return "<notype>";
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0046fe00("id->tpName","xxtype.cpp",0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00468104  FUN_00468104   (219 bytes)   [unnamed]
undefined4 __cdecl FUN_00468104(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_0046fe00(&DAT_00488c1b /* "tp1" */,"xxtype.cpp",0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_0046fe00(&DAT_00488c2a /* "tp2" */,"xxtype.cpp",0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_0046fe00("tp1->tpName","xxtype.cpp",0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_0046fe00("tp2->tpName","xxtype.cpp",0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004681e0  FUN_004681e0   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_004681e0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    while( true ) {
      if (param_2 == param_1) {
        return 1;
      }
      uVar2 = *(ushort *)(param_1 + 1);
      uVar3 = *(ushort *)(param_2 + 1);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((param_3 != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      param_3 = 1;
      param_1 = (int *)param_1[2];
      param_2 = (int *)param_2[2];
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((param_1[3] != param_2[3]) && ((param_3 != 0 || (param_1[3] != 0 || param_2[3] != 0)))) {
      return 0;
    }
    param_3 = 1;
    param_1 = (int *)param_1[2];
    param_2 = (int *)param_2[2];
  }
  iVar4 = FUN_00468104(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_00467c18((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468310  FUN_00468310   (272 bytes)   [unnamed]
undefined4 * __cdecl FUN_00468310(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    FUN_00471ae8((uint *)&DAT_0043a718,(undefined4 *)&DAT_0048d088,0,(undefined *)0x0,0,0,0,0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0xc) & 0x80) == 0) {
      param_2 = param_2 - *(int *)(param_2 + -4);
      if (*(int *)(param_2 + -4) != 0) {
        FUN_0046fe00("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",0x29e);
      }
      param_3 = *(int *)(param_2 + -0xc);
    }
    else {
      param_3 = 0;
    }
  }
  uVar2 = param_2 + param_3 >> 4 & 0xff;
  for (puVar3 = (undefined4 *)(&DAT_0048d090)[uVar2];
      (puVar3 != (undefined4 *)0x0 && ((param_3 != puVar3[1] || (param_2 != puVar3[2]))));
      puVar3 = (undefined4 *)puVar3[3]) {
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)operator_new();
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = (&DAT_0048d090)[uVar2];
      *puVar3 = &std::type_info::vftable;
      puVar3[1] = param_3;
      *puVar3 = &type_info_hash::vftable;
      puVar3[2] = param_2;
      puVar3[3] = uVar1;
      puVar3[4] = 0;
    }
    (&DAT_0048d090)[uVar2] = puVar3;
  }
  return puVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468420  FUN_00468420   (103 bytes)   [unnamed]
char * __cdecl FUN_00468420(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        pcVar2 = "<notype>";
      }
      else {
        pbVar1 = *(byte **)(*(int *)(param_1 + 8) + -0x2c);
        uVar4 = (uint)*pbVar1;
        uVar3 = operator_new_array();
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        memcpy(*(undefined4 **)(param_1 + 0x10),(undefined4 *)(pbVar1 + 1),uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar4) = 0;
        pcVar2 = *(char **)(param_1 + 0x10);
      }
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x10);
    }
  }
  else {
    pcVar2 = FUN_004680cc(*(int *)(param_1 + 4));
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468488  FUN_00468488   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_00468488(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_c;
  int *local_8;
  
  local_8 = param_3;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 - *(int *)(param_2 + -8));
    iVar3 = param_2 - *(int *)(param_2 + -4);
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_0046fe00("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",1099);
    }
    piVar1 = *(int **)(iVar3 + -0xc);
    if (param_4 == (int *)0x0) {
      return puVar4;
    }
    iVar3 = FUN_00468104(param_4,piVar1);
    if (iVar3 != 0) {
      return puVar4;
    }
    iVar3 = FUN_00468104(local_8,piVar1);
    if ((iVar3 == 0) &&
       (puVar2 = FUN_00467dc2((int)puVar4,piVar1,(undefined4 *)0x0,param_4,param_1,local_8,&local_c,
                              1), puVar2 != (undefined4 *)0x0)) {
      return puVar2;
    }
    puVar4 = FUN_00467dc2((int)puVar4,piVar1,(undefined4 *)0x0,param_4,0,(int *)0x0,&local_c,1);
    if ((puVar4 != (undefined4 *)0x0) && (local_c != 0)) {
      return puVar4;
    }
  }
  if (param_5 != 0) {
    FUN_00471ae8((uint *)&DAT_0043a6f8,(undefined4 *)&DAT_0048d490,0,(undefined *)0x0,0,0,0,0);
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468570  FUN_00468570   (122 bytes)   [unnamed]
int __cdecl FUN_00468570(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_00468029((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_00468029((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_0046fe00("!\"Can't adjust class address (no base class entry found)\"","xxtype.cpp",0x57e);
    param_1 = 0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004686b8  FUN_004686b8   (39 bytes)   [unnamed]
void __stdcall FUN_004686b8(void)

{
  if (DAT_00488f34 == (code *)0x0) {
    DAT_00488f34 = (undefined*)FUN_004686e0;
  }
  if ((*(undefined1 * *)&DAT_00488f38) == (undefined1 *)0x0) {
    (*(undefined1 * *)&DAT_00488f38) = &LAB_00468730;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004686e0  FUN_004686e0   (74 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004686e0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488f5c);
  if (DAT_00488f34 != FUN_004686e0) {
    ((code *)DAT_00488f34)();
  }
  FUN_0047039c();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468784  FUN_00468784   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_00468784(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x489040);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0048d49c == 2) {
    FUN_0047172d(4,1);
  }
  FUN_00469340();
  ((code *)DAT_00488f34)();
  FUN_0047039c();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004687f8  FUN_004687f8   (53 bytes)   [unnamed]
void __stdcall FUN_004687f8(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0048d49c == 2) {
    FUN_0047172d(5,1);
  }
  ((code *)DAT_00488f38)();
  FUN_0047039c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468830  FUN_00468830   (75 bytes)   [unnamed]
void __cdecl FUN_00468830(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0046887c(&local_c);
    param_1 = local_8;
  }
  uVar2 = 0x9c;
  puVar1 = (undefined4 *)FUN_00401140();
  memcpy(puVar1,param_1,uVar2);
  FUN_004686b8();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046887c  FUN_0046887c   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046887c(undefined4 *param_1)

{
  _DAT_00488f84 = FUN_00401140();
  _DAT_00488f84 = _DAT_00488f84 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00488f70;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004688a4  FUN_004688a4   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004688a4(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004688b0  FUN_004688b0   (237 bytes)   [unnamed]
LONG __cdecl FUN_004688b0(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_00468a7a(param_2,param_1);
      FUN_00468784();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00489054 != 0)) {
      FUN_0047009c((uint *)"Stack Overflow!");
    }
    if ((DAT_0048d4a4 != (code *)0x0) && (iVar2 = ((code *)DAT_0048d4a4)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0048d4a0 != (code *)0x0) && (iVar2 = ((code *)DAT_0048d4a0)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_0048d8f0 != (int *)0x0) && ((*DAT_0048d8f0 == 1 || (*DAT_0048d8f0 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_0047172d(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004689a0  FUN_004689a0   (26 bytes)   [unnamed]
void __cdecl FUN_004689a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_004688b0;
  FUN_00468a2c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004689bc  FUN_004689bc   (15 bytes)   [unnamed]
void __cdecl FUN_004689bc(undefined4 *param_1)

{
  FUN_00468a41(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004689cc  FUN_004689cc   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004689cc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_0048d4a4);
  (*(undefined4 *)&DAT_0048d4a4) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a18  FUN_00468a18   (17 bytes)   [unnamed]
void __stdcall FUN_00468a18(void)

{
  if ((*(undefined4 * *)&DAT_0048d8c4) != (undefined4 *)0x0) {
    FUN_004689a0((*(undefined4 * *)&DAT_0048d8c4));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a2c  FUN_00468a2c   (21 bytes)   [unnamed]
void __cdecl FUN_00468a2c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a41  FUN_00468a41   (44 bytes)   [unnamed]
void __cdecl FUN_00468a41(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 in_FS;
  
  piVar2 = (int *)segment(in_FS,0);
  piVar2 = (int *)*piVar2;
  if (param_1 == piVar2) {
    puVar1 = (undefined4 *)segment(in_FS,0);
    *puVar1 = *param_1;
  }
  else {
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((undefined4 *)*piVar2 == param_1) {
        *piVar2 = *param_1;
        return;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a7a  FUN_00468a7a   (21 bytes)   [unnamed]
void FUN_00468a7a(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x468a8b,param_2,(PVOID)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a8f  FUN_00468a8f   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_00468a8f(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  uVar1 = (*(code *)*unaff_EBX)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468a98  FUN_00468a98   (60 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00468a98(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00469fec();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_0048a878 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ad4  FUN_00468ad4   (96 bytes)   [unnamed]
undefined4 __cdecl FUN_00468ad4(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_0048d570 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  (&DAT_00489528)[param_1] = 0;
  *(undefined4 *)(&DAT_0048d570 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b34  FUN_00468b34   (134 bytes)   [unnamed]
uint __cdecl FUN_00468b34(uint param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 < DAT_00489524) {
    if (((&DAT_00489528)[param_1] & 0x200) == 0) {
      if (((&DAT_00489528)[param_1] & 0x2000) == 0) {
        DVar2 = FUN_00468c04(param_1,0,1);
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_00468c04(param_1,0,2);
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_00468c04(param_1,DVar2,0);
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_00469f88(-6);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bbc  FUN_00468bbc   (45 bytes)   [unnamed]
bool __cdecl FUN_00468bbc(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00489524 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0048d570 + param_1 * 4));
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bec  FUN_00468bec   (23 bytes)   [unnamed]
bool __cdecl FUN_00468bec(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c04  FUN_00468c04   (118 bytes)   [unnamed]
DWORD __cdecl FUN_00468c04(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00489524) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_00469f88(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00489528)[param_1] = (&DAT_00489528)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0048d570 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00469fec();
    }
  }
  else {
    DVar1 = FUN_00469f88(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c7c  FUN_00468c7c   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_00468c7c(LPCSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_004895f4 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00468ce7:
      DVar4 = 1;
      goto LAB_00468d08;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00468d08;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00468d08;
      }
      goto LAB_00468d03;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00468d03:
      DVar4 = 3;
      goto LAB_00468d08;
    }
    goto LAB_00468ce7;
  }
  DVar4 = 5;
LAB_00468d08:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_0048906c & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00469f88(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00469f88(uVar3);
  }
  else {
    bVar1 = FUN_00468bec(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_00469ccc(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00469f88(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468e78  FUN_00468e78   (107 bytes)   [unnamed]
char * __cdecl FUN_00468e78(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = param_1 + param_2;
  pcVar4 = param_1;
  pcVar5 = param_1;
  while( true ) {
    pcVar2 = memchr(pcVar4,'\r',(int)pcVar1 - (int)pcVar4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar1;
    }
    uVar3 = (int)pcVar2 - (int)pcVar4;
    if (pcVar5 != pcVar4) {
      memcpy((undefined4 *)pcVar5,(undefined4 *)pcVar4,uVar3);
    }
    if (pcVar1 + -1 <= pcVar2) break;
    pcVar4 = pcVar2 + 1;
    pcVar5 = pcVar5 + uVar3;
  }
  return pcVar5 + (uVar3 - (int)param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ee4  FUN_00468ee4   (302 bytes)   [unnamed]
char * __cdecl FUN_00468ee4(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00489524) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_00469378(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_00469378(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_00489528)[param_1] = (&DAT_00489528)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_00469378(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_00468e78(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_00469f88(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469014  FUN_00469014   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_00469014(LPCWSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_004895f4 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_0046907f:
      DVar4 = 1;
      goto LAB_004690a0;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_004690a0;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_004690a0;
      }
      goto LAB_0046909b;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_0046909b:
      DVar4 = 3;
      goto LAB_004690a0;
    }
    goto LAB_0046907f;
  }
  DVar4 = 5;
LAB_004690a0:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_0048906c & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00469f88(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00469f88(uVar3);
  }
  else {
    bVar1 = FUN_00468bec(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_00469ccc(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00469f88(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469210  FUN_00469210   (284 bytes)   [unnamed]
int __cdecl FUN_00469210(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_00489524) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 8) != 0) {
        FUN_00468c04(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_00469414(param_1,param_2,param_3);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = local_20c;
          while (((int)pcVar3 - (int)local_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_00469414(param_1,local_20c,(int)pcVar3 - (int)local_20c);
          if (iVar2 != (int)pcVar3 - (int)local_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_00469f88(-6);
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046932c  FUN_0046932c   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_0046932c(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469340  FUN_00469340   (56 bytes)   [unnamed]
int __stdcall FUN_00469340(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00489074;
  iVar2 = (*(int *)&DAT_00489524);
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_00469598(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469378  FUN_00469378   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_00469378(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0048d570 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693c0  FUN_004693c0   (25 bytes)   [unnamed]
void __cdecl FUN_004693c0(uint param_1,char *param_2,char *param_3)

{
  FUN_00468ee4(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693dc  FUN_004693dc   (31 bytes)   [unnamed]
void __cdecl FUN_004693dc(LPCWSTR param_1,uint param_2)

{
  uint unaff_EBP;
  
  FUN_00469014(param_1,param_2 & 0xffff36ff | 0x8000,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693fc  FUN_004693fc   (21 bytes)   [unnamed]
void __cdecl FUN_004693fc(LPCWSTR param_1,uint param_2)

{
  uint unaff_EBP;
  
  FUN_00469014(param_1,param_2,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469414  FUN_00469414   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_00469414(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_0048d570 + param_1 * 4),param_2,param_3,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046945c  FUN_0046945c   (25 bytes)   [unnamed]
void __cdecl FUN_0046945c(uint param_1,char *param_2,uint param_3)

{
  FUN_00469210(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469478  thunk → FUN_00468a98   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl thunk_FUN_00468a98(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00469fec();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_0048a878 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469480  FUN_00469480   (125 bytes)   [unnamed]
undefined4 __cdecl FUN_00469480(int *param_1,int param_2,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    free();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_0048a8f8 = &LAB_0046b170;
    if (param_2 == 0) {
      param_2 = malloc();
      if (param_2 == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469500  thunk → FUN_00468ad4   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_00468ad4(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_0048d570 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  (&DAT_00489528)[param_1] = 0;
  *(undefined4 *)(&DAT_0048d570 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469508  FUN_00469508   (142 bytes)   [unnamed]
undefined4 __cdecl FUN_00469508(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_00469598(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        free();
      }
    }
    uVar1 = FUN_00468ad4((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      pcVar3 = FUN_0046a2b8((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_0046a730(pcVar3);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469598  FUN_00469598   (127 bytes)   [unnamed]
undefined4 __cdecl FUN_00469598(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_00469748();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      uVar3 = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - uVar3;
      *param_1 = param_1[1];
      uVar2 = FUN_00469210((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],uVar3);
      if ((uVar3 == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int *)*param_1)) &&
         (param_1[2] = 0, param_1 + 5 == (int *)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469618  FUN_00469618   (301 bytes)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
undefined4 * __cdecl FUN_00469618(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint unaff_EDI;
  char *local_8;
  
  puVar5 = param_1;
  if (param_3[3] == 0) {
    unaff_EDI = 0;
    while ((unaff_EDI != 10 && (param_2 = param_2 + -1, 0 < param_2))) {
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0046a0a0(param_3);
      }
      else {
        pbVar3 = (byte *)*param_3;
        *param_3 = *param_3 + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) break;
      *(char *)puVar5 = (char)unaff_EDI;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  else {
    pcVar2 = (char *)(param_2 - 1);
    do {
      while( true ) {
        if ((int)pcVar2 < 1) goto LAB_00469720;
        local_8 = (char *)param_3[2];
        if ((int)local_8 < 1) break;
        if (pcVar2 <= local_8) {
          local_8 = pcVar2;
        }
        pcVar4 = memchr((char *)*param_3,'\n',(int)local_8);
        if (pcVar4 != (char *)0x0) {
          local_8 = pcVar4 + (1 - *param_3);
        }
        memcpy(puVar5,(undefined4 *)*param_3,(uint)local_8);
        *param_3 = (int)(local_8 + *param_3);
        param_3[2] = param_3[2] - (int)local_8;
        puVar5 = (undefined4 *)((int)puVar5 + (int)local_8);
        pcVar2 = (char *)((int)pcVar2 - (int)local_8);
        if ((pcVar4 != (char *)0x0) || (pcVar2 == (char *)0x0)) {
          unaff_EDI = 10;
          goto LAB_00469720;
        }
      }
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0046a0a0(param_3);
      }
      else {
        pbVar3 = (byte *)*param_3;
        *param_3 = *param_3 + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        break;
      }
      *(char *)puVar5 = (char)unaff_EDI;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      pcVar2 = pcVar2 + -1;
    } while (unaff_EDI != 10);
  }
LAB_00469720:
  if ((unaff_EDI == 0xffffffff) && (puVar5 == param_1)) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    if ((*(byte *)((int)param_3 + 0x12) & 0x10) != 0) {
      param_1 = (undefined4 *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469748  FUN_00469748   (90 bytes)   [unnamed]
int __stdcall FUN_00469748(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00489074;
  iVar5 = (*(int *)&DAT_00489524);
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      uVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - uVar4;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_00469210((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],uVar4);
      if ((uVar4 != uVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697a4  FUN_004697a4   (13 bytes)   [unnamed]
void __cdecl FUN_004697a4(undefined *param_1)

{
  PTR_DAT_004895f4 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697b4  FUN_004697b4   (19 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004697b4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_00489070 = *param_1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697c8  FUN_004697c8   (217 bytes)   [unnamed]
uint __cdecl FUN_004697c8(char *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = *param_1;
  if (cVar1 == 'r') {
    uVar2 = 0;
    uVar3 = 1;
  }
  else if (cVar1 == 'w') {
    uVar2 = 0x301;
    local_8 = 0x80;
    uVar3 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar2 = 0x901;
    local_8 = 0x80;
    uVar3 = 2;
  }
  cVar1 = param_1[1];
  if ((cVar1 == '+') || ((param_1[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = param_1[2];
    }
    uVar3 = 3;
    local_8 = 0x180;
    uVar2 = uVar2 & 0xfffffffe | 2;
  }
  if (cVar1 == 't') {
    uVar2 = uVar2 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar2 = uVar2 | 0x8000;
    uVar3 = uVar3 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar2 = uVar2 | *(uint *)PTR_DAT_004895f4 & 0xc000;
    if ((*(uint *)PTR_DAT_004895f4 & 0x8000) != 0) {
      uVar3 = uVar3 | 0x40;
    }
  }
  PTR_FUN_0048a8fc = &LAB_0046b140;
  *param_2 = uVar2;
  *param_3 = local_8;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004698a4  FUN_004698a4   (169 bytes)   [unnamed]
int * __cdecl FUN_004698a4(int *param_1,LPCSTR param_2,char *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_004697c8(param_3,&local_8,&local_c);
  *(short *)((int)param_1 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_004698ef:
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1 = (int *)0x0;
  }
  else {
    if (*(char *)((int)param_1 + 0x16) < '\0') {
      iVar2 = FUN_00468c7c(param_2,local_8 | param_4,local_c);
      *(char *)((int)param_1 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_004698ef;
    }
    if ((*(byte *)((int)&DAT_00489528 + *(char *)((int)param_1 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x200;
    }
    iVar2 = setvbuf(param_1,0,(uint)((*(byte *)((int)param_1 + 0x13) & 2) != 0),0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    else {
      FUN_00469508(param_1);
      param_1 = (int *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469950  FUN_00469950   (42 bytes)   [unnamed]
undefined4 * __stdcall FUN_00469950(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00489074;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00489074 + (*(int *)&DAT_00489524) * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046997c  fopen   (41 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004deb10.
int * __cdecl fopen(LPCSTR param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_00469950();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_004698a4(piVar1,param_1,param_2,0);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004699a8  FUN_004699a8   (212 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_004699a8(byte *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    uVar3 = param_3[3];
    if ((uVar3 == 0) || (uVar3 < param_2)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_00469598(param_3), iVar2 == 0)))) {
        uVar3 = FUN_00469210((int)*(char *)((int)param_3 + 0x16),(char *)param_1,param_2);
        if ((uVar3 == 0xffffffff) || (uVar3 < param_2)) {
          param_2 = 0;
        }
      }
      else {
        param_2 = 0;
      }
    }
    else {
      if (-1 < (int)(param_3[2] + param_2)) {
        if (param_3[2] == 0) {
          param_3[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_00469598(param_3);
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      memcpy((undefined4 *)*param_3,(undefined4 *)param_1,param_2);
      param_3[2] = param_3[2] + param_2;
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_0046a1a0(*param_1,param_3);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469a84  FUN_00469a84   (90 bytes)   [unnamed]
int __cdecl FUN_00469a84(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = param_1[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)param_1 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*param_1;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)param_1[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469ae0  fseek   (97 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004dedd8.
undefined4 __cdecl fseek(int *param_1,LONG param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  iVar1 = FUN_00469598(param_1);
  if (iVar1 == 0) {
    if ((param_3 == 1) && (0 < param_1[2])) {
      iVar1 = FUN_00469a84(param_1);
      param_2 = param_2 - iVar1;
    }
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe5f;
    param_1[2] = 0;
    *param_1 = param_1[1];
    DVar3 = FUN_00468c04((int)*(char *)((int)param_1 + 0x16),param_2,param_3);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469b44  FUN_00469b44   (126 bytes)   [unnamed]
DWORD __cdecl FUN_00469b44(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = FUN_00468c04((int)*(char *)((int)param_1 + 0x16),0,1);
  if (DVar1 != 0xffffffff) {
    if ((int)param_1[2] < 0) {
      DVar2 = DVar1;
      if ((*(byte *)((int)&DAT_00489528 + *(char *)((int)param_1 + 0x16) * 4 + 1) & 8) != 0) {
        DVar2 = FUN_00468c04((int)*(char *)((int)param_1 + 0x16),0,2);
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar1 = FUN_00468c04((int)*(char *)((int)param_1 + 0x16),DVar1,0);
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_00469a84(param_1);
      DVar1 = DVar2 + iVar3;
    }
    else {
      iVar3 = FUN_00469a84(param_1);
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469bc4  FUN_00469bc4   (212 bytes)   [unnamed]
char * __cdecl FUN_00469bc4(char *param_1,LPCSTR param_2,uint param_3)

{
  char cVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_c [4];
  LPSTR local_8;
  
  lpBuffer = (LPSTR)malloc();
  if (lpBuffer == (LPSTR)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    DVar2 = GetFullPathNameA(param_2,0x104,lpBuffer,&local_8);
    if ((DVar2 == 0) || (0x103 < DVar2)) {
      free();
      param_1 = (char *)0x0;
    }
    else {
      if (lpBuffer[1] == ':') {
        local_c[0] = *lpBuffer;
        local_c[1] = 0x3a;
        local_c[2] = 0x5c;
        local_c[3] = 0;
        UVar3 = GetDriveTypeA(local_c);
        if (UVar3 < 2) {
          free();
          return (char *)0x0;
        }
      }
      if (param_1 == (char *)0x0) {
        param_1 = (char *)FUN_00456ea4();
      }
      else if (param_3 < DVar2 + 1) {
        free();
        param_1 = (char *)0x0;
      }
      else {
        uVar4 = 0xffffffff;
        do {
          pcVar6 = lpBuffer;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar6 + -uVar4;
        pcVar7 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        free();
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469c98  FUN_00469c98   (49 bytes)   [unnamed]
uint __cdecl FUN_00469c98(byte *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_004699a8(param_1,param_2 * param_3,param_4);
    param_3 = uVar1 / param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469ccc  FUN_00469ccc   (64 bytes)   [unnamed]
int __cdecl FUN_00469ccc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00489528; (iVar1 < (*(int *)&DAT_00489524) && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == (*(int *)&DAT_00489524)) {
    return -1;
  }
  (&DAT_00489528)[iVar1] = param_2;
  *(undefined4 *)(&DAT_0048d570 + iVar1 * 4) = param_1;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469d0c  FUN_00469d0c   (104 bytes)   [unnamed]
uint __cdecl FUN_00469d0c(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_00489528; ((int)param_2 < (int)DAT_00489524 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00489524) && (param_2 < DAT_00489524)) {
    if (((&DAT_00489528)[param_1] != 0) && ((&DAT_00489528)[param_2] == 0)) {
      (&DAT_00489528)[param_2] = (&DAT_00489528)[param_1];
      *(undefined4 *)(&DAT_0048d570 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469d74  FUN_00469d74   (25 bytes)   [unnamed]
void __cdecl FUN_00469d74(uint param_1)

{
  if (param_1 < DAT_00489524) {
    (&DAT_00489528)[param_1] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469d90  FUN_00469d90   (154 bytes)   [unnamed]
int __cdecl FUN_00469d90(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint *local_c;
  int local_8;
  
  iVar2 = (*(int *)&DAT_00489524);
  for (piVar4 = &(*(int *)&DAT_00489524) + (*(int *)&DAT_00489524); (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (param_1 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *param_1 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(param_1 + 1);
    local_c = &DAT_00489528;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    memcpy((undefined4 *)pbVar5,(undefined4 *)&DAT_0048d570,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469e2c  FUN_00469e2c   (345 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00469e2c(void)

{
  bool bVar1;
  UINT UVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  UVar2 = SetHandleCount(DAT_00489524);
  if (UVar2 < DAT_00489524) {
    DAT_00489524 = UVar2;
  }
  PTR_FUN_00489068 = (undefined*)FUN_00469d90;
  bVar1 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_00489528;
      if (0 < (int)uVar7) {
        do {
          uVar6 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar3 = 0;
          if ((uVar6 & 0x20) != 0) {
            uVar3 = 0x800;
          }
          if ((uVar6 & 0x40) != 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar3 | 0x8000;
          }
          else {
            uVar3 = uVar3 | 0x4000;
          }
          iVar5 = iVar5 + 1;
          *puVar9 = *puVar9 & 3 | uVar3;
          puVar9 = puVar9 + 1;
        } while (iVar5 < (int)uVar7);
      }
      puVar4 = &DAT_00489528 + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_00489524; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_004675a4((undefined4 *)&DAT_0048d570,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_0048d570 = GetStdHandle(0xfffffff6);
    DAT_0048d574 = GetStdHandle(0xfffffff5);
    _DAT_0048d578 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_00489528;
    do {
      bVar1 = FUN_00468bbc(uVar7);
      if ((CONCAT31(extraout_var,bVar1) == 0) && (DAT_0048aa90 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_0048aa90 != 0) {
          *puVar8 = *puVar8 | 0x10000;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469f88  FUN_00469f88   (68 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00469f88(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_004897f4) {
      (*(int *)&_DAT_0048a878) = -param_1;
      _DAT_0048d638 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00469f9e;
  param_1 = 1;
LAB_00469f9e:
  _DAT_0048d638 = param_1;
  (*(int *)&_DAT_0048a878) = (int)(char)(&DAT_004895f8)[param_1];
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469fec  FUN_00469fec   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_00469fec(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetLastError();
  uVar2 = FUN_00469f88(DVar1 & 0xffff);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a000  FUN_0046a000   (52 bytes)   [unnamed]
void __stdcall FUN_0046a000(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_00489074;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_00469598(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a034  FUN_0046a034   (108 bytes)   [unnamed]
undefined4 __cdecl FUN_0046a034(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_0046a000();
  }
  *param_1 = (char *)param_1[1];
  pcVar1 = FUN_00468ee4((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],(char *)param_1[3]);
  param_1[2] = pcVar1;
  param_1[2] = pcVar1;
  if ((int)pcVar1 < 1) {
    if (param_1[2] == 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      param_1[2] = 0;
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    uVar2 = 0xffffffff;
  }
  else {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a0a0  FUN_0046a0a0   (22 bytes)   [unnamed]
uint __cdecl FUN_0046a0a0(int *param_1)

{
  uint uVar1;
  
  param_1[2] = param_1[2] + 1;
  uVar1 = FUN_0046a0b8(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a0b8  FUN_0046a0b8   (230 bytes)   [unnamed]
uint __cdecl FUN_0046a0b8(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_0048d63c = *pbVar1;
    return (uint)*pbVar1;
  }
  if (((param_1[2] < 0) || ((*(ushort *)((int)param_1 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)param_1 + 0x12) & 1) == 0)) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x80;
  if (param_1[3] != 0) {
    iVar2 = FUN_0046a034(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_0048d63c = *pbVar1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_0046a000();
  }
  pcVar3 = FUN_00468ee4((int)*(char *)((int)param_1 + 0x16),(char *)&DAT_0048d63c,(char *)0x1);
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_00468b34((int)*(char *)((int)param_1 + 0x16));
    if (uVar4 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
  return (uint)DAT_0048d63c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a1a0  FUN_0046a1a0   (272 bytes)   [unnamed]
uint __cdecl FUN_0046a1a0(byte param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char local_6 [2];
  
  if (param_2[2] < -1) {
    memcpy((undefined4 *)*param_2,(undefined4 *)local_6,1);
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + 1;
    if ((((*(byte *)((int)param_2 + 0x12) & 8) != 0) && ((param_1 == 10 || (param_1 == 0xd)))) &&
       (iVar1 = FUN_00469598(param_2), iVar1 != 0)) {
      return 0xffffffff;
    }
    uVar2 = (uint)param_1;
  }
  else if (((*(ushort *)((int)param_2 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)param_2 + 0x12) & 2) != 0)) {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x100;
    if (param_2[3] == 0) {
      iVar1 = FUN_00469210((int)*(char *)((int)param_2 + 0x16),local_6,1);
      if ((iVar1 == 1) || ((*(byte *)((int)param_2 + 0x13) & 2) != 0)) {
        uVar2 = (uint)param_1;
      }
      else {
        *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((param_2[2] != 0) && (iVar1 = FUN_00469598(param_2), iVar1 != 0)) {
        return 0xffffffff;
      }
      param_2[2] = -param_2[3];
      memcpy((undefined4 *)*param_2,(undefined4 *)local_6,1);
      param_2[2] = param_2[2];
      *param_2 = *param_2 + 1;
      if (((*(byte *)((int)param_2 + 0x12) & 8) != 0) &&
         (((param_1 == 10 || (param_1 == 0xd)) && (iVar1 = FUN_00469598(param_2), iVar1 != 0)))) {
        return 0xffffffff;
      }
      uVar2 = (uint)param_1;
    }
  }
  else {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a2b0  thunk → FUN_00468c04   (5 bytes)   [unnamed]
DWORD __cdecl thunk_FUN_00468c04(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00489524) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_00469f88(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00489528)[param_1] = (&DAT_00489528)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0048d570 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00469fec();
    }
  }
  else {
    DVar1 = FUN_00469f88(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a2b8  FUN_0046a2b8   (79 bytes)   [unnamed]
char * __cdecl FUN_0046a2b8(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0048d642;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00489724 /* "TMP" */;
  }
  pcVar1 = (char *)FUN_00467b18(param_1,param_2);
  FUN_0046e138((uint)param_3,pcVar1,uVar2);
  FUN_00467694(param_1,&DAT_00489728 /* ".$$$" */);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a308  FUN_0046a308   (65 bytes)   [unnamed]
char * __cdecl FUN_0046a308(char *param_1,ushort *param_2)

{
  int iVar1;
  
  do {
    *param_2 = *param_2 + 1;
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    param_1 = FUN_0046a2b8(param_1,(char *)0x0,*param_2);
    iVar1 = thunk_FUN_00468a98(param_1,0);
  } while (iVar1 == 0);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a34c  thunk → FUN_00468c7c   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl thunk_FUN_00468c7c(LPCSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_004895f4 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00468ce7:
      DVar4 = 1;
      goto LAB_00468d08;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00468d08;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00468d08;
      }
      goto LAB_00468d03;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00468d03:
      DVar4 = 3;
      goto LAB_00468d08;
    }
    goto LAB_00468ce7;
  }
  DVar4 = 5;
LAB_00468d08:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_0048906c & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00469f88(1);
      return iVar2;
    }
    DStack_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar3 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar3 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(param_1,DStack_8,DStack_c,&_Stack_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0)
  ;
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00469f88(uVar3);
  }
  else {
    bVar1 = FUN_00468bec(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_00469ccc(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00469f88(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a35c  thunk → FUN_00468ee4   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00468ee4(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00489524) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_00469378(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_00469378(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_00489528)[param_1] = (&DAT_00489528)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_00469378(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_00468e78(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_00469f88(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a364  FUN_0046a364   (33 bytes)   [unnamed]
void __cdecl FUN_0046a364(int *param_1)

{
  int iVar1;
  
  iVar1 = fseek(param_1,0,0);
  if (iVar1 == 0) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffef;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a388  FUN_0046a388   (449 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_0046a388(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_0046a3b0:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    uVar2 = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < 0x80)) && (iVar3 = FUN_0046fc30(uVar2), iVar3 != 0))
      goto LAB_0046a3b0;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_0046a4ff;
    if ((iVar5 != 1) || ((iVar5 = 2, uVar2 != 0x2b && (uVar2 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((uVar2 == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          uVar2 = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_0046a4ff;
          if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
            param_4 = 0x10;
            goto LAB_0046a3b0;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_0046a4ff;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
          if (((int)uVar2 < 0x61) || (0x7a < (int)uVar2)) {
            if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_0046a4ff;
            local_1c = uVar2 - 0x37;
          }
          else {
            local_1c = uVar2 - 0x57;
          }
        }
        else {
          local_1c = uVar2 - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_0046a4ff;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_0046a4ff:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (uVar2 == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_0046a3b0;
    }
    bVar6 = uVar2 == 0x2d;
    param_5 = iVar3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a550  setvbuf   (77 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004e02cc.
undefined4 __cdecl setvbuf(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((((char)param_1 == *(char *)((int)param_1 + 0x17)) && (param_3 < 3)) && (param_4 < 0x80000000)
     ) {
    if (param_1[2] != 0) {
      fseek(param_1,0,1);
    }
    uVar1 = FUN_00469480(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a5a0  FUN_0046a5a0   (40 bytes)   [unnamed]
uint __cdecl FUN_0046a5a0(undefined4 *param_1,uint param_2,int *param_3)

{
  memcpy((undefined4 *)*param_3,param_1,param_2);
  *param_3 = *param_3 + param_2;
  *(undefined1 *)*param_3 = 0;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a5c8  FUN_0046a5c8   (40 bytes)   [unnamed]
uint __cdecl FUN_0046a5c8(undefined1 *param_1,byte *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_0046a7fc(FUN_0046a5a0,&param_1,param_2,0,0,(uint *)&GHIDRA_STACK(0x0000000c));
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a5f0  FUN_0046a5f0   (40 bytes)   [unnamed]
void __cdecl FUN_0046a5f0(undefined1 *param_1,byte *param_2,uint *param_3)

{
  *param_1 = 0;
  FUN_0046a7fc(FUN_0046a5a0,&param_1,param_2,0,0,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a730  FUN_0046a730   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0046a730(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00469fec();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a74c  FUN_0046a74c   (69 bytes)   [unnamed]
void __cdecl FUN_0046a74c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = (**(code **)(param_1 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a794  FUN_0046a794   (52 bytes)   [unnamed]
void __cdecl FUN_0046a794(undefined1 param_1,int param_2)

{
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_0046a74c(param_2);
  }
  if ((*(uint **)(param_2 + 100) == (uint *)0x0) ||
     (*(uint *)(param_2 + 0x5c) < **(uint **)(param_2 + 100))) {
    *(undefined1 *)(param_2 + *(int *)(param_2 + 0x50)) = param_1;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a7c8  FUN_0046a7c8   (52 bytes)   [unnamed]
void __cdecl FUN_0046a7c8(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 7;
  pcVar1 = (char *)(param_2 + 7);
  do {
    cVar3 = (char)(param_1 & 0xf);
    if ((param_1 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    param_1 = param_1 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a7fc  FUN_0046a7fc   (2256 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_0046a7fc(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  char cVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_524 [80];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  uint local_4c8;
  int local_4c4;
  undefined4 *local_4c0;
  uint local_4bc [256];
  undefined1 local_bc [2];
  undefined2 local_ba;
  undefined1 local_b4;
  CHAR local_5a [2];
  char *local_58;
  int local_54;
  char *local_50;
  uint *local_48;
  char *local_44;
  char *local_40;
  uint local_3c;
  ushort local_36;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  char local_21;
  int local_20;
  uint *local_1c;
  byte *local_18;
  int local_14;
  byte local_d;
  uint local_c;
  uint local_8;
  
  local_4c4 = 0;
  local_4c8 = 0;
  local_4d4 = 0;
  local_4d0 = param_1;
  local_4cc = param_2;
  if (param_4 == 0) {
    local_4c0 = (undefined4 *)0x0;
  }
  else {
    local_4c0 = &param_5;
  }
LAB_0046a844:
  pbVar12 = param_3;
  bVar10 = *pbVar12;
  param_3 = pbVar12 + 1;
  if (bVar10 != 0) {
    if (bVar10 == 0x25) {
      if (*param_3 != 0x25) {
        uVar5 = 0;
        local_14 = 0;
        local_d = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        uVar14 = 0;
        bVar4 = false;
        bVar2 = false;
        bVar15 = false;
        bVar3 = false;
        local_20 = 0;
switchD_0046a8e5_default:
        pbVar13 = param_3;
        bVar1 = false;
        bVar10 = *pbVar13;
        param_3 = pbVar13 + 1;
        local_18 = pbVar12;
        if (((char)bVar10 < ' ') || ('\x7f' < (char)bVar10)) goto switchD_0046a8e5_caseD_15;
        switch((&DAT_00489bc2)[(byte)(bVar10 - 0x20)]) {
        case 0:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0046a8e5_caseD_15;
          if (local_d != 0x2b) {
            local_d = bVar10;
          }
          goto switchD_0046a8e5_default;
        case 1:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0046a8e5_caseD_15;
          bVar2 = true;
          goto switchD_0046a8e5_default;
        case 2:
          puVar8 = param_6 + 1;
          local_34 = *param_6;
          param_6 = puVar8;
          if (uVar5 < 2) {
            local_8 = local_34;
            if ((int)local_34 < 0) {
              local_8 = -local_34;
              bVar3 = true;
            }
            uVar5 = 3;
          }
          else {
            local_18 = pbVar12;
            if (uVar5 != 4) goto switchD_0046a8e5_caseD_15;
            uVar5 = 5;
            local_c = local_34;
          }
          goto switchD_0046a8e5_default;
        case 3:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0046a8e5_caseD_15;
          bVar3 = true;
          goto switchD_0046a8e5_default;
        case 4:
          local_18 = pbVar12;
          if (3 < uVar5) goto switchD_0046a8e5_caseD_15;
          uVar5 = 4;
          local_c = local_c + 1;
          goto switchD_0046a8e5_default;
        case 5:
          goto switchD_0046a8e5_caseD_5;
        case 6:
          uVar14 = uVar14 | 0x10;
          uVar5 = 5;
          goto switchD_0046a8e5_default;
        case 7:
          uVar5 = 5;
          uVar14 = uVar14 & 0xffffffef;
          bVar4 = true;
          goto switchD_0046a8e5_default;
        case 8:
          uVar5 = 5;
          uVar14 = 0x200;
          goto switchD_0046a8e5_default;
        case 9:
          if (uVar5 == 0) {
            if (!bVar3) {
              bVar15 = true;
              uVar5 = 1;
            }
          }
          else {
switchD_0046a8e5_caseD_5:
            cVar11 = bVar10 - 0x30;
            if (uVar5 < 3) {
              uVar5 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar11;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar11;
              }
            }
            else {
              local_18 = pbVar12;
              if (uVar5 != 4) goto switchD_0046a8e5_caseD_15;
              local_c = local_c * 10 + (int)cVar11;
            }
          }
          goto switchD_0046a8e5_default;
        case 10:
          goto switchD_0046a8e5_caseD_a;
        case 0xb:
          local_3c = 8;
          break;
        case 0xc:
          local_3c = 10;
          break;
        case 0xd:
          local_3c = 0x10;
          local_21 = bVar10 - 0x17;
          break;
        case 0xe:
          local_1c = (uint *)*param_6;
          param_6 = param_6 + 1;
          FUN_0046a7c8((uint)local_1c,(int)local_bc);
          local_b4 = 0;
          local_1c = (uint *)local_bc;
          goto LAB_0046ae74;
        case 0xf:
          local_1c = (uint *)(local_bc + 1);
          thunk_FUN_0046dc4c();
          param_6 = (uint *)thunk_FUN_0046dc4c();
          goto LAB_0046ae74;
        case 0x10:
          goto switchD_0046a8e5_caseD_10;
        case 0x11:
          goto switchD_0046a8e5_caseD_11;
        case 0x12:
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_0046a8e5_caseD_10:
          if ((uVar14 & 0x10) == 0) {
            local_1c = (uint *)local_bc;
            local_bc[1] = 0;
            local_bc[0] = (byte)*param_6;
            local_20 = 0;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          else {
            local_1c = (uint *)local_bc;
            GH_SET(local_bc, SUB42(*param_6,0));
            local_ba = 0;
            local_20 = 1;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          goto LAB_0046aee2;
        case 0x13:
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_0046a8e5_caseD_11:
          if ((uVar14 & 0x10) == 0) {
            local_1c = (uint *)*param_6;
            local_20 = 0;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)"(null)";
            }
          }
          else {
            local_1c = (uint *)*param_6;
            local_20 = 1;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)&DAT_00489bb4;
            }
          }
          param_6 = param_6 + 1;
          if (local_20 == 0) {
            uVar14 = local_c;
            if ((int)local_c < 0) {
              uVar14 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (uVar14 != 0 && ((byte)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 1)) {
              uVar14 = uVar14 - 1;
              local_44 = local_44 + 1;
            }
          }
          else {
            uVar14 = local_c;
            if ((int)local_c < 0) {
              uVar14 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (uVar14 != 0 && ((ushort)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 2)) {
              uVar14 = uVar14 - 1;
              local_44 = local_44 + 1;
            }
          }
          goto LAB_0046aee2;
        case 0x14:
          puVar8 = param_6 + 1;
          local_1c = (uint *)*param_6;
          param_6 = puVar8;
          if ((uVar14 & 0x10) == 0) {
            if ((uVar14 & 0x200) == 0) {
              *local_1c = local_4c8;
            }
            else {
              *(ushort *)local_1c = (ushort)local_4c8;
            }
          }
          else {
            *local_1c = local_4c8;
          }
          goto LAB_0046a844;
        case 0x15:
        case 0x16:
        case 0x17:
          goto switchD_0046a8e5_caseD_15;
        case 0x18:
          uVar5 = 5;
          goto switchD_0046a8e5_default;
        case 0x19:
          uVar5 = 5;
          goto switchD_0046a8e5_default;
        case 0x1a:
          if ((*param_3 == 0x36) && (pbVar13[2] == 0x34)) {
            uVar14 = 0;
            bVar4 = true;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x33) && (pbVar13[2] == 0x32)) {
            uVar14 = 0x10;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x31) && (pbVar13[2] == 0x36)) {
            uVar14 = 0x200;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if (*param_3 == 0x38) {
            uVar14 = 0;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 2;
          }
        default:
          goto switchD_0046a8e5_default;
        }
        local_d = 0;
        cVar11 = '\0';
        goto LAB_0046ab60;
      }
      param_3 = pbVar12 + 2;
      bVar10 = 0x25;
    }
    if ((((&DAT_0048d651)[bVar10] & 4) != 0) && (*param_3 != 0)) {
      FUN_0046a794(bVar10,(int)local_524);
      bVar10 = *param_3;
      param_3 = param_3 + 1;
    }
    FUN_0046a794(bVar10,(int)local_524);
    goto LAB_0046a844;
  }
  goto LAB_0046b110;
switchD_0046a8e5_caseD_a:
  local_3c = 10;
  cVar11 = '\x01';
LAB_0046ab60:
  if (bVar4) {
    local_2c = *param_6;
    local_28 = param_6[1];
    param_6 = param_6 + 2;
  }
  else if ((uVar14 & 0x10) == 0) {
    if ((uVar14 & 0x200) == 0) {
      local_34 = *param_6;
      local_2c = local_34;
      if (cVar11 == '\0') {
        local_28 = 0;
        param_6 = param_6 + 1;
      }
      else {
        local_28 = (int)local_34 >> 0x1f;
        param_6 = param_6 + 1;
      }
    }
    else {
      local_36 = (ushort)*param_6;
      if (cVar11 == '\0') {
        local_2c = (uint)local_36;
        local_28 = 0;
        param_6 = param_6 + 1;
      }
      else {
        local_2c = (uint)(short)local_36;
        local_28 = (int)local_2c >> 0x1f;
        param_6 = param_6 + 1;
      }
    }
  }
  else {
    local_30 = *param_6;
    local_2c = local_30;
    if (cVar11 == '\0') {
      local_28 = 0;
      param_6 = param_6 + 1;
    }
    else {
      local_28 = (int)local_30 >> 0x1f;
      param_6 = param_6 + 1;
    }
  }
  local_1c = (uint *)(local_bc + 1);
  if (((local_28 == 0) && (local_2c == 0)) && (local_c == 0)) {
                    /* WARNING: Ignoring partial resolution of indirect */
    local_bc[1] = 0;
  }
  else {
    FUN_0046de3c(local_2c,local_28,(char *)local_1c,local_3c,cVar11,local_21);
  }
  if ((int)local_c < 0) {
LAB_0046ae74:
    if ((bVar15) && (0 < (int)local_8)) {
      local_44 = strlen(local_1c);
      if ((byte)*local_1c == 0x2d) {
        local_44 = local_44 + -1;
      }
      if ((int)local_44 < (int)local_8) {
        local_14 = local_8 - (int)local_44;
      }
    }
    if (((byte)*local_1c == 0x2d) || (local_d != 0)) {
      if ((byte)*local_1c != 0x2d) {
        local_1c = (uint *)((int)local_1c + -1);
        *(byte *)local_1c = local_d;
      }
      if (0 < local_14) {
        local_14 = local_14 + -1;
      }
    }
    local_44 = strlen(local_1c);
  }
  else {
    local_40 = strlen(local_1c);
    local_44 = local_40;
    if ((byte)*local_1c == 0x2d) {
      local_40 = local_40 + -1;
    }
    else if (local_d != 0) {
      local_44 = local_40 + 1;
      local_1c = (uint *)((int)local_1c + -1);
      *(byte *)local_1c = local_d;
    }
    if ((int)local_40 < (int)local_c) {
      local_14 = local_c - (int)local_40;
    }
  }
LAB_0046aee2:
  if (bVar2) {
    if (bVar10 == 0x6f) {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((bVar10 == 0x78) || (bVar10 == 0x58)) {
      bVar1 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_44 = local_44 + local_14;
  if ((!bVar3) && ((int)local_44 < (int)local_8)) {
    do {
      FUN_0046a794(0x20,(int)local_524);
      local_8 = local_8 - 1;
    } while ((int)local_44 < (int)local_8);
  }
  if (bVar1) {
    FUN_0046a794(0x30,(int)local_524);
    FUN_0046a794(bVar10,(int)local_524);
  }
  if (0 < local_14) {
    local_44 = local_44 + -local_14;
    local_8 = local_8 - local_14;
    if ((((byte)*local_1c == 0x2d) || ((byte)*local_1c == 0x20)) || ((byte)*local_1c == 0x2b)) {
      uVar14 = *local_1c;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_0046a794((byte)uVar14,(int)local_524);
      local_44 = local_44 + -1;
      local_8 = local_8 - 1;
    }
    while (iVar7 = local_14 + -1, bVar15 = local_14 != 0, local_14 = iVar7, bVar15) {
      FUN_0046a794(0x30,(int)local_524);
    }
  }
  if (local_20 != 0) {
    local_48 = local_1c;
    local_50 = (char *)0x0;
    local_58 = local_44;
    while (pcVar6 = local_58 + -1, bVar15 = 0 < (int)local_58, local_58 = pcVar6, bVar15) {
      uVar14 = *local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_0046d3a0(local_5a,(ushort)uVar14);
      if (local_54 < 1) break;
      iVar7 = 0;
      pcVar9 = (char *)((int)local_4bc + (int)local_50);
      pcVar6 = local_5a;
      if (0 < local_54) {
        do {
          cVar11 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar9 = cVar11;
          pcVar9 = pcVar9 + 1;
          local_50 = local_50 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_54);
      }
    }
    local_1c = local_4bc;
    local_44 = local_50;
  }
  if (local_44 != (char *)0x0) {
    local_8 = local_8 - (int)local_44;
    while (local_44 != (char *)0x0) {
      uVar14 = *local_1c;
      local_44 = local_44 + -1;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_0046a794((byte)uVar14,(int)local_524);
    }
    local_44 = (char *)0xffffffff;
  }
  while (uVar14 = local_8 - 1, bVar15 = 0 < (int)local_8, local_8 = uVar14, bVar15) {
    FUN_0046a794(0x20,(int)local_524);
  }
  goto LAB_0046a844;
switchD_0046a8e5_caseD_15:
  while( true ) {
    pbVar12 = local_18 + 1;
    bVar10 = *local_18;
    local_18 = pbVar12;
    if (bVar10 == 0) break;
    FUN_0046a794(bVar10,(int)local_524);
  }
LAB_0046b110:
  FUN_0046a74c((int)local_524);
  if (local_4c4 != 0) {
    local_4c8 = 0xffffffff;
  }
  return local_4c8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b138  thunk → FUN_00469210   (5 bytes)   [unnamed]
int __cdecl thunk_FUN_00469210(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_20c [512];
  int iStack_c;
  int iStack_8;
  
  if (param_1 < DAT_00489524) {
    if (param_3 + 1 < 2) {
      iStack_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 8) != 0) {
        FUN_00468c04(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 1) & 0x40) == 0) {
        iStack_c = FUN_00469414(param_1,param_2,param_3);
      }
      else {
        iStack_8 = 0;
        iStack_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = acStack_20c;
          while (((int)pcVar3 - (int)acStack_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              iStack_8 = iStack_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_00469414(param_1,acStack_20c,(int)pcVar3 - (int)acStack_20c);
          if (iVar2 != (int)pcVar3 - (int)acStack_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (iStack_c - iStack_8) + iVar2;
          }
          iStack_c = iStack_c + iVar2;
        }
        iStack_c = iStack_c - iStack_8;
      }
    }
  }
  else {
    iStack_c = FUN_00469f88(-6);
  }
  return iStack_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b198  FUN_0046b198   (6 bytes)   [unnamed]
undefined ** __stdcall FUN_0046b198(void)

{
  return &PTR_DAT_00489e28;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b1a0  FUN_0046b1a0   (707 bytes)   [unnamed]
char * __cdecl FUN_0046b1a0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  memset((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_00467694(param_2,&DAT_00489e67 /* "%+0I" */);
          param_1 = param_1 + 1;
        }
        else {
          FUN_00467694(param_2,&DAT_00489e6c);
        }
      }
      else if (cVar1 < 'N') {
        pcVar2 = param_1;
        if (cVar1 == 'M') {
          while (*pcVar2 == 'M') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_00467694(param_2,&DAT_00489e98);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00467694(param_2,&DAT_00489e9b /* "%+0m" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00467694(param_2,&DAT_00489ea0);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00467694(param_2,&DAT_00489ea3);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_0046b442;
          if (param_1[1] == 'H') {
            FUN_00467694(param_2,&DAT_00489e7f /* "%+0H" */);
            param_1 = param_1 + 1;
          }
          else {
            FUN_00467694(param_2,&DAT_00489e84);
          }
        }
      }
      else {
        pcVar2 = param_1;
        if (cVar1 == 'd') {
          while (*pcVar2 == 'd') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_00467694(param_2,&DAT_00489e8a);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00467694(param_2,&DAT_00489e8d /* "%+0d" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00467694(param_2,&DAT_00489e92);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00467694(param_2,&DAT_00489e95);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_00467694(param_2,&DAT_00489e64);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_0046b442:
          FUN_004677fc(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_00467694(param_2,&DAT_00489e6f /* "%+0M" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e74);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_00467694(param_2,&DAT_00489e77 /* "%+0S" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e7c);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e87);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_0046b442;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_00467694(param_2,&DAT_00489ea6);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_00467694(param_2,&DAT_00489ea9 /* "%+0y" */);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_00467694(param_2,&DAT_00489eae);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b464  FUN_0046b464   (81 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b464(int param_1)

{
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0048a308 + 0x18) + 8);
    }
    if (param_1 == 0xe) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0048a308 + 0x18) + 4);
    }
    if (param_1 == 0xf) {
      return **(undefined4 **)(PTR_DAT_0048a308 + 0x18);
    }
  }
  else {
    if (param_1 == 0x50) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0048a308 + 0x18) + 0xc);
    }
    if (param_1 == 0x51) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0048a308 + 0x18) + 0x10);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b4b8  FUN_0046b4b8   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b4b8(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x104);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b4d0  FUN_0046b4d0   (18 bytes)   [unnamed]
bool __cdecl FUN_0046b4d0(uint param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b4e4  FUN_0046b4e4   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b4e4(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x100);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b4fc  FUN_0046b4fc   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b4fc(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x20);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b510  FUN_0046b510   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b510(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,4);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b524  FUN_0046b524   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b524(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x194);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b53c  FUN_0046b53c   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b53c(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,2);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b550  FUN_0046b550   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b550(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x1d4);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b568  FUN_0046b568   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b568(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x10);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b57c  FUN_0046b57c   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b57c(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,8);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b590  FUN_0046b590   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b590(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,1);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b5a4  FUN_0046b5a4   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b5a4(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_0046b6c0(param_1,0x80);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b5bc  FUN_0046b5bc   (23 bytes)   [unnamed]
void __cdecl FUN_0046b5bc(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x104);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b5d4  FUN_0046b5d4   (20 bytes)   [unnamed]
bool __cdecl FUN_0046b5d4(ushort param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b5e8  FUN_0046b5e8   (23 bytes)   [unnamed]
void __cdecl FUN_0046b5e8(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b600  FUN_0046b600   (20 bytes)   [unnamed]
void __cdecl FUN_0046b600(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x20);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b614  FUN_0046b614   (20 bytes)   [unnamed]
void __cdecl FUN_0046b614(ushort param_1)

{
  FUN_0046b704((uint)param_1,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b628  FUN_0046b628   (23 bytes)   [unnamed]
void __cdecl FUN_0046b628(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x194);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b640  FUN_0046b640   (20 bytes)   [unnamed]
void __cdecl FUN_0046b640(ushort param_1)

{
  FUN_0046b704((uint)param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b654  FUN_0046b654   (23 bytes)   [unnamed]
void __cdecl FUN_0046b654(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x1d4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b66c  FUN_0046b66c   (20 bytes)   [unnamed]
void __cdecl FUN_0046b66c(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b680  FUN_0046b680   (20 bytes)   [unnamed]
uint __cdecl FUN_0046b680(ushort param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0046b704((uint)param_1,8);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b694  FUN_0046b694   (20 bytes)   [unnamed]
void __cdecl FUN_0046b694(ushort param_1)

{
  FUN_0046b704((uint)param_1,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b6a8  FUN_0046b6a8   (23 bytes)   [unnamed]
void __cdecl FUN_0046b6a8(ushort param_1)

{
  FUN_0046b704((uint)param_1,0x80);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b6c0  FUN_0046b6c0   (67 bytes)   [unnamed]
ushort __cdecl FUN_0046b6c0(uint param_1,ushort param_2)

{
  if (0xff < param_1) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_0048a308 + 8) == 0) && (*(int *)(PTR_DAT_0048a308 + 0x10) != 0)) {
    return param_2 & *(ushort *)(*(int *)(PTR_DAT_0048a308 + 0x10) + 2 + param_1 * 2);
  }
  return *(ushort *)(&DAT_00489c26 + (short)param_1 * 2) & param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b704  FUN_0046b704   (85 bytes)   [unnamed]
uint __cdecl FUN_0046b704(WCHAR param_1,uint param_2)

{
  uint uVar1;
  ushort local_6;
  
  uVar1 = param_2;
  if (param_1 == L'\xffff') {
    uVar1 = 0;
  }
  else if ((*(int *)(PTR_DAT_0048a308 + 8) == 0) || (L'ÿ' < param_1)) {
    GetStringTypeW(1,&param_1,1,&local_6);
    uVar1 = local_6 & uVar1;
  }
  else {
    uVar1 = *(ushort *)(&DAT_00489c26 + (short)param_1 * 2) & param_2;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b75c  FUN_0046b75c   (173 bytes)   [unnamed]
undefined4 __cdecl FUN_0046b75c(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_0046b80c(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)malloc();
    FUN_0046d57c((LPSTR)puVar1,param_2,0x1000);
    FUN_0046b80c(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_0048a308 != &DAT_0048a2dc) {
      pcVar2 = strlen(*(uint **)(PTR_DAT_0048a308 + 0x24));
      pWVar3 = (LPWSTR)FUN_00456ea4();
      *(LPWSTR *)(PTR_DAT_0048a308 + 0x28) = pWVar3;
      FUN_0046d414(pWVar3,*(uint **)(PTR_DAT_0048a308 + 0x24),(char *)((int)pcVar2 * 2));
    }
    free();
  }
  return *(undefined4 *)(PTR_DAT_0048a308 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b80c  FUN_0046b80c   (1223 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
undefined4 __cdecl FUN_0046b80c(ushort param_1,uint *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  _cpinfo local_2c;
  char *local_18;
  LCID local_14;
  int local_10;
  CHAR local_c [8];
  
  pbVar10 = (byte *)0x0;
  local_10 = 0;
  local_14 = 0;
  if (param_2 != (uint *)0x0) {
    pbVar10 = (byte *)FUN_00467970(param_2);
  }
  if ((PTR_DAT_0048a308 == (undefined *)0x0) || ((undefined4 *)PTR_DAT_0048a308 == &DAT_0048a2dc)) {
    if ((undefined4 *)PTR_DAT_0048a308 == &DAT_0048a2dc) {
      local_10 = 1;
    }
    PTR_DAT_0048a308 = (undefined *)calloc(1,0x2c);
    if ((undefined4 *)PTR_DAT_0048a308 == (undefined4 *)0x0) {
      SetLastError(0xe);
      free();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_0048a308 + 0x24) != 0) {
    free();
    *(undefined4 *)(PTR_DAT_0048a308 + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_0046c73c((uint *)PTR_DAT_0048a308,(uint *)"LC_MONETARY");
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_0046c73c((uint *)PTR_DAT_0048a308,(uint *)"LC_NUMERIC");
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_0046c73c((uint *)PTR_DAT_0048a308,(uint *)"LC_TIME");
        }
        if ((param_1 & 1) == 1) {
          FUN_0046c73c((uint *)PTR_DAT_0048a308,(uint *)"LC_COLLATE");
        }
        if ((param_1 & 2) == 2) {
          FUN_0046c73c((uint *)PTR_DAT_0048a308,(uint *)"LC_CTYPE");
        }
        free();
        FUN_0046d0ec();
        return *(undefined4 *)(PTR_DAT_0048a308 + 0x24);
      }
      FUN_0046c170((int)PTR_DAT_0048a308);
      free();
      PTR_DAT_0048a308 = (undefined *)&DAT_0048a2dc;
    }
    else {
      local_14 = GetUserDefaultLCID();
      GetLocaleInfoA(local_14,0xb,local_c,7);
      iVar7 = FUN_0046db78(local_c);
      puVar2 = PTR_DAT_0048a308;
      *(int *)PTR_DAT_0048a308 = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_00467ac4((char *)param_2,"en_US");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_00467ac4((char *)param_2,"en_GB");
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_00467ac4((char *)param_2,"fr_FR");
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_00467ac4((char *)param_2,"de_DE");
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_0048a157;
            local_18 = FUN_004676d0((char *)param_2,'.');
            if (local_18 != (char *)0x0) {
              uVar8 = 0xffffffff;
              pcVar3 = local_18;
              do {
                pcVar12 = pcVar3;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar12 = pcVar3 + 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar12;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pbVar11 = (byte *)(pcVar12 + -uVar8);
              pbVar13 = pbVar10 + 3;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
                pbVar11 = pbVar11 + 4;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pbVar13 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                pbVar13 = pbVar13 + 1;
              }
            }
          }
        }
        else {
          *(undefined4 *)pbVar10 = DAT_0048a14d;
          local_18 = FUN_004676d0((char *)param_2,'.');
          if (local_18 != (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar3 = local_18;
            do {
              pcVar12 = pcVar3;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pbVar11 = (byte *)(pcVar12 + -uVar8);
            pbVar13 = pbVar10 + 3;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
              pbVar11 = pbVar11 + 4;
              pbVar13 = pbVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar13 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
            }
          }
        }
      }
      else {
        *(undefined4 *)pbVar10 = DAT_0048a143;
        local_18 = FUN_004676d0((char *)param_2,'.');
        if (local_18 != (char *)0x0) {
          uVar8 = 0xffffffff;
          pcVar3 = local_18;
          do {
            pcVar12 = pcVar3;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pbVar11 = (byte *)(pcVar12 + -uVar8);
          pbVar13 = pbVar10 + 3;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
            pbVar11 = pbVar11 + 4;
            pbVar13 = pbVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pbVar13 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            pbVar13 = pbVar13 + 1;
          }
        }
      }
    }
    else {
      *(undefined4 *)pbVar10 = DAT_0048a139;
      local_18 = FUN_004676d0((char *)param_2,'.');
      if (local_18 != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar3 = local_18;
        do {
          pcVar12 = pcVar3;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pbVar11 = (byte *)(pcVar12 + -uVar8);
        pbVar13 = pbVar10 + 3;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar13 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
        }
      }
    }
    puVar2 = PTR_DAT_0048a308;
    pcVar3 = &DAT_0048a15b;
    puVar4 = param_2;
    do {
      if ((char)*puVar4 != *pcVar3) goto LAB_0046bb5b;
      bVar14 = true;
      if ((char)*puVar4 == '\0') break;
      pcVar12 = (char *)((int)puVar4 + 1);
      if (*pcVar12 != pcVar3[1]) goto LAB_0046bb5b;
      puVar4 = (uint *)((int)puVar4 + 2);
      pcVar3 = pcVar3 + 2;
      bVar14 = *pcVar12 == '\0';
    } while (!bVar14);
    if (bVar14) {
      FUN_0046c170((int)PTR_DAT_0048a308);
      free();
      PTR_DAT_0048a308 = (undefined *)&DAT_0048a2dc;
    }
    else {
LAB_0046bb5b:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        free();
        uVar6 = FUN_0046c51c((int *)PTR_DAT_0048a308,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_0048a308 + 8) = 0;
      local_14 = FUN_0046bd5c((int *)puVar2,pbVar10);
      if (local_14 == 0) {
        if (local_10 != 0) {
          free();
          PTR_DAT_0048a308 = (undefined *)&DAT_0048a2dc;
        }
        free();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_0048a308 + 4) = local_14;
  free();
  BVar5 = IsValidLocale(*(LCID *)(PTR_DAT_0048a308 + 4),1);
  if ((BVar5 == 0) && (*(int *)(PTR_DAT_0048a308 + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_0046c170((int)PTR_DAT_0048a308);
      free();
      PTR_DAT_0048a308 = (undefined *)&DAT_0048a2dc;
    }
    uVar6 = 0;
  }
  else {
    SetThreadLocale(*(LCID *)(PTR_DAT_0048a308 + 4));
    if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
      FUN_0046c170((int)PTR_DAT_0048a308);
      iVar7 = FUN_0046bfb4((uint *)PTR_DAT_0048a308,param_1);
      if (iVar7 == 0) {
        SetLastError(0x20000102);
        if (local_10 != 0) {
          FUN_0046c170((int)PTR_DAT_0048a308);
          free();
          PTR_DAT_0048a308 = (undefined *)&DAT_0048a2dc;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_0046fa98(*(UINT *)PTR_DAT_0048a308);
        if ((iVar7 == 0) && (BVar5 = GetCPInfo(*(UINT *)PTR_DAT_0048a308,&local_2c), BVar5 != 0)) {
          _DAT_0048a0b4 = local_2c.MaxCharSize;
          FUN_0046d0ec();
          uVar6 = *(undefined4 *)(PTR_DAT_0048a308 + 0x24);
        }
        else {
          SetLastError(0x20000106);
          uVar6 = 0;
        }
      }
    }
    else {
      _DAT_0048a0b4 = 1;
      FUN_0046d0ec();
      uVar6 = *(undefined4 *)(PTR_DAT_0048a308 + 0x24);
    }
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bd5c  FUN_0046bd5c   (598 bytes)   [unnamed]
uint __cdecl FUN_0046bd5c(int *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  LANGID LVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte local_68 [64];
  CHAR local_28 [8];
  char *local_20;
  byte *local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  LCID local_8;
  
  local_10 = 1;
  local_14 = 0;
  uVar9 = 1;
  puVar10 = &DAT_0048a0bc /* "none" */;
  pbVar5 = local_68;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar5 = pbVar5 + 4;
  }
  bVar2 = false;
  local_18 = DAT_0048a0fc;
  FUN_0046d184(param_2);
  while ((!bVar2 && ((int)uVar9 < 0x39))) {
    local_8 = (LCID)(ushort)((ushort)uVar9 | 0x400);
    GetLocaleInfoA(local_8,0x1001,(LPSTR)local_68,0x40);
    GetLocaleInfoA(local_8,3,(LPSTR)&local_18,4);
    FUN_0046d184(local_68);
    FUN_0046d184((byte *)&local_18);
    pcVar4 = FUN_00467ac4((char *)param_2,(char *)local_68);
    if (pcVar4 == (char *)0x0) {
      pbVar5 = (byte *)FUN_00467ac4((char *)param_2,(char *)&local_18);
      if (param_2 == pbVar5) {
        bVar2 = true;
      }
      else {
        uVar9 = uVar9 + 1;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (((bVar2) || (pcVar4 = FUN_004676d0((char *)param_2,'_'), pcVar4 != (char *)0x0)) ||
     (pcVar4 = FUN_004676d0((char *)param_2,'.'), pcVar4 != (char *)0x0)) {
    if (!bVar2) {
      if (param_1[1] == 0) {
        LVar3 = GetSystemDefaultLangID();
        uVar9 = (uint)LVar3;
      }
      else {
        uVar9 = param_1[1] & 0x3ff;
      }
    }
    pcVar4 = FUN_004676d0((char *)param_2,'_');
    uVar8 = (ushort)uVar9;
    if (pcVar4 == (char *)0x0) {
      local_14 = (uint)(uVar8 | 0x400);
      local_1c = (byte *)0x0;
    }
    else {
      local_1c = (byte *)(pcVar4 + 1);
      local_20 = FUN_004676d0((char *)local_1c,'.');
      if (local_20 != (char *)0x0) {
        *local_20 = '\0';
      }
      local_c = 1;
      bVar2 = false;
      while ((!bVar2 && (local_c != 0))) {
        local_c = GetLocaleInfoA((uint)(ushort)((short)local_10 << 10 | uVar8),0x1002,
                                 (LPSTR)local_68,0x40);
        FUN_0046d184(local_68);
        pbVar5 = local_68;
        pbVar7 = local_1c;
        do {
          if (*pbVar5 != *pbVar7) goto LAB_0046bf27;
          bVar11 = true;
          if (*pbVar5 == 0) break;
          pbVar1 = pbVar5 + 1;
          if (*pbVar1 != pbVar7[1]) goto LAB_0046bf27;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
          bVar11 = *pbVar1 == 0;
        } while (!bVar11);
        if (bVar11) {
          bVar2 = true;
          local_14 = (uint)(ushort)((short)local_10 << 10 | uVar8);
        }
        else {
LAB_0046bf27:
          local_10 = local_10 + 1;
        }
      }
      if (!bVar2) {
        SetLastError(0x20000101);
        return 0;
      }
      if (local_20 != (char *)0x0) {
        *local_20 = '.';
      }
    }
    local_1c = (byte *)FUN_004676d0((char *)param_2,'.');
    if (local_1c == (byte *)0x0) {
      GetLocaleInfoA(local_14,0xb,local_28,7);
      iVar6 = FUN_0046db78(local_28);
      *param_1 = iVar6;
    }
    else {
      local_1c = local_1c + 1;
      iVar6 = FUN_0046db78((char *)local_1c);
      *param_1 = iVar6;
    }
  }
  else {
    SetLastError(0x20000101);
    local_14 = 0;
  }
  return local_14;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bfb4  FUN_0046bfb4   (444 bytes)   [unnamed]
int __cdecl FUN_0046bfb4(uint *param_1,ushort param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  if (param_1[9] != 0) {
    free();
  }
  param_1[9] = 0;
  if ((param_2 & 4) == 4) {
    uVar2 = malloc();
    param_1[5] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0046ca7c(param_1[1],(undefined2 *)param_1[5]);
    iVar3 = 0;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar3 = FUN_0046c73c(param_1,(uint *)"LC_MONETARY");
      iVar3 = CONCAT31(extraout_var,bVar1) * iVar3;
    }
  }
  if ((param_2 & 0x20) == 0x20) {
    uVar2 = malloc();
    param_1[8] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0046cbfc(param_1[1],(undefined4 *)param_1[8]);
    iVar4 = iVar3 * CONCAT31(extraout_var_00,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0046c73c(param_1,(uint *)"LC_TIME");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 0x10) == 0x10) {
    uVar2 = malloc();
    param_1[6] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0046d058(param_1[1],(undefined4 *)param_1[6]);
    iVar4 = iVar3 * CONCAT31(extraout_var_01,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0046c73c(param_1,(uint *)"LC_NUMERIC");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 1) == 1) {
    uVar2 = malloc();
    param_1[7] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      return 0;
    }
    iVar4 = FUN_0046d0e0();
    iVar4 = iVar3 * iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0046c73c(param_1,(uint *)"LC_COLLATE");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 2) == 2) {
    uVar2 = malloc();
    param_1[4] = uVar2;
    if (uVar2 == 0) {
      SetLastError(0xe);
      iVar3 = 0;
    }
    else {
      iVar4 = FUN_0046c994(param_1[1],*param_1,(undefined4 *)param_1[4]);
      iVar4 = iVar3 * iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = FUN_0046c73c(param_1,(uint *)"LC_CTYPE");
        iVar3 = iVar4 * iVar3;
      }
    }
  }
  return iVar3;
}

} // namespace tea
