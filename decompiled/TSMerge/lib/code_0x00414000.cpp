// TSMerge.exe — runtime / library code "code_0x00414000"
// 103 functions, 0x004140e8..0x00417e34. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004140e8  FUN_004140e8   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_004140e8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25) + param_2;
  if ((*(int *)(param_1 + 0x11) < iVar1) &&
     (iVar1 = FUN_00414128(param_1,(((*(int *)(param_1 + 0x25) + param_2) - *(int *)(param_1 + 0x11)
                                    ) / *(int *)(param_1 + 0x1d) + 1) * *(int *)(param_1 + 0x1d) +
                                   *(int *)(param_1 + 0x11)), (char)iVar1 == '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414128  FUN_00414128   (528 bytes)   [unnamed]
undefined4 __cdecl FUN_00414128(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int cx;
  int cy;
  undefined4 *sehChainHead;
  char cVar6;
  undefined4 sehPrevFrame;
  HDC memoryDC [10];
  HDC memoryDC2 [10];
  uint *local_30;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x4658d4);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    local_30 = (uint *)operator_new();
    if (local_30 != (uint *)0x0) {
      cVar6 = '\0';
      cy = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
      cx = *(int *)(param_1 + 0x15) * param_2;
      piVar3 = FUN_0042e298(windowDC);
      FUN_00411d5c(local_30,piVar3,cx,cy,cVar6);
    }
    puVar1 = local_30;
    uVar2 = OWL::TWindowDC::_dtor(windowDC,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042080c((int *)memoryDC2,*(uint **)(param_1 + 4));
      FUN_0042080c((int *)memoryDC,puVar1);
      BitBlt(memoryDC[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),memoryDC2[0],0,0,0xcc0020);
      FUN_004208e8((undefined4*)memoryDC2);
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        OWL::TBitmap::_dtor(*(uint **)(param_1 + 4),3);
      }
      OWL::TMemoryDC::_dtor((int *)memoryDC,2);
      uVar2 = OWL::TMemoryDC::_dtor((int *)memoryDC2,2);
    }
    *(uint **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x11) = param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    *sehChainHead = sehPrevFrame;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414338  FUN_00414338   (21 bytes)   [unnamed]
void __stdcall FUN_00414338(void)

{
  FUN_0041483c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041434d  FUN_0041434d   (167 bytes)   [unnamed]
HMODULE __stdcall FUN_0041434d(HANDLE hProcess,LPCVOID address)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR filename [260];
  _MEMORY_BASIC_INFORMATION memInfo;
  HMODULE hModule;
  
  iVar1 = FUN_0041487c();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(hProcess,address,&memInfo,0x1c);
    if (SVar2 == 0) {
      hModule = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_0046595f;
      pCVar4 = filename;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(memInfo.AllocationBase,filename,0x104);
      FUN_004148c0();
      hModule = memInfo.AllocationBase;
    }
  }
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x004143f4  FUN_004143f4   (423 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004143f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpString2;
  char *string2;
  undefined4 *sehChainHead;
  char local_544 [512];
  CHAR local_344 [256];
  CHAR newStr [256];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  CHAR newStr2 [260];
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x465a63);
  local_2c = 1;
  *param_3 = param_2;
  memset(param_3,0,200);
  iVar1 = FUN_0041487c();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),"<no module>");
  }
  else {
    string2 = thunk_strchr(local_544,'\\');
    if (string2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = string2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00465c24);
  }
  ehContext = 8;
  unused = 0x18;
  unused2 = param_2;
  unused3 = 0xff;
  iVar1 = FUN_00414924();
  if (iVar1 == 0) {
    string2 = "<no symbol>";
  }
  else {
    string2 = newStr2;
    iVar1 = FUN_00414974();
    if (iVar1 == 0) {
      iVar1 = FUN_004149c4();
      if (iVar1 != 0) {
        string2 = newStr;
      }
    }
    else {
      string2 = newStr;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,"%s + %d bytes",string2,param_3[1]);
      string2 = local_344;
    }
  }
  ehContext = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),string2,0x80);
  *sehChainHead = sehPrevFrame;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004145af  FUN_004145af   (62 bytes)   [unnamed]
