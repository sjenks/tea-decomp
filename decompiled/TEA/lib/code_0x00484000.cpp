// TEA.exe — runtime / library code "code_0x00484000"
// 30 functions, 0x00486ac4..0x00487eac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00486ac4  FUN_00486ac4   (87 bytes)   [unnamed]
void __cdecl FUN_00486ac4(int param_1,int *param_2)

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
  piVar1 = OWL::TEditFile::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486b34  FUN_00486b34   (81 bytes)   [unnamed]
void __cdecl FUN_00486b34(int param_1,int *param_2)

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
  OWL::TEditFile::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TEditFile::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486b88  FUN_00486b88   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00486b88(int *param_1)

{
  undefined4 *streamer;
  int *richEdit;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503e2c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      richEdit = (int *)operator_new();
      if (richEdit == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TRichEdit::TRichEdit_48698c(richEdit,0);
        param_1 = (int *)richEdit[2];
      }
    }
    OWL::TRichEdit::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486df0  FUN_00486df0   (68 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00486df0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503f04);
  if (DAT_00503f03 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051afb8,0);
    DAT_00503f03 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486eec  FUN_00486eec   (48 bytes)   [unnamed]
void __cdecl FUN_00486eec(int param_1)

{
  if (DAT_00503eb9 == '\0') {
    FUN_004c1b80((int *)&DAT_0051aecc,param_1,"InitCommonControls");
    DAT_00503eb9 = DAT_00503eb9 + '\x01';
  }
  ((code *)DAT_0051aecc)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486f1c  FUN_00486f1c   (101 bytes)   [unnamed]
bool __cdecl FUN_00486f1c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00503ec8 == '\0') {
    DAT_00503ec4 = GetProcAddress(*(HMODULE *)(param_1 + 8),"DllGetVersion");
    DAT_00503ec8 = DAT_00503ec8 + '\x01';
  }
  if (DAT_00503ec4 == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_00503ec4 == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_00503ec4)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486f84  FUN_00486f84   (109 bytes)   [unnamed]
undefined4 __stdcall FUN_00486f84(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00503eea == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af54,(int)puVar1,"ImageList_LoadImageA");
    DAT_00503eea = DAT_00503eea + '\x01';
  }
  uVar2 = ((code *)DAT_0051af54)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486ff4  FUN_00486ff4   (154 bytes)   [unnamed]
undefined4 __stdcall FUN_00486ff4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00503ef2 == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af74,(int)puVar1,"CreateUpDownControl");
    DAT_00503ef2 = DAT_00503ef2 + '\x01';
  }
  uVar2 = ((code *)DAT_0051af74)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487090  FUN_00487090   (64 bytes)   [unnamed]
bool __stdcall FUN_00487090(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_00503ef8 == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af8c,(int)puVar1,"ImageList_Destroy");
    DAT_00503ef8 = DAT_00503ef8 + '\x01';
  }
  iVar2 = ((code *)DAT_0051af8c)();
  return iVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004870d0  FUN_004870d0   (75 bytes)   [unnamed]
