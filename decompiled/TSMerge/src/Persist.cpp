// TSMerge.exe — application module "Persist"
// 9 functions, 0x0040e920..0x0040ec5c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040e920  Persist::Persist   (201 bytes)   [analysis]
//   opens or creates the registry key (machine-wide first when asked)
int * __cdecl Persist::Persist(int *self,int param_2,int create,int tryLocalMachine)

{
  HKEY hKey;
  int regStatus;
  undefined4 *sehChainHead;
  DWORD lpdwDisposition;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x463f88);
  *self = create;
  self[1] = 0;
  while( true ) {
    if (tryLocalMachine == 0) {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    ehContext = 8;
    if (*self == 1) {
      regStatus = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,"Position" + 8,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(self + 1),&lpdwDisposition);
    }
    else {
      regStatus = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(self + 1));
    }
    if (regStatus == 0) break;
    if (tryLocalMachine == 0) {
      self[1] = 0;
      *sehChainHead = sehPrevFrame;
LAB_0040e9d7:
      *sehChainHead = sehPrevFrame;
      return self;
    }
    tryLocalMachine = 0;
  }
  *sehChainHead = sehPrevFrame;
  goto LAB_0040e9d7;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea04  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(HKEY *)(self + 4) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(self + 4));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea30  Persist::QueryString   (116 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411a4c. reads a REG_SZ value (up to 64 KB) into a std::string; true if present
undefined4 __cdecl Persist::QueryString(int self,int valueName,int out)

{
  int probe;
  LSTATUS regStatus;
  uint buf [15352];
  undefined4 retAddr;
  DWORD typeAndSize [2];
  
  probe = 0x10;
  do {
    probe = probe + -1;
  } while (probe != 0);
  if (*(int *)(self + 4) != 0) {
    typeAndSize[1] = 0x10000;
    typeAndSize[0] = 1;
    retAddr = 0x40ea82;
    regStatus = RegQueryValueExA(*(HKEY *)(self + 4),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)buf,typeAndSize + 1);
    if (regStatus == 0) {
      probe = std::string::assign_cstr(out,buf);
      return CONCAT31((int3)((uint)probe >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eaa4  Persist::QueryDword   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411ac0. reads a REG_DWORD value; true if present
undefined4 __cdecl Persist::QueryDword(int self,int valueName,undefined4 *out)

{
  LSTATUS regStatus;
  DWORD typeAndSize [2];
  undefined4 value;
  
  if (*(int *)(self + 4) != 0) {
    typeAndSize[1] = 4;
    typeAndSize[0] = 4;
    regStatus = RegQueryValueExA(*(HKEY *)(self + 4),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)&value,typeAndSize + 1);
    if (regStatus == 0) {
      *out = value;
      return CONCAT31((int3)((uint)out >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eaf8  Persist::SetString   (46 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044ec78. writes a REG_SZ value
void __cdecl Persist::SetString(int self,int valueName,int value)

{
  RegSetValueExA(*(HKEY *)(self + 4),*(LPCSTR *)(valueName + 8),0,1,*(BYTE **)(value + 8),
                 *(int *)(*(BYTE **)(value + 8) + -4) + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb28  Persist::SetDword   (36 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044eca8. writes a REG_DWORD value (the value is the third argument on the stack)
void __cdecl Persist::SetDword(int self,int valueName)

{
  RegSetValueExA(*(HKEY *)(self + 4),*(LPCSTR *)(valueName + 8),0,4,&GHIDRA_STACK(0x0000000c),4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb4c  DestroyRichEditLoader   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
//   file placement: inferred (address adjacency)
void __stdcall DestroyRichEditLoader(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x463fdc);
  if (DAT_00463f9c != '\0') {
    Help::_dtor((int *)&DAT_004768bc,2);
    DAT_00463f9c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb8c  ShowHtmlHelp   (137 bytes)   [analysis]
//   opens the help file with HtmlHelpA; reports "Help library not found" / "Can't open help"
//   file placement: inferred (address adjacency)
undefined4 __cdecl ShowHtmlHelp(HWND hWnd)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x464028);
  if (DAT_00463f9c == '\0') {
    LoadHtmlHelp((undefined4 *)&DAT_004768bc);
    DAT_00463f9c = DAT_00463f9c + '\x01';
  }
  if (DAT_004768c0 == (code *)0x0) {
    MessageBoxExA(hWnd,"Help library not found","Can't open help",0x30,0);
    uVar1 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar1 = ((code *)DAT_004768c0)();
    *sehChainHead = sehPrevFrame;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ec5c  LoadHtmlHelp   (269 bytes)   [analysis]
//   finds hhctrl.ocx through its CLSID in the registry and gets HtmlHelpA
//   file placement: inferred (address adjacency)
undefined4 * __cdecl LoadHtmlHelp(undefined4 *result)

{
  LSTATUS regStatus;
  HMODULE hModule;
  FARPROC procAddress;
  undefined4 *sehChainHead;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD data;
  HKEY hKey;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x46404c);
  ehContext = 8;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  data = 0x106;
  regStatus = RegOpenKeyExA((HKEY)0x80000000,"CLSID\\{adb880a6-d8ff-11cf-9377-00aa003b7a11}\\InprocServer32",0,1,&hKey);
  if (regStatus == 0) {
    regStatus = RegQueryValueExA(hKey,"Help library not found" + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&data);
    if (regStatus == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *result = hModule;
      if (hModule != (HMODULE)0x0) {
        procAddress = GetProcAddress(hModule,"HtmlHelpA");
        result[1] = procAddress;
        if (procAddress == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*result);
          *result = 0;
        }
      }
    }
    RegCloseKey(hKey);
  }
  if (result[1] != 0) {
    (*(code *)result[1])();
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
