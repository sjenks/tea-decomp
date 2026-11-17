// TSMerge.exe — runtime / library code "code_0x00410000"
// 58 functions, 0x00410510..0x00413fd8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410510  FUN_00410510   (68 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00410510(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464888);
  if (DAT_00464887 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004769c8,0);
    DAT_00464887 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410554  FUN_00410554   (149 bytes)   [unnamed]
undefined4 * __cdecl FUN_00410554(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x464d54);
  local_18 = 8;
  FUN_00443b28(param_1,(uint *)"COMCTL32.DLL",'\x01','\x01','\0');
  local_c = local_c + 2;
  *param_1 = &OWL::TCommCtrlDll::vftable;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  FUN_0041060c((int)param_1);
  memset(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_0041063c((int)param_1,(int)&local_3c);
  *(uint *)((int)param_1 + 0xd) = CONCAT22(local_38,local_34);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041060c  FUN_0041060c   (48 bytes)   [unnamed]
void __cdecl FUN_0041060c(int param_1)

{
  if (DAT_0046483d == '\0') {
    FUN_00444dcc((int *)&DAT_004768dc,param_1,"InitCommonControls");
    DAT_0046483d = DAT_0046483d + '\x01';
  }
  ((code *)DAT_004768dc)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041063c  FUN_0041063c   (101 bytes)   [unnamed]
bool __cdecl FUN_0041063c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_0046484c == '\0') {
    DAT_00464848 = GetProcAddress(*(HMODULE *)(param_1 + 8),"DllGetVersion");
    DAT_0046484c = DAT_0046484c + '\x01';
  }
  if (DAT_00464848 == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_00464848 == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_00464848)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004106a4  FUN_004106a4   (75 bytes)   [unnamed]
undefined * __stdcall FUN_004106a4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464d78);
  if (DAT_00464887 == '\0') {
    FUN_00410554((undefined4 *)&DAT_004769c8);
    DAT_00464887 = DAT_00464887 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004769c8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041074c  FUN_0041074c   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0041074c(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_004106a4();
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410754  FUN_00410754   (14 bytes)   [unnamed]
bool __stdcall FUN_00410754(void)

{
  int iVar1;
  
  iVar1 = FUN_0041074c();
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410934  FUN_00410934   (41 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_00410934(void)

{
  if (DAT_00464dd0 == '\0') {
    _DAT_004769dc = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_004769dc);
    DAT_00464dd0 = DAT_00464dd0 + '\x01';
  }
  return &DAT_004769dc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410960  FUN_00410960   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_00410960(void)

{
  undefined *puVar1;
  
  if (DAT_00464dd3 == '\0') {
    puVar1 = FUN_00410934();
    DAT_00464dd2 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00464dd3 = DAT_00464dd3 + '\x01';
  }
  return DAT_00464dd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410990  FUN_00410990   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_00410990(void)

{
  undefined *puVar1;
  
  if (DAT_00464dd7 == '\0') {
    puVar1 = FUN_00410934();
    DAT_00464dd6 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00464dd7 = DAT_00464dd7 + '\x01';
  }
  return DAT_00464dd6;
}

// ----------------------------------------------------------------------------------------------------
// 0x004109c0  FUN_004109c0   (22 bytes)   [unnamed]
bool __stdcall FUN_004109c0(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_00410934();
  return 3 < *(uint *)(puVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004109d8  FUN_004109d8   (302 bytes)   [unnamed]
void __stdcall FUN_004109d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464df0);
  if (DAT_00464def != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476b0b,2);
    DAT_00464def = '\0';
  }
  if (DAT_00464dee != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476afa,2);
    DAT_00464dee = '\0';
  }
  if (DAT_00464ded != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476ae9,2);
    DAT_00464ded = '\0';
  }
  if (DAT_00464dec != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476ad8,2);
    DAT_00464dec = '\0';
  }
  if (DAT_00464deb != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476ac7,2);
    DAT_00464deb = '\0';
  }
  if (DAT_00464dea != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476ab6,2);
    DAT_00464dea = '\0';
  }
  if (DAT_00464de9 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476aa5,2);
    DAT_00464de9 = '\0';
  }
  if (DAT_00464de8 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_00476a94,2);
    DAT_00464de8 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410b08  FUN_00410b08   (87 bytes)   [unnamed]