void __stdcall FUN_004145af(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465a87);
  OWL::TDiagGroupDef::TDiagGroupDef((undefined4 *)&DAT_00476b3c,&DAT_00465aa3 /* "Def" */,1,'\0');
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004145ed  FUN_004145ed   (86 bytes)   [unnamed]
void __stdcall FUN_004145ed(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465a9b);
  if (DAT_00465954 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_00476b4d,2);
    DAT_00465954 = '\0';
  }
  OWL::TDiagBase::_dtor((undefined4 *)&DAT_00476b3c,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414788  FUN_00414788   (44 bytes)   [unnamed]
void __cdecl FUN_00414788(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00465d38;
  if (DAT_00465d38 != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_00465d38 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147b4  FUN_004147b4   (47 bytes)   [unnamed]
void __cdecl FUN_004147b4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00465d38;
  if (param_1 != DAT_00465d38) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_00465d38 = *(undefined4 *)(param_1 + 0xd);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147e4  FUN_004147e4   (88 bytes)   [unnamed]
undefined * __stdcall FUN_004147e4(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465d70);
  if (DAT_00465954 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_00476b4d,(uint *)"imagehlp.dll",'\x01','\x01','\0');
    DAT_00465954 = DAT_00465954 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476b4d;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041483c  FUN_0041483c   (62 bytes)   [unnamed]
void __stdcall FUN_0041483c(void)

{
  undefined *puVar1;
  
  if (DAT_00465955 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b5a,(int)puVar1,"SymFunctionTableAccess");
    DAT_00465955 = DAT_00465955 + '\x01';
  }
  ((code *)DAT_00476b5a)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041487c  FUN_0041487c   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0041487c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465956 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b5e,(int)puVar1,"SymGetModuleInfo");
    DAT_00465956 = DAT_00465956 + '\x01';
  }
  uVar2 = ((code *)DAT_00476b5e)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004148c0  FUN_004148c0   (100 bytes)   [unnamed]
void __stdcall FUN_004148c0(void)

{
  undefined *puVar1;
  
  if (DAT_00465957 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b62,(int)puVar1,"SymLoadModule");
    DAT_00465957 = DAT_00465957 + '\x01';
  }
  ((code *)DAT_00476b62)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414924  FUN_00414924   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_00414924(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465958 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b66,(int)puVar1,"SymGetSymFromAddr");
    DAT_00465958 = DAT_00465958 + '\x01';
  }
  uVar2 = ((code *)DAT_00476b66)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414974  FUN_00414974   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_00414974(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465959 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b6a,(int)puVar1,"UnDecorateSymbolName");
    DAT_00465959 = DAT_00465959 + '\x01';
  }
  uVar2 = ((code *)DAT_00476b6a)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004149c4  FUN_004149c4   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_004149c4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046595a == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b6e,(int)puVar1,"SymUnDName");
    DAT_0046595a = DAT_0046595a + '\x01';
  }
  uVar2 = ((code *)DAT_00476b6e)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414af4  FUN_00414af4   (14 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00414af4(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414b04  FUN_00414b04   (14 bytes)   [unnamed]
void __stdcall FUN_00414b04(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414cb8  FUN_00414cb8   (130 bytes)   [unnamed]
char * __cdecl FUN_00414cb8(char *param_1,HWND hWnd,char param_3)

{
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 txClipboard [3];
  
  __InitExceptBlockLDTC(0x465ddc);
  FUN_00414e34(param_1,hWnd);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00414d98;
    objectDtor = 0;
    OWL::TXClipboard::TXClipboard(txClipboard,0x7fd9);
    _ThrowExceptionLDTC((uint *)&DAT_00414d3c,txClipboard,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414e34  FUN_00414e34   (28 bytes)   [unnamed]
void __cdecl FUN_00414e34(undefined4 param_1,HWND hWnd)

{
  BOOL ok;
  
  ok = OpenClipboard(hWnd);
  *(bool *)param_1 = ok != 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414ff0  FUN_00414ff0   (60 bytes)   [unnamed]
undefined4 __stdcall FUN_00414ff0(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_00410934();
  if ((*(int *)(puVar1 + 0x10) != 1) && (puVar1 = FUN_00410934(), *(int *)(puVar1 + 0x10) != 2)) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041502c  FUN_0041502c   (179 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0041502c(void)

{
  __ftol();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004152b4  FUN_004152b4   (62 bytes)   [unnamed]
int __cdecl FUN_004152b4(short param_1)

{
  if (((param_1 == 1) || (param_1 == 4)) || (param_1 == 8)) {
    return 1 << ((byte)param_1 & 0x1f);
  }
  if (((param_1 != 0x10) && (param_1 != 0x18)) && (param_1 != 0x20)) {
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004152f4  FUN_004152f4   (73 bytes)   [unnamed]
undefined4 __cdecl FUN_004152f4(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)param_1 >> 0x10);
  if (param_1 < 3) {
    return CONCAT22(uVar1,1);
  }
  if (param_1 < 0x11) {
    return CONCAT22(uVar1,4);
  }
  if (param_1 < 0x101) {
    return CONCAT22(uVar1,8);
  }
  if (param_1 < 0x10001) {
    return CONCAT22(uVar1,0x10);
  }
  if (param_1 < 0x1000001) {
    return CONCAT22(uVar1,0x18);
  }
  return CONCAT22(uVar1,0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x00415340  FUN_00415340   (50 bytes)   [unnamed]
uint __cdecl FUN_00415340(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0xf0000000) == 0x80000000) {
    uVar1 = GetSysColor(*param_1 & 0xffff);
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415374  FUN_00415374   (17 bytes)   [unnamed]
uint __cdecl FUN_00415374(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00415340(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415388  FUN_00415388   (23 bytes)   [unnamed]
int __cdecl FUN_00415388(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00415340(param_1);
  return (int)(uVar1 & 0xffff) >> 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153a0  FUN_004153a0   (20 bytes)   [unnamed]
uint __cdecl FUN_004153a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00415340(param_1);
  return uVar1 >> 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153b4  FUN_004153b4   (65 bytes)   [unnamed]
void __stdcall FUN_004153b4(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465eb4);
  if (DAT_00465ea8 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_00476c18,2);
    DAT_00465ea8 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153f8  FUN_004153f8   (88 bytes)   [unnamed]
undefined * __stdcall FUN_004153f8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465f74);
  if (DAT_00465ea8 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_00476c18,(uint *)"COMDLG32.DLL",'\x01','\x01','\0');
    DAT_00465ea8 = DAT_00465ea8 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476c18;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415450  FUN_00415450   (46 bytes)   [unnamed]
undefined4 __stdcall FUN_00415450(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eab == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c2d,(int)puVar1,"CommDlgExtendedError");
    DAT_00465eab = DAT_00465eab + '\x01';
  }
  uVar2 = ((code *)DAT_00476c2d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415480  FUN_00415480   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00415480(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eac == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c31,(int)puVar1,"FindTextA");
    DAT_00465eac = DAT_00465eac + '\x01';
  }
  uVar2 = ((code *)DAT_00476c31)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154b8  FUN_004154b8   (69 bytes)   [unnamed]
undefined4 __stdcall FUN_004154b8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465ead == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c35,(int)puVar1,"GetFileTitleA");
    DAT_00465ead = DAT_00465ead + '\x01';
  }
  uVar2 = ((code *)DAT_00476c35)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415500  FUN_00415500   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00415500(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eae == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c39,(int)puVar1,"GetOpenFileNameA");
    DAT_00465eae = DAT_00465eae + '\x01';
  }
  uVar2 = ((code *)DAT_00476c39)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415538  FUN_00415538   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00415538(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eb2 == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c49,(int)puVar1,"ReplaceTextA");
    DAT_00465eb2 = DAT_00465eb2 + '\x01';
  }
  uVar2 = ((code *)DAT_00476c49)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415570  FUN_00415570   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00415570(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465eb3 == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c4d,(int)puVar1,"GetSaveFileNameA");
    DAT_00465eb3 = DAT_00465eb3 + '\x01';
  }
  uVar2 = ((code *)DAT_00476c4d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004159ac  FUN_004159ac   (76 bytes)   [unnamed]
void __cdecl FUN_004159ac(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466120);
  while (param_2 < *(uint *)(param_1 + 9)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 1) + -4);
    *(undefined4 *)(param_1 + 1) = *puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete_array();
    }
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004159f8  FUN_004159f8   (73 bytes)   [unnamed]
int __cdecl FUN_004159f8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((uint)(*(int *)(param_1 + 5) - *(int *)(param_1 + 0xd)) < param_2) {
    iVar1 = FUN_00415a44(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd);
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + param_2;
  return *(int *)(param_1 + 1) + iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415a44  FUN_00415a44   (6 bytes)   [unnamed]
undefined4 __stdcall FUN_00415a44(int param_1)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466138);
  puVar1 = (undefined4 *)operator_new_array();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *sehChainHead = sehPrevFrame;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415a4a  FUN_00415a4a   (121 bytes)   [unnamed]
undefined4 __stdcall FUN_00415a4a(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  undefined4 *sehChainHead;
  
  uVar3 = *(uint *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x466138);
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  if (uVar3 <= *(uint *)(iVar1 + 5)) {
    uVar3 = *(uint *)(iVar1 + 5);
  }
  *(uint *)(unaff_EBP + -0x30) = uVar3 + 4;
  iVar2 = operator_new_array();
  *(int *)(unaff_EBP + -4) = iVar2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar1 + 1);
    **(undefined4 **)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  *(int *)(iVar1 + 1) = iVar2 + 4;
  *(int *)(iVar1 + 9) = *(int *)(iVar1 + 9) + 1;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415d34  FUN_00415d34   (15 bytes)   [unnamed]
void __stdcall FUN_00415d34(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415f38  FUN_00415f38   (40 bytes)   [unnamed]
void __cdecl FUN_00415f38(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004159ac(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416594  FUN_00416594   (67 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00416594(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466398);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416614  FUN_00416614   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_00416614(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4663bc);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004166f4  FUN_004166f4   (78 bytes)   [unnamed]
int * __cdecl FUN_004166f4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4666b0);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_00416814(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416744  FUN_00416744   (56 bytes)   [unnamed]
int * __cdecl FUN_00416744(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4666b8);
  iVar1 = FUN_00416814(param_3,param_2,param_4);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041677c  FUN_0041677c   (66 bytes)   [unnamed]
int * __cdecl FUN_0041677c(int *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4666c0);
  iVar1 = FUN_00416814((uint)param_2[1],(uint)param_2[3],(uint)*param_2);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004167c0  FUN_004167c0   (82 bytes)   [unnamed]
bool __cdecl FUN_004167c0(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    if ((param_1 == 0) || (0xc < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (uint)(byte)(&DAT_00466567)[param_1];
      iVar2 = FUN_00416898(param_3);
      if ((iVar2 != 0) && (param_1 == 2)) {
        uVar3 = uVar3 + 1;
      }
      return param_2 <= uVar3;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416814  FUN_00416814   (130 bytes)   [unnamed]
int __cdecl FUN_00416814(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 regHigh;
  int iVar2;
  
  if (param_3 < 0x8a) {
    param_3 = param_3 + 0x76c;
  }
  bVar1 = FUN_004167c0(param_1,param_2,param_3);
  if (CONCAT31(regHigh,bVar1) == 0) {
    iVar2 = 0;
  }
  else {
    if (param_1 < 3) {
      iVar2 = param_1 + 9;
      param_3 = param_3 - 1;
    }
    else {
      iVar2 = param_1 - 3;
    }
    iVar2 = (iVar2 * 0x99 + 2U) / 5 +
            ((param_3 / 100) * 0x23ab1 >> 2) + ((param_3 % 100) * 0x5b5 >> 2) + param_2 + 0x1a431f;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416898  FUN_00416898   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_00416898(uint param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 & 3) == 0) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004168d0  FUN_004168d0   (173 bytes)   [unnamed]
void __cdecl FUN_004168d0(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  *param_4 = ((iVar1 + -0x1a431f) * 4 - 1U) / 0x23ab1;
  uVar3 = (iVar1 + -0x1a431f) * 4 + -1 + *param_4 * -0x23ab1 >> 2;
  uVar2 = (uVar3 * 4 + 3) / 0x5b5;
  uVar3 = uVar3 * 4 + uVar2 * -0x5b5 + 7 >> 2;
  *param_2 = (uVar3 * 5 - 3) / 0x99;
  *param_3 = (uVar3 * 5 + *param_2 * -0x99 + 2) / 5;
  *param_4 = uVar2 + *param_4 * 100;
  if (*param_2 < 10) {
    *param_2 = *param_2 + 3;
  }
  else {
    *param_2 = *param_2 - 9;
    *param_4 = *param_4 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416980  FUN_00416980   (37 bytes)   [unnamed]
uint __cdecl FUN_00416980(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_004168d0(param_1,&local_8,&local_c,&local_10);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004169a8  FUN_004169a8   (60 bytes)   [unnamed]
int * __cdecl FUN_004169a8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - 1;
  iVar1 = FUN_004169e4(param_2,0);
  if (iVar1 - 1U < uVar3) {
    iVar2 = 7 - uVar3;
  }
  else {
    iVar2 = -uVar3;
  }
  *param_1 = *param_2 - ((iVar1 - 1U) + iVar2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004169e4  FUN_004169e4   (79 bytes)   [unnamed]
int __cdecl FUN_004169e4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_00416a34(param_1);
    uVar2 = FUN_00416980(param_1);
    iVar3 = FUN_00416814(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a34  FUN_00416a34   (37 bytes)   [unnamed]
uint __cdecl FUN_00416a34(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_004168d0(param_1,&local_8,&local_c,&local_10);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a5c  FUN_00416a5c   (18 bytes)   [unnamed]
void __cdecl FUN_00416a5c(int *param_1,int *param_2,int param_3)

{
  *param_1 = *param_2 + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a70  FUN_00416a70   (38 bytes)   [unnamed]
void __cdecl FUN_00416a70(int param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a98  FUN_00416a98   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00416a98(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4666d8);
  FUN_0041c7c8(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00416a70((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416afc  FUN_00416afc   (67 bytes)   [unnamed]
undefined4 * __cdecl FUN_00416afc(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4666fc);
  FUN_0041c798(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00416a70((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416b78  FUN_00416b78   (67 bytes)   [unnamed]
void __cdecl FUN_00416b78(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_0041d158(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 9) == 0) {
        *(HGDIOBJ *)((int)param_1 + 9) = hGdiObject;
      }
      else {
        FUN_0041d184((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c00  FUN_00416c00   (73 bytes)   [unnamed]
void __cdecl FUN_00416c00(undefined4 *param_1,uint *param_2,byte forceBkgd)

{
  HPALETTE hPalette;
  
  hPalette = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)forceBkgd);
  if (hPalette != (HPALETTE)0x0) {
    FUN_0041d158(*param_2);
    if ((HPALETTE)0x1 < hPalette) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = hPalette;
      }
      else {
        FUN_0041d184((uint)hPalette);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c78  FUN_00416c78   (42 bytes)   [unnamed]
void __cdecl FUN_00416c78(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_0041d184((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416ca4  FUN_00416ca4   (42 bytes)   [unnamed]
void __cdecl FUN_00416ca4(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 9) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 9));
    FUN_0041d184((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 9) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416cfc  FUN_00416cfc   (44 bytes)   [unnamed]
void __cdecl FUN_00416cfc(undefined4 *param_1)

{
  HPALETTE hPalette;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    hPalette = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_0041d184((uint)hPalette);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416d28  FUN_00416d28   (42 bytes)   [unnamed]
void __cdecl FUN_00416d28(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x19) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x19));
    FUN_0041d184((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x19) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416d54  FUN_00416d54   (42 bytes)   [unnamed]
void __cdecl FUN_00416d54(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x1d));
    FUN_0041d184((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x1d) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416d80  FUN_00416d80   (58 bytes)   [unnamed]
void __cdecl FUN_00416d80(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00416c78(param_1);
    piVar1 = param_1;
    FUN_00416ca4(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_00416cfc(param_1);
    FUN_00416d28(param_1);
    FUN_00416d54(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416dbc  FUN_00416dbc   (299 bytes)   [unnamed]
void __cdecl FUN_00416dbc(undefined4 *param_1,uint *param_2,int *param_3,int w2,int h2,DWORD rop)

{
  int w;
  int h;
  
  FUN_00416b78(param_1,param_2);
  w = (param_3[2] - *param_3) - w2;
  h = (param_3[3] - param_3[1]) - h2;
  PatBlt((HDC)*param_1,*param_3,param_3[1],w2,h,rop);
  PatBlt((HDC)*param_1,*param_3 + w2,param_3[1],w,h2,rop);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,h2,rop);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + h2,w2,h,rop);
  FUN_00416ca4(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041737c  FUN_0041737c   (38 bytes)   [unnamed]
void __cdecl FUN_0041737c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004173a4  FUN_004173a4   (45 bytes)   [unnamed]
undefined1 __cdecl FUN_004173a4(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004173d4  FUN_004173d4   (53 bytes)   [unnamed]
undefined1 __cdecl FUN_004173d4(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041740c  FUN_0041740c   (41 bytes)   [unnamed]
void __cdecl FUN_0041740c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417438  FUN_00417438   (35 bytes)   [unnamed]
void __cdecl FUN_00417438(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041745c  FUN_0041745c   (35 bytes)   [unnamed]
void __cdecl FUN_0041745c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417480  FUN_00417480   (40 bytes)   [unnamed]
undefined1 __cdecl FUN_00417480(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004174a8  FUN_004174a8   (48 bytes)   [unnamed]
bool __cdecl FUN_004174a8(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  
  cVar1 = (*(code *)param_2)();
  return cVar1 != '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x004174d8  FUN_004174d8   (40 bytes)   [unnamed]
void __cdecl FUN_004174d8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417500  FUN_00417500   (64 bytes)   [unnamed]
void __cdecl FUN_00417500(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417540  FUN_00417540   (89 bytes)   [unnamed]
undefined1 __cdecl FUN_00417540(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041759c  FUN_0041759c   (58 bytes)   [unnamed]
void __cdecl FUN_0041759c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004175d8  FUN_004175d8   (63 bytes)   [unnamed]
undefined1 __cdecl FUN_004175d8(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417618  FUN_00417618   (51 bytes)   [unnamed]
void __cdecl FUN_00417618(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041764c  FUN_0041764c   (35 bytes)   [unnamed]
undefined4 __cdecl FUN_0041764c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417670  FUN_00417670   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_00417670(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417698  FUN_00417698   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_00417698(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004176d8  FUN_004176d8   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_004176d8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417700  FUN_00417700   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_00417700(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417744  FUN_00417744   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_00417744(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417770  FUN_00417770   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_00417770(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004177a4  FUN_004177a4   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_004177a4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004177d8  FUN_004177d8   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_004177d8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417810  FUN_00417810   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_00417810(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417848  FUN_00417848   (62 bytes)   [unnamed]
undefined4 __cdecl FUN_00417848(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417888  FUN_00417888   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_00417888(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004178b0  FUN_004178b0   (59 bytes)   [unnamed]
undefined4 __cdecl FUN_004178b0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004178ec  FUN_004178ec   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_004178ec(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417918  FUN_00417918   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_00417918(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417950  FUN_00417950   (114 bytes)   [unnamed]
undefined4 __cdecl FUN_00417950(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5)

{
  if ((param_5 < 0x200) || (0x20d < param_5)) {
    (*(code *)param_2)();
  }
  else {
    (*(code *)param_2)();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179cc  FUN_004179cc   (38 bytes)   [unnamed]
undefined4 __cdecl FUN_004179cc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 0xc) + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179f4  FUN_004179f4   (87 bytes)   [unnamed]
undefined4 __cdecl FUN_004179f4(undefined4 param_1,int *param_2,int *param_3,undefined *param_4)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (param_4 == (undefined *)0x0) {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  else {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      uVar1 = (*(code *)param_4)();
      if ((char)uVar1 != '\0') {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417dd0  FUN_00417dd0   (81 bytes)   [unnamed]
undefined4 __stdcall FUN_00417dd0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  code *lpfn;
  int lParam;
  undefined4 uStack_8;
  
  puVar1 = FUN_00410934();
  if (*(int *)(puVar1 + 0x10) == 2) {
    uVar2 = 0x2000;
  }
  else {
    uStack_8 = uStack_8 & 0xffffff;
    lParam = (int)&uStack_8 + 3;
    lpfn = FUN_00417e24;
    dwThreadId = GetCurrentThreadId();
    EnumThreadWindows(dwThreadId,lpfn,lParam);
    if (GH_PIECE(uStack_8, 3, undefined1) == '\0') {
      uVar2 = 0x1000;
    }
    else {
      uVar2 = 0x2000;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e24  FUN_00417e24   (15 bytes)   [unnamed]
undefined4 __stdcall FUN_00417e24(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e34  FUN_00417e34   (221 bytes)   [unnamed]
undefined4 __cdecl FUN_00417e34(int *param_1,LPCSTR caption,char *param_3)

{
  int iVar1;
  uint *s;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 text;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    s = (uint *)(**(code **)(*param_1 + 4))();
    pcVar3 = strlen(s);
  }
  if (caption == (LPCSTR)0x0) {
    caption = PTR_s_Unhandled_Exception_004668d4;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_00455bc0((char *)&text,"Unknown Exception");
    pcVar3 = strlen(&text);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_00455bc0((char *)&text,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&text + (int)pcVar3) = '\n';
    FUN_00455bc0(pcVar3 + (int)&text + 1,param_3);
  }
  uVar5 = FUN_00417dd0();
  iVar1 = MessageBoxExA((HWND)0x0,(LPCSTR)&text,caption,uVar5 | local_8 | 0x10,0);
  if (iVar1 == 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

} // namespace tea
