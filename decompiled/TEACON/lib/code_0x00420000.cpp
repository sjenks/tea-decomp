// TEACON.exe — runtime / library code "code_0x00420000"
// 101 functions, 0x0042003c..0x00423c8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042003c  FUN_0042003c   (134 bytes)   [unnamed]
uint __cdecl FUN_0042003c(uint param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 < DAT_00432528) {
    if (((&DAT_0043252c)[param_1] & 0x200) == 0) {
      if (((&DAT_0043252c)[param_1] & 0x2000) == 0) {
        DVar2 = FUN_0042010c(param_1,0,1);
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_0042010c(param_1,0,2);
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_0042010c(param_1,DVar2,0);
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
    uVar1 = FUN_004211cc(-6);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004200c4  FUN_004200c4   (45 bytes)   [unnamed]
bool __cdecl FUN_004200c4(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00432528 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_00434d98 + param_1 * 4));
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004200f4  FUN_004200f4   (23 bytes)   [unnamed]
bool __cdecl FUN_004200f4(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042010c  FUN_0042010c   (118 bytes)   [unnamed]
DWORD __cdecl FUN_0042010c(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00432528) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_004211cc(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00421230();
    }
  }
  else {
    DVar1 = FUN_004211cc(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420184  FUN_00420184   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_00420184(LPCSTR param_1,uint param_2,uint param_3)

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
    param_2 = param_2 | *(uint *)PTR_DAT_004325f8 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_004201ef:
      DVar4 = 1;
      goto LAB_00420210;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00420210;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00420210;
      }
      goto LAB_0042020b;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_0042020b:
      DVar4 = 3;
      goto LAB_00420210;
    }
    goto LAB_004201ef;
  }
  DVar4 = 5;
LAB_00420210:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00432070 & 0x80) == 0) {
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
      iVar2 = FUN_004211cc(1);
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
    iVar2 = FUN_004211cc(uVar3);
  }
  else {
    bVar1 = FUN_004200f4(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_00420f10(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_004211cc(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420380  FUN_00420380   (107 bytes)   [unnamed]
char * __cdecl FUN_00420380(char *param_1,int param_2)

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
// 0x004203ec  FUN_004203ec   (302 bytes)   [unnamed]
char * __cdecl FUN_004203ec(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00432528) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004206a4(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_004206a4(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004206a4(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_00420380(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x20) != 0)) {
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
    pcVar1 = (char *)FUN_004211cc(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042051c  FUN_0042051c   (284 bytes)   [unnamed]
int __cdecl FUN_0042051c(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_00432528) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 8) != 0) {
        FUN_0042010c(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_00420708(param_1,param_2,param_3);
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
          iVar2 = FUN_00420708(param_1,local_20c,(int)pcVar3 - (int)local_20c);
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
    local_c = FUN_004211cc(-6);
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420638  FUN_00420638   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_00420638(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042064c  FUN_0042064c   (56 bytes)   [unnamed]
int __stdcall FUN_0042064c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00432078;
  iVar2 = (*(int *)&DAT_00432528);
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_0042088c(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420684  FUN_00420684   (29 bytes)   [unnamed]
void __cdecl FUN_00420684(byte param_1,int *param_2)

{
  param_2[2] = param_2[2] + -1;
  FUN_004213e4(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004206a4  FUN_004206a4   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_004206a4(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004206ec  FUN_004206ec   (25 bytes)   [unnamed]
void __cdecl FUN_004206ec(uint param_1,char *param_2,char *param_3)

{
  FUN_004203ec(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420708  FUN_00420708   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_00420708(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,param_3,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420750  FUN_00420750   (25 bytes)   [unnamed]
void __cdecl FUN_00420750(uint param_1,char *param_2,uint param_3)

{
  FUN_0042051c(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042076c  thunk → FUN_0041ffa0   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl thunk_FUN_0041ffa0(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00421230();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_004337d4 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420774  FUN_00420774   (125 bytes)   [unnamed]
undefined4 __cdecl FUN_00420774(int *param_1,int param_2,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    free();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_00433834 = &LAB_00422208;
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
// 0x004207f4  thunk → FUN_0041ffdc   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_0041ffdc(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00434d98 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  (&DAT_0043252c)[param_1] = 0;
  *(undefined4 *)(&DAT_00434d98 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004207fc  FUN_004207fc   (142 bytes)   [unnamed]
undefined4 __cdecl FUN_004207fc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_0042088c(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        free();
      }
    }
    uVar1 = FUN_0041ffdc((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      pcVar3 = FUN_004214fc((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_004217c8(pcVar3);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042088c  FUN_0042088c   (127 bytes)   [unnamed]
undefined4 __cdecl FUN_0042088c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_0042090c();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      uVar3 = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - uVar3;
      *param_1 = param_1[1];
      uVar2 = FUN_0042051c((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],uVar3);
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
// 0x0042090c  FUN_0042090c   (90 bytes)   [unnamed]
int __stdcall FUN_0042090c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00432078;
  iVar5 = (*(int *)&DAT_00432528);
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      uVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - uVar4;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_0042051c((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],uVar4);
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
// 0x00420968  FUN_00420968   (13 bytes)   [unnamed]
void __cdecl FUN_00420968(undefined *param_1)

{
  PTR_DAT_004325f8 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420978  FUN_00420978   (19 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00420978(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_00432074 = *param_1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042098c  FUN_0042098c   (217 bytes)   [unnamed]
uint __cdecl FUN_0042098c(char *param_1,uint *param_2,undefined4 *param_3)

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
    uVar2 = uVar2 | *(uint *)PTR_DAT_004325f8 & 0xc000;
    if ((*(uint *)PTR_DAT_004325f8 & 0x8000) != 0) {
      uVar3 = uVar3 | 0x40;
    }
  }
  PTR_FUN_00433838 = &LAB_004221d8;
  *param_2 = uVar2;
  *param_3 = local_8;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a68  FUN_00420a68   (169 bytes)   [unnamed]
int * __cdecl FUN_00420a68(int *param_1,LPCSTR param_2,char *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_0042098c(param_3,&local_8,&local_c);
  *(short *)((int)param_1 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_00420ab3:
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1 = (int *)0x0;
  }
  else {
    if (*(char *)((int)param_1 + 0x16) < '\0') {
      iVar2 = FUN_00420184(param_2,local_8 | param_4,local_c);
      *(char *)((int)param_1 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_00420ab3;
    }
    if ((*(byte *)((int)&DAT_0043252c + *(char *)((int)param_1 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x200;
    }
    iVar2 = setvbuf(param_1,0,(uint)((*(byte *)((int)param_1 + 0x13) & 2) != 0),0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    else {
      FUN_004207fc(param_1);
      param_1 = (int *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b14  FUN_00420b14   (42 bytes)   [unnamed]
undefined4 * __stdcall FUN_00420b14(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00432078;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00432078 + (*(int *)&DAT_00432528) * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b40  fopen   (41 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004deb10.
int * __cdecl fopen(LPCSTR param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_00420b14();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00420a68(piVar1,param_1,param_2,0);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b6c  FUN_00420b6c   (34 bytes)   [unnamed]
void __cdecl FUN_00420b6c(undefined4 param_1,byte *param_2)

{
  FUN_00421894(FUN_00420b90,param_1,param_2,0,0,(uint *)&GHIDRA_STACK(0x0000000c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b90  FUN_00420b90   (212 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_00420b90(byte *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    uVar3 = param_3[3];
    if ((uVar3 == 0) || (uVar3 < param_2)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_0042088c(param_3), iVar2 == 0)))) {
        uVar3 = FUN_0042051c((int)*(char *)((int)param_3 + 0x16),(char *)param_1,param_2);
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
          iVar2 = FUN_0042088c(param_3);
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
      uVar1 = FUN_004213e4(*param_1,param_3);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c6c  FUN_00420c6c   (303 bytes)   [unnamed]
char * __cdecl FUN_00420c6c(char *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  char *unaff_ESI;
  char *pcVar5;
  char *local_c;
  uint local_8;
  
  local_c = param_1;
  if (param_3[3] != 0) {
LAB_00420c8b:
    if (param_2 == (char *)0x0) {
      return unaff_ESI;
    }
    do {
      pcVar3 = (char *)param_3[2];
      if (pcVar3 != (char *)0x0) {
        pcVar5 = param_2;
        if (pcVar3 < param_2) {
          pcVar5 = pcVar3;
        }
        memcpy((undefined4 *)local_c,(undefined4 *)*param_3,(uint)pcVar5);
        *param_3 = (int)(pcVar5 + *param_3);
        param_3[2] = param_3[2] - (int)pcVar5;
        if (param_2 == pcVar5) {
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar5;
        param_2 = param_2 + -(int)pcVar5;
      }
      if ((char *)param_3[3] <= param_2) {
        pcVar5 = param_2 + -((uint)param_2 % (uint)param_3[3]);
        pcVar3 = FUN_004203ec((int)*(char *)((int)param_3 + 0x16),local_c,pcVar5);
        if (param_2 == pcVar3) {
          return unaff_ESI;
        }
        if (pcVar3 == (char *)0xffffffff) {
          *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x10;
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar3;
        param_2 = param_2 + -(int)pcVar3;
        if (pcVar5 != pcVar3) goto code_r0x00420d18;
      }
      uVar4 = FUN_004212fc(param_3);
      if (uVar4 == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        return unaff_ESI;
      }
      GH_PIECE(local_8, 0, undefined1) = (char)uVar4;
      *local_c = (char)local_8;
      local_c = local_c + 1;
      param_2 = param_2 + -1;
      if (param_2 == (char *)0x0) {
        return unaff_ESI;
      }
    } while( true );
  }
  for (; param_2 != (char *)0x0; param_2 = param_2 + -1) {
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_8 = FUN_004212e4(param_3);
    }
    else {
      pbVar2 = (byte *)*param_3;
      *param_3 = *param_3 + 1;
      local_8 = (uint)*pbVar2;
    }
    if (local_8 == 0xffffffff) break;
    *local_c = (char)local_8;
    local_c = local_c + 1;
  }
  if (local_8 == 0xffffffff) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
  }
  return unaff_ESI;
code_r0x00420d18:
  if (((*(byte *)((int)param_3 + 0x12) & 0x40) != 0) || (pcVar3 == (char *)0x0)) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
    return unaff_ESI;
  }
  goto LAB_00420c8b;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420d9c  FUN_00420d9c   (51 bytes)   [unnamed]
uint __cdecl FUN_00420d9c(char *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    pcVar2 = FUN_00420c6c(param_1,(char *)(param_2 * param_3),param_4);
    uVar1 = (uint)(param_2 * param_3 - (int)param_4) / (uint)pcVar2;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420dd0  FUN_00420dd0   (90 bytes)   [unnamed]
int __cdecl FUN_00420dd0(undefined4 *param_1)

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
// 0x00420e2c  fseek   (97 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004dedd8.
undefined4 __cdecl fseek(int *param_1,LONG param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  iVar1 = FUN_0042088c(param_1);
  if (iVar1 == 0) {
    if ((param_3 == 1) && (0 < param_1[2])) {
      iVar1 = FUN_00420dd0(param_1);
      param_2 = param_2 - iVar1;
    }
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe5f;
    param_1[2] = 0;
    *param_1 = param_1[1];
    DVar3 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),param_2,param_3);
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
// 0x00420e90  FUN_00420e90   (126 bytes)   [unnamed]
DWORD __cdecl FUN_00420e90(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),0,1);
  if (DVar1 != 0xffffffff) {
    if ((int)param_1[2] < 0) {
      DVar2 = DVar1;
      if ((*(byte *)((int)&DAT_0043252c + *(char *)((int)param_1 + 0x16) * 4 + 1) & 8) != 0) {
        DVar2 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),0,2);
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar1 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),DVar1,0);
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_00420dd0(param_1);
      DVar1 = DVar2 + iVar3;
    }
    else {
      iVar3 = FUN_00420dd0(param_1);
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420f10  FUN_00420f10   (64 bytes)   [unnamed]
int __cdecl FUN_00420f10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_0043252c; (iVar1 < (*(int *)&DAT_00432528) && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == (*(int *)&DAT_00432528)) {
    return -1;
  }
  (&DAT_0043252c)[iVar1] = param_2;
  *(undefined4 *)(&DAT_00434d98 + iVar1 * 4) = param_1;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420f50  FUN_00420f50   (104 bytes)   [unnamed]
uint __cdecl FUN_00420f50(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_0043252c; ((int)param_2 < (int)DAT_00432528 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00432528) && (param_2 < DAT_00432528)) {
    if (((&DAT_0043252c)[param_1] != 0) && ((&DAT_0043252c)[param_2] == 0)) {
      (&DAT_0043252c)[param_2] = (&DAT_0043252c)[param_1];
      *(undefined4 *)(&DAT_00434d98 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420fb8  FUN_00420fb8   (25 bytes)   [unnamed]
void __cdecl FUN_00420fb8(uint param_1)

{
  if (param_1 < DAT_00432528) {
    (&DAT_0043252c)[param_1] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420fd4  FUN_00420fd4   (154 bytes)   [unnamed]
int __cdecl FUN_00420fd4(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint *local_c;
  int local_8;
  
  iVar2 = (*(int *)&DAT_00432528);
  for (piVar4 = &(*(int *)&DAT_00432528) + (*(int *)&DAT_00432528); (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
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
    local_c = &DAT_0043252c;
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
    memcpy((undefined4 *)pbVar5,(undefined4 *)&DAT_00434d98,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421070  FUN_00421070   (345 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00421070(void)

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
  
  UVar2 = SetHandleCount(DAT_00432528);
  if (UVar2 < DAT_00432528) {
    DAT_00432528 = UVar2;
  }
  PTR_FUN_0043206c = (undefined*)FUN_00420fd4;
  bVar1 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_0043252c;
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
      puVar4 = &DAT_0043252c + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_00432528; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_0041ee00((undefined4 *)&DAT_00434d98,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_00434d98 = GetStdHandle(0xfffffff6);
    DAT_00434d9c = GetStdHandle(0xfffffff5);
    _DAT_00434da0 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_0043252c;
    do {
      bVar1 = FUN_004200c4(uVar7);
      if ((CONCAT31(extraout_var,bVar1) == 0) && (DAT_004339cc == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_004339cc != 0) {
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
// 0x004211cc  FUN_004211cc   (68 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004211cc(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_004327f8) {
      (*(int *)&_DAT_004337d4) = -param_1;
      _DAT_00434e60 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_004211e2;
  param_1 = 1;
LAB_004211e2:
  _DAT_00434e60 = param_1;
  (*(int *)&_DAT_004337d4) = (int)(char)(&DAT_004325fc)[param_1];
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421230  FUN_00421230   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_00421230(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetLastError();
  uVar2 = FUN_004211cc(DVar1 & 0xffff);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421244  FUN_00421244   (52 bytes)   [unnamed]
void __stdcall FUN_00421244(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_00432078;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_0042088c(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421278  FUN_00421278   (108 bytes)   [unnamed]
undefined4 __cdecl FUN_00421278(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_00421244();
  }
  *param_1 = (char *)param_1[1];
  pcVar1 = FUN_004203ec((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],(char *)param_1[3]);
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
// 0x004212e4  FUN_004212e4   (22 bytes)   [unnamed]
uint __cdecl FUN_004212e4(int *param_1)

{
  uint uVar1;
  
  param_1[2] = param_1[2] + 1;
  uVar1 = FUN_004212fc(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004212fc  FUN_004212fc   (230 bytes)   [unnamed]
uint __cdecl FUN_004212fc(int *param_1)

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
    DAT_00434e64 = *pbVar1;
    return (uint)*pbVar1;
  }
  if (((param_1[2] < 0) || ((*(ushort *)((int)param_1 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)param_1 + 0x12) & 1) == 0)) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x80;
  if (param_1[3] != 0) {
    iVar2 = FUN_00421278(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_00434e64 = *pbVar1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_00421244();
  }
  pcVar3 = FUN_004203ec((int)*(char *)((int)param_1 + 0x16),(char *)&DAT_00434e64,(char *)0x1);
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_0042003c((int)*(char *)((int)param_1 + 0x16));
    if (uVar4 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
  return (uint)DAT_00434e64;
}

// ----------------------------------------------------------------------------------------------------
// 0x004213e4  FUN_004213e4   (272 bytes)   [unnamed]
uint __cdecl FUN_004213e4(byte param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char local_6 [2];
  
  if (param_2[2] < -1) {
    memcpy((undefined4 *)*param_2,(undefined4 *)local_6,1);
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + 1;
    if ((((*(byte *)((int)param_2 + 0x12) & 8) != 0) && ((param_1 == 10 || (param_1 == 0xd)))) &&
       (iVar1 = FUN_0042088c(param_2), iVar1 != 0)) {
      return 0xffffffff;
    }
    uVar2 = (uint)param_1;
  }
  else if (((*(ushort *)((int)param_2 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)param_2 + 0x12) & 2) != 0)) {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x100;
    if (param_2[3] == 0) {
      iVar1 = FUN_0042051c((int)*(char *)((int)param_2 + 0x16),local_6,1);
      if ((iVar1 == 1) || ((*(byte *)((int)param_2 + 0x13) & 2) != 0)) {
        uVar2 = (uint)param_1;
      }
      else {
        *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((param_2[2] != 0) && (iVar1 = FUN_0042088c(param_2), iVar1 != 0)) {
        return 0xffffffff;
      }
      param_2[2] = -param_2[3];
      memcpy((undefined4 *)*param_2,(undefined4 *)local_6,1);
      param_2[2] = param_2[2];
      *param_2 = *param_2 + 1;
      if (((*(byte *)((int)param_2 + 0x12) & 8) != 0) &&
         (((param_1 == 10 || (param_1 == 0xd)) && (iVar1 = FUN_0042088c(param_2), iVar1 != 0)))) {
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
// 0x004214f4  thunk → FUN_0042010c   (5 bytes)   [unnamed]
DWORD __cdecl thunk_FUN_0042010c(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00432528) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_004211cc(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00421230();
    }
  }
  else {
    DVar1 = FUN_004211cc(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004214fc  FUN_004214fc   (79 bytes)   [unnamed]
char * __cdecl FUN_004214fc(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_00434e6a;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00432728 /* "TMP" */;
  }
  pcVar1 = (char *)FUN_0041f36c(param_1,param_2);
  FUN_00424f68((uint)param_3,pcVar1,uVar2);
  FUN_0041eef0(param_1,&DAT_0043272c /* ".$$$" */);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042154c  FUN_0042154c   (65 bytes)   [unnamed]
char * __cdecl FUN_0042154c(char *param_1,ushort *param_2)

{
  int iVar1;
  
  do {
    *param_2 = *param_2 + 1;
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    param_1 = FUN_004214fc(param_1,(char *)0x0,*param_2);
    iVar1 = thunk_FUN_0041ffa0(param_1,0);
  } while (iVar1 == 0);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421590  FUN_00421590   (78 bytes)   [unnamed]
undefined4 __cdecl FUN_00421590(uint *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    pcVar2 = strlen(param_1);
    pcVar3 = (char *)FUN_00420b90((byte *)param_1,(uint)pcVar2,(int*)&DAT_00432090);
    if ((pcVar2 == pcVar3) && (uVar4 = FUN_004213e4(10,(int*)&DAT_00432090), uVar4 == 10)) {
      return 10;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004215e0  thunk → FUN_004203ec   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004203ec(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00432528) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004206a4(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_004206a4(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004206a4(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_00420380(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x20) != 0)) {
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
    pcVar1 = (char *)FUN_004211cc(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004215e8  setvbuf   (77 bytes)   [analysis (usage pattern) (matched TEA.exe)]
//   identical body to TEA.exe 0x004e02cc.
undefined4 __cdecl setvbuf(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((((char)param_1 == *(char *)((int)param_1 + 0x17)) && (param_3 < 3)) && (param_4 < 0x80000000)
     ) {
    if (param_1[2] != 0) {
      fseek(param_1,0,1);
    }
    uVar1 = FUN_00420774(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421638  FUN_00421638   (40 bytes)   [unnamed]
uint __cdecl FUN_00421638(undefined4 *param_1,uint param_2,int *param_3)

{
  memcpy((undefined4 *)*param_3,param_1,param_2);
  *param_3 = *param_3 + param_2;
  *(undefined1 *)*param_3 = 0;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421660  FUN_00421660   (40 bytes)   [unnamed]
void __cdecl FUN_00421660(undefined1 *param_1,byte *param_2)

{
  *param_1 = 0;
  FUN_00421894(FUN_00421638,&param_1,param_2,0,0,(uint *)&GHIDRA_STACK(0x0000000c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421688  FUN_00421688   (40 bytes)   [unnamed]
void __cdecl FUN_00421688(undefined1 *param_1,byte *param_2,uint *param_3)

{
  *param_1 = 0;
  FUN_00421894(FUN_00421638,&param_1,param_2,0,0,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217c8  FUN_004217c8   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004217c8(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00421230();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217e4  FUN_004217e4   (69 bytes)   [unnamed]
void __cdecl FUN_004217e4(int param_1)

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
// 0x0042182c  FUN_0042182c   (52 bytes)   [unnamed]
void __cdecl FUN_0042182c(undefined1 param_1,int param_2)

{
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_004217e4(param_2);
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
// 0x00421860  FUN_00421860   (52 bytes)   [unnamed]
void __cdecl FUN_00421860(uint param_1,int param_2)

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
// 0x00421894  FUN_00421894   (2256 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_00421894(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6)

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
LAB_004218dc:
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
switchD_0042197d_default:
        pbVar13 = param_3;
        bVar1 = false;
        bVar10 = *pbVar13;
        param_3 = pbVar13 + 1;
        local_18 = pbVar12;
        if (((char)bVar10 < ' ') || ('\x7f' < (char)bVar10)) goto switchD_0042197d_caseD_15;
        switch((&DAT_00432bc6)[(byte)(bVar10 - 0x20)]) {
        case 0:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0042197d_caseD_15;
          if (local_d != 0x2b) {
            local_d = bVar10;
          }
          goto switchD_0042197d_default;
        case 1:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0042197d_caseD_15;
          bVar2 = true;
          goto switchD_0042197d_default;
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
            if (uVar5 != 4) goto switchD_0042197d_caseD_15;
            uVar5 = 5;
            local_c = local_34;
          }
          goto switchD_0042197d_default;
        case 3:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_0042197d_caseD_15;
          bVar3 = true;
          goto switchD_0042197d_default;
        case 4:
          local_18 = pbVar12;
          if (3 < uVar5) goto switchD_0042197d_caseD_15;
          uVar5 = 4;
          local_c = local_c + 1;
          goto switchD_0042197d_default;
        case 5:
          goto switchD_0042197d_caseD_5;
        case 6:
          uVar14 = uVar14 | 0x10;
          uVar5 = 5;
          goto switchD_0042197d_default;
        case 7:
          uVar5 = 5;
          uVar14 = uVar14 & 0xffffffef;
          bVar4 = true;
          goto switchD_0042197d_default;
        case 8:
          uVar5 = 5;
          uVar14 = 0x200;
          goto switchD_0042197d_default;
        case 9:
          if (uVar5 == 0) {
            if (!bVar3) {
              bVar15 = true;
              uVar5 = 1;
            }
          }
          else {
switchD_0042197d_caseD_5:
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
              if (uVar5 != 4) goto switchD_0042197d_caseD_15;
              local_c = local_c * 10 + (int)cVar11;
            }
          }
          goto switchD_0042197d_default;
        case 10:
          goto switchD_0042197d_caseD_a;
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
          FUN_00421860((uint)local_1c,(int)local_bc);
          local_b4 = 0;
          local_1c = (uint *)local_bc;
          goto LAB_00421f0c;
        case 0xf:
          local_1c = (uint *)(local_bc + 1);
          thunk_FUN_00424c2c();
          param_6 = (uint *)thunk_FUN_00424c2c();
          goto LAB_00421f0c;
        case 0x10:
          goto switchD_0042197d_caseD_10;
        case 0x11:
          goto switchD_0042197d_caseD_11;
        case 0x12:
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_0042197d_caseD_10:
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
          goto LAB_00421f7a;
        case 0x13:
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_0042197d_caseD_11:
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
              local_1c = (uint *)&DAT_00432bb8;
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
          goto LAB_00421f7a;
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
          goto LAB_004218dc;
        case 0x15:
        case 0x16:
        case 0x17:
          goto switchD_0042197d_caseD_15;
        case 0x18:
          uVar5 = 5;
          goto switchD_0042197d_default;
        case 0x19:
          uVar5 = 5;
          goto switchD_0042197d_default;
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
          goto switchD_0042197d_default;
        }
        local_d = 0;
        cVar11 = '\0';
        goto LAB_00421bf8;
      }
      param_3 = pbVar12 + 2;
      bVar10 = 0x25;
    }
    if ((((&DAT_00434e79)[bVar10] & 4) != 0) && (*param_3 != 0)) {
      FUN_0042182c(bVar10,(int)local_524);
      bVar10 = *param_3;
      param_3 = param_3 + 1;
    }
    FUN_0042182c(bVar10,(int)local_524);
    goto LAB_004218dc;
  }
  goto LAB_004221a8;
switchD_0042197d_caseD_a:
  local_3c = 10;
  cVar11 = '\x01';
LAB_00421bf8:
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
    FUN_00424cdc(local_2c,local_28,(char *)local_1c,local_3c,cVar11,local_21);
  }
  if ((int)local_c < 0) {
LAB_00421f0c:
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
LAB_00421f7a:
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
      FUN_0042182c(0x20,(int)local_524);
      local_8 = local_8 - 1;
    } while ((int)local_44 < (int)local_8);
  }
  if (bVar1) {
    FUN_0042182c(0x30,(int)local_524);
    FUN_0042182c(bVar10,(int)local_524);
  }
  if (0 < local_14) {
    local_44 = local_44 + -local_14;
    local_8 = local_8 - local_14;
    if ((((byte)*local_1c == 0x2d) || ((byte)*local_1c == 0x20)) || ((byte)*local_1c == 0x2b)) {
      uVar14 = *local_1c;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_0042182c((byte)uVar14,(int)local_524);
      local_44 = local_44 + -1;
      local_8 = local_8 - 1;
    }
    while (iVar7 = local_14 + -1, bVar15 = local_14 != 0, local_14 = iVar7, bVar15) {
      FUN_0042182c(0x30,(int)local_524);
    }
  }
  if (local_20 != 0) {
    local_48 = local_1c;
    local_50 = (char *)0x0;
    local_58 = local_44;
    while (pcVar6 = local_58 + -1, bVar15 = 0 < (int)local_58, local_58 = pcVar6, bVar15) {
      uVar14 = *local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_00424430(local_5a,(ushort)uVar14);
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
      FUN_0042182c((byte)uVar14,(int)local_524);
    }
    local_44 = (char *)0xffffffff;
  }
  while (uVar14 = local_8 - 1, bVar15 = 0 < (int)local_8, local_8 = uVar14, bVar15) {
    FUN_0042182c(0x20,(int)local_524);
  }
  goto LAB_004218dc;
switchD_0042197d_caseD_15:
  while( true ) {
    pbVar12 = local_18 + 1;
    bVar10 = *local_18;
    local_18 = pbVar12;
    if (bVar10 == 0) break;
    FUN_0042182c(bVar10,(int)local_524);
  }
LAB_004221a8:
  FUN_004217e4((int)local_524);
  if (local_4c4 != 0) {
    local_4c8 = 0xffffffff;
  }
  return local_4c8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004221d0  thunk → FUN_0042051c   (5 bytes)   [unnamed]
int __cdecl thunk_FUN_0042051c(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_20c [512];
  int iStack_c;
  int iStack_8;
  
  if (param_1 < DAT_00432528) {
    if (param_3 + 1 < 2) {
      iStack_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 8) != 0) {
        FUN_0042010c(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 1) & 0x40) == 0) {
        iStack_c = FUN_00420708(param_1,param_2,param_3);
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
          iVar2 = FUN_00420708(param_1,acStack_20c,(int)pcVar3 - (int)acStack_20c);
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
    iStack_c = FUN_004211cc(-6);
  }
  return iStack_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422230  FUN_00422230   (707 bytes)   [unnamed]
char * __cdecl FUN_00422230(char *param_1,char *param_2,uint param_3)

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
          FUN_0041eef0(param_2,&DAT_00432e6b /* "%+0I" */);
          param_1 = param_1 + 1;
        }
        else {
          FUN_0041eef0(param_2,&DAT_00432e70);
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
            FUN_0041eef0(param_2,&DAT_00432e9c);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_0041eef0(param_2,&DAT_00432e9f /* "%+0m" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_0041eef0(param_2,&DAT_00432ea4);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_0041eef0(param_2,&DAT_00432ea7);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_004224d2;
          if (param_1[1] == 'H') {
            FUN_0041eef0(param_2,&DAT_00432e83 /* "%+0H" */);
            param_1 = param_1 + 1;
          }
          else {
            FUN_0041eef0(param_2,&DAT_00432e88);
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
            FUN_0041eef0(param_2,&DAT_00432e8e);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_0041eef0(param_2,&DAT_00432e91 /* "%+0d" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_0041eef0(param_2,&DAT_00432e96);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_0041eef0(param_2,&DAT_00432e99);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_0041eef0(param_2,&DAT_00432e68);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_004224d2:
          FUN_0041efdc(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_0041eef0(param_2,&DAT_00432e73 /* "%+0M" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e78);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_0041eef0(param_2,&DAT_00432e7b /* "%+0S" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e80);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e8b);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_004224d2;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_0041eef0(param_2,&DAT_00432eaa);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_0041eef0(param_2,&DAT_00432ead /* "%+0y" */);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_0041eef0(param_2,&DAT_00432eb2);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004224f4  FUN_004224f4   (81 bytes)   [unnamed]
undefined4 __cdecl FUN_004224f4(int param_1)

{
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0043330c + 0x18) + 8);
    }
    if (param_1 == 0xe) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0043330c + 0x18) + 4);
    }
    if (param_1 == 0xf) {
      return **(undefined4 **)(PTR_DAT_0043330c + 0x18);
    }
  }
  else {
    if (param_1 == 0x50) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0043330c + 0x18) + 0xc);
    }
    if (param_1 == 0x51) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0043330c + 0x18) + 0x10);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422548  FUN_00422548   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00422548(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x104);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00422560  FUN_00422560   (18 bytes)   [unnamed]
bool __cdecl FUN_00422560(uint param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422574  FUN_00422574   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00422574(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x100);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042258c  FUN_0042258c   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0042258c(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x20);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004225a0  FUN_004225a0   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004225a0(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,4);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004225b4  FUN_004225b4   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_004225b4(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x194);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004225cc  FUN_004225cc   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004225cc(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,2);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004225e0  FUN_004225e0   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_004225e0(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x1d4);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004225f8  FUN_004225f8   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004225f8(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x10);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042260c  FUN_0042260c   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0042260c(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,8);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00422620  FUN_00422620   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00422620(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,1);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00422634  FUN_00422634   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00422634(uint param_1)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00422750(param_1,0x80);
  return CONCAT22(extraout_var,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042264c  FUN_0042264c   (23 bytes)   [unnamed]
void __cdecl FUN_0042264c(ushort param_1)

{
  FUN_00422794((uint)param_1,0x104);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422664  FUN_00422664   (20 bytes)   [unnamed]
bool __cdecl FUN_00422664(ushort param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422678  FUN_00422678   (23 bytes)   [unnamed]
void __cdecl FUN_00422678(ushort param_1)

{
  FUN_00422794((uint)param_1,0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422690  FUN_00422690   (20 bytes)   [unnamed]
void __cdecl FUN_00422690(ushort param_1)

{
  FUN_00422794((uint)param_1,0x20);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226a4  FUN_004226a4   (20 bytes)   [unnamed]
void __cdecl FUN_004226a4(ushort param_1)

{
  FUN_00422794((uint)param_1,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226b8  FUN_004226b8   (23 bytes)   [unnamed]
void __cdecl FUN_004226b8(ushort param_1)

{
  FUN_00422794((uint)param_1,0x194);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226d0  FUN_004226d0   (20 bytes)   [unnamed]
void __cdecl FUN_004226d0(ushort param_1)

{
  FUN_00422794((uint)param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226e4  FUN_004226e4   (23 bytes)   [unnamed]
void __cdecl FUN_004226e4(ushort param_1)

{
  FUN_00422794((uint)param_1,0x1d4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226fc  FUN_004226fc   (20 bytes)   [unnamed]
void __cdecl FUN_004226fc(ushort param_1)

{
  FUN_00422794((uint)param_1,0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422710  FUN_00422710   (20 bytes)   [unnamed]
uint __cdecl FUN_00422710(ushort param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00422794((uint)param_1,8);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422724  FUN_00422724   (20 bytes)   [unnamed]
void __cdecl FUN_00422724(ushort param_1)

{
  FUN_00422794((uint)param_1,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422738  FUN_00422738   (23 bytes)   [unnamed]
void __cdecl FUN_00422738(ushort param_1)

{
  FUN_00422794((uint)param_1,0x80);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422750  FUN_00422750   (67 bytes)   [unnamed]
ushort __cdecl FUN_00422750(uint param_1,ushort param_2)

{
  if (0xff < param_1) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_0043330c + 8) == 0) && (*(int *)(PTR_DAT_0043330c + 0x10) != 0)) {
    return param_2 & *(ushort *)(*(int *)(PTR_DAT_0043330c + 0x10) + 2 + param_1 * 2);
  }
  return *(ushort *)(&DAT_00432c2a + (short)param_1 * 2) & param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422794  FUN_00422794   (85 bytes)   [unnamed]
uint __cdecl FUN_00422794(WCHAR param_1,uint param_2)

{
  uint uVar1;
  ushort local_6;
  
  uVar1 = param_2;
  if (param_1 == L'\xffff') {
    uVar1 = 0;
  }
  else if ((*(int *)(PTR_DAT_0043330c + 8) == 0) || (L'ÿ' < param_1)) {
    GetStringTypeW(1,&param_1,1,&local_6);
    uVar1 = local_6 & uVar1;
  }
  else {
    uVar1 = *(ushort *)(&DAT_00432c2a + (short)param_1 * 2) & param_2;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004227ec  FUN_004227ec   (173 bytes)   [unnamed]
undefined4 __cdecl FUN_004227ec(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_0042289c(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)malloc();
    FUN_0042460c((LPSTR)puVar1,param_2,0x1000);
    FUN_0042289c(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_0043330c != &DAT_004332e0) {
      pcVar2 = strlen(*(uint **)(PTR_DAT_0043330c + 0x24));
      pWVar3 = (LPWSTR)FUN_00415610();
      *(LPWSTR *)(PTR_DAT_0043330c + 0x28) = pWVar3;
      FUN_004244a4(pWVar3,*(uint **)(PTR_DAT_0043330c + 0x24),(char *)((int)pcVar2 * 2));
    }
    free();
  }
  return *(undefined4 *)(PTR_DAT_0043330c + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042289c  FUN_0042289c   (1223 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
undefined4 __cdecl FUN_0042289c(ushort param_1,uint *param_2)

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
    pbVar10 = (byte *)FUN_0041f144(param_2);
  }
  if ((PTR_DAT_0043330c == (undefined *)0x0) || ((undefined4 *)PTR_DAT_0043330c == &DAT_004332e0)) {
    if ((undefined4 *)PTR_DAT_0043330c == &DAT_004332e0) {
      local_10 = 1;
    }
    PTR_DAT_0043330c = (undefined *)calloc(1,0x2c);
    if ((undefined4 *)PTR_DAT_0043330c == (undefined4 *)0x0) {
      SetLastError(0xe);
      free();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_0043330c + 0x24) != 0) {
    free();
    *(undefined4 *)(PTR_DAT_0043330c + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)"LC_MONETARY");
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)"LC_NUMERIC");
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)"LC_TIME");
        }
        if ((param_1 & 1) == 1) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)"LC_COLLATE");
        }
        if ((param_1 & 2) == 2) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)"LC_CTYPE");
        }
        free();
        FUN_0042417c();
        return *(undefined4 *)(PTR_DAT_0043330c + 0x24);
      }
      FUN_00423200((int)PTR_DAT_0043330c);
      free();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    else {
      local_14 = GetUserDefaultLCID();
      GetLocaleInfoA(local_14,0xb,local_c,7);
      iVar7 = FUN_00424b58(local_c);
      puVar2 = PTR_DAT_0043330c;
      *(int *)PTR_DAT_0043330c = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_0041f2b0((char *)param_2,"en_US");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_0041f2b0((char *)param_2,"en_GB");
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_0041f2b0((char *)param_2,"fr_FR");
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_0041f2b0((char *)param_2,"de_DE");
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_0043315b;
            local_18 = FUN_0041ef2c((char *)param_2,'.');
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
          *(undefined4 *)pbVar10 = DAT_00433151;
          local_18 = FUN_0041ef2c((char *)param_2,'.');
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
        *(undefined4 *)pbVar10 = DAT_00433147;
        local_18 = FUN_0041ef2c((char *)param_2,'.');
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
      *(undefined4 *)pbVar10 = DAT_0043313d;
      local_18 = FUN_0041ef2c((char *)param_2,'.');
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
    puVar2 = PTR_DAT_0043330c;
    pcVar3 = &DAT_0043315f;
    puVar4 = param_2;
    do {
      if ((char)*puVar4 != *pcVar3) goto LAB_00422beb;
      bVar14 = true;
      if ((char)*puVar4 == '\0') break;
      pcVar12 = (char *)((int)puVar4 + 1);
      if (*pcVar12 != pcVar3[1]) goto LAB_00422beb;
      puVar4 = (uint *)((int)puVar4 + 2);
      pcVar3 = pcVar3 + 2;
      bVar14 = *pcVar12 == '\0';
    } while (!bVar14);
    if (bVar14) {
      FUN_00423200((int)PTR_DAT_0043330c);
      free();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    else {
LAB_00422beb:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        free();
        uVar6 = FUN_004235ac((int *)PTR_DAT_0043330c,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_0043330c + 8) = 0;
      local_14 = FUN_00422dec((int *)puVar2,pbVar10);
      if (local_14 == 0) {
        if (local_10 != 0) {
          free();
          PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
        }
        free();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_0043330c + 4) = local_14;
  free();
  BVar5 = IsValidLocale(*(LCID *)(PTR_DAT_0043330c + 4),1);
  if ((BVar5 == 0) && (*(int *)(PTR_DAT_0043330c + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_00423200((int)PTR_DAT_0043330c);
      free();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    uVar6 = 0;
  }
  else {
    SetThreadLocale(*(LCID *)(PTR_DAT_0043330c + 4));
    if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
      FUN_00423200((int)PTR_DAT_0043330c);
      iVar7 = FUN_00423044((uint *)PTR_DAT_0043330c,param_1);
      if (iVar7 == 0) {
        SetLastError(0x20000102);
        if (local_10 != 0) {
          FUN_00423200((int)PTR_DAT_0043330c);
          free();
          PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_00426638(*(UINT *)PTR_DAT_0043330c);
        if ((iVar7 == 0) && (BVar5 = GetCPInfo(*(UINT *)PTR_DAT_0043330c,&local_2c), BVar5 != 0)) {
          _DAT_004330b8 = local_2c.MaxCharSize;
          FUN_0042417c();
          uVar6 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
        }
        else {
          SetLastError(0x20000106);
          uVar6 = 0;
        }
      }
    }
    else {
      _DAT_004330b8 = 1;
      FUN_0042417c();
      uVar6 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
    }
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422dec  FUN_00422dec   (598 bytes)   [unnamed]
uint __cdecl FUN_00422dec(int *param_1,byte *param_2)

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
  puVar10 = &DAT_004330c0 /* "none" */;
  pbVar5 = local_68;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar5 = pbVar5 + 4;
  }
  bVar2 = false;
  local_18 = DAT_00433100;
  FUN_00424214(param_2);
  while ((!bVar2 && ((int)uVar9 < 0x39))) {
    local_8 = (LCID)(ushort)((ushort)uVar9 | 0x400);
    GetLocaleInfoA(local_8,0x1001,(LPSTR)local_68,0x40);
    GetLocaleInfoA(local_8,3,(LPSTR)&local_18,4);
    FUN_00424214(local_68);
    FUN_00424214((byte *)&local_18);
    pcVar4 = FUN_0041f2b0((char *)param_2,(char *)local_68);
    if (pcVar4 == (char *)0x0) {
      pbVar5 = (byte *)FUN_0041f2b0((char *)param_2,(char *)&local_18);
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
  if (((bVar2) || (pcVar4 = FUN_0041ef2c((char *)param_2,'_'), pcVar4 != (char *)0x0)) ||
     (pcVar4 = FUN_0041ef2c((char *)param_2,'.'), pcVar4 != (char *)0x0)) {
    if (!bVar2) {
      if (param_1[1] == 0) {
        LVar3 = GetSystemDefaultLangID();
        uVar9 = (uint)LVar3;
      }
      else {
        uVar9 = param_1[1] & 0x3ff;
      }
    }
    pcVar4 = FUN_0041ef2c((char *)param_2,'_');
    uVar8 = (ushort)uVar9;
    if (pcVar4 == (char *)0x0) {
      local_14 = (uint)(uVar8 | 0x400);
      local_1c = (byte *)0x0;
    }
    else {
      local_1c = (byte *)(pcVar4 + 1);
      local_20 = FUN_0041ef2c((char *)local_1c,'.');
      if (local_20 != (char *)0x0) {
        *local_20 = '\0';
      }
      local_c = 1;
      bVar2 = false;
      while ((!bVar2 && (local_c != 0))) {
        local_c = GetLocaleInfoA((uint)(ushort)((short)local_10 << 10 | uVar8),0x1002,
                                 (LPSTR)local_68,0x40);
        FUN_00424214(local_68);
        pbVar5 = local_68;
        pbVar7 = local_1c;
        do {
          if (*pbVar5 != *pbVar7) goto LAB_00422fb7;
          bVar11 = true;
          if (*pbVar5 == 0) break;
          pbVar1 = pbVar5 + 1;
          if (*pbVar1 != pbVar7[1]) goto LAB_00422fb7;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
          bVar11 = *pbVar1 == 0;
        } while (!bVar11);
        if (bVar11) {
          bVar2 = true;
          local_14 = (uint)(ushort)((short)local_10 << 10 | uVar8);
        }
        else {
LAB_00422fb7:
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
    local_1c = (byte *)FUN_0041ef2c((char *)param_2,'.');
    if (local_1c == (byte *)0x0) {
      GetLocaleInfoA(local_14,0xb,local_28,7);
      iVar6 = FUN_00424b58(local_28);
      *param_1 = iVar6;
    }
    else {
      local_1c = local_1c + 1;
      iVar6 = FUN_00424b58((char *)local_1c);
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
// 0x00423044  FUN_00423044   (444 bytes)   [unnamed]
int __cdecl FUN_00423044(uint *param_1,ushort param_2)

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
    bVar1 = FUN_00423b0c(param_1[1],(undefined2 *)param_1[5]);
    iVar3 = 0;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)"LC_MONETARY");
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
    bVar1 = FUN_00423c8c(param_1[1],(undefined4 *)param_1[8]);
    iVar4 = iVar3 * CONCAT31(extraout_var_00,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)"LC_TIME");
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
    bVar1 = FUN_004240e8(param_1[1],(undefined4 *)param_1[6]);
    iVar4 = iVar3 * CONCAT31(extraout_var_01,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)"LC_NUMERIC");
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
    iVar4 = FUN_00424170();
    iVar4 = iVar3 * iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_004237cc(param_1,(uint *)"LC_COLLATE");
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
      iVar4 = FUN_00423a24(param_1[1],*param_1,(undefined4 *)param_1[4]);
      iVar4 = iVar3 * iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = FUN_004237cc(param_1,(uint *)"LC_CTYPE");
        iVar3 = iVar4 * iVar3;
      }
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423200  FUN_00423200   (937 bytes)   [unnamed]
void __cdecl FUN_00423200(int param_1)

{
  if ((*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) &&
     (*(undefined1 **)(param_1 + 0x14) != &DAT_004331d0)) {
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) &&
     (*(undefined ***)(param_1 + 0x20) != &PTR_DAT_0043321c)) {
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) &&
     (*(undefined ***)(param_1 + 0x18) != &PTR_DAT_00433204)) {
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    free();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    free();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004235ac  FUN_004235ac   (544 bytes)   [unnamed]
undefined4 __cdecl FUN_004235ac(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  byte local_204 [256];
  char local_104 [256];
  
  uVar10 = 0;
  memset((undefined4 *)local_104,0,0x100);
  iVar3 = 0;
  do {
    if (*param_2 == '\0') {
      uVar5 = FUN_00422dec(param_1,local_204);
      param_1[1] = uVar5;
      BVar6 = IsValidLocale(param_1[1],1);
      if ((BVar6 == 0) && (param_1[2] == 0)) {
        SetLastError(0x20000103);
        uVar7 = 0;
      }
      else {
        SetThreadLocale(*(LCID *)(PTR_DAT_0043330c + 4));
        FUN_00423200((int)PTR_DAT_0043330c);
        iVar3 = FUN_00423044((uint *)PTR_DAT_0043330c,uVar10);
        if (iVar3 == 0) {
          SetLastError(0x20000102);
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
        }
      }
      return uVar7;
    }
    if (*param_2 == '=') {
      pcVar4 = local_104;
      pcVar9 = "LC_CTYPE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00423610;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00423610;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 2;
      }
LAB_00423610:
      pcVar4 = local_104;
      pcVar9 = "LC_TIME";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0042363d;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0042363d;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x20;
      }
LAB_0042363d:
      pcVar4 = local_104;
      pcVar9 = "LC_NUMERIC";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0042366a;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0042366a;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x10;
      }
LAB_0042366a:
      pcVar4 = local_104;
      pcVar9 = "LC_MONETARY";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00423697;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00423697;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 4;
      }
LAB_00423697:
      pcVar4 = local_104;
      pcVar9 = "LC_COLLATE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004236c4;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004236c4;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 1;
      }
LAB_004236c4:
      memset((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else if (*param_2 == '\n') {
      uVar5 = 0xffffffff;
      pcVar4 = local_104;
      do {
        pcVar9 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pbVar11 = (byte *)(pcVar9 + -uVar5);
      pbVar12 = local_204;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar12 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      memset((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else {
      local_104[iVar3] = *param_2;
      iVar3 = iVar3 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004237cc  FUN_004237cc   (415 bytes)   [unnamed]
undefined4 __cdecl FUN_004237cc(uint *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int cchData;
  uint uVar4;
  uint local_204 [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)local_204,0x200);
  FUN_0041eef0((char *)local_204,&DAT_004331c7);
  pcVar1 = strlen(local_204);
  cchData = 0x200 - (int)pcVar1;
  pcVar1 = strlen(local_204);
  GetLocaleInfoA(param_1[1],0x1002,pcVar1 + (int)local_204,cchData);
  FUN_0041eef0((char *)local_204,&DAT_004331c9);
  uVar4 = 10;
  pcVar1 = strlen(local_204);
  thunk_FUN_00424f88(*param_1,pcVar1 + (int)local_204,uVar4);
  if (param_1[9] == 0) {
    strlen(param_2);
    strlen(local_204);
    puVar2 = (undefined4 *)malloc();
    param_1[9] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pcVar1 = strlen(param_2);
    pcVar3 = strlen(local_204);
    memset(puVar2,0,(uint)(pcVar1 + (int)pcVar3 + 3));
  }
  else {
    strlen((uint *)param_1[9]);
    strlen(param_2);
    strlen(local_204);
    uVar4 = FUN_00415610();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_0041eef0((char *)param_1[9],(char *)param_2);
  FUN_0041eef0((char *)param_1[9],&DAT_004331cb);
  FUN_0041eef0((char *)param_1[9],(char *)local_204);
  FUN_0041eef0((char *)param_1[9],&DAT_004331cd);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042396c  FUN_0042396c   (89 bytes)   [unnamed]
undefined4 __cdecl FUN_0042396c(LCID param_1,LCTYPE param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,0);
  uVar2 = malloc();
  *param_3 = uVar2;
  if (param_3 == (undefined4 *)0x0) {
    SetLastError(0xe);
    uVar2 = 0;
  }
  else {
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,iVar1 + 1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239c8  FUN_004239c8   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_004239c8(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4)

{
  char *lpLCData;
  undefined4 uVar1;
  int iVar2;
  
  lpLCData = (char *)malloc();
  if (lpLCData == (char *)0x0) {
    SetLastError(0xe);
    uVar1 = 0;
  }
  else {
    iVar2 = GetLocaleInfoA(param_1,param_2,lpLCData,param_4 + 1);
    if (iVar2 == 0) {
      free();
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_00424b58(lpLCData);
      *param_3 = (short)iVar2;
      free();
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423a24  FUN_00423a24   (232 bytes)   [unnamed]
undefined4 __cdecl FUN_00423a24(LCID param_1,UINT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR lpSrcStr;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  BYTE *pBVar6;
  _cpinfo local_18;
  
  if (param_1 == 0) {
    memcpy(param_3,(undefined4 *)&DAT_00432c2a,0x100);
    uVar1 = 1;
  }
  else {
    lpSrcStr = (LPCSTR)malloc();
    if (lpSrcStr == (LPCSTR)0x0) {
      SetLastError(0xe);
      uVar1 = 0;
    }
    else {
      iVar2 = 0;
      pCVar5 = lpSrcStr;
      do {
        GH_WRITABLE(*pCVar5) = (CHAR)iVar2;
        pCVar5 = pCVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar3 = GetCPInfo(param_2,&local_18);
      if (BVar3 == 0) {
        free();
        uVar1 = 0;
      }
      else {
        if (1 < local_18.MaxCharSize) {
          for (pBVar6 = local_18.LeadByte; (*pBVar6 != 0 && (pBVar6[1] != 0)); pBVar6 = pBVar6 + 2)
          {
            uVar4 = (uint)*pBVar6;
            pCVar5 = lpSrcStr + uVar4;
            for (; (int)uVar4 <= (int)(uint)pBVar6[1]; uVar4 = uVar4 + 1) {
              GH_WRITABLE(*pCVar5) = '\0';
              pCVar5 = pCVar5 + 1;
            }
          }
        }
        *(undefined2 *)param_3 = 0;
        BVar3 = GetStringTypeA(param_1,1,lpSrcStr,0x100,(LPWORD)((int)param_3 + 2));
        if (BVar3 == 0) {
          free();
          uVar1 = 0;
        }
        else {
          free();
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423b0c  FUN_00423b0c   (383 bytes)   [unnamed]
bool __cdecl FUN_00423b0c(LCID param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined4 local_34 [12];
  
  ppuVar20 = &PTR_DAT_00433430;
  puVar18 = local_34;
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar1 = FUN_0042396c(param_1,0x16,(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_0042396c(param_1,0x17,(undefined4 *)(param_2 + 10));
  uVar3 = FUN_0042396c(param_1,0x14,(undefined4 *)(param_2 + 0xe));
  uVar4 = FUN_0042396c(param_1,0x15,(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_0042396c(param_1,0x18,(undefined4 *)(param_2 + 0x12));
  uVar6 = FUN_0042396c(param_1,0x50,(undefined4 *)(param_2 + 0x14));
  uVar7 = FUN_0042396c(param_1,0x51,(undefined4 *)(param_2 + 0x16));
  uVar8 = FUN_004239c8(param_1,0x19,param_2,3);
  uVar9 = FUN_004239c8(param_1,0x1a,param_2 + 1,3);
  uVar10 = FUN_004239c8(param_1,0x1b,param_2 + 2,2);
  uVar11 = FUN_004239c8(param_1,0x1c,param_2 + 3,3);
  uVar12 = FUN_004239c8(param_1,0x52,param_2 + 4,2);
  uVar13 = FUN_004239c8(param_1,0x53,param_2 + 5,3);
  uVar14 = FUN_004239c8(param_1,0x54,param_2 + 6,2);
  uVar15 = FUN_004239c8(param_1,0x55,param_2 + 7,2);
  uVar16 = FUN_004239c8(param_1,0x56,param_2 + 8,2);
  uVar17 = FUN_004239c8(param_1,0x57,param_2 + 9,2);
  puVar18 = FUN_0041f144((uint *)local_34[(short)param_2[3]]);
  *(undefined4 **)(param_2 + 0x18) = puVar18;
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
          uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c8c  FUN_00423c8c   (1116 bytes)   [unnamed]
bool __cdecl FUN_00423c8c(LCID param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 *puVar53;
  uint local_44 [16];
  
  uVar1 = FUN_0042396c(param_1,0x1d,param_2);
  uVar2 = FUN_0042396c(param_1,0x1e,param_2 + 1);
  uVar3 = FUN_0042396c(param_1,0x1003,param_2 + 2);
  uVar4 = FUN_0042396c(param_1,0x1f,param_2 + 3);
  uVar5 = FUN_0042396c(param_1,0x20,param_2 + 4);
  uVar6 = FUN_0042396c(param_1,0x28,param_2 + 5);
  uVar7 = FUN_0042396c(param_1,0x29,param_2 + 6);
  uVar8 = FUN_0042396c(param_1,0x2a,param_2 + 0xb);
  uVar9 = FUN_0042396c(param_1,0x2b,param_2 + 0xc);
  uVar10 = FUN_0042396c(param_1,0x2c,param_2 + 0xd);
  uVar11 = FUN_0042396c(param_1,0x2d,param_2 + 0xe);
  uVar12 = FUN_0042396c(param_1,0x2e,param_2 + 0xf);
  uVar13 = FUN_0042396c(param_1,0x2f,param_2 + 0x10);
  uVar14 = FUN_0042396c(param_1,0x30,param_2 + 0x11);
  uVar15 = FUN_0042396c(param_1,0x31,param_2 + 0x12);
  uVar16 = FUN_0042396c(param_1,0x32,param_2 + 0x13);
  uVar17 = FUN_0042396c(param_1,0x33,param_2 + 0x14);
  uVar18 = FUN_0042396c(param_1,0x34,param_2 + 0x15);
  uVar19 = FUN_0042396c(param_1,0x35,param_2 + 0x16);
  uVar20 = FUN_0042396c(param_1,0x36,param_2 + 0x17);
  uVar21 = FUN_0042396c(param_1,0x37,param_2 + 0x18);
  uVar22 = FUN_0042396c(param_1,0x38,param_2 + 0x19);
  uVar23 = FUN_0042396c(param_1,0x39,param_2 + 0x1a);
  uVar24 = FUN_0042396c(param_1,0x3a,param_2 + 0x1b);
  uVar25 = FUN_0042396c(param_1,0x3b,param_2 + 0x1c);
  uVar26 = FUN_0042396c(param_1,0x3c,param_2 + 0x1d);
  uVar27 = FUN_0042396c(param_1,0x3d,param_2 + 0x1e);
  uVar28 = FUN_0042396c(param_1,0x3e,param_2 + 0x1f);
  uVar29 = FUN_0042396c(param_1,0x3f,param_2 + 0x20);
  uVar30 = FUN_0042396c(param_1,0x40,param_2 + 0x21);
  uVar31 = FUN_0042396c(param_1,0x41,param_2 + 0x22);
  uVar32 = FUN_0042396c(param_1,0x42,param_2 + 0x23);
  uVar33 = FUN_0042396c(param_1,0x43,param_2 + 0x24);
  uVar34 = FUN_0042396c(param_1,0x44,param_2 + 0x25);
  uVar35 = FUN_0042396c(param_1,0x45,param_2 + 0x26);
  uVar36 = FUN_0042396c(param_1,0x46,param_2 + 0x27);
  uVar37 = FUN_0042396c(param_1,0x47,param_2 + 0x28);
  uVar38 = FUN_0042396c(param_1,0x48,param_2 + 0x29);
  uVar39 = FUN_0042396c(param_1,0x49,param_2 + 0x2a);
  uVar40 = FUN_0042396c(param_1,0x4a,param_2 + 0x2b);
  uVar41 = FUN_0042396c(param_1,0x4b,param_2 + 0x2c);
  uVar42 = FUN_0042396c(param_1,0x4c,param_2 + 0x2d);
  uVar43 = FUN_0042396c(param_1,0x4d,param_2 + 0x2e);
  uVar44 = FUN_0042396c(param_1,0x4e,param_2 + 0x2f);
  uVar45 = FUN_0042396c(param_1,0x4f,param_2 + 0x30);
  uVar46 = FUN_004239c8(param_1,0x21,(undefined2 *)(param_2 + 7),2);
  uVar47 = FUN_004239c8(param_1,0x22,(undefined2 *)((int)param_2 + 0x1e),2);
  uVar48 = FUN_004239c8(param_1,0x23,(undefined2 *)(param_2 + 8),2);
  uVar49 = FUN_004239c8(param_1,0x24,(undefined2 *)((int)param_2 + 0x22),1);
  uVar50 = FUN_004239c8(param_1,0x25,(undefined2 *)(param_2 + 9),2);
  uVar51 = FUN_004239c8(param_1,0x26,(undefined2 *)((int)param_2 + 0x26),2);
  uVar52 = FUN_004239c8(param_1,0x27,(undefined2 *)(param_2 + 10),2);
  uVar52 = uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
           uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 &
           uVar21 & uVar22 & uVar23 & uVar24 & uVar25 & uVar26 & uVar27 & uVar28 & uVar29 & uVar30 &
           uVar31 & uVar32 & uVar33 & uVar34 & uVar35 & uVar36 & uVar37 & uVar38 & uVar39 & uVar40 &
           uVar41 & uVar42 & uVar43 & uVar44 & uVar45 & uVar46 & uVar47 & uVar48 & uVar49 & uVar50 &
           uVar51 & uVar52;
  if (uVar52 != 0) {
    FUN_00422230((char *)param_2[2],(char *)local_44,0x40);
    free();
    puVar53 = FUN_0041f144(local_44);
    param_2[2] = puVar53;
    FUN_00422230((char *)param_2[3],(char *)local_44,0x40);
    free();
    puVar53 = FUN_0041f144(local_44);
    param_2[3] = puVar53;
    FUN_00422230((char *)param_2[4],(char *)local_44,0x40);
    free();
    puVar53 = FUN_0041f144(local_44);
    param_2[4] = puVar53;
  }
  return uVar52 != 0;
}

} // namespace tea
