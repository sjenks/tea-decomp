// TSBuild.exe — runtime / library code "OWL_TDiskFileHandle"
// 25 functions, 0x00449ba8..0x0044a334. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00449ba8  OWL::TDiskFileHandle::TDiskFileHandle   (217 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDiskFileHandle's vtable at its vptr offset (+0x0) in this
/* WARNING: Removing unreachable block (ram,0x00449bfe) */
undefined4 * __cdecl OWL::TDiskFileHandle::TDiskFileHandle(undefined4 *self,uint *s,undefined4 param_3)

{
  HANDLE hFile;
  undefined4 *sehChainHead;
  uint creationDisposition;
  uint shareMode;
  uint desiredAccess;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x481ec4);
  ehContext = 8;
  *self = &OWL::TFileHandle::vftable;
  *self = &OWL::TDiskFileHandle::vftable;
  self[5] = 0;
  self[5] = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  self[2] = param_3;
  std::string::assign_cstr((int)(self + 3),s);
  desiredAccess = 0;
  shareMode = 0;
  creationDisposition = 0;
  FUN_00449b4c(&desiredAccess,&shareMode,&creationDisposition,self[2]);
  hFile = CreateFileA((LPCSTR)self[5],desiredAccess,shareMode,(LPSECURITY_ATTRIBUTES)0x0,creationDisposition,
                       0x10000000,(HANDLE)0x0);
  self[1] = hFile;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449d10  OWL::TDiskFileHandle::~TDiskFileHandle   (181 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDiskFileHandle::_dtor
void __cdecl OWL::TDiskFileHandle::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481fb4);
  if (self == 0) goto LAB_00449db4;
  if (*(int *)(self + 0x14) != 0) {
    if (*(int *)(*(int *)(self + 0x14) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x14) + -0xc);
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
      if (prevRefs != 0) goto LAB_00449da4;
    }
    operator_delete();
    *(undefined4 *)(self + 0x14) = 0;
  }
LAB_00449da4:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00449db4:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449dc8  OWL::TDiskFileHandle::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TDiskFileHandle::vf1(int self)