undefined * __stdcall FUN_00410b08(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464eec);
  if (DAT_00464de8 == '\0') {
    FUN_00410c84((undefined4 *)&DAT_00476a94,0x80000000,1,(uint *)"HKEY_CLASSES_ROOT");
    DAT_00464de8 = DAT_00464de8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476a94;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410bac  FUN_00410bac   (188 bytes)   [unnamed]
PHKEY __cdecl FUN_00410bac(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5)

{
  HKEY pHVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x464f10);
  local_18 = 8;
  *param_1 = (HKEY)0x0;
  pHVar1 = (HKEY)FUN_0041fd2c(param_3);
  param_1[1] = pHVar1;
  if (param_5 == 0) {
    RegCreateKeyExA(param_2,(LPCSTR)param_1[1],0,"HKEY_CLASSES_ROOT" + 0x11,0,param_4,
                    (LPSECURITY_ATTRIBUTES)0x0,param_1,&local_2c);
  }
  else {
    RegOpenKeyExA(param_2,(LPCSTR)param_1[1],0,param_4,param_1);
  }
  if (*param_1 != (HKEY)0x0) {
    FUN_00410d7c((undefined4*)param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(param_1 + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(param_1 + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410c84  FUN_00410c84   (157 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_00410c84(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464f40);
  *param_1 = param_2;
  uVar1 = FUN_0041fd2c(param_4);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 4) = param_3;
  iVar2 = FUN_00410d7c(param_1,(LPSTR)0x0,(LPDWORD)0x0,param_1 + 2,(LPDWORD)0x0,(DWORD *)0x0,
                       param_1 + 3,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if ((iVar2 != 0) && (iVar2 != 0x7a)) {
    *param_1 = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410d7c  FUN_00410d7c   (173 bytes)   [unnamed]
LSTATUS __cdecl FUN_00410d7c(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5, DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10, PFILETIME param_11)

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
// 0x00410e2c  FUN_00410e2c   (116 bytes)   [unnamed]
undefined4 * __cdecl FUN_00410e2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464f7c);
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
// 0x004111e0  FUN_004111e0   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004111e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004113e0  FUN_004113e0   (92 bytes)   [unnamed]
void __cdecl FUN_004113e0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x465061);
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)**(undefined4 **)(param_1[1] + 0x1b))();
    }
    param_1[1] = 0;
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041143c  FUN_0041143c   (64 bytes)   [unnamed]
void __stdcall FUN_0041143c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465081);
  if (DAT_00465050 != '\0') {
    OWL::TAppDictionary::_dtor((int *)&DAT_00476b1c,2);
    DAT_00465050 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041147c  FUN_0041147c   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0041147c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4650a0);
  if (DAT_00465050 == '\0') {
    FUN_00411518((undefined4 *)&DAT_00476b1c);
    DAT_00465050 = DAT_00465050 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476b1c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411518  FUN_00411518   (173 bytes)   [unnamed]
undefined4 * __cdecl FUN_00411518(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4650e4);
  cVar1 = FUN_00410990();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00411794(puVar2);
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
// 0x004116c4  FUN_004116c4   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_004116c4(undefined4 *param_1,int param_2)

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
// 0x004116f4  FUN_004116f4   (37 bytes)   [unnamed]
void __cdecl FUN_004116f4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    GetCurrentProcessId();
  }
  (**(code **)(*(int *)*param_1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041171c  FUN_0041171c   (35 bytes)   [unnamed]
void __cdecl FUN_0041171c(undefined4 *param_1)

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
// 0x00411768  FUN_00411768   (43 bytes)   [unnamed]
bool __cdecl FUN_00411768(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)*param_1 + 0x14))();
  iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  return iVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411794  FUN_00411794   (86 bytes)   [unnamed]
undefined4 * __cdecl FUN_00411794(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465168);
  *param_1 = &OWL::TAppDictImp::vftable;
  *param_1 = &OWL::TAppDictPidImp::vftable;
  puVar1 = FUN_00411970(10);
  param_1[2] = puVar1;
  param_1[1] = 10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411970  FUN_00411970   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_00411970(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new_array();
  memset(puVar1,0,param_1 << 3);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041199c  FUN_0041199c   (14 bytes)   [unnamed]
void __stdcall FUN_0041199c(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004119ac  FUN_004119ac   (69 bytes)   [unnamed]
int __cdecl FUN_004119ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_00411970(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  memcpy(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_0041199c();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004119f4  FUN_004119f4   (126 bytes)   [unnamed]
int * __cdecl FUN_004119f4(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4651b0);
  puVar1 = (undefined4 *)FUN_0041147c();
  local_8 = (int *)FUN_004116c4(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_0041147c();
      FUN_0042e748(local_8,0,(uint *)"ALIAS",&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c78  FUN_00411c78   (82 bytes)   [unnamed]
uint * __cdecl FUN_00411c78(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465260);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,5);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ce8  FUN_00411ce8   (113 bytes)   [unnamed]
uint * __cdecl FUN_00411ce8(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465284);
  FUN_0041d2ac(param_1);
  pHVar1 = CreateBitmap(param_2,param_3,(uint)param_4,(uint)param_5,param_6);
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411d5c  FUN_00411d5c   (137 bytes)   [unnamed]
uint * __cdecl FUN_00411d5c(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4652a8);
  FUN_0041d2ac(param_1);
  if (param_5 == '\0') {
    pHVar1 = CreateCompatibleBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  else {
    pHVar1 = CreateDiscardableBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411de8  FUN_00411de8   (71 bytes)   [unnamed]
uint * __cdecl FUN_00411de8(uint *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4652cc);
  FUN_0041d2ac(param_1);
  *param_1 = 0;
  FUN_00412140(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ee0  FUN_00411ee0   (137 bytes)   [unnamed]
uint * __cdecl FUN_00411ee0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x465300);
  FUN_0041d2ac(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_00423bc8(local_c,param_2,'\0');
    FUN_0041209c(param_1,param_2,puVar1);
    OWL::TGdiObject::_dtor(local_c,0);
  }
  else {
    FUN_0041209c(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412014  FUN_00412014   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_00412014(undefined4 *param_1)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_18;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041203c  FUN_0041203c   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_0041203c(undefined4 *param_1)

{
  undefined1 local_1c [8];
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_14;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412064  FUN_00412064   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_00412064(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_2,0x18,local_1c);
  *param_1 = local_18;
  param_1[1] = local_14;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041209c  FUN_0041209c   (164 bytes)   [unnamed]
void __cdecl FUN_0041209c(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x465364);
  FUN_0042e298((int *)local_2c);
  FUN_00416c00((undefined4*)local_2c,param_3,0);
  RealizePalette(local_2c[0]);
  pHVar1 = CreateDIBitmap(local_2c[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  OWL::TWindowDC::_dtor((int *)local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412140  FUN_00412140   (526 bytes)   [unnamed]
void __cdecl FUN_00412140(uint *param_1,uint *param_2)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_d0 [4];
  int local_cc;
  int local_c8;
  short local_c0;
  short local_be;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  HDC local_7c [10];
  HDC local_54 [10];
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x4653e0);
  local_90 = 8;
  FUN_0042073c((int *)local_2c);
  local_84 = local_84 + 3;
  local_90 = 0x20;
  FUN_0042073c((int *)local_54);
  local_84 = local_84 + 3;
  local_90 = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,local_d0);
  if ((local_c0 == 1) && (local_be == 1)) {
    pHVar1 = CreateBitmap(local_cc,local_c8,1,1,(void *)0x0);
    *param_1 = (uint)pHVar1;
  }
  else {
    local_90 = 0x2c;
    FUN_0042e298((int *)local_7c);
    local_84 = local_84 + 3;
    local_90 = 0x38;
    pHVar1 = CreateCompatibleBitmap(local_7c[0],local_cc,local_c8);
    *param_1 = (uint)pHVar1;
    local_84 = local_84 + -3;
    OWL::TWindowDC::_dtor((int *)local_7c,0);
    local_90 = 0x14;
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,5);
  FUN_004208a4((undefined4*)local_2c,param_2);
  FUN_004208a4((undefined4*)local_54,param_1);
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = local_cc;
  local_ac = local_c8;
  local_b8 = 0;
  local_b4 = 0;
  BitBlt(local_54[0],0,0,local_cc,local_c8,local_2c[0],0,0,0xcc0020);
  local_84 = local_84 + -3;
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  local_84 = local_84 + -3;
  OWL::TMemoryDC::_dtor((int *)local_2c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004128bc  FUN_004128bc   (64 bytes)   [unnamed]
void __stdcall FUN_004128bc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46544d);
  FUN_00443b28((undefined4 *)&DAT_00476b20,(uint *)"uxtheme.dll",'\x01','\0','\x01');
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004128fc  FUN_004128fc   (49 bytes)   [unnamed]
void __stdcall FUN_004128fc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465461);
  OWL::TModule::_dtor((undefined4 *)&DAT_00476b20,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412978  FUN_00412978   (330 bytes)   [unnamed]
int * __cdecl FUN_00412978(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4654c8);
  FUN_00418f5c(param_1,param_3);
  *param_1 = (int)&OWL::TButtonGadget::vftable;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(char *)((int)param_1 + 0x57) = param_7;
  if (param_7 == '\0') {
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_0041fd2c(param_2);
    }
    param_1[0x11] = (int)param_2;
    param_1[0x16] = -1;
    param_1[0x17] = 4;
  }
  else {
    param_1[0x11] = 0;
    param_1[0x16] = (int)param_2;
    param_1[0x17] = 1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x15) = param_4 << 4 | *(byte *)(param_1 + 0x15) & 0xf;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(byte *)(param_1 + 0x15) = param_6 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 1;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) & 0xfd;
  (**(code **)(*param_1 + 4))();
  FUN_00412b98((int)param_1,2);
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412b98  FUN_00412b98   (95 bytes)   [unnamed]
void __cdecl FUN_00412b98(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_004109c0();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    local_c = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    local_8 = local_10;
    FUN_0041919c(param_1,&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412cb8  FUN_00412cb8   (334 bytes)   [unnamed]
void __cdecl FUN_00412cb8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
    if (*(int *)((int)param_1 + 6) != 0) {
      piVar4 = (int *)0x0;
      for (piVar2 = *(int **)(*(int *)((int)param_1 + 6) + 8);
          (piVar2 != (int *)0x0 && (piVar2 != param_1)); piVar2 = *(int **)((int)piVar2 + 0x3e)) {
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar1 = FUN_004567e4((int)piVar2,iVar3,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
        if ((piVar1 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 3)))) {
          piVar4 = (int *)0x0;
        }
        else if (piVar4 == (int *)0x0) {
          piVar4 = piVar1;
        }
      }
      piVar2 = param_1;
      if (piVar4 == (int *)0x0) {
        piVar4 = param_1;
      }
      while (piVar1 = piVar2, *(int *)((int)piVar1 + 0x3e) != 0) {
        piVar2 = *(int **)((int)piVar1 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar2 = FUN_004567e4((int)piVar2,iVar3,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
        if ((piVar2 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 3)))) break;
      }
      while( true ) {
        if ((int)((uint)*(byte *)(piVar4 + 0x15) << 0x1c) >> 0x1c == 1) {
          *(byte *)(piVar4 + 0x15) = *(byte *)(piVar4 + 0x15) & 0xf0;
          FUN_00419608((int)piVar4);
          FUN_00419654((int)piVar4);
        }
        if (piVar1 == piVar4) break;
        piVar2 = *(int **)((int)piVar4 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar4 = FUN_004567e4((int)piVar2,iVar3,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
      }
    }
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0 | 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412e08  FUN_00412e08   (97 bytes)   [unnamed]
void __cdecl FUN_00412e08(int *param_1,int param_2)

{
  if (param_2 != (int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c) {
    if ((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 1) ||
        ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 3)) && (param_2 == 1)) {
      FUN_00412cb8(param_1);
    }
    else {
      *(byte *)(param_1 + 0x15) = (byte)param_2 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    }
    FUN_00419608((int)param_1);
    FUN_00419654((int)param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132ac  FUN_004132ac   (20 bytes)   [unnamed]
void __cdecl FUN_004132ac(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x57) != '\0') {
    *(undefined4 *)(param_1 + 0x58) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413498  FUN_00413498   (110 bytes)   [unnamed]
undefined * __stdcall FUN_00413498(void)

{
  if (0x20 < DAT_00476b28) {
    if (DAT_0046543c == '\0') {
      FUN_00444dcc((int *)&DAT_00476b2d,0x476b20,"OpenThemeData");
      FUN_00444dcc((int *)&DAT_00476b31,0x476b20,"CloseThemeData");
      FUN_00444dcc((int *)&DAT_00476b35,0x476b20,"DrawThemeBackground");
      DAT_0046543c = DAT_0046543c + '\x01';
    }
    return &DAT_00476b2d;
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413998  FUN_00413998   (377 bytes)   [unnamed]
undefined4 * __cdecl FUN_00413998(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x46571c);
  *param_1 = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 1;
  if (param_3 < 1) {
    param_3 = 1;
  }
  *(int *)((int)param_1 + 0x25) = param_3;
  *(int *)((int)param_1 + 0x11) = param_3;
  if (param_4 < 1) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_4;
  iVar3 = *(int *)(*(int *)(param_2 + 9) + 8);
  *(int *)((int)param_1 + 0x15) =
       *(int *)(*(int *)(param_2 + 9) + 4) / *(int *)((int)param_1 + 0x11);
  *(int *)((int)param_1 + 0x19) = iVar3 / *(int *)((int)param_1 + 0x29);
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar3 = 0;
  pvVar1 = GetStockObject(0xf);
  FUN_00423b58(local_c,pvVar1,iVar3);
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_00411ee0(puVar2,param_2,local_c);
  }
  param_1[1] = puVar2;
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413b14  FUN_00413b14   (234 bytes)   [unnamed]
undefined4 * __cdecl FUN_00413b14(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465770);
  *param_1 = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = *param_2;
  *(undefined4 *)((int)param_1 + 0x19) = param_2[1];
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x11) = param_4;
  *(undefined4 *)((int)param_1 + 0x1d) = param_5;
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  if (param_6 < 1) {
    param_6 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_6;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[1] = 0;
  FUN_00414128((int)param_1,*(int *)((int)param_1 + 0x11));
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413c68  FUN_00413c68   (57 bytes)   [unnamed]
int * __cdecl FUN_00413c68(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0xd);
  *param_1 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  param_1[1] = iVar1 * param_4 + iVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413ca4  FUN_00413ca4   (124 bytes)   [unnamed]
int * __cdecl FUN_00413ca4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar4 = *(int *)(param_2 + 0x19) * param_4 + *(int *)(param_2 + 0xd);
  iVar3 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0x15);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar2 + iVar3;
  param_1[3] = iVar1 + iVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413d20  FUN_00413d20   (150 bytes)   [unnamed]
undefined4 __cdecl FUN_00413d20(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00412014(param_2);
  local_c = *(int *)(param_1 + 0x15);
  local_8 = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_004140e8(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    FUN_00412064(local_1c,param_2);
    piVar3 = local_1c;
    FUN_00413c68(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_00413fd8(*(uint **)(param_1 + 4),param_2,local_14,piVar3,iVar4,iVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413db8  FUN_00413db8   (159 bytes)   [unnamed]
undefined4 __cdecl FUN_00413db8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x11) <= *(int *)(param_1 + 0x25)) &&
     (uVar1 = FUN_00414128(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_00413ca4(&local_28,param_1,param_3,0);
  local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  local_10 = local_18;
  FUN_00413c68(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_00413fd8(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,local_28,local_24);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413e58  FUN_00413e58   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_00413e58(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  iVar1 = __InitExceptBlockLDTC(0x4657d4);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_00413c68(&local_60,param_1,param_2,0);
        local_58 = local_60;
        local_54 = local_5c;
        local_40 = 8;
        FUN_0042080c((int *)local_2c,*(uint **)(param_1 + 4));
        local_34 = local_34 + 3;
        local_40 = 0x14;
        BitBlt(local_2c[0],local_58,local_54,
               ((*(int *)(param_1 + 0x25) - param_2) + -1) * *(int *)(param_1 + 0x15),
               *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_2c[0],
               local_58 + *(int *)(param_1 + 0x15),local_54,0xcc0020);
        local_34 = local_34 + -3;
        iVar1 = OWL::TMemoryDC::_dtor((int *)local_2c,2);
      }
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar2 = 0;
    *in_FS_OFFSET = local_50;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413f68  FUN_00413f68   (111 bytes)   [unnamed]
undefined4 __cdecl FUN_00413f68(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x25) <= param_2)) {
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
    local_18 = *(int *)(param_1 + 0x15);
    piVar3 = &local_18;
    local_10 = local_18;
    FUN_00413c68(local_c,param_1,param_2,0);
    uVar1 = FUN_00413fd8(*(uint **)(param_1 + 4),param_3,local_c,piVar3,iVar4,iVar5);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413fd8  FUN_00413fd8   (270 bytes)   [unnamed]
uint __cdecl FUN_00413fd8(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  HDC local_54 [10];
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x465830);
  FUN_0042080c((int *)local_2c,param_2);
  FUN_0042080c((int *)local_54,param_1);
  BVar1 = BitBlt(local_54[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],local_2c[0],param_5,param_6,0xcc0020);
  uVar2 = (uint)(BVar1 != 0);
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  OWL::TMemoryDC::_dtor((int *)local_2c,2);
  *in_FS_OFFSET = local_78;
  return uVar2;
}

} // namespace tea
