// TEA.exe — runtime / library code "code_0x00484000"
// 33 functions, 0x00486ac4..0x00487ed8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00486ac4  FUN_00486ac4   (87 bytes)   [unnamed]
void __cdecl FUN_00486ac4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
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
  piVar1 = FUN_004b9114(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486b34  FUN_00486b34   (81 bytes)   [unnamed]
void __cdecl FUN_00486b34(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_004b9114(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TEditFile::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486b88  FUN_00486b88   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00486b88(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x503e2c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0048698c(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00486924(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486df0  FUN_00486df0   (68 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00486df0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503f04);
  if (DAT_00503f03 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051afb8,0);
    DAT_00503f03 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486e34  FUN_00486e34   (149 bytes)   [unnamed]
undefined4 * __cdecl FUN_00486e34(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x5043d0);
  local_18 = 8;
  FUN_004c08dc(param_1,(uint *)"COMCTL32.DLL",'\x01','\x01','\0');
  local_c = local_c + 2;
  *param_1 = &OWL::TCommCtrlDll::vftable;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  FUN_00486eec((int)param_1);
  memset(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_00486f1c((int)param_1,(int)&local_3c);
  *(uint *)((int)param_1 + 0xd) = CONCAT22(local_38,local_34);
  *in_FS_OFFSET = local_28;
  return param_1;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5043f4);
  if (DAT_00503f03 == '\0') {
    FUN_00486e34((undefined4 *)&DAT_0051afb8);
    DAT_00503f03 = DAT_00503f03 + '\x01';
  }
  *in_FS_OFFSET = local_28;
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
// 0x00487190  FUN_00487190   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487190(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504418);
  FUN_0048ed90(param_1,0x7ff3,DAT_00512a1c);
  *param_1 = &OWL::TXCommCtrl::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048739c  FUN_0048739c   (78 bytes)   [unnamed]
void __stdcall FUN_0048739c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x504490);
  piVar1 = FUN_00487190(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
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
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004876f0  FUN_004876f0   (87 bytes)   [unnamed]
undefined * __stdcall FUN_004876f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504630);
  if (DAT_0050452c == '\0') {
    FUN_0048786c((undefined4 *)&DAT_0051b084,0x80000000,1,(uint *)"HKEY_CLASSES_ROOT");
    DAT_0050452c = DAT_0050452c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b084;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487794  FUN_00487794   (188 bytes)   [unnamed]
PHKEY __cdecl FUN_00487794(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5)

{
  HKEY pHVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x504654);
  local_18 = 8;
  *param_1 = (HKEY)0x0;
  pHVar1 = (HKEY)FUN_00496d48(param_3);
  param_1[1] = pHVar1;
  if (param_5 == 0) {
    RegCreateKeyExA(param_2,(LPCSTR)param_1[1],0,"HKEY_CLASSES_ROOT" + 0x11,0,param_4,
                    (LPSECURITY_ATTRIBUTES)0x0,param_1,&local_2c);
  }
  else {
    RegOpenKeyExA(param_2,(LPCSTR)param_1[1],0,param_4,param_1);
  }
  if (*param_1 != (HKEY)0x0) {
    FUN_00487964((undefined4*)param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(param_1 + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(param_1 + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048786c  FUN_0048786c   (157 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0048786c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487964  FUN_00487964   (173 bytes)   [unnamed]
LSTATUS __cdecl FUN_00487964(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5, DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10, PFILETIME param_11)

{
  LSTATUS LVar1;
  _FILETIME local_28;
  DWORD local_20 [7];
  
  local_20[6] = 0;
  local_20[5] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  if (param_11 == (PFILETIME)0x0) {
    param_11 = &local_28;
  }
  if (param_10 == (LPDWORD)0x0) {
    param_10 = local_20;
  }
  if (param_9 == (LPDWORD)0x0) {
    param_9 = local_20 + 1;
  }
  if (param_8 == (LPDWORD)0x0) {
    param_8 = local_20 + 2;
  }
  if (param_7 == (DWORD *)0x0) {
    param_7 = local_20 + 3;
  }
  if (param_6 == (DWORD *)0x0) {
    param_6 = local_20 + 4;
  }
  if (param_5 == (LPDWORD)0x0) {
    param_5 = local_20 + 5;
  }
  if (param_4 == (LPDWORD)0x0) {
    param_4 = local_20 + 6;
  }
  LVar1 = RegQueryInfoKeyA((HKEY)*param_1,param_2,param_3,(LPDWORD)0x0,param_4,param_5,param_6,
                           param_7,param_8,param_9,param_10,param_11);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487a14  FUN_00487a14   (116 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487a14(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5046c0);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  RegQueryValueExA(*(HKEY *)*param_1,(LPCSTR)param_1[1],(LPDWORD)0x0,param_1 + 3,(LPBYTE)0x0,
                   param_1 + 5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487b80  FUN_00487b80   (64 bytes)   [unnamed]
void __stdcall FUN_00487b80(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504705);
  if (DAT_005046d4 != '\0') {
    OWL::TAppDictionary::_dtor((int *)&DAT_0051b10c,2);
    DAT_005046d4 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487bc0  FUN_00487bc0   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00487bc0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504724);
  if (DAT_005046d4 == '\0') {
    FUN_00487c5c((undefined4 *)&DAT_0051b10c);
    DAT_005046d4 = DAT_005046d4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b10c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487c5c  FUN_00487c5c   (173 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487c5c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x504768);
  cVar1 = FUN_00487578();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00487ed8(puVar2);
    }
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &OWL::TAppDictImp::vftable;
      *puVar2 = &OWL::TAppDictInstImp::vftable;
      puVar2[2] = 0;
    }
    *param_1 = puVar2;
  }
  *in_FS_OFFSET = local_30;
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

// ----------------------------------------------------------------------------------------------------
// 0x00487ed8  FUN_00487ed8   (86 bytes)   [unnamed]
undefined4 * __cdecl FUN_00487ed8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5047ec);
  *param_1 = &OWL::TAppDictImp::vftable;
  *param_1 = &OWL::TAppDictPidImp::vftable;
  puVar1 = FUN_004880b4(10);
  param_1[2] = puVar1;
  param_1[1] = 10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
