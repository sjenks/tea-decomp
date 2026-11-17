// TSBuild.exe — runtime / library code "code_0x00418000"
// 34 functions, 0x00419fa4..0x0041be50. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419fa4  FUN_00419fa4   (108 bytes)   [unnamed]
void __cdecl FUN_00419fa4(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x478094);
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00419e8c();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    *piVar1 = 0;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a074  FUN_0041a074   (28 bytes)   [unnamed]
void __cdecl FUN_0041a074(int *param_1,LPARAM param_2)

{
  FUN_00438338(*param_1,0x434,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a0c0  FUN_0041a0c0   (28 bytes)   [unnamed]
undefined4 __cdecl FUN_0041a0c0(int *param_1,LPARAM param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00438338(*param_1,0x437,0,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a0dc  FUN_0041a0dc   (28 bytes)   [unnamed]
void __cdecl FUN_0041a0dc(int *param_1,LPARAM param_2)

{
  FUN_00438338(*param_1,1099,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a128  FUN_0041a128   (29 bytes)   [unnamed]
undefined4 __cdecl FUN_0041a128(int *param_1,WPARAM param_2,LPARAM param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00438338(*param_1,0x438,param_2,param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a220  FUN_0041a220   (31 bytes)   [unnamed]
void __cdecl FUN_0041a220(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_00438338(*param_1,0x449,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a240  FUN_0041a240   (31 bytes)   [unnamed]
void __cdecl FUN_0041a240(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_00438338(*param_1,0x44a,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a568  FUN_0041a568   (67 bytes)   [unnamed]
undefined4 __stdcall FUN_0041a568(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_0045f1c0(param_1,param_2,param_3);
    uVar1 = FUN_0045f178((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a5ac  FUN_0041a5ac   (142 bytes)   [unnamed]
undefined4 __stdcall FUN_0041a5ac(int *param_1,int param_2,int param_3,int *param_4)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_00461634(local_10,param_1);
  FUN_0045fb0c(param_1,param_2,param_3);
  FUN_00461634(local_1c,param_1);
  *param_4 = local_1c[0] - local_10[0];
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a644  FUN_0041a644   (57 bytes)   [unnamed]
bool __cdecl FUN_0041a644(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_0041a568;
  FUN_0041a220(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a680  FUN_0041a680   (57 bytes)   [unnamed]
bool __cdecl FUN_0041a680(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_0041a5ac;
  FUN_0041a240(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa00  FUN_0041aa00   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041aa00(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4781a4);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TRichEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041a984,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa68  FUN_0041aa68   (284 bytes)   [unnamed]
int * __cdecl FUN_0041aa68(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4781bc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1e);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[0x1f] = (int)(param_1 + 0x1c);
    param_1[1] = (int)(param_1 + 0x1b);
    param_1[2] = (int)(param_1 + 0x1c);
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1b] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x1e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_00448508(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047853c;
  *(undefined ***)param_1[2] = &PTR_LAB_00478548;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00478554;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aba0  FUN_0041aba0   (87 bytes)   [unnamed]
void __cdecl FUN_0041aba0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_004484a0(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ac10  FUN_0041ac10   (81 bytes)   [unnamed]
void __cdecl FUN_0041ac10(int param_1,int *param_2)

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
  FUN_004484a0(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TEditFile::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041acb0  FUN_0041acb0   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_0041acb0(char param_1)

{
  if (DAT_00477e78 == '\0') {
    if (param_1 == '\0') {
      DAT_00477e74 = FUN_00419d5c();
    }
    else {
      DAT_00477e74 = 1;
    }
    DAT_00477e78 = DAT_00477e78 + '\x01';
  }
  return DAT_00477e74;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ace0  FUN_0041ace0   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041ace0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4781f0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0041aa68(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0041aa00(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b534  FUN_0041b534   (68 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0041b534(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47863c);
  if (DAT_0047863b != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048c470,0);
    DAT_0047863b = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b578  FUN_0041b578   (149 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041b578(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x478b08);
  local_18 = 8;
  FUN_0044ecbc(param_1,(uint *)"COMCTL32.DLL",'\x01','\x01','\0');
  local_c = local_c + 2;
  *param_1 = &OWL::TCommCtrlDll::vftable;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  FUN_0041b630((int)param_1);
  memset(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_0041b660((int)param_1,(int)&local_3c);
  *(uint *)((int)param_1 + 0xd) = CONCAT22(local_38,local_34);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b630  FUN_0041b630   (48 bytes)   [unnamed]
void __cdecl FUN_0041b630(int param_1)

{
  if (DAT_004785f1 == '\0') {
    FUN_0044ff60((int *)&DAT_0048c384,param_1,"InitCommonControls");
    DAT_004785f1 = DAT_004785f1 + '\x01';
  }
  ((code *)DAT_0048c384)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b660  FUN_0041b660   (101 bytes)   [unnamed]
bool __cdecl FUN_0041b660(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00478600 == '\0') {
    DAT_004785fc = GetProcAddress(*(HMODULE *)(param_1 + 8),"DllGetVersion");
    DAT_00478600 = DAT_00478600 + '\x01';
  }
  if (DAT_004785fc == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_004785fc == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_004785fc)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b6c8  FUN_0041b6c8   (75 bytes)   [unnamed]
undefined * __stdcall FUN_0041b6c8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478b2c);
  if (DAT_0047863b == '\0') {
    FUN_0041b578((undefined4 *)&DAT_0048c470);
    DAT_0047863b = DAT_0047863b + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c470;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b770  FUN_0041b770   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0041b770(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0041b6c8();
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b778  FUN_0041b778   (14 bytes)   [unnamed]
bool __stdcall FUN_0041b778(void)

{
  int iVar1;
  
  iVar1 = FUN_0041b770();
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b958  FUN_0041b958   (41 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0041b958(void)

{
  if (DAT_00478b84 == '\0') {
    _DAT_0048c484 = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)&DAT_0048c484);
    DAT_00478b84 = DAT_00478b84 + '\x01';
  }
  return &DAT_0048c484;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b984  FUN_0041b984   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_0041b984(void)

{
  undefined *puVar1;
  
  if (DAT_00478b87 == '\0') {
    puVar1 = FUN_0041b958();
    DAT_00478b86 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00478b87 = DAT_00478b87 + '\x01';
  }
  return DAT_00478b86;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b9b4  FUN_0041b9b4   (45 bytes)   [unnamed]
undefined1 __stdcall FUN_0041b9b4(void)

{
  undefined *puVar1;
  
  if (DAT_00478b8b == '\0') {
    puVar1 = FUN_0041b958();
    DAT_00478b8a = *(int *)(puVar1 + 0x10) != 0;
    DAT_00478b8b = DAT_00478b8b + '\x01';
  }
  return DAT_00478b8a;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b9e4  FUN_0041b9e4   (22 bytes)   [unnamed]
bool __stdcall FUN_0041b9e4(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0041b958();
  return 3 < *(uint *)(puVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b9fc  FUN_0041b9fc   (302 bytes)   [unnamed]
void __stdcall FUN_0041b9fc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478ba4);
  if (DAT_00478ba3 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c5b3,2);
    DAT_00478ba3 = '\0';
  }
  if (DAT_00478ba2 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c5a2,2);
    DAT_00478ba2 = '\0';
  }
  if (DAT_00478ba1 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c591,2);
    DAT_00478ba1 = '\0';
  }
  if (DAT_00478ba0 != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c580,2);
    DAT_00478ba0 = '\0';
  }
  if (DAT_00478b9f != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c56f,2);
    DAT_00478b9f = '\0';
  }
  if (DAT_00478b9e != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c55e,2);
    DAT_00478b9e = '\0';
  }
  if (DAT_00478b9d != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c54d,2);
    DAT_00478b9d = '\0';
  }
  if (DAT_00478b9c != '\0') {
    OWL::TRegKey::_dtor((int *)&DAT_0048c53c,2);
    DAT_00478b9c = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bb2c  FUN_0041bb2c   (87 bytes)   [unnamed]
undefined * __stdcall FUN_0041bb2c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478ca0);
  if (DAT_00478b9c == '\0') {
    FUN_0041bca8((undefined4 *)&DAT_0048c53c,0x80000000,1,(uint *)"HKEY_CLASSES_ROOT");
    DAT_00478b9c = DAT_00478b9c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c53c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bbd0  FUN_0041bbd0   (188 bytes)   [unnamed]
PHKEY __cdecl FUN_0041bbd0(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5)

{
  HKEY pHVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x478cc4);
  local_18 = 8;
  *param_1 = (HKEY)0x0;
  pHVar1 = (HKEY)FUN_0042aea0(param_3);
  param_1[1] = pHVar1;
  if (param_5 == 0) {
    RegCreateKeyExA(param_2,(LPCSTR)param_1[1],0,"HKEY_CLASSES_ROOT" + 0x11,0,param_4,
                    (LPSECURITY_ATTRIBUTES)0x0,param_1,&local_2c);
  }
  else {
    RegOpenKeyExA(param_2,(LPCSTR)param_1[1],0,param_4,param_1);
  }
  if (*param_1 != (HKEY)0x0) {
    FUN_0041bda0((undefined4*)param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(param_1 + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(param_1 + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bca8  FUN_0041bca8   (157 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0041bca8(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478cf4);
  *param_1 = param_2;
  uVar1 = FUN_0042aea0(param_4);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 4) = param_3;
  iVar2 = FUN_0041bda0(param_1,(LPSTR)0x0,(LPDWORD)0x0,param_1 + 2,(LPDWORD)0x0,(DWORD *)0x0,
                       param_1 + 3,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if ((iVar2 != 0) && (iVar2 != 0x7a)) {
    *param_1 = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bda0  FUN_0041bda0   (173 bytes)   [unnamed]
LSTATUS __cdecl FUN_0041bda0(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5, DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10, PFILETIME param_11)

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
// 0x0041be50  FUN_0041be50   (116 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041be50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478d30);
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

} // namespace tea
