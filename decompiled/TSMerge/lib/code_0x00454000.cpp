// TSMerge.exe — runtime / library code "code_0x00454000"
// 115 functions, 0x004541b8..0x00457f1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004541b8  FUN_004541b8   (93 bytes)   [unnamed]
void __cdecl FUN_004541b8(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4738f0);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00473950;
    FUN_00453dcc(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454218  FUN_00454218   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_00454218(uint *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint ch;
  uint uVar6;
  undefined4 *sehChainHead;
  uint *local_38;
  undefined4 sehPrevFrame;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x473924);
  uVar1 = FUN_00453f98((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_00454780(use_ClibLocale,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      ch = (uint)bVar4;
      iVar3 = FUN_00458e54(ch);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_00458e28(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_00458dd4(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_00458e68(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_00458e14(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = isalpha(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_00458de8(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_00458e40(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_00458e7c(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_00458dfc(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
    *sehChainHead = sehPrevFrame;
  }
  else {
    puVar2 = (uint *)&DAT_004733a8;
    *sehChainHead = sehPrevFrame;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045439c  FUN_0045439c   (111 bytes)   [unnamed]
void __stdcall FUN_0045439c(void)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473a14);
  puVar1 = DAT_004775c4;
  if (DAT_00473a00 != '\0') {
    DAT_004775c4[1] = DAT_004775c4[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00473a00 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045440c  std::string::string   (87 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040da88 (87 bytes; the code occurs several times, e.g. one template instance per type). default constructor: data = the shared empty rep
/* WARNING: Removing unreachable block (ram,0x0045444a) */
int __cdecl std::string::string(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473a34);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454484  FUN_00454484   (32 bytes)   [unnamed]
int * __cdecl FUN_00454484(int *param_1)

{
  if (*param_1 == 0) {
    DAT_004775c8 = DAT_004775c8 + 1;
    *param_1 = DAT_004775c8;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045474c  FUN_0045474c   (50 bytes)   [unnamed]
undefined * __cdecl FUN_0045474c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  uVar1 = 0;
  do {
    if ((uVar2 & param_2) != 0) {
      return *(undefined **)(*(int *)(param_1 + 8) + 8 + uVar1 * 0x10);
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (uVar1 < 6);
  return &DAT_00473b1a;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454780  FUN_00454780   (352 bytes)   [unnamed]
int * __cdecl FUN_00454780(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int i;
  uint uVar6;
  uint j;
  char *pcVar8;
  undefined4 *sehChainHead;
  byte bVar9;
  char newStr [16];
  char newStr2 [16];
  char newStr3 [16];
  char newStr4 [16];
  char newStr5 [32];
  char newStr6 [16];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x473c38);
  ehContext = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_0045aff8((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_004548bf;
  strlen(puVar2);
  pcVar3 = (char *)operator_new_array();
  pcVar4 = "LC_COLLATE";
  pcVar8 = newStr;
  for (i = 0x1c; i != 0; i = i + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (param_3 < 5) {
    if (param_3 == 4) {
      pcVar4 = newStr3;
    }
    else if (param_3 == 1) {
      pcVar4 = newStr;
    }
    else {
      if (param_3 != 2) goto LAB_00454822;
      pcVar4 = newStr2;
    }
  }
  else if (param_3 == 0x10) {
    pcVar4 = newStr4;
  }
  else if (param_3 == 0x20) {
    pcVar4 = newStr5;
  }
  else {
LAB_00454822:
    pcVar4 = newStr6;
  }
  pcVar4 = thunk_FUN_00455e58((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_strchr((char *)param_1[1],'=');
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar4 = (char *)param_1[1];
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (j = uVar6 >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = pcVar4 + 1;
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (j = uVar6 >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  pcVar4 = thunk_strchr(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_004548bf:
  FUN_0045aff8((ushort)param_3,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454940  FUN_00454940   (713 bytes)   [unnamed]
void __stdcall FUN_00454940(void)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  uint uVar6;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  int *strRep2;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *localeImp;
  undefined4 *localeImp2;
  undefined1 str [8];
  int *str2;
  undefined **logicError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x473c98);
  if ((*(undefined4 * *)&DAT_004775d4) == (undefined4 *)0x0) goto LAB_00454b34;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar6 = 1;
  copyCtor = std::logic_error::logic_error;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_locale_initid_called_twice_0047397c);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  logicError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x20;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = len;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep2 = str2 + -3;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + 1;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_00454b1d;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_00454b1d:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_00404790,(undefined4*)logicError,objectDtor,(undefined*)copyCtor,uVar6,throwFlags,throwFile,throwLine);
LAB_00454b34:
  localeImp2 = (undefined4 *)operator_new();
  if (localeImp2 != (undefined4 *)0x0) {
    ehContext = 0x50;
    __rwstd::locale_imp::locale_imp(localeImp2,10,1);
    ehContext = 0x44;
  }
  DAT_004775cc = localeImp2;
  *(undefined1 *)(localeImp2 + 0xc) = 1;
  std::string::assign_cstr((int)(localeImp2 + 8),(uint *)&DAT_00473b1b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    std::string::operator_assign(DAT_004775cc[2] + iVar2 * 0x10,(int)(DAT_004775cc + 8));
    iVar2 = iVar2 + 1;
  }
  localeImp = (undefined4 *)operator_new();
  if (localeImp != (undefined4 *)0x0) {
    ehContext = 0x68;
    __rwstd::locale_imp::locale_imp(localeImp,10,2);
  }
  DAT_004775d0 = localeImp;
  localeImp[6] = 0x3f0;
  *(undefined1 *)(localeImp + 0xc) = 1;
  (*(undefined4 * *)&DAT_004775d4) = DAT_004775cc;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454d5c  FUN_00454d5c   (113 bytes)   [unnamed]
int * __cdecl FUN_00454d5c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473d1c);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)*param_2) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    iVar3 = *param_2;
    *param_1 = iVar3;
    piVar1 = (int *)(iVar3 + 4);
    *piVar1 = *piVar1 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454dd0  FUN_00454dd0   (877 bytes)   [unnamed]
int __cdecl FUN_00454dd0(int str,int *param_2)

{
  uint len;
  int refs;
  undefined4 uVar3;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined4 *dest;
  undefined4 *src;
  uint unused;
  int unused2;
  int *newRep;
  int *newData;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *newData2;
  int *unused8;
  uint unused9;
  undefined1 *unused10;
  int *newRep2;
  int *unused11;
  int *strRep2;
  undefined1 *unused12;
  int *unused13;
  undefined4 unused14;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str2 [8];
  int *str3;
  undefined **runtimeError [2];
  undefined1 newStr [8];
  int *unused15;
  
  __InitExceptBlockLDTC(0x473d88);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    ehContext = 8;
    std::string::string_from_cstr(str,(uint *)&DAT_00473b29);
    *sehChainHead = sehPrevFrame;
    return str;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_004554fc(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0045501a;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar7 = 1;
  copyCtor = &LAB_00454c70;
  uVar3 = 0;
  ehContext = 0x20;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_Error_constructing_locale_name_00473988);
  std::string::string_from_cstr((int)str2,msgText);
  ehDtorCount = ehDtorCount + 2;
  runtimeError[0] = &std::runtime_error::vftable;
  unused14 = 0;
  unused15 = (int *)0x0;
  ehContext = 0x2c;
  if (str3[-3] == -1 || str3[-3] + 1 < 0) {
    len = str3[-1];
    newRep2 = std::string::__getRep(newStr,len,len);
    unused10 = newStr;
    newData2 = newRep2 + 3;
    unused8 = str3;
    unused9 = len;
    unused11 = newData2;
    unused15 = newData2;
    memcpy(newData2,str3,len);
  }
  else {
    unused12 = newStr;
    unused13 = str3;
    unused15 = str3;
    strRep2 = str3 + -3;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x20;
  ehDtorCount = ehDtorCount + 1;
  if (str3 != (int *)0x0) {
    if (str3[-3] != -1) {
      strRep = str3 + -3;
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00455003;
    }
    unused7 = str3 + -3;
    unused6 = str3 + -3;
    operator_delete();
    unused5 = 0;
    unused4 = str2;
    str3 = (int *)0x0;
  }
LAB_00455003:
  ehContext = 0x14;
  _ThrowExceptionLDTC((uint *)&DAT_00454c0c,(undefined4*)runtimeError,uVar3,copyCtor,uVar7,throwFlags,throwFile,throwLine);
LAB_0045501a:
  ehContext = 0x50;
  iVar4 = *param_2;
  unused3 = 0;
  *(undefined4 *)(str + 8) = 0;
  refs = *(int *)(*(int *)(iVar4 + 0x28) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x28) + -4);
    newRep = std::string::__getRep(str,uVar7,uVar7);
    newData = newRep + 3;
    *(int **)(str + 8) = newData;
    unused2 = str;
    src = *(undefined4 **)(iVar4 + 0x28);
    dest = *(undefined4 **)(str + 8);
    unused = uVar7;
    memcpy(dest,src,uVar7);
  }
  else {
    *(undefined4 *)(str + 8) = *(undefined4 *)(iVar4 + 0x28);
    strRep = (int *)(*(int *)(str + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455140  FUN_00455140   (415 bytes)   [unnamed]
int * __cdecl FUN_00455140(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  int *piVar4;
  uint *puVar5;
  undefined4 object [2];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *local_10;
  undefined4 unused;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x473e10);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_004775cc;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_004775d0;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      _ThrowExceptionLDTC((uint *)&DAT_0042f564,object,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_0045474c(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        ehContext = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_004775d4 == 0) {
          FUN_00454940();
        }
        local_8[1] = local_8[1] + 1;
        ehDtorCount = ehDtorCount + 1;
        FUN_004552e0((int *)&local_8,piVar4,puVar5);
        ehDtorCount = ehDtorCount + -1;
        local_8[1] = local_8[1] + -1;
        if ((local_8[1] == 0) && (local_10 = local_8, local_8 != (undefined4 *)0x0)) {
          unused = *local_8;
          ehContext = 0x20;
          (**(code **)*local_8)();
          ehContext = 0x14;
        }
      }
    }
  }
  FUN_004552e0(param_1,piVar3,param_2);
  *sehChainHead = sehPrevFrame;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004552e0  FUN_004552e0   (192 bytes)   [unnamed]
void __cdecl FUN_004552e0(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  uint *puVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473e4c);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_00454484((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_0044fb48((int *)(*param_1 + 0x10),uVar1 + 1,0);
  }
  puVar2 = *(undefined4 **)(*(int *)(*param_1 + 0x10) + uVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *(int **)(*(int *)(*param_1 + 0x10) + uVar1 * 4) = param_2;
  param_2[1] = param_2[1] + 1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004553a0  FUN_004553a0   (98 bytes)   [unnamed]
void __cdecl FUN_004553a0(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473e84);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00472ff0;
    __rwstd::ref_counted::_dtor(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455404  FUN_00455404   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00455404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455420  FUN_00455420   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00455420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045543c  FUN_0045543c   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0045543c(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455448  FUN_00455448   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_00455448(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455450  FUN_00455450   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00455450(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045545c  FUN_0045545c   (20 bytes)   [unnamed]
uint __cdecl FUN_0045545c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455470  FUN_00455470   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00455470(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004554fc  FUN_004554fc   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_004554fc(int str,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x473ef8);
  puVar1 = (uint *)FUN_0045aff8(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)str2,puVar1);
  FUN_0045aff8(1,*(uint **)(*param_2 + 8));
  FUN_0045aff8(2,*(uint **)(*param_2 + 0x18));
  FUN_0045aff8(4,*(uint **)(*param_2 + 0x28));
  FUN_0045aff8(0x10,*(uint **)(*param_2 + 0x38));
  FUN_0045aff8(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_0045aff8(0xff,(uint *)0x0);
  std::string::assign_cstr(str,puVar1);
  uVar2 = FUN_0045aff8(0xff,strRep);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (strRep != (uint *)0x0) {
    if (strRep[-3] != 0xffffffff) {
      strRep = strRep + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0045562e;
    }
    operator_delete();
  }
LAB_0045562e:
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455640  __rwstd::except_msg_string::format   (54 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ea4c. formats a library exception message (printf-style) into a buffer; the result is used to build the exception's what() string
undefined1 * __cdecl __rwstd::except_msg_string::format(undefined1 *exceptMsg,byte *format2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473f94);
  FUN_00457f1c(exceptMsg,format2,(uint *)&GHIDRA_STACK(0x0000000c));
  *sehChainHead = sehPrevFrame;
  return exceptMsg;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455990  memchr   (30 bytes)   [analysis (usage pattern, less certain) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ed9c.
char * __cdecl memchr(char *s,char ch,int n)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (n != 0) {
    do {
      pcVar1 = s;
      if (n == 0) break;
      n = n + -1;
      pcVar1 = s + 1;
      in_ZF = ch == *s;
      s = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004559b0  FUN_004559b0   (32 bytes)   [unnamed]
short * __cdecl FUN_004559b0(short *param_1,short param_2,int param_3)

{
  short *psVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      psVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      psVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = psVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return psVar1 + -1;
    }
  }
  return (short *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004559d0  memcpy   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041eddc.
undefined4 * __cdecl memcpy(undefined4 *dest,undefined4 *src,uint n)

{
  uint i;
  undefined4 *puVar2;
  
  puVar2 = dest;
  for (i = n >> 2; i != 0; i = i - 1) {
    *puVar2 = *src;
    src = src + 1;
    puVar2 = puVar2 + 1;
  }
  for (i = n & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)src;
    src = (undefined4 *)((int)src + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004559f4  FUN_004559f4   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004559f4(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 < param_2) {
    puVar3 = param_1;
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (param_1 != param_2) {
    puVar2 = (undefined1 *)((int)param_2 + (param_3 - 1));
    puVar4 = (undefined1 *)((int)param_1 + (param_3 - 1));
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455a40  memset   (138 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ee4c.
undefined4 * __cdecl memset(undefined4 *dest,undefined1 ch,uint n)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(ch,ch);
  if ((n & 0xfffffffc) == 0) {
    if ((n & 3) != 0) {
      *(undefined1 *)dest = ch;
      bVar4 = (char)(n & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)dest + (bVar4 - 1)) = uVar3;
      }
    }
    return dest;
  }
  *(undefined2 *)dest = uVar3;
  puVar1 = (undefined4 *)((int)dest + (n - 4));
  *(undefined2 *)((int)dest + 2) = uVar3;
  uVar2 = *dest;
  uVar5 = n >> 3;
  puVar6 = dest;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return dest;
  }
  do {
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    if (uVar5 == 1) break;
    puVar6[2] = uVar2;
    puVar6[3] = uVar2;
    if (uVar5 == 2) break;
    puVar6[4] = uVar2;
    puVar6[5] = uVar2;
    if (uVar5 == 3) break;
    puVar6[6] = uVar2;
    puVar6[7] = uVar2;
    if (uVar5 == 4) break;
    puVar6[8] = uVar2;
    puVar6[9] = uVar2;
    if (uVar5 == 5) break;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar2;
    puVar6 = puVar6 + 0xc;
    uVar5 = uVar5 - 6;
  } while (uVar5 != 0);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455acc  FUN_00455acc   (24 bytes)   [unnamed]
undefined2 * __cdecl FUN_00455acc(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ae4  FUN_00455ae4   (60 bytes)   [unnamed]
char * __cdecl FUN_00455ae4(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint i;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (i = uVar3 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455b20  strchr   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef2c.
char * __cdecl strchr(char *s,char ch)

{
  char *pcVar1;
  
  do {
    if (ch == *s) {
      return s;
    }
    if (*s == '\0') {
      return (char *)0x0;
    }
    if (ch == s[1]) {
      return s + 1;
    }
    if (s[1] == '\0') {
      return (char *)0x0;
    }
    if (ch == s[2]) {
      return s + 2;
    }
    if (s[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = s + 3;
    if (ch == *pcVar1) {
      return s + 3;
    }
    s = s + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455b74  FUN_00455b74   (75 bytes)   [unnamed]
int __cdecl FUN_00455b74(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  do {
    iVar2 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if ((iVar2 != 0) || (*param_2 == 0)) {
      return iVar2;
    }
    iVar2 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[1] == 0) {
      return 0;
    }
    iVar2 = (uint)(byte)param_1[2] - (uint)(byte)param_2[2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[2] == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 + 3);
    iVar2 = (uint)(byte)param_1[3] - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (*pbVar1 != 0);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455bc0  FUN_00455bc0   (47 bytes)   [unnamed]
char * __cdecl FUN_00455bc0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint i;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_1;
  for (i = ~uVar2 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = ~uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455bf0  strlen   (90 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef80.
char * __cdecl strlen(uint *s)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = s;
  if (((uint)s & 3) == 0) {
LAB_00455bf8:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_00455c42;
        goto LAB_00455c41;
      }
    }
    else {
LAB_00455c3f:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_00455c40:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = s + 1;
    if ((char)*s == '\0') goto LAB_00455c3f;
    if (*(char *)((int)s + 1) == '\0') goto LAB_00455c40;
    if (*(char *)((int)s + 2) != '\0') {
      puVar2 = (uint *)((int)s + 3U & 0xfffffffc);
      goto LAB_00455bf8;
    }
  }
LAB_00455c41:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_00455c42:
  return (char *)((int)puVar2 + (-1 - (int)s));
}

// ----------------------------------------------------------------------------------------------------
// 0x00455c4c  FUN_00455c4c   (110 bytes)   [unnamed]
char * __cdecl FUN_00455c4c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = param_3 >> 2;
  while( true ) {
    if (uVar3 == 0) {
      *pcVar4 = '\0';
      return param_1;
    }
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    pcVar4[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[2];
    pcVar4[2] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    pcVar4[3] = cVar1;
    pcVar4 = pcVar4 + 4;
    if (cVar1 == '\0') {
      return param_1;
    }
    uVar3 = uVar3 - 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455cbc  thunk → memchr   (5 bytes)   [unnamed]
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455cd0  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455cd5  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr_455cd5(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ce1  thunk → strrchr   (5 bytes)   [unnamed]
uint * __cdecl thunk_strrchr(uint *param_1,char param_2)

{
  char *len;
  uint *puVar2;
  
  len = strlen(param_1);
  puVar2 = (uint *)(len + (int)param_1);
  while( true ) {
    if (param_2 == (char)*puVar2) {
      return puVar2;
    }
    if (param_1 == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ced  thunk → FUN_00455e58   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00455e58(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455cf4  FUN_00455cf4   (108 bytes)   [unnamed]
int __cdecl FUN_00455cf4(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while (3 < param_3) {
    if ((((*param_2 != *param_1) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2])) ||
       (param_2[3] != param_1[3])) break;
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    if (param_3 < 4) break;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      if (bVar2 != bVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar3 = (uint)bVar1 - (uint)bVar2;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455d60  FUN_00455d60   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_00455d60(uint *param_1)

{
  char *len;
  undefined4 *mem;
  
  len = strlen(param_1);
  mem = (undefined4 *)malloc();
  if (mem != (undefined4 *)0x0) {
    memcpy(mem,param_1,(uint)(len + 1));
  }
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455d94  strcmp   (71 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f178.
int __cdecl strcmp(char *s1,char *s2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = toupper((int)*s1);
    uVar2 = toupper((int)*s2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    s1 = s1 + 1;
    s2 = s2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ddc  strncpy   (79 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f1c0.
undefined4 * __cdecl strncpy(undefined4 *dest,uint *src,char *n)

{
  char *len;
  
  len = strlen(src);
  if (n < len) {
    memcpy(dest,src,(uint)n);
  }
  else {
    memcpy(dest,src,(uint)len);
    memset((undefined4 *)(len + (int)dest),0,(int)n - (int)len);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455e2c  strrchr   (41 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f284.
uint * __cdecl strrchr(uint *s,char ch)

{
  char *len;
  uint *puVar2;
  
  len = strlen(s);
  puVar2 = (uint *)(len + (int)s);
  while( true ) {
    if (ch == (char)*puVar2) {
      return puVar2;
    }
    if (s == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455e58  FUN_00455e58   (84 bytes)   [unnamed]
char * __cdecl FUN_00455e58(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455eac  FUN_00455eac   (24 bytes)   [unnamed]
int __cdecl FUN_00455eac(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ec4  FUN_00455ec4   (63 bytes)   [unnamed]
short * __cdecl FUN_00455ec4(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_00455eac(param_2);
  uVar2 = 0;
  psVar3 = param_1;
  if (uVar1 != 0) {
    do {
      *psVar3 = *param_2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  param_1[uVar1] = 0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455f04  __InitExceptBlockLDTC   (57 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f3fc. Borland exception-frame setup; first call in most functions, argument is that function's exception table
undefined4 __InitExceptBlockLDTC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar3 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar3[2] = param_1;
  puVar3[3] = &GHIDRA_STACK(0x00000004);
  puVar3[1] = &LAB_00455f4b;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined2 *)((int)puVar3 + 0x12) = 0;
  puVar3[7] = 0;
  puVar1 = (undefined4 *)segment(in_FS,0);
  uVar2 = *puVar1;
  *puVar3 = uVar2;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar3;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455f74  FUN_00455f74   (343 bytes)   [unnamed]
undefined4 __cdecl FUN_00455f74(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_0045d2c4("IS_STRUC(base->tpMask)","xxtype.cpp",0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_0045d2c4("IS_STRUC(derv->tpMask)","xxtype.cpp",0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_0045d2c4("derv->tpClass.tpcFlags & CF_HAS_BASES","xxtype.cpp",0x13e);
  }
  puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x12) + param_1);
  do {
    piVar1 = (int *)*puVar4;
    if (piVar1 == (int *)0x0) {
      puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) + param_1);
      while( true ) {
        piVar1 = (int *)*puVar4;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        iVar2 = FUN_00456460(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_00455f74((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
          return 1;
        }
        puVar4 = puVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(puVar4 + 2) & 8) == 0) {
      if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      iVar2 = FUN_00456460(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_00455f74((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004560cb  FUN_004560cb   (83 bytes)   [unnamed]
void __stdcall FUN_004560cb(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474208);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_004775e0)[iVar3];
    if ((undefined4 *)(&DAT_004775e0)[iVar3] != (undefined4 *)0x0) {
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[3];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045611e  FUN_0045611e   (613 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0045611e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_0045d2c4("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)","xxtype.cpp",0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_0045d2c4("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)","xxtype.cpp",0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_0045d2c4("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)","xxtype.cpp",0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_00456460(param_6,param_4);
    if (iVar3 != 0) {
      FUN_0045d2c4("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x355);
    }
    iVar3 = FUN_00456460(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_00456460(param_2,param_4), iVar3 != 0)) {
    FUN_0045d2c4("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x35b);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  puVar5 = (undefined4 *)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = (int *)*puVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(puVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || ((puVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + puVar5[1]);
      if ((*(byte *)(puVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_00456460(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0045611e((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_00456329;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_0045d2c4("srcTypPtr","xxtype.cpp",0x3d0);
          }
          puVar4 = FUN_0045611e((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00456348;
        }
LAB_00456329:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_00456348:
    puVar5 = puVar5 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00456385  FUN_00456385   (162 bytes)   [unnamed]
undefined4 __cdecl FUN_00456385(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_0045d2c4(&DAT_00474499 /* "addr" */,"xxtype.cpp",0x515);
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (undefined4 *)(*param_4 + param_1[1]);
    if (param_2 != 0) {
      local_8 = (undefined4 *)*local_8;
    }
    iVar2 = FUN_00456460(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_00456385((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int *)&local_8), iVar2 != 0)) {
      *param_4 = (int)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int)local_8;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456428  FUN_00456428   (55 bytes)   [unnamed]
char * __cdecl FUN_00456428(int param_1)

{
  if (param_1 == 0) {
    return "<notype>";
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0045d2c4("id->tpName","xxtype.cpp",0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00456460  FUN_00456460   (219 bytes)   [unnamed]
undefined4 __cdecl FUN_00456460(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_0045d2c4(&DAT_0047422f /* "tp1" */,"xxtype.cpp",0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_0045d2c4(&DAT_0047423e /* "tp2" */,"xxtype.cpp",0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_0045d2c4("tp1->tpName","xxtype.cpp",0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_0045d2c4("tp2->tpName","xxtype.cpp",0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045653c  FUN_0045653c   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_0045653c(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    while( true ) {
      if (param_2 == param_1) {
        return 1;
      }
      uVar2 = *(ushort *)(param_1 + 1);
      uVar3 = *(ushort *)(param_2 + 1);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((param_3 != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      param_3 = 1;
      param_1 = (int *)param_1[2];
      param_2 = (int *)param_2[2];
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((param_1[3] != param_2[3]) && ((param_3 != 0 || (param_1[3] != 0 || param_2[3] != 0)))) {
      return 0;
    }
    param_3 = 1;
    param_1 = (int *)param_1[2];
    param_2 = (int *)param_2[2];
  }
  iVar4 = FUN_00456460(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_00455f74((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045666c  FUN_0045666c   (272 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045666c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *typeInfoHash;
  
  if (param_1 == 0) {
    _ThrowExceptionLDTC((uint *)&DAT_0042f584,(undefined4 *)&DAT_004775d8,0,(undefined *)0x0,0,0,0,0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0xc) & 0x80) == 0) {
      param_2 = param_2 - *(int *)(param_2 + -4);
      if (*(int *)(param_2 + -4) != 0) {
        FUN_0045d2c4("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",0x29e);
      }
      param_3 = *(int *)(param_2 + -0xc);
    }
    else {
      param_3 = 0;
    }
  }
  uVar2 = param_2 + param_3 >> 4 & 0xff;
  for (typeInfoHash = (undefined4 *)(&DAT_004775e0)[uVar2];
      (typeInfoHash != (undefined4 *)0x0 && ((param_3 != typeInfoHash[1] || (param_2 != typeInfoHash[2]))));
      typeInfoHash = (undefined4 *)typeInfoHash[3]) {
  }
  if (typeInfoHash == (undefined4 *)0x0) {
    typeInfoHash = (undefined4 *)operator_new();
    if (typeInfoHash != (undefined4 *)0x0) {
      uVar1 = (&DAT_004775e0)[uVar2];
      *typeInfoHash = &std::type_info::vftable;
      typeInfoHash[1] = param_3;
      *typeInfoHash = &type_info_hash::vftable;
      typeInfoHash[2] = param_2;
      typeInfoHash[3] = uVar1;
      typeInfoHash[4] = 0;
    }
    (&DAT_004775e0)[uVar2] = typeInfoHash;
  }
  return typeInfoHash;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045677c  FUN_0045677c   (103 bytes)   [unnamed]
char * __cdecl FUN_0045677c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        pcVar2 = "<notype>";
      }
      else {
        pbVar1 = *(byte **)(*(int *)(param_1 + 8) + -0x2c);
        uVar4 = (uint)*pbVar1;
        uVar3 = operator_new_array();
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        memcpy(*(undefined4 **)(param_1 + 0x10),(undefined4 *)(pbVar1 + 1),uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar4) = 0;
        pcVar2 = *(char **)(param_1 + 0x10);
      }
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x10);
    }
  }
  else {
    pcVar2 = FUN_00456428(*(int *)(param_1 + 4));
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004567e4  FUN_004567e4   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_004567e4(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_c;
  int *local_8;
  
  local_8 = param_3;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 - *(int *)(param_2 + -8));
    iVar3 = param_2 - *(int *)(param_2 + -4);
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_0045d2c4("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",1099);
    }
    piVar1 = *(int **)(iVar3 + -0xc);
    if (param_4 == (int *)0x0) {
      return puVar4;
    }
    iVar3 = FUN_00456460(param_4,piVar1);
    if (iVar3 != 0) {
      return puVar4;
    }
    iVar3 = FUN_00456460(local_8,piVar1);
    if ((iVar3 == 0) &&
       (puVar2 = FUN_0045611e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,param_1,local_8,&local_c,
                              1), puVar2 != (undefined4 *)0x0)) {
      return puVar2;
    }
    puVar4 = FUN_0045611e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,0,(int *)0x0,&local_c,1);
    if ((puVar4 != (undefined4 *)0x0) && (local_c != 0)) {
      return puVar4;
    }
  }
  if (param_5 != 0) {
    _ThrowExceptionLDTC((uint *)&DAT_0042f564,(undefined4 *)&DAT_004779e0,0,(undefined *)0x0,0,0,0,0);
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568cc  FUN_004568cc   (122 bytes)   [unnamed]
int __cdecl FUN_004568cc(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_00456385((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_00456385((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_0045d2c4("!\"Can't adjust class address (no base class entry found)\"","xxtype.cpp",0x57e);
    param_1 = 0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456a14  FUN_00456a14   (39 bytes)   [unnamed]
void __stdcall FUN_00456a14(void)

{
  if (DAT_00474548 == (code *)0x0) {
    DAT_00474548 = (undefined*)FUN_00456a3c;
  }
  if ((*(undefined1 * *)&DAT_0047454c) == (undefined1 *)0x0) {
    (*(undefined1 * *)&DAT_0047454c) = &LAB_00456a8c;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456a3c  FUN_00456a3c   (74 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_00456a3c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474570);
  if (DAT_00474548 != FUN_00456a3c) {
    ((code *)DAT_00474548)();
  }
  FUN_0045d628();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ae0  FUN_00456ae0   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_00456ae0(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474654);
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(4,1);
  }
  FUN_00457614();
  ((code *)DAT_00474548)();
  FUN_0045d628();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456b54  FUN_00456b54   (53 bytes)   [unnamed]
void __stdcall FUN_00456b54(void)

{
  int iVar1;
  
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(5,1);
  }
  ((code *)DAT_0047454c)();
  FUN_0045d628();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456b8c  FUN_00456b8c   (75 bytes)   [unnamed]
void __cdecl FUN_00456b8c(undefined4 *param_1)

{
  undefined4 *dest;
  uint n;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00456bd8(&local_c);
    param_1 = local_8;
  }
  n = 0x9c;
  dest = (undefined4 *)__getTlsBlock();
  memcpy(dest,param_1,n);
  FUN_00456a14();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456bd8  FUN_00456bd8   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00456bd8(undefined4 *param_1)

{
  _DAT_00474598 = __getTlsBlock();
  _DAT_00474598 = _DAT_00474598 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00474584;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456c00  FUN_00456c00   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00456c00(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456c0c  FUN_00456c0c   (237 bytes)   [unnamed]
LONG __cdecl FUN_00456c0c(PEXCEPTION_RECORD exceptionRecord,PVOID targetFrame,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS exceptionPointers;
  
  if (exceptionRecord->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((exceptionRecord->ExceptionCode == 0xeefface) || (exceptionRecord->ExceptionCode == 0xeedface)) {
      FUN_00456dd6(targetFrame,exceptionRecord);
      FUN_00456ae0();
    }
    if ((exceptionRecord->ExceptionCode == 0xc00000fd) && (DAT_00474668 != 0)) {
      FUN_0045d560((uint *)"Stack Overflow!");
    }
    if ((DAT_004779f4 != (code *)0x0) && (iVar2 = ((code *)DAT_004779f4)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_004779f0 != (code *)0x0) && (iVar2 = ((code *)DAT_004779f0)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00477e24 != (int *)0x0) && ((*DAT_00477e24 == 1 || (*DAT_00477e24 == 2)))) &&
       ((exceptionRecord->ExceptionCode < 0xeedface || (0xeefface < exceptionRecord->ExceptionCode)))) {
      FUN_0045e9b9(2,3);
    }
    exceptionPointers.ExceptionRecord = exceptionRecord;
    exceptionPointers.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&exceptionPointers);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456cfc  FUN_00456cfc   (26 bytes)   [unnamed]
void __cdecl FUN_00456cfc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_00456c0c;
  FUN_00456d88(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d18  FUN_00456d18   (15 bytes)   [unnamed]
void __cdecl FUN_00456d18(undefined4 *param_1)

{
  FUN_00456d9d(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d28  FUN_00456d28   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00456d28(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_004779f4);
  (*(undefined4 *)&DAT_004779f4) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d74  FUN_00456d74   (17 bytes)   [unnamed]
void __stdcall FUN_00456d74(void)

{
  if ((*(undefined4 * *)&DAT_00477df8) != (undefined4 *)0x0) {
    FUN_00456cfc((*(undefined4 * *)&DAT_00477df8));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d88  FUN_00456d88   (21 bytes)   [unnamed]
void __cdecl FUN_00456d88(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d9d  FUN_00456d9d   (44 bytes)   [unnamed]
void __cdecl FUN_00456d9d(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 in_FS;
  
  piVar2 = (int *)segment(in_FS,0);
  piVar2 = (int *)*piVar2;
  if (param_1 == piVar2) {
    puVar1 = (undefined4 *)segment(in_FS,0);
    *puVar1 = *param_1;
  }
  else {
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((undefined4 *)*piVar2 == param_1) {
        *piVar2 = *param_1;
        return;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456dd6  FUN_00456dd6   (21 bytes)   [unnamed]
void FUN_00456dd6(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord)

{
  RtlUnwind(targetFrame,(PVOID)0x456de7,exceptionRecord,(PVOID)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456deb  FUN_00456deb   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_00456deb(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  uVar1 = (*(code *)*unaff_EBX)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456df4  access   (60 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ffa0. C runtime access(path, mode): 0 when the path exists
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl access(LPCSTR path,byte mode)

{
  DWORD attributes;
  undefined4 uVar2;
  
  attributes = GetFileAttributesA(path);
  if (attributes == 0xffffffff) {
    uVar2 = FUN_00457cd0();
    return uVar2;
  }
  if (((mode & 2) != 0) && ((attributes & 1) != 0)) {
    _DAT_00475dd8 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e30  FUN_00456e30   (96 bytes)   [unnamed]
undefined4 __cdecl FUN_00456e30(uint param_1)

{
  undefined4 uVar1;
  BOOL ok;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 2) & 1) == 0) &&
     (ok = CloseHandle(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4)), ok != 1)) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  (&DAT_00474b3c)[param_1] = 0;
  *(undefined4 *)(&DAT_00477ac0 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e90  FUN_00456e90   (45 bytes)   [unnamed]
bool __cdecl FUN_00456e90(uint param_1)

{
  DWORD fileType;
  
  if (DAT_00474b38 <= param_1) {
    return false;
  }
  fileType = GetFileType(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4));
  return fileType == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ec0  FUN_00456ec0   (23 bytes)   [unnamed]
bool __cdecl FUN_00456ec0(HANDLE hFile)

{
  DWORD fileType;
  
  fileType = GetFileType(hFile);
  return fileType == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ed8  FUN_00456ed8   (118 bytes)   [unnamed]
DWORD __cdecl FUN_00456ed8(uint param_1,LONG lDistanceToMove,int param_3)

{
  DWORD moveMethod;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 == 0) {
      moveMethod = 0;
    }
    else if (param_3 == 1) {
      moveMethod = 1;
    }
    else {
      if (param_3 != 2) {
        moveMethod = FUN_00457c6c(1);
        return moveMethod;
      }
      moveMethod = 2;
    }
    (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] & 0xfffffdff;
    moveMethod = SetFilePointer(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),lDistanceToMove,(PLONG)0x0,moveMethod);
    if (moveMethod == 0xffffffff) {
      FUN_00457cd0();
    }
  }
  else {
    moveMethod = FUN_00457c6c(6);
  }
  return moveMethod;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f50  FUN_00456f50   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_00456f50(LPCSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES securityAttrs;
  DWORD shareMode;
  DWORD desiredAccess;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00456fbb:
      creationDisposition = 1;
      goto LAB_00456fdc;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_00456fdc;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_00456fdc;
      }
      goto LAB_00456fd7;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00456fd7:
      creationDisposition = 3;
      goto LAB_00456fdc;
    }
    goto LAB_00456fbb;
  }
  creationDisposition = 5;
LAB_00456fdc:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    desiredAccess = 0x80000000;
  }
  else if (uVar3 == 1) {
    desiredAccess = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    desiredAccess = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    shareMode = 0;
  }
  else if (uVar3 == 0x20) {
    shareMode = 1;
  }
  else if (uVar3 == 0x30) {
    shareMode = 2;
  }
  else {
    shareMode = 3;
  }
  securityAttrs.nLength = 0xc;
  securityAttrs.lpSecurityDescriptor = (LPVOID)0x0;
  securityAttrs.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(fileName,desiredAccess,shareMode,&securityAttrs,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045714c  FUN_0045714c   (107 bytes)   [unnamed]
char * __cdecl FUN_0045714c(char *param_1,int param_2)

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
// 0x004571b8  FUN_004571b8   (302 bytes)   [unnamed]
char * __cdecl FUN_004571b8(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  char *pcVar1;
  uint uVar2;
  char *found;
  int iVar4;
  char *pcVar5;
  uint numberOfBytesToRead2;
  
  if (param_1 < DAT_00474b38) {
    if (numberOfBytesToRead + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0045764c(param_1,buffer,(DWORD)numberOfBytesToRead);
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (numberOfBytesToRead != (char *)0x0) {
        while( true ) {
          numberOfBytesToRead2 = (int)numberOfBytesToRead - (int)pcVar1;
          uVar2 = FUN_0045764c(param_1,buffer,numberOfBytesToRead2);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          found = memchr(buffer,'\x1a',uVar2);
          if (found != (char *)0x0) {
            (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] | 0x200;
            uVar2 = (int)found - (int)buffer;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((buffer[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_0045764c(param_1,buffer + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_0045714c(buffer,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < numberOfBytesToRead2) && ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (found != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (numberOfBytesToRead <= pcVar1) {
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
    pcVar1 = (char *)FUN_00457c6c(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004572e8  FUN_004572e8   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_004572e8(LPCWSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES securityAttrs;
  DWORD shareMode;
  DWORD desiredAccess;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00457353:
      creationDisposition = 1;
      goto LAB_00457374;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_00457374;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_00457374;
      }
      goto LAB_0045736f;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_0045736f:
      creationDisposition = 3;
      goto LAB_00457374;
    }
    goto LAB_00457353;
  }
  creationDisposition = 5;
LAB_00457374:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    desiredAccess = 0x80000000;
  }
  else if (uVar3 == 1) {
    desiredAccess = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    desiredAccess = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    shareMode = 0;
  }
  else if (uVar3 == 0x20) {
    shareMode = 1;
  }
  else if (uVar3 == 0x30) {
    shareMode = 2;
  }
  else {
    shareMode = 3;
  }
  securityAttrs.nLength = 0xc;
  securityAttrs.lpSecurityDescriptor = (LPVOID)0x0;
  securityAttrs.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(fileName,desiredAccess,shareMode,&securityAttrs,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004574e4  FUN_004574e4   (284 bytes)   [unnamed]
int __cdecl FUN_004574e4(uint param_1,char *buffer,uint numberOfBytesToWrite)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char buffer2 [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_00474b38) {
    if (numberOfBytesToWrite + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 8) != 0) {
        FUN_00456ed8(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004576e8(param_1,buffer,numberOfBytesToWrite);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = buffer;
        while ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite) {
          pcVar3 = buffer2;
          while (((int)pcVar3 - (int)buffer2 < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite))) {
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
          iVar2 = FUN_004576e8(param_1,buffer2,(int)pcVar3 - (int)buffer2);
          if (iVar2 != (int)pcVar3 - (int)buffer2) {
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
    local_c = FUN_00457c6c(-6);
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457600  FUN_00457600   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_00457600(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457614  FUN_00457614   (56 bytes)   [unnamed]
int __stdcall FUN_00457614(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00474688;
  iVar2 = (*(int *)&DAT_00474b38);
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_004577dc(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045764c  FUN_0045764c   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_0045764c(uint param_1,LPVOID buffer,DWORD numberOfBytesToRead)

{
  undefined4 uVar1;
  BOOL ok;
  DWORD numberOfBytesRead;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  ok = ReadFile(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),buffer,numberOfBytesToRead,&numberOfBytesRead,
                   (LPOVERLAPPED)0x0);
  if (ok != 1) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  return numberOfBytesRead;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457694  FUN_00457694   (25 bytes)   [unnamed]
void __cdecl FUN_00457694(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  FUN_004571b8(param_1,buffer,numberOfBytesToRead);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576b0  FUN_004576b0   (31 bytes)   [unnamed]
void __cdecl FUN_004576b0(LPCWSTR fileName,uint param_2)

{
  uint unaff_EBP;
  
  FUN_004572e8(fileName,param_2 & 0xffff36ff | 0x8000,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576d0  FUN_004576d0   (21 bytes)   [unnamed]
void __cdecl FUN_004576d0(LPCWSTR owner,uint key)

{
  uint unaff_EBP;
  
  FUN_004572e8(owner,key,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576e8  FUN_004576e8   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_004576e8(uint param_1,LPCVOID buffer,DWORD numberOfBytesToWrite)

{
  undefined4 uVar1;
  BOOL ok;
  DWORD numberOfBytesWritten;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  ok = WriteFile(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),buffer,numberOfBytesToWrite,&numberOfBytesWritten,
                    (LPOVERLAPPED)0x0);
  if (ok != 1) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  return numberOfBytesWritten;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457730  FUN_00457730   (25 bytes)   [unnamed]
void __cdecl FUN_00457730(uint param_1,char *buffer,uint numberOfBytesToWrite)

{
  FUN_004574e4(param_1,buffer,numberOfBytesToWrite);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045774c  thunk → access   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl thunk_access(LPCSTR fileName,byte param_2)

{
  DWORD attributes;
  undefined4 uVar2;
  
  attributes = GetFileAttributesA(fileName);
  if (attributes == 0xffffffff) {
    uVar2 = FUN_00457cd0();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((attributes & 1) != 0)) {
    _DAT_00475dd8 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457754  FUN_00457754   (125 bytes)   [unnamed]
undefined4 __cdecl FUN_00457754(int *param_1,int mem,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    free();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_00475e58 = &LAB_00458a50;
    if (mem == 0) {
      mem = malloc();
      if (mem == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = mem;
    param_1[1] = mem;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004577d4  thunk → FUN_00456e30   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_00456e30(uint param_1)

{
  undefined4 uVar1;
  BOOL ok;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 2) & 1) == 0) &&
     (ok = CloseHandle(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4)), ok != 1)) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  (&DAT_00474b3c)[param_1] = 0;
  *(undefined4 *)(&DAT_00477ac0 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004577dc  FUN_004577dc   (127 bytes)   [unnamed]
undefined4 __cdecl FUN_004577dc(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint numberOfBytesToWrite;
  
  if (param_1 == (int *)0x0) {
    FUN_0045785c();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      numberOfBytesToWrite = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - numberOfBytesToWrite;
      *param_1 = param_1[1];
      uVar2 = FUN_004574e4((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],numberOfBytesToWrite);
      if ((numberOfBytesToWrite == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
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
// 0x0045785c  FUN_0045785c   (90 bytes)   [unnamed]
int __stdcall FUN_0045785c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint numberOfBytesToWrite;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00474688;
  iVar5 = (*(int *)&DAT_00474b38);
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      numberOfBytesToWrite = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - numberOfBytesToWrite;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_004574e4((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],numberOfBytesToWrite);
      if ((numberOfBytesToWrite != uVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
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
// 0x004578b8  FUN_004578b8   (13 bytes)   [unnamed]
void __cdecl FUN_004578b8(undefined *param_1)

{
  PTR_DAT_00474c08 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578c8  FUN_004578c8   (19 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004578c8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_00474684 = *param_1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578dc  FUN_004578dc   (212 bytes)   [unnamed]
char * __cdecl FUN_004578dc(char *param_1,LPCSTR fileName,uint param_3)

{
  char cVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  uint i;
  char *pcVar6;
  char *pcVar7;
  CHAR rootPathName [4];
  LPSTR filePart;
  
  lpBuffer = (LPSTR)malloc();
  if (lpBuffer == (LPSTR)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    DVar2 = GetFullPathNameA(fileName,0x104,lpBuffer,&filePart);
    if ((DVar2 == 0) || (0x103 < DVar2)) {
      free();
      param_1 = (char *)0x0;
    }
    else {
      if (lpBuffer[1] == ':') {
        rootPathName[0] = *lpBuffer;
        rootPathName[1] = 0x3a;
        rootPathName[2] = 0x5c;
        rootPathName[3] = 0;
        UVar3 = GetDriveTypeA(rootPathName);
        if (UVar3 < 2) {
          free();
          return (char *)0x0;
        }
      }
      if (param_1 == (char *)0x0) {
        param_1 = (char *)FUN_0044b964();
      }
      else if (param_3 < DVar2 + 1) {
        free();
        param_1 = (char *)0x0;
      }
      else {
        uVar4 = 0xffffffff;
        do {
          pcVar6 = lpBuffer;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar6 + -uVar4;
        pcVar7 = param_1;
        for (i = uVar4 >> 2; i != 0; i = i - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        free();
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004579b0  FUN_004579b0   (64 bytes)   [unnamed]
int __cdecl FUN_004579b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *i;
  
  iVar1 = 0;
  for (i = &DAT_00474b3c; (iVar1 < (*(int *)&DAT_00474b38) && (*i != 0)); i = i + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == (*(int *)&DAT_00474b38)) {
    return -1;
  }
  (&DAT_00474b3c)[iVar1] = param_2;
  *(undefined4 *)(&DAT_00477ac0 + iVar1 * 4) = param_1;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004579f0  FUN_004579f0   (104 bytes)   [unnamed]
uint __cdecl FUN_004579f0(uint param_1,uint param_2,undefined4 param_3)

{
  int *i;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (i = &DAT_00474b3c; ((int)param_2 < (int)DAT_00474b38 && (*i != 0));
        i = i + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00474b38) && (param_2 < DAT_00474b38)) {
    if (((&DAT_00474b3c)[param_1] != 0) && ((&DAT_00474b3c)[param_2] == 0)) {
      (&DAT_00474b3c)[param_2] = (&DAT_00474b3c)[param_1];
      *(undefined4 *)(&DAT_00477ac0 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457a58  FUN_00457a58   (25 bytes)   [unnamed]
void __cdecl FUN_00457a58(uint param_1)

{
  if (param_1 < DAT_00474b38) {
    (&DAT_00474b3c)[param_1] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457a74  FUN_00457a74   (154 bytes)   [unnamed]
int __cdecl FUN_00457a74(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint *local_c;
  int local_8;
  
  iVar2 = (*(int *)&DAT_00474b38);
  for (piVar4 = &(*(int *)&DAT_00474b38) + (*(int *)&DAT_00474b38); (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
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
    local_c = &DAT_00474b3c;
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
    memcpy((undefined4 *)pbVar5,(undefined4 *)&DAT_00477ac0,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457b10  FUN_00457b10   (345 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00457b10(void)

{
  bool bVar1;
  UINT UVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 regHigh;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA startupInfo;
  
  UVar2 = SetHandleCount(DAT_00474b38);
  if (UVar2 < DAT_00474b38) {
    DAT_00474b38 = UVar2;
  }
  PTR_FUN_0047467c = (undefined*)FUN_00457a74;
  bVar1 = false;
  GetStartupInfoA(&startupInfo);
  if (startupInfo.cbReserved2 != 0) {
    uVar7 = *(uint *)startupInfo.lpReserved2;
    puVar8 = (uint *)((int)startupInfo.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)startupInfo.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_00474b3c;
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
      puVar4 = &DAT_00474b3c + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_00474b38; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_004559f4((undefined4 *)&DAT_00477ac0,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_00477ac0 = GetStdHandle(0xfffffff6);
    DAT_00477ac4 = GetStdHandle(0xfffffff5);
    _DAT_00477ac8 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_00474b3c;
    do {
      bVar1 = FUN_00456e90(uVar7);
      if ((CONCAT31(regHigh,bVar1) == 0) && (DAT_00475ff0 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_00475ff0 != 0) {
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
// 0x00457c6c  FUN_00457c6c   (68 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00457c6c(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_00474dfc) {
      (*(int *)&_DAT_00475dd8) = -param_1;
      _DAT_00477b88 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00457c82;
  param_1 = 1;
LAB_00457c82:
  _DAT_00477b88 = param_1;
  (*(int *)&_DAT_00475dd8) = (int)(char)(&DAT_00474c0c)[param_1];
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cd0  FUN_00457cd0   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_00457cd0(void)

{
  DWORD lastError;
  undefined4 uVar2;
  
  lastError = GetLastError();
  uVar2 = FUN_00457c6c(lastError & 0xffff);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ce4  thunk → FUN_00456ed8   (5 bytes)   [unnamed]
DWORD __cdecl thunk_FUN_00456ed8(uint param_1,LONG lDistanceToMove,int param_3)

{
  DWORD moveMethod;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 == 0) {
      moveMethod = 0;
    }
    else if (param_3 == 1) {
      moveMethod = 1;
    }
    else {
      if (param_3 != 2) {
        moveMethod = FUN_00457c6c(1);
        return moveMethod;
      }
      moveMethod = 2;
    }
    (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] & 0xfffffdff;
    moveMethod = SetFilePointer(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),lDistanceToMove,(PLONG)0x0,moveMethod);
    if (moveMethod == 0xffffffff) {
      FUN_00457cd0();
    }
  }
  else {
    moveMethod = FUN_00457c6c(6);
  }
  return moveMethod;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cec  thunk → FUN_00456f50   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl thunk_FUN_00456f50(LPCSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00456fbb:
      creationDisposition = 1;
      goto LAB_00456fdc;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_00456fdc;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_00456fdc;
      }
      goto LAB_00456fd7;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00456fd7:
      creationDisposition = 3;
      goto LAB_00456fdc;
    }
    goto LAB_00456fbb;
  }
  creationDisposition = 5;
LAB_00456fdc:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    DStack_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar3 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar3 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(fileName,DStack_8,DStack_c,&_Stack_18,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0)
  ;
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cfc  thunk → FUN_004571b8   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004571b8(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  char *pcVar1;
  uint uVar2;
  char *found;
  int iVar4;
  char *pcVar5;
  uint numberOfBytesToRead2;
  
  if (param_1 < DAT_00474b38) {
    if (numberOfBytesToRead + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0045764c(param_1,buffer,(DWORD)numberOfBytesToRead);
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (numberOfBytesToRead != (char *)0x0) {
        while( true ) {
          numberOfBytesToRead2 = (int)numberOfBytesToRead - (int)pcVar1;
          uVar2 = FUN_0045764c(param_1,buffer,numberOfBytesToRead2);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          found = memchr(buffer,'\x1a',uVar2);
          if (found != (char *)0x0) {
            (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] | 0x200;
            uVar2 = (int)found - (int)buffer;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((buffer[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_0045764c(param_1,buffer + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_0045714c(buffer,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < numberOfBytesToRead2) && ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (found != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (numberOfBytesToRead <= pcVar1) {
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
    pcVar1 = (char *)FUN_00457c6c(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457d04  FUN_00457d04   (449 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_00457d04(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7)

{
  int iVar1;
  uint ch;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_00457d2c:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    ch = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)ch) && ((int)ch < 0x80)) && (iVar3 = FUN_0045d0f4(ch), iVar3 != 0))
      goto LAB_00457d2c;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_00457e7b;
    if ((iVar5 != 1) || ((iVar5 = 2, ch != 0x2b && (ch != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((ch == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          ch = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_00457e7b;
          if ((ch == 0x78) || (ch == 0x58)) {
            param_4 = 0x10;
            goto LAB_00457d2c;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_00457e7b;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)ch < 0x30) || (0x39 < (int)ch)) {
          if (((int)ch < 0x61) || (0x7a < (int)ch)) {
            if (((int)ch < 0x41) || (0x5a < (int)ch)) goto LAB_00457e7b;
            local_1c = ch - 0x37;
          }
          else {
            local_1c = ch - 0x57;
          }
        }
        else {
          local_1c = ch - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_00457e7b;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_00457e7b:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (ch == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_00457d2c;
    }
    bVar6 = ch == 0x2d;
    param_5 = iVar3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ecc  FUN_00457ecc   (40 bytes)   [unnamed]
uint __cdecl FUN_00457ecc(undefined4 *src,uint param_2,int *param_3)

{
  memcpy((undefined4 *)*param_3,src,param_2);
  *param_3 = *param_3 + param_2;
  *(undefined1 *)*param_3 = 0;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ef4  sprintf   (40 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00421660.
void __cdecl sprintf(undefined1 *buf,byte *format)

{
  *buf = 0;
  FUN_0045810c(FUN_00457ecc,&buf,format,0,0,(uint *)&GHIDRA_STACK(0x0000000c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457f1c  FUN_00457f1c   (40 bytes)   [unnamed]
void __cdecl FUN_00457f1c(undefined1 *param_1,byte *param_2,uint *param_3)

{
  *param_1 = 0;
  FUN_0045810c(FUN_00457ecc,&param_1,param_2,0,0,param_3);
  return;
}

} // namespace tea
