// TSMerge.exe — runtime / library code "OWL_TDiskFileHandle"
// 23 functions, 0x0043eb7c..0x0043f1a0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043eb7c  OWL::TDiskFileHandle::~TDiskFileHandle   (181 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDiskFileHandle::_dtor
void __cdecl OWL::TDiskFileHandle::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e1d8);
  if (param_1 == 0) goto LAB_0043ec20;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0043ec10;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_0043ec10:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0043ec20:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ec34  OWL::TDiskFileHandle::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TDiskFileHandle::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ec40  OWL::TDiskFileHandle::vf2   (223 bytes)   [rtti:vtable virtual slot 2]
int __cdecl OWL::TDiskFileHandle::vf2(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e1fc);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x14) + -4);
    piVar3 = std::string::__getRep(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 0x14),uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x14);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ed20  OWL::TDiskFileHandle::vf4   (18 bytes)   [rtti:vtable virtual slot 4]
bool __cdecl OWL::TDiskFileHandle::vf4(int param_1)

{
  return *(int *)(param_1 + 4) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ee10  OWL::TDiskFileHandle::vf5   (149 bytes)   [rtti:vtable virtual slot 5]
undefined4 * __cdecl OWL::TDiskFileHandle::vf5(int param_1)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  undefined4 *in_FS_OFFSET;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL BVar1;
  DWORD dwOptions;
  HANDLE local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x46e25c);
  local_30 = (HANDLE)0x0;
  dwOptions = 2;
  BVar1 = 0;
  dwDesiredAccess = 0;
  lpTargetHandle = &local_30;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(param_1 + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,BVar1,dwOptions);
  if ((BVar1 == 0) || (local_30 == (HANDLE)0x0)) {
    local_8 = (undefined4 *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    local_8 = (undefined4 *)operator_new();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      FUN_0043eda4(local_8,local_30,*(uint **)(param_1 + 0x14),*(undefined4 *)(param_1 + 8));
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eea8  OWL::TDiskFileHandle::vf3   (10 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TDiskFileHandle::vf3(void)

{
  GetLastError();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eeb4  OWL::TDiskFileHandle::vf6   (26 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TDiskFileHandle::vf6(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
  if (BVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eed0  OWL::TDiskFileHandle::vf7   (43 bytes)   [rtti:vtable virtual slot 7]
DWORD __cdecl OWL::TDiskFileHandle::vf7(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return local_8;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eefc  OWL::TDiskFileHandle::vf8   (41 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDiskFileHandle::vf8(int param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef28  OWL::TDiskFileHandle::vf9   (61 bytes)   [rtti:vtable virtual slot 9]
undefined4 __cdecl OWL::TDiskFileHandle::vf9(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  int extraout_EDX;
  
  iVar1 = (**(code **)(*param_1 + 0x3c))();
  if ((extraout_EDX == 0) && (iVar1 == -1)) {
    return 0;
  }
  BVar2 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar2 != 0) {
    return CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef68  OWL::TDiskFileHandle::vf10   (28 bytes)   [rtti:vtable virtual slot 10]
DWORD __cdecl OWL::TDiskFileHandle::vf10(int param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef84  OWL::TDiskFileHandle::vf11   (36 bytes)   [rtti:vtable virtual slot 11]
DWORD __cdecl OWL::TDiskFileHandle::vf11(int param_1)

{
  DWORD DVar1;
  DWORD local_8;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 4),&local_8);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043efa8  OWL::TDiskFileHandle::vf12   (53 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TDiskFileHandle::vf12(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  if (iVar1 == -1) {
    return 0;
  }
  BVar2 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar2 != 0) {
    return CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043efe0  OWL::TDiskFileHandle::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
DWORD __cdecl OWL::TDiskFileHandle::vf13(int param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f000  OWL::TDiskFileHandle::vf14   (26 bytes)   [rtti:vtable virtual slot 14]
DWORD __cdecl OWL::TDiskFileHandle::vf14(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 4),(LPDWORD)0x0);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f01c  OWL::TDiskFileHandle::vf15   (54 bytes)   [rtti:vtable virtual slot 15]
DWORD __cdecl OWL::TDiskFileHandle::vf15(int param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  DWORD DVar1;
  LONG local_8;
  
  local_8 = param_3;
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),param_2,&local_8,param_4);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f054  OWL::TDiskFileHandle::vf16   (32 bytes)   [rtti:vtable virtual slot 16]
DWORD __cdecl OWL::TDiskFileHandle::vf16(int param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),param_2,(PLONG)0x0,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f074  OWL::TDiskFileHandle::vf17   (26 bytes)   [rtti:vtable virtual slot 17]
undefined4 __cdecl OWL::TDiskFileHandle::vf17(int param_1)

{
  BOOL BVar1;
  
  BVar1 = FlushFileBuffers(*(HANDLE *)(param_1 + 4));
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f090  OWL::TDiskFileHandle::vf18   (36 bytes)   [rtti:vtable virtual slot 18]
bool __cdecl OWL::TDiskFileHandle::vf18(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = LockFile(*(HANDLE *)(param_1 + 4),param_2,0,param_3,0);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f0b4  OWL::TDiskFileHandle::vf19   (36 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TDiskFileHandle::vf19(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = UnlockFile(*(HANDLE *)(param_1 + 4),param_2,0,param_3,0);
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f0d8  OWL::TDiskFileHandle::vf20   (67 bytes)   [rtti:vtable virtual slot 20]
bool __cdecl OWL::TDiskFileHandle::vf20(int param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5)

{
  BOOL BVar1;
  
  BVar1 = LockFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f11c  OWL::TDiskFileHandle::vf21   (67 bytes)   [rtti:vtable virtual slot 21]
bool __cdecl OWL::TDiskFileHandle::vf21(int param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5)

{
  BOOL BVar1;
  
  BVar1 = UnlockFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f1a0  OWL::TDiskFileHandle::vf22   (220 bytes)   [rtti:vtable virtual slot 22]
undefined4 __cdecl OWL::TDiskFileHandle::vf22(int *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  pcVar1 = FUN_004578dc((char *)(param_2 + 5),(LPCSTR)param_1[5],0x104);
  if (pcVar1 == (char *)0x0) {
    *(undefined1 *)(param_2 + 5) = 0;
    uVar2 = 0;
  }
  else {
    DVar3 = GetFileAttributesA((LPCSTR)param_1[5]);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_0043f160(DVar3);
      param_2[4] = uVar4;
      local_c.dwLowDateTime = 0;
      local_c.dwHighDateTime = 0;
      local_14.dwLowDateTime = 0;
      local_14.dwHighDateTime = 0;
      local_1c.dwLowDateTime = 0;
      local_1c.dwHighDateTime = 0;
      BVar5 = GetFileTime((HANDLE)param_1[1],&local_c,&local_14,&local_1c);
      if (BVar5 == 1) {
        puVar6 = FUN_004254bc(&local_20,&local_c);
        *param_2 = *puVar6;
        puVar6 = FUN_004254bc(&local_24,&local_1c);
        param_2[1] = *puVar6;
        puVar6 = FUN_004254bc(&local_28,&local_14);
        param_2[2] = *puVar6;
        uVar4 = (**(code **)(*param_1 + 0x38))();
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