undefined * __stdcall FUN_004870d0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5043f4);
  if (DAT_00503f03 == '\0') {
    OWL::TCommCtrlDll::TCommCtrlDll((undefined4 *)&DAT_0051afb8);
    DAT_00503f03 = DAT_00503f03 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051afb8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487178  FUN_00487178   (6 bytes)   [unnamed]
undefined * __stdcall FUN_00487178(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_004870d0();
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487180  FUN_00487180   (14 bytes)   [unnamed]
bool __stdcall FUN_00487180(void)

{
  int iVar1;
  
  iVar1 = FUN_00487178();
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048739c  FUN_0048739c   (78 bytes)   [unnamed]
void __stdcall FUN_0048739c(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x504490);
  piVar1 = OWL::TXCommCtrl::TXCommCtrl(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048751c  FUN_0048751c   (41 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0048751c(void)

{
  if (DAT_00504514 == '\0') {
    _DAT_0051afcc = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_0051afcc);
    DAT_00504514 = DAT_00504514 + '\x01';
  }
  return &DAT_0051afcc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487548  FUN_00487548   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_00487548(void)

{
  undefined *puVar1;
  
  if (DAT_00504517 == '\0') {
    puVar1 = FUN_0048751c();
    DAT_00504516 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00504517 = DAT_00504517 + '\x01';
  }
  return DAT_00504516;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487578  FUN_00487578   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_00487578(void)

{
  undefined *puVar1;
  
  if (DAT_0050451b == '\0') {
    puVar1 = FUN_0048751c();
    DAT_0050451a = *(int *)(puVar1 + 0x10) != 0;
    DAT_0050451b = DAT_0050451b + '\x01';
  }
  return DAT_0050451a;
}

// ----------------------------------------------------------------------------------------------------
// 0x004875a8  FUN_004875a8   (22 bytes)   [unnamed]
bool __stdcall FUN_004875a8(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0048751c();
  return 3 < *(uint *)(puVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004875c0  FUN_004875c0   (302 bytes)   [unnamed]
void __stdcall FUN_004875c0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504534);
  if (DAT_00504533 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0fb,2);
    DAT_00504533 = '\0';
  }
  if (DAT_00504532 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0ea,2);
    DAT_00504532 = '\0';
  }
  if (DAT_00504531 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0d9,2);
    DAT_00504531 = '\0';
  }
  if (DAT_00504530 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0c8,2);
    DAT_00504530 = '\0';
  }
  if (DAT_0050452f != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0b7,2);
    DAT_0050452f = '\0';
  }
  if (DAT_0050452e != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b0a6,2);
    DAT_0050452e = '\0';
  }
  if (DAT_0050452d != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b095,2);
    DAT_0050452d = '\0';
  }
  if (DAT_0050452c != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0051b084,2);
    DAT_0050452c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004876f0  FUN_004876f0   (87 bytes)   [unnamed]