{
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00449dd4  OWL::TDiskFileHandle::vf2   (223 bytes)   [rtti:vtable virtual slot 2]
int __cdecl OWL::TDiskFileHandle::vf2(int self,int param_2)

{
  int refs;
  uint uVar2;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481fd8);
  *(undefined4 *)(self + 8) = 0;
  refs = *(int *)(*(int *)(param_2 + 0x14) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x14) + -4);
    rep = std::string::__getRep(self,uVar2,uVar2);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),*(undefined4 **)(param_2 + 0x14),uVar2);
  }
  else {
    *(undefined4 *)(self + 8) = *(undefined4 *)(param_2 + 0x14);
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449eb4  OWL::TDiskFileHandle::vf4   (18 bytes)   [rtti:vtable virtual slot 4]
bool __cdecl OWL::TDiskFileHandle::vf4(int self)

{
  return *(int *)(self + 4) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449f38  OWL::TDiskFileHandle::TDiskFileHandle_449f38   (105 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDiskFileHandle's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TDiskFileHandle::TDiskFileHandle_449f38(undefined4 *self,undefined4 param_2,uint *s,undefined4 param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482008);
  *self = &OWL::TFileHandle::vftable;
  *self = &OWL::TDiskFileHandle::vftable;
  self[1] = param_2;
  self[2] = param_4;
  std::string::string_from_cstr((int)(self + 3),s);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449fa4  OWL::TDiskFileHandle::vf5   (149 bytes)   [rtti:vtable virtual slot 5]
undefined4 * __cdecl OWL::TDiskFileHandle::vf5(int self)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  undefined4 *sehChainHead;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL ok;
  DWORD dwOptions;
  HANDLE local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  undefined4 *diskFileHandle;
  
  __InitExceptBlockLDTC(0x482038);
  local_30 = (HANDLE)0x0;
  dwOptions = 2;
  ok = 0;
  dwDesiredAccess = 0;
  lpTargetHandle = &local_30;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(self + 4);
  hSourceProcessHandle = GetCurrentProcess();
  ok = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,ok,dwOptions);
  if ((ok == 0) || (local_30 == (HANDLE)0x0)) {
    diskFileHandle = (undefined4 *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    diskFileHandle = (undefined4 *)operator_new();
    if (diskFileHandle != (undefined4 *)0x0) {
      ehContext = 0x14;
      OWL::TDiskFileHandle::TDiskFileHandle_449f38(diskFileHandle,local_30,*(uint **)(self + 0x14),*(undefined4 *)(self + 8));
    }
    *sehChainHead = sehPrevFrame;
  }
  return diskFileHandle;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a03c  OWL::TDiskFileHandle::vf3   (10 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TDiskFileHandle::vf3(void)

{
  GetLastError();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a048  OWL::TDiskFileHandle::vf6   (26 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TDiskFileHandle::vf6(int self)

{
  BOOL ok;
  
  ok = CloseHandle(*(HANDLE *)(self + 4));
  if (ok == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)ok >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a064  OWL::TDiskFileHandle::vf7   (43 bytes)   [rtti:vtable virtual slot 7]
DWORD __cdecl OWL::TDiskFileHandle::vf7(int self,LPVOID buffer,DWORD numberOfBytesToRead)

{
  BOOL ok;
  DWORD numberOfBytesRead;
  
  ok = ReadFile(*(HANDLE *)(self + 4),buffer,numberOfBytesToRead,&numberOfBytesRead,(LPOVERLAPPED)0x0);
  if (ok != 0) {
    return numberOfBytesRead;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a090  OWL::TDiskFileHandle::vf8   (41 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDiskFileHandle::vf8(int self,LPCVOID buffer,DWORD numberOfBytesToWrite)

{
  BOOL ok;
  DWORD numberOfBytesWritten;
  
  ok = WriteFile(*(HANDLE *)(self + 4),buffer,numberOfBytesToWrite,&numberOfBytesWritten,(LPOVERLAPPED)0x0);
  if (ok != 0) {
    return CONCAT31((int3)((uint)ok >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a0bc  OWL::TDiskFileHandle::vf9   (61 bytes)   [rtti:vtable virtual slot 9]
undefined4 __cdecl OWL::TDiskFileHandle::vf9(int *self)

{
  int iVar1;
  BOOL ok;
  int extraout_EDX;
  
  iVar1 = (**(code **)(*self + 0x3c))();
  if ((extraout_EDX == 0) && (iVar1 == -1)) {
    return 0;
  }
  ok = SetEndOfFile((HANDLE)self[1]);
  if (ok != 0) {
    return CONCAT31((int3)((uint)ok >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a0fc  OWL::TDiskFileHandle::vf10   (28 bytes)   [rtti:vtable virtual slot 10]
DWORD __cdecl OWL::TDiskFileHandle::vf10(int self)

{
  DWORD filePos;
  
  filePos = SetFilePointer(*(HANDLE *)(self + 4),0,(PLONG)0x0,1);
  return filePos;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a118  OWL::TDiskFileHandle::vf11   (36 bytes)   [rtti:vtable virtual slot 11]
DWORD __cdecl OWL::TDiskFileHandle::vf11(int self)

{
  DWORD fileSize;
  DWORD fileSizeHigh;
  
  fileSize = GetFileSize(*(HANDLE *)(self + 4),&fileSizeHigh);
  return fileSize;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a13c  OWL::TDiskFileHandle::vf12   (53 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TDiskFileHandle::vf12(int *self)

{
  int iVar1;
  BOOL ok;
  
  iVar1 = (**(code **)(*self + 0x40))();
  if (iVar1 == -1) {
    return 0;
  }
  ok = SetEndOfFile((HANDLE)self[1]);
  if (ok != 0) {
    return CONCAT31((int3)((uint)ok >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a174  OWL::TDiskFileHandle::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
DWORD __cdecl OWL::TDiskFileHandle::vf13(int self)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(self + 4),0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a194  OWL::TDiskFileHandle::vf14   (26 bytes)   [rtti:vtable virtual slot 14]
DWORD __cdecl OWL::TDiskFileHandle::vf14(int self)

{
  DWORD DVar1;
  
  DVar1 = GetFileSize(*(HANDLE *)(self + 4),(LPDWORD)0x0);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1b0  OWL::TDiskFileHandle::vf15   (54 bytes)   [rtti:vtable virtual slot 15]
DWORD __cdecl OWL::TDiskFileHandle::vf15(int self,LONG lDistanceToMove,LONG param_3,DWORD moveMethod)

{
  DWORD filePos;
  LONG distanceToMoveHigh;
  
  distanceToMoveHigh = param_3;
  filePos = SetFilePointer(*(HANDLE *)(self + 4),lDistanceToMove,&distanceToMoveHigh,moveMethod);
  return filePos;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1e8  OWL::TDiskFileHandle::vf16   (32 bytes)   [rtti:vtable virtual slot 16]
DWORD __cdecl OWL::TDiskFileHandle::vf16(int self,LONG lDistanceToMove,DWORD moveMethod)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(self + 4),lDistanceToMove,(PLONG)0x0,moveMethod);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a208  OWL::TDiskFileHandle::vf17   (26 bytes)   [rtti:vtable virtual slot 17]
undefined4 __cdecl OWL::TDiskFileHandle::vf17(int self)

{
  BOOL ok;
  
  ok = FlushFileBuffers(*(HANDLE *)(self + 4));
  if (ok != 0) {
    return CONCAT31((int3)((uint)ok >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a224  OWL::TDiskFileHandle::vf18   (36 bytes)   [rtti:vtable virtual slot 18]
bool __cdecl OWL::TDiskFileHandle::vf18(int self,DWORD fileOffsetLow,DWORD numberOfBytesToLockLow)

{
  BOOL ok;
  
  ok = LockFile(*(HANDLE *)(self + 4),fileOffsetLow,0,numberOfBytesToLockLow,0);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a248  OWL::TDiskFileHandle::vf19   (36 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TDiskFileHandle::vf19(int self,DWORD fileOffsetLow,DWORD numberOfBytesToUnlockLow)

{
  BOOL ok;
  
  ok = UnlockFile(*(HANDLE *)(self + 4),fileOffsetLow,0,numberOfBytesToUnlockLow,0);
  if (ok != 0) {
    return CONCAT31((int3)((uint)ok >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a26c  OWL::TDiskFileHandle::vf20   (67 bytes)   [rtti:vtable virtual slot 20]
bool __cdecl OWL::TDiskFileHandle::vf20(int self,DWORD fileOffsetLow,DWORD fileOffsetHigh,DWORD numberOfBytesToLockLow,DWORD numberOfBytesToLockHigh)

{
  BOOL ok;
  
  ok = LockFile(*(HANDLE *)(self + 4),fileOffsetLow,fileOffsetHigh,numberOfBytesToLockLow,numberOfBytesToLockHigh);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a2b0  OWL::TDiskFileHandle::vf21   (67 bytes)   [rtti:vtable virtual slot 21]
bool __cdecl OWL::TDiskFileHandle::vf21(int self,DWORD fileOffsetLow,DWORD fileOffsetHigh,DWORD numberOfBytesToUnlockLow,DWORD numberOfBytesToUnlockHigh)

{
  BOOL ok;
  
  ok = UnlockFile(*(HANDLE *)(self + 4),fileOffsetLow,fileOffsetHigh,numberOfBytesToUnlockLow,numberOfBytesToUnlockHigh);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a334  OWL::TDiskFileHandle::vf22   (220 bytes)   [rtti:vtable virtual slot 22]
undefined4 __cdecl OWL::TDiskFileHandle::vf22(int *self,uint *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  DWORD attributes;
  uint uVar4;
  BOOL ok;
  uint *puVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  _FILETIME fileTime;
  _FILETIME fileTime2;
  _FILETIME fileTime3;
  
  pcVar1 = FUN_00469bc4((char *)(param_2 + 5),(LPCSTR)self[5],0x104);
  if (pcVar1 == (char *)0x0) {
    *(undefined1 *)(param_2 + 5) = 0;
    uVar2 = 0;
  }
  else {
    attributes = GetFileAttributesA((LPCSTR)self[5]);
    if (attributes == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_0044a2f4(attributes);
      param_2[4] = uVar4;
      fileTime3.dwLowDateTime = 0;
      fileTime3.dwHighDateTime = 0;
      fileTime2.dwLowDateTime = 0;
      fileTime2.dwHighDateTime = 0;
      fileTime.dwLowDateTime = 0;
      fileTime.dwHighDateTime = 0;
      ok = GetFileTime((HANDLE)self[1],&fileTime3,&fileTime2,&fileTime);
      if (ok == 1) {
        puVar6 = FUN_00430650(&local_20,&fileTime3);
        *param_2 = *puVar6;
        puVar6 = FUN_00430650(&local_24,&fileTime);
        param_2[1] = *puVar6;
        puVar6 = FUN_00430650(&local_28,&fileTime2);
        param_2[2] = *puVar6;
        uVar4 = (**(code **)(*self + 0x38))();
        param_2[3] = uVar4;
        uVar2 = CONCAT31((int3)(uVar4 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

} // namespace tea
