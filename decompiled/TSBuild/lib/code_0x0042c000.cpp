// TSBuild.exe — runtime / library code "code_0x0042c000"
// 87 functions, 0x0042c1c4..0x0042fccc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c1c4  FUN_0042c1c4   (83 bytes)   [unnamed]
void __cdecl FUN_0042c1c4(uint param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47c2f8);
  piVar1 = OWL::TXMenu::TXMenu(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c95c  FUN_0042c95c   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_0042c95c(int *param_1)

{
  undefined4 uVar1;
  BOOL ok;
  undefined4 uVar3;
  tagMSG msg;
  
  uVar3 = 0;
  while( true ) {
    ok = PeekMessageA(&msg,(HWND)0x0,0,0,1);
    if (ok == 0) {
      return uVar3;
    }
    uVar3 = 1;
    if (msg.message == 0x12) break;
    uVar1 = (**(code **)(*param_1 + 8))();
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(WPARAM *)((int)param_1 + 5) = msg.wParam;
  PostQuitMessage(msg.wParam);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c9b8  FUN_0042c9b8   (37 bytes)   [unnamed]
void __stdcall FUN_0042c9b8(void)

{
  BOOL ok;
  tagMSG msg;
  
  do {
    ok = PeekMessageA(&msg,(HWND)0x0,0,0,3);
    if (ok == 0) {
      return;
    }
  } while (msg.message != 0xf);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cabc  FUN_0042cabc   (25 bytes)   [unnamed]
void __cdecl FUN_0042cabc(undefined4 param_1,int param_2)

{
  FUN_0042d0b4(DAT_0047c5cc,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cad8  FUN_0042cad8   (25 bytes)   [unnamed]
void __cdecl FUN_0042cad8(undefined4 param_1,int param_2)

{
  FUN_0042d0cc(DAT_0047c5cc,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042caf4  FUN_0042caf4   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_0042caf4(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d138(DAT_0047c5cc,param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cb10  FUN_0042cb10   (88 bytes)   [unnamed]
void __stdcall FUN_0042cb10(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c5e0);
  piVar1 = DAT_0047c5cc;
  if ((DAT_0047c5cc == (int *)0x0) && (piVar1 = (int *)operator_new(), piVar1 != (int *)0x0)) {
    FUN_0042cf30(piVar1);
  }
  DAT_0047c5cc = piVar1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cb8c  FUN_0042cb8c   (54 bytes)   [unnamed]
void __stdcall FUN_0042cb8c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c600);
  OWL::TStreamableTypes::_dtor(DAT_0047c5cc,3);
  DAT_0047c5cc = (int *)0x0;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbc4  FUN_0042cbc4   (174 bytes)   [unnamed]
int __cdecl FUN_0042cbc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_0042cc74(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar2 = FUN_00467724(*(char **)(param_2 + 8),*(char **)(iVar1 + 8));
    if (iVar2 < 0) {
      bVar4 = true;
    }
    else if (iVar2 < 1) {
      if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(iVar1 + 0xc) == 0)) ||
         (*(int *)(param_2 + 0xc) == *(int *)(iVar1 + 0xc))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)(param_2 + 0xc) < *(uint *)(iVar1 + 0xc);
      }
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
  }
  *(int *)(*(int *)(param_1 + 9) + iVar3 * 4) = param_2;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cc74  FUN_0042cc74   (155 bytes)   [unnamed]
void __cdecl FUN_0042cc74(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cd10  FUN_0042cd10   (341 bytes)   [unnamed]
uint __cdecl FUN_0042cd10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_8 = 0;
    local_c = *(int *)(param_1 + 1) - 1;
    while ((local_8 < local_c && (local_c != 0xffffffff))) {
      uVar3 = local_8 + local_c >> 1;
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar3;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 < 0) {
        bVar4 = true;
      }
      else if (iVar2 < 1) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = false;
        }
        else {
          bVar4 = *(uint *)(iVar1 + 0xc) < *(uint *)(param_2 + 0xc);
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_8 = uVar3 + 1;
      }
      else {
        local_c = uVar3 - 1;
      }
    }
    if (local_8 == local_c) {
      iVar1 = *(int *)(*(int *)(param_1 + 9) + local_8 * 4);
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return local_8;
      }
    }
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ce68  FUN_0042ce68   (106 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042ce68(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c618);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = param_5;
  uVar1 = FUN_0042aea0(param_2);
  param_1[2] = uVar1;
  FUN_0042d944();
  if (param_5 != 0) {
    FUN_0042cabc(param_5,(int)param_1);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cf30  FUN_0042cf30   (131 bytes)   [unnamed]
int * __cdecl FUN_0042cf30(int *param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c64c);
  iVar1 = operator_new();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_0042cc74(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d068  FUN_0042d068   (74 bytes)   [unnamed]
void __cdecl FUN_0042d068(int param_1,char param_2)

{
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c6c0);
  if (param_2 != '\0') {
    for (i = 0; i < *(int *)(param_1 + 1); i = i + 1) {
      OWL::TStreamableClass::_dtor(*(int *)(*(int *)(param_1 + 9) + i * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d0b4  FUN_0042d0b4   (21 bytes)   [unnamed]
void __cdecl FUN_0042d0b4(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0042cbc4(*param_1,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d0cc  FUN_0042d0cc   (105 bytes)   [unnamed]
void __cdecl FUN_0042d0cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_0042cd10(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004675a4((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_0042cb8c();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d138  FUN_0042d138   (1151 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0042d1ba) */
undefined4 __cdecl FUN_0042d138(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  char *len;
  int *piVar3;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 uVar5;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined *unused;
  undefined1 *unused2;
  undefined4 unused3;
  undefined *unused4;
  undefined *unused5;
  uint pos;
  undefined1 *unused6;
  undefined4 unused7;
  int *unused8;
  int *unused9;
  int *strRep;
  int *newData;
  int *unused10;
  uint unused11;
  undefined1 *unused12;
  int *newRep;
  int *unused13;
  uint len2;
  int *strRep2;
  undefined1 *unused14;
  int *unused15;
  undefined4 unused16;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 txBase [2];
  undefined1 str2 [8];
  int *str3;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused17;
  undefined1 str [8];
  undefined *local_1c;
  undefined4 streamableClass [4];
  
  __InitExceptBlockLDTC(0x47c744);
  ehContext = 8;
  FUN_0042ce68(streamableClass,param_3,0,0,0);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  uVar1 = FUN_0042cd10(*param_1,(int)streamableClass);
  if (uVar1 != 0xffffffff) goto LAB_0042d58b;
  local_1c = &g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x38;
  if (g_stringNpos - 0xeU < 0x80) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar7 = 1;
    copyCtor = &LAB_00402064;
    uVar5 = 0;
    ehContext = 0x50;
    msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00488a54);
    std::string::string_from_cstr((int)str2,msgText);
    ehDtorCount = ehDtorCount + 2;
    lengthError[0] = &std::logic_error::vftable;
    unused16 = 0;
    unused17 = (int *)0x0;
    ehContext = 0x5c;
    if (str3[-3] == -1 || str3[-3] + 1 < 0) {
      len2 = str3[-1];
      newRep = std::string::__getRep(newStr,len2,len2);
      newData = newRep + 3;
      unused12 = newStr;
      unused11 = len2;
      unused10 = str3;
      unused13 = newData;
      unused17 = newData;
      memcpy(newData,str3,len2);
    }
    else {
      unused15 = str3;
      unused17 = str3;
      unused14 = newStr;
      strRep2 = str3 + -3;
      if (strRep2 != &g_nullStringRep) {
        *strRep2 = *strRep2 + 1;
      }
    }
    ehContext = 0x50;
    lengthError[0] = &std::length_error::vftable;
    ehDtorCount = ehDtorCount + 2;
    if (str3 != (int *)0x0) {
      if (str3[-3] != -1) {
        strRep = str3 + -3;
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
        if (prevRefs != 0) goto LAB_0042d420;
      }
      unused9 = str3 + -3;
      unused8 = str3 + -3;
      operator_delete();
      unused7 = 0;
      str3 = (int *)0x0;
      unused6 = str2;
    }
LAB_0042d420:
    ehContext = 0x44;
    _ThrowExceptionLDTC((uint *)&DAT_00402008,(undefined4*)lengthError,uVar5,copyCtor,uVar7,throwFlags,throwFile,throwLine);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00461d70((int)str,0x80);
  }
  std::string::assign_cstr((int)str,(uint *)"Attempt to stream unregistered type '");
  pos = *(uint *)(local_1c + -4);
  len = strlen(param_3);
  std::string::replace((int)str,pos,0,(uint)param_3,(uint)len,0,(uint)len);
  uVar7 = *(uint *)(local_1c + -4);
  len = strlen((uint *)("Attempt to stream unregistered type '" + 0x24));
  std::string::replace((int)str,uVar7,0,0x47c5ca,(uint)len,0,(uint)len);
  ehContext = 0x80;
  piVar3 = OWL::TXBase::TXBase(txBase,(int)str);
  ehDtorCount = ehDtorCount + 2;
  (**(code **)(*piVar3 + 0xc))();
  ehDtorCount = ehDtorCount + -2;
  OWL::TXBase::_dtor(txBase,2);
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        prevRefs = *piVar3 + 1;
      }
      if (prevRefs != 0) goto LAB_0042d57f;
    }
    unused5 = local_1c + -0xc;
    unused4 = local_1c + -0xc;
    operator_delete();
    unused3 = 0;
    local_1c = (undefined *)0x0;
    unused2 = str;
  }
LAB_0042d57f:
  ehContext = 0x14;
LAB_0042d58b:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  ehDtorCount = ehDtorCount + -1;
  OWL::TStreamableClass::_dtor((int)streamableClass,2);
  *sehChainHead = sehPrevFrame;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5b8  FUN_0042d5b8   (51 bytes)   [unnamed]
void __cdecl FUN_0042d5b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0042d5ec(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5ec  FUN_0042d5ec   (155 bytes)   [unnamed]
void __cdecl FUN_0042d5ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d688  FUN_0042d688   (30 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d688(int *param_1,uint param_2)

{
  if (param_2 < *(uint *)(*param_1 + 1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 9) + param_2 * 4);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d6a8  FUN_0042d6a8   (155 bytes)   [unnamed]
void __cdecl FUN_0042d6a8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d744  FUN_0042d744   (42 bytes)   [unnamed]
void __cdecl FUN_0042d744(int *param_1,int param_2)

{
  uint local_c;
  int unused;
  
  *param_1 = *param_1 + 1;
  unused = *param_1;
  local_c = param_2 + 1;
  FUN_0042d770(param_1[1],&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d770  FUN_0042d770   (6 bytes)   [unnamed]
int __stdcall FUN_0042d770(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c7ec);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_0042d6a8(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (*param_2 < **(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4)))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_00420a1c(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *sehChainHead = sehPrevFrame;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d776  FUN_0042d776   (214 bytes)   [unnamed]
int __stdcall FUN_0042d776(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47c7ec);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_0042d6a8(iVar2,*(int *)(iVar2 + 1) + 1);
  }
  iVar5 = *(int *)(iVar2 + 1);
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
  while ((iVar5 != 0 &&
         (**(uint **)(unaff_EBP + 0xc) < **(uint **)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4)))) {
    *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) =
         *(undefined4 *)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4);
    iVar5 = iVar5 + -1;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
  piVar1 = (int *)(iVar2 + 0xd);
  if (*piVar1 == 0) {
    iVar3 = FUN_00420a1c(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *piVar1;
    *piVar1 = **(int **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x34);
  }
  *(int *)(unaff_EBP + -0x30) = iVar3;
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    **(undefined4 **)(unaff_EBP + -4) = **(undefined4 **)(unaff_EBP + -0x2c);
    *(undefined4 *)(*(int *)(unaff_EBP + -4) + 4) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4)
    ;
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) = uVar4;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d878  FUN_0042d878   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d878(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c [2];
  
  local_c[0] = param_2 + 1;
  local_c[1] = 0;
  uVar1 = FUN_0042d8bc(*(int *)(param_1 + 4),local_c);
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 9) + uVar1 * 4) + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d8bc  FUN_0042d8bc   (135 bytes)   [unnamed]
uint __cdecl FUN_0042d8bc(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar3 = *(int *)(param_1 + 1) - 1;
    while ((uVar1 < uVar3 && (uVar3 != 0xffffffff))) {
      uVar2 = uVar3 + uVar1 >> 1;
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) == *param_2) {
        return uVar2;
      }
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) < *param_2) {
        uVar1 = uVar2 + 1;
      }
      else {
        uVar3 = uVar2 - 1;
      }
    }
    if ((uVar3 != uVar1) || (**(uint **)(*(int *)(param_1 + 9) + uVar1 * 4) != *param_2)) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d944  FUN_0042d944   (6 bytes)   [unnamed]
void __stdcall FUN_0042d944(void)

{
  FUN_0042cb10();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d94c  FUN_0042d94c   (83 bytes)   [unnamed]
uint __cdecl FUN_0042d94c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[3] < (uint)piVar1[4]) {
      uVar2 = (uint)*(byte *)piVar1[3];
      piVar1[3] = piVar1[3] + 1;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x20))();
    }
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9a0  FUN_0042d9a0   (75 bytes)   [unnamed]
void __cdecl FUN_0042d9a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9ec  FUN_0042d9ec   (173 bytes)   [unnamed]
void __cdecl FUN_0042d9ec(int *param_1,undefined4 *dest,uint param_3)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 *tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x47c82c);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042b3f0((int *)tmpBufferBase,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      memcpy(dest,tmpBufferBase[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da9c  FUN_0042da9c   (36 bytes)   [unnamed]
uint __cdecl FUN_0042da9c(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_0042db04(param_1);
    return uVar1;
  }
  uVar1 = FUN_0042dac0(param_1);
  return uVar1 & 0xffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dac0  FUN_0042dac0   (67 bytes)   [unnamed]
uint __cdecl FUN_0042dac0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar2 != 2) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 8) = 4;
    }
    uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(short)((uint)in_ECX >> 0x10));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db04  FUN_0042db04   (66 bytes)   [unnamed]
undefined4 __cdecl FUN_0042db04(int *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    in_ECX = 0;
  }
  return in_ECX;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db48  FUN_0042db48   (50 bytes)   [unnamed]
uint __cdecl FUN_0042db48(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_0042d94c(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_0042db04(param_1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db7c  FUN_0042db7c   (72 bytes)   [unnamed]
int __cdecl FUN_0042db7c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042db48(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_0042d9a0(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbc4  FUN_0042dbc4   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042dbc4(int *param_1)

{
  undefined4 *dest;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_0042db48(param_1);
    if (uVar2 == 0xffffffff) {
      dest = (undefined4 *)0x0;
    }
    else {
      dest = (undefined4 *)operator_new_array();
      FUN_0042d9ec(param_1,dest,uVar2);
      *(undefined1 *)((int)dest + uVar2) = 0;
    }
  }
  else {
    dest = (undefined4 *)0x0;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc10  FUN_0042dc10   (129 bytes)   [unnamed]
int __cdecl FUN_0042dc10(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char local_84 [128];
  
  uVar1 = FUN_0042d94c(param_1);
  if ((char)uVar1 == '[') {
    local_84[0] = '\0';
    FUN_0042db7c(param_1,(int)local_84,0x80);
    if (local_84[0] == '\0') {
      *(undefined4 *)(*param_1 + 8) = 4;
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0042caf4(param_2,(uint *)local_84);
      if (iVar2 == 0) {
        *(undefined4 *)(*param_1 + 8) = 4;
        iVar2 = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*param_1 + 8) = 4;
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc94  FUN_0042dc94   (129 bytes)   [unnamed]
void __cdecl FUN_0042dc94(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c86c);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_0042d5b8(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_0042db04(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd80  FUN_0042dd80   (47 bytes)   [unnamed]
void __cdecl FUN_0042dd80(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042d94c(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ddb0  FUN_0042ddb0   (135 bytes)   [unnamed]
int __cdecl FUN_0042ddb0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar3 = FUN_0042d94c(param_1);
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = FUN_0042da9c(param_1);
      iVar2 = FUN_0042d688(param_1 + 2,uVar3);
      *param_2 = iVar2;
    }
    else if (cVar1 == '\x02') {
      puVar4 = (undefined4 *)FUN_0042dc10(param_1,param_3);
      FUN_0042dc94(param_1,puVar4,param_2);
      FUN_0042dd80(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    iVar2 = *param_2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042de38  FUN_0042de38   (91 bytes)   [unnamed]
void __cdecl FUN_0042de38(int *param_1,byte param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[6] < (uint)piVar1[7]) {
      pbVar2 = (byte *)piVar1[6];
      piVar1[6] = piVar1[6] + 1;
      *pbVar2 = param_2;
      uVar3 = (uint)param_2;
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x24))();
    }
    if (uVar3 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042de94  FUN_0042de94   (75 bytes)   [unnamed]
void __cdecl FUN_0042de94(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dee0  FUN_0042dee0   (57 bytes)   [unnamed]
void __cdecl FUN_0042dee0(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042df1c  FUN_0042df1c   (57 bytes)   [unnamed]
void __cdecl FUN_0042df1c(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042df58  FUN_0042df58   (107 bytes)   [unnamed]
void __cdecl FUN_0042df58(int *param_1,undefined4 *src,uint param_3)

{
  undefined4 *dest;
  uint uVar2;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    dest = (undefined4 *)operator_new_array();
    memcpy(dest,src,param_3);
    uVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (uVar2 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    operator_delete_array();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dfc4  FUN_0042dfc4   (72 bytes)   [unnamed]
void __cdecl FUN_0042dfc4(int *param_1,uint *param_2)

{
  char *len;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      len = strlen(param_2);
      FUN_0042df1c(param_1);
      FUN_0042de94(param_1,param_2,(int)len);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e00c  FUN_0042e00c   (72 bytes)   [unnamed]
void __cdecl FUN_0042e00c(int *param_1,uint *src)

{
  char *len;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (src == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      len = strlen(src);
      FUN_0042df1c(param_1);
      FUN_0042df58(param_1,src,(uint)len);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e054  FUN_0042e054   (57 bytes)   [unnamed]
void __cdecl FUN_0042e054(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042e108(param_1,param_2);
    FUN_0042e154(param_1,param_2,param_4);
    FUN_0042de38(param_1,0x5d);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e090  FUN_0042e090   (117 bytes)   [unnamed]
void __cdecl FUN_0042e090(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_0042de38(param_1,0);
    }
    else {
      iVar1 = FUN_0042d878(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_0042de38(param_1,2);
        FUN_0042e054(param_1,param_2,1,param_3);
      }
      else {
        FUN_0042de38(param_1,1);
        FUN_0042df1c(param_1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e108  FUN_0042e108   (76 bytes)   [unnamed]
void __cdecl FUN_0042e108(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042de38(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar3,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    FUN_0042dfc4(param_1,puVar2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e154  FUN_0042e154   (183 bytes)   [unnamed]
void __cdecl FUN_0042e154(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c8b8);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042d744((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar4,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    puVar1 = (undefined4 *)FUN_0042caf4(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_0042df1c(param_1);
    (**(code **)(*piVar3 + 8))();
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e358  FUN_0042e358   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e358(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e388  FUN_0042e388   (97 bytes)   [unnamed]
void __cdecl FUN_0042e388(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c8e4);
  if (param_1 != 0) {
    FUN_0042d068(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e4dc  FUN_0042e4dc   (111 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e4dc(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c914);
  if (param_1 != 0) {
    FUN_0042d068(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e62c  FUN_0042e62c   (80 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e62c(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c934);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e728  FUN_0042e728   (92 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e728(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c958);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e7e8  FUN_0042e7e8   (45 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e7e8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e818  FUN_0042e818   (22 bytes)   [unnamed]
FARPROC __stdcall FUN_0042e818(void)

{
  HMODULE hModule;
  FARPROC procAddress;
  
  hModule = GetModuleHandleA("USER32");
  procAddress = GetProcAddress(hModule,"DefWindowProcA");
  return procAddress;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e82e  FUN_0042e82e   (60 bytes)   [unnamed]
void __stdcall FUN_0042e82e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c97d);
  if (DAT_0047c97c != '\0') {
    HeapDestroy(DAT_0048c8bc);
    DAT_0047c97c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e86c  FUN_0042e86c   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_0042e86c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042e874();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e874  FUN_0042e874   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0042e874(void)

{
  return &DAT_0047c978;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e87c  FUN_0042e87c   (15 bytes)   [unnamed]
void __cdecl FUN_0042e87c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042e874();
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e88c  FUN_0042e88c   (104 bytes)   [unnamed]
void __stdcall FUN_0042e88c(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LONG dwNewLong;
  code *windowLong;
  
  iVar1 = FUN_0042e86c();
  if (iVar1 == 0) {
    DefWindowProcA(hWnd,msg,wParam,lParam);
  }
  else {
    FUN_0042e87c(0);
    *(HWND *)(iVar1 + 0xc) = hWnd;
    dwNewLong = FUN_0042e818();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_00437d74(iVar1);
    windowLong = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*windowLong)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e8f4  FUN_0042e8f4   (198 bytes)   [unnamed]
undefined1 * __cdecl FUN_0042e8f4(undefined4 param_1)

{
  undefined4 *txOutOfMemory;
  undefined1 *mem;
  int *piVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 txOwl [3];
  
  __InitExceptBlockLDTC(0x47c9c8);
  txOutOfMemory = FUN_0042e9bc();
  mem = HeapAlloc((HANDLE)*txOutOfMemory,0,10);
  if (mem == (undefined1 *)0x0) {
    txOutOfMemory = txOwl;
    piVar3 = OWL::TXOutOfMemory::TXOutOfMemory(txOutOfMemory);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,txOutOfMemory,piVar3);
    OWL::TXOwl::_dtor(txOwl,0);
  }
  else {
    *mem = 0xb8;
    mem[5] = 0xe9;
    *(undefined4 *)(mem + 1) = param_1;
    *(int *)(mem + 6) = 0x42ea9a - (int)mem;
  }
  *sehChainHead = sehPrevFrame;
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e9bc  FUN_0042e9bc   (151 bytes)   [unnamed]
undefined4 * __stdcall FUN_0042e9bc(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47ca14);
  if (DAT_0047c97c == '\0') {
    DAT_0048c8bc = HeapCreate(0x40000,0x8000,0);
    if (DAT_0048c8bc == (HANDLE)0x0) {
      piVar1 = OWL::TXOutOfMemory::TXOutOfMemory(local_10);
      (**(code **)(*piVar1 + 0xc))();
      OWL::TXOwl::_dtor(local_10,0);
    }
    DAT_0047c97c = DAT_0047c97c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return (undefined4*)&DAT_0048c8bc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ea74  FUN_0042ea74   (5 bytes)   [unnamed]
void __stdcall FUN_0042ea74(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ea7c  FUN_0042ea7c   (40 bytes)   [unnamed]
void __cdecl FUN_0042ea7c(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eaa4  FUN_0042eaa4   (25 bytes)   [unnamed]
void FUN_0042eaa4(int param_1)

{
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  
  FUN_00436db0(param_1,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb68  FUN_0042eb68   (35 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042eb68(LPVOID mem)

{
  undefined4 *puVar1;
  
  if (mem != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,mem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb8c  FUN_0042eb8c   (106 bytes)   [unnamed]
int * __cdecl FUN_0042eb8c(int *param_1,HWND hWnd)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ca50);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
  *(HWND *)((int)param_1 + 0x61) = hWnd;
  hdc = BeginPaint(hWnd,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)hdc;
  FUN_00427974(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ecec  FUN_0042ecec   (82 bytes)   [unnamed]
uint * __cdecl FUN_0042ecec(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cb04);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,4);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed5c  FUN_0042ed5c   (71 bytes)   [unnamed]
uint * __cdecl FUN_0042ed5c(uint *param_1,int param_2,BYTE param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cb28);
  FUN_00428420(param_1);
  FUN_0042eda4(param_1,*(int *)(param_2 + 9),param_3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eda4  FUN_0042eda4   (197 bytes)   [unnamed]
void __cdecl FUN_0042eda4(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE hPalette;
  ushort uVar4;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_004202d8(*(short *)(param_2 + 0xe));
    uVar4 = (ushort)iVar2;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 0x20);
  }
  if (uVar4 == 0) {
    *param_1 = 0;
  }
  else {
    plpal = (LOGPALETTE *)operator_new_array();
    plpal->palVersion = 0x300;
    plpal->palNumEntries = uVar4;
    uVar1 = 0;
    if (uVar4 != 0) {
      do {
        plpal->palPalEntry[uVar1].peRed = *(BYTE *)(param_2 + 0x2a + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peGreen = *(BYTE *)(param_2 + 0x29 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peBlue = *(BYTE *)(param_2 + 0x28 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peFlags = param_3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
    hPalette = CreatePalette(plpal);
    *param_1 = (uint)hPalette;
    operator_delete_array();
  }
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f460  FUN_0042f460   (58 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f460(int param_1,LPCSTR newItem)

{
  UINT_PTR uIDNewItem;
  
  uIDNewItem = *(UINT_PTR *)(param_1 + 0x8f);
  *(int *)(param_1 + 0x8f) = *(int *)(param_1 + 0x8f) + 1;
  AppendMenuA(*(HMENU *)(param_1 + 0x8a),0,uIDNewItem,newItem);
  return *(undefined4 *)(param_1 + 0x8f);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f7fc  FUN_0042f7fc   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f7fc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042f80c(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f80c  FUN_0042f80c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f80c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f818  FUN_0042f818   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f818(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f824  FUN_0042f824   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f824(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 6);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f83c  FUN_0042f83c   (20 bytes)   [unnamed]
int __cdecl FUN_0042f83c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return iVar1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f850  FUN_0042f850   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f868  FUN_0042f868   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f868(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f944  FUN_0042f944   (81 bytes)   [unnamed]
undefined * __cdecl FUN_0042f944(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_00467724((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_0042aa90(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_0047ccb0;
      }
    }
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f998  FUN_0042f998   (82 bytes)   [unnamed]
int * __cdecl FUN_0042f998(int *param_1)

{
  HRGN hRgn;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cce0);
  FUN_0042790c(param_1);
  hRgn = CreateRectRgn(0,0,0,0);
  *param_1 = (int)hRgn;
  FUN_00427974(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042facc  InitRichEditStreamer_42facc   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_42facc(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cd16);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004302e4;
  puVar1 = FUN_00468310(1,0,0x403c70);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c8c0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fb22  FUN_0042fb22   (48 bytes)   [unnamed]
void __stdcall FUN_0042fb22(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cd2a);
  OWL::TStreamableClass::_dtor(0x48c8c0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fc7c  FUN_0042fc7c   (78 bytes)   [unnamed]
int * __cdecl FUN_0042fc7c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_00403c70,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fccc  FUN_0042fccc   (38 bytes)   [unnamed]
int * __cdecl FUN_0042fccc(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_0042e090(param_1,piVar1,1);
  return param_1;
}

} // namespace tea