undefined * __stdcall FUN_004876f0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504630);
  if (DAT_0050452c == '\0') {
    FUN_0048786c((undefined4 *)&DAT_0051b084,0x80000000,1,(uint *)"HKEY_CLASSES_ROOT");
    DAT_0050452c = DAT_0050452c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b084;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487794  FUN_00487794   (188 bytes)   [unnamed]
PHKEY __cdecl FUN_00487794(PHKEY phkResult,HKEY hKey,uint *param_3,REGSAM samDesired,int param_5)

{
  HKEY hKey2;
  undefined4 *sehChainHead;
  DWORD lpdwDisposition;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x504654);
  ehContext = 8;
  *phkResult = (HKEY)0x0;
  hKey2 = (HKEY)FUN_00496d48(param_3);
  phkResult[1] = hKey2;
  if (param_5 == 0) {
    RegCreateKeyExA(hKey,(LPCSTR)phkResult[1],0,"HKEY_CLASSES_ROOT" + 0x11,0,samDesired,
                    (LPSECURITY_ATTRIBUTES)0x0,phkResult,&lpdwDisposition);
  }
  else {
    RegOpenKeyExA(hKey,(LPCSTR)phkResult[1],0,samDesired,phkResult);
  }
  if (*phkResult != (HKEY)0x0) {
    FUN_00487964((undefined4*)phkResult,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(phkResult + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(phkResult + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(phkResult + 4) = 1;
  *sehChainHead = sehPrevFrame;
  return phkResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048786c  FUN_0048786c   (157 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0048786c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504684);
  *param_1 = param_2;
  uVar1 = FUN_00496d48(param_4);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 4) = param_3;
  iVar2 = FUN_00487964(param_1,(LPSTR)0x0,(LPDWORD)0x0,param_1 + 2,(LPDWORD)0x0,(DWORD *)0x0,
                       param_1 + 3,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if ((iVar2 != 0) && (iVar2 != 0x7a)) {
    *param_1 = 0;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487964  FUN_00487964   (173 bytes)   [unnamed]
LSTATUS __cdecl FUN_00487964(undefined4 *param_1,LPSTR class_,LPDWORD lpcchClass,LPDWORD subKeys,LPDWORD maxSubKeyLen, DWORD *maxClassLen,DWORD *values,LPDWORD maxValueNameLen,LPDWORD maxValueLen,LPDWORD securityDescriptor, PFILETIME lpftLastWriteTime)

{
  LSTATUS regStatus;
  _FILETIME fileTime;
  DWORD local_20 [7];
  
  local_20[6] = 0;
  local_20[5] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  if (lpftLastWriteTime == (PFILETIME)0x0) {
    lpftLastWriteTime = &fileTime;
  }
  if (securityDescriptor == (LPDWORD)0x0) {
    securityDescriptor = local_20;
  }
  if (maxValueLen == (LPDWORD)0x0) {
    maxValueLen = local_20 + 1;
  }
  if (maxValueNameLen == (LPDWORD)0x0) {
    maxValueNameLen = local_20 + 2;
  }
  if (values == (DWORD *)0x0) {
    values = local_20 + 3;
  }
  if (maxClassLen == (DWORD *)0x0) {
    maxClassLen = local_20 + 4;
  }
  if (maxSubKeyLen == (LPDWORD)0x0) {
    maxSubKeyLen = local_20 + 5;
  }
  if (subKeys == (LPDWORD)0x0) {
    subKeys = local_20 + 6;
  }
  regStatus = RegQueryInfoKeyA((HKEY)*param_1,class_,lpcchClass,(LPDWORD)0x0,subKeys,maxSubKeyLen,maxClassLen,
                           values,maxValueNameLen,maxValueLen,securityDescriptor,lpftLastWriteTime);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487a14  FUN_00487a14   (116 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487a14(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5046c0);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  RegQueryValueExA(*(HKEY *)*param_1,(LPCSTR)param_1[1],(LPDWORD)0x0,param_1 + 3,(LPBYTE)0x0,
                   param_1 + 5);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487b80  DestroyRichEditLoader_487b80   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_487b80(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504705);
  if (DAT_005046d4 != '\0') {
    OWL::TAppDictionary::_dtor((int *)&DAT_0051b10c,2);
    DAT_005046d4 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487bc0  FUN_00487bc0   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00487bc0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504724);
  if (DAT_005046d4 == '\0') {
    FUN_00487c5c((undefined4 *)&DAT_0051b10c);
    DAT_005046d4 = DAT_005046d4 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b10c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487c5c  FUN_00487c5c   (173 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487c5c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *appDictInstImp;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504768);
  cVar1 = FUN_00487578();
  if (cVar1 == '\0') {
    appDictInstImp = (undefined4 *)operator_new();
    if (appDictInstImp != (undefined4 *)0x0) {
      OWL::TAppDictPidImp::TAppDictPidImp(appDictInstImp);
    }
    *param_1 = appDictInstImp;
  }
  else {
    appDictInstImp = (undefined4 *)operator_new();
    if (appDictInstImp != (undefined4 *)0x0) {
      *appDictInstImp = &OWL::TAppDictImp::vftable;
      *appDictInstImp = &OWL::TAppDictInstImp::vftable;
      appDictInstImp[2] = 0;
    }
    *param_1 = appDictInstImp;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487e08  FUN_00487e08   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_00487e08(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    GetCurrentProcessId();
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487e38  FUN_00487e38   (37 bytes)   [unnamed]
void __cdecl FUN_00487e38(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    GetCurrentProcessId();
  }
  (**(code **)(*(int *)*param_1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487e60  FUN_00487e60   (35 bytes)   [unnamed]
void __cdecl FUN_00487e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x10))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487eac  FUN_00487eac   (43 bytes)   [unnamed]
bool __cdecl FUN_00487eac(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)*param_1 + 0x14))();
  iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  return iVar1 == 0;
}

} // namespace tea
