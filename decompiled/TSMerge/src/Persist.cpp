// TSMerge.exe — application module "Persist"
// 8 functions, 0x0040ea04..0x0040ec5c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040ea04  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea30  Persist::QueryValueSized   (116 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411a4c. RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValueSized(int param_1,int param_2,int param_3)

{
  int iVar1;
  LSTATUS LVar2;
  uint auStackY_1000c [15352];
  undefined4 uStackY_102c;
  DWORD local_c [2];
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    local_c[1] = 0x10000;
    local_c[0] = 1;
    uStackY_102c = 0x40ea82;
    LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_c,
                             (LPBYTE)auStackY_1000c,local_c + 1);
    if (LVar2 == 0) {
      iVar1 = FUN_0044cf10(param_3,auStackY_1000c);
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eaa4  Persist::QueryValue   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411ac0. RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValue(int param_1,int param_2,undefined4 *param_3)

{
  LSTATUS LVar1;
  DWORD local_10 [2];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_10[1] = 4;
    local_10[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_10,
                             (LPBYTE)&local_8,local_10 + 1);
    if (LVar1 == 0) {
      *param_3 = local_8;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eaf8  FUN_0040eaf8   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040eaf8(int param_1,int param_2,int param_3)

{
  RegSetValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),0,1,*(BYTE **)(param_3 + 8),
                 *(int *)(*(BYTE **)(param_3 + 8) + -4) + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb28  FUN_0040eb28   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040eb28(int param_1,int param_2)

{
  RegSetValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),0,4,&GHIDRA_STACK(0x0000000c),4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb4c  FUN_0040eb4c   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0040eb4c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x463fdc);
  if (DAT_00463f9c != '\0') {
    Help::_dtor((int *)&DAT_004768bc,2);
    DAT_00463f9c = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb8c  FUN_0040eb8c   (137 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040eb8c(HWND param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464028);
  if (DAT_00463f9c == '\0') {
    FUN_0040ec5c((undefined4 *)&DAT_004768bc);
    DAT_00463f9c = DAT_00463f9c + '\x01';
  }
  if (DAT_004768c0 == (code *)0x0) {
    MessageBoxExA(param_1,"Help library not found","Can't open help",0x30,0);
    uVar1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    uVar1 = ((code *)DAT_004768c0)();
    *in_FS_OFFSET = local_28;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ec5c  FUN_0040ec5c   (269 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0040ec5c(undefined4 *param_1)

{
  LSTATUS LVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD local_30;
  HKEY local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x46404c);
  local_18 = 8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 0x106;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,"CLSID\\{adb880a6-d8ff-11cf-9377-00aa003b7a11}\\InprocServer32",0,1,&local_2c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_2c,"Help library not found" + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&local_30);
    if (LVar1 == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *param_1 = hModule;
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,"HtmlHelpA");
        param_1[1] = pFVar2;
        if (pFVar2 == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*param_1);
          *param_1 = 0;
        }
      }
    }
    RegCloseKey(local_2c);
  }
  if (param_1[1] != 0) {
    (*(code *)param_1[1])();
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
