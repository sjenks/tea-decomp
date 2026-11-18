// TSMerge.exe — runtime / library code "code_0x00450000"
// 72 functions, 0x004501bc..0x00453ff8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004501bc  FUN_004501bc   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004501bc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004501cc  FUN_004501cc   (19 bytes)   [unnamed]
undefined4 * __cdecl FUN_004501cc(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004501e0  FUN_004501e0   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_004501e0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450210  FUN_00450210   (21 bytes)   [unnamed]
int __cdecl FUN_00450210(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450228  FUN_00450228   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00450228(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x00450234  FUN_00450234   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00450234(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x00450240  FUN_00450240   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00450240(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045024c  FUN_0045024c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045024c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00450258  FUN_00450258   (75 bytes)   [unnamed]
undefined4 __cdecl FUN_00450258(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 regHigh;
  undefined1 *puVar5;
  
  uVar2 = FUN_00450228((int)param_1);
  uVar3 = FUN_0045024c((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar5 = param_2;
    uVar1 = FUN_0044f290(&param_2);
    uVar4 = CONCAT31(regHigh,uVar1);
  }
  else {
    puVar5 = &param_2;
    uVar1 = FUN_0044f290(puVar5);
    uVar4 = (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar5,param_1,uVar1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004502a4  FUN_004502a4   (66 bytes)   [unnamed]
int * __cdecl FUN_004502a4(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472768);
  FUN_004502e8(param_1,(int *)(param_2 + 0x20));
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004502e8  FUN_004502e8   (56 bytes)   [unnamed]
int * __cdecl FUN_004502e8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472f30);
  iVar1 = *param_2;
  *param_1 = iVar1;
  FUN_00452fd4(iVar1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045033c  FUN_0045033c   (58 bytes)   [unnamed]
int * __cdecl FUN_0045033c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044cc90((undefined4 *)&DAT_00473e6c);
  piVar2 = (int *)FUN_0044cc9c(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_00455140(param_1,(uint *)&DAT_00473e6c,'\x01',0x20,(undefined*)FUN_0044fbcc);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450378  FUN_00450378   (49 bytes)   [unnamed]
bool __cdecl FUN_00450378(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_004574e4(param_2,buffer,param_4 * param_5);
  return uVar1 == param_4 * param_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045075c  FUN_0045075c   (81 bytes)   [unnamed]
int * __cdecl FUN_0045075c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47277c);
  *param_1 = param_2;
  puVar1 = FUN_0044e0c4(&local_2c,0);
  FUN_004507b0(param_1 + 1,puVar1);
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004507b0  FUN_004507b0   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_004507b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472f44);
  *param_1 = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004507dc  FUN_004507dc   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_004507dc(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004507e8  FUN_004507e8   (23 bytes)   [unnamed]
bool __cdecl FUN_004507e8(int *param_1,int *param_2)

{
  return *param_2 < *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450800  FUN_00450800   (80 bytes)   [unnamed]
undefined4 * __cdecl FUN_00450800(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472784);
  FUN_0044e0c4(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_004501cc(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450850  FUN_00450850   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_00450850(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (((char)param_1[2] == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*param_1 == *param_2) &&
       ((bVar1 = FUN_0045089c(param_1 + 1,param_2 + 1), bVar1 &&
        ((char)param_1[2] == (char)param_2[2])))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045089c  FUN_0045089c   (23 bytes)   [unnamed]
bool __cdecl FUN_0045089c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450cf8  FUN_00450cf8   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_00450cf8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450d28  FUN_00450d28   (13 bytes)   [unnamed]
void __cdecl FUN_00450d28(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450d38  FUN_00450d38   (40 bytes)   [unnamed]
char * __cdecl FUN_00450d38(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_004571b8(param_2,buffer,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450d60  FUN_00450d60   (156 bytes)   [unnamed]
int __cdecl FUN_00450d60(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int loc;
  
  __InitExceptBlockLDTC(0x4727dc);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_004502a4(&loc,param_1);
    piVar3 = (int *)FUN_0044cc54(&loc);
    uVar4 = FUN_0044e788(piVar3);
    std::locale::_dtor(&loc,2);
    iVar2 = 0;
    while (param_2 != param_3) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if ((char)uVar4 == cVar1) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar2 = (int)param_3 - (int)param_2;
    *sehChainHead = sehPrevFrame;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450e6c  FUN_00450e6c   (25 bytes)   [unnamed]
int __cdecl FUN_00450e6c(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00455cf4(param_1,param_2,param_3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451050  FUN_00451050   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00451050(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045105c  FUN_0045105c   (60 bytes)   [unnamed]
int __cdecl FUN_0045105c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_0044f29c((int)param_1);
  uVar2 = FUN_0044f2a8((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_0044f2a8((int)param_1);
    iVar4 = FUN_0044f29c((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451098  FUN_00451098   (325 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_00451098(int *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x47285c);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    ehContext = 0x14;
    FUN_0044eff8(sentry2,param_1,'\x01');
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    cVar1 = FUN_004512a4((int)sentry2);
    if (cVar1 != '\0') {
      local_50 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        local_54 = FUN_0044e520();
        piVar3 = &local_54;
        piVar4 = (int *)FUN_0044f24c(*param_1);
        local_50 = FUN_0044f258(piVar4);
        bVar2 = FUN_0044f188(&local_50,piVar3);
        if (bVar2) break;
        *param_2 = (undefined1)local_50;
        param_2 = param_2 + 1;
        param_1[2] = param_1[2] + 1;
        piVar3 = (int *)FUN_0044f24c(*param_1);
        FUN_0044f2f8(piVar3);
      }
      local_58 = FUN_0044e520();
      bVar2 = FUN_0044f188(&local_50,&local_58);
      if (bVar2) {
        if (param_3 < 0) {
          local_4c = 2;
        }
        else {
          local_4c = 6;
        }
      }
    }
    ehDtorCount = ehDtorCount + -1;
    std::basic_istream_char::sentry::_dtor((int)sentry2,2);
  }
  ehContext = 0;
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004512a4  FUN_004512a4   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004512a4(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045143c  std::string::__unshare   (110 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041a7fc. gives the string its own copy of a shared rep before it is modified
void __cdecl std::string::__unshare(int self)

{
  uint len;
  uint len2;
  int *rep;
  undefined4 *src;
  undefined4 *dst;
  undefined1 local_18 [16];
  int local_8;
  
  len = std::string::size(self);
  len2 = std::string::size(self);
  rep = std::string::__getRep(self,len2,len);
  len = std::string::size(self);
  src = (undefined4 *)std::string::data(self);
  dst = (undefined4 *)std::string::__rep_data((int)rep);
  FUN_0044d24c(dst,src,len);
  FUN_0044c9d0(self);
  local_8 = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_18,self,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004514ac  FUN_004514ac   (413 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004514ac(int *param_1,undefined1 *param_2,int param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *sehChainHead;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x4728f4);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    ehContext = 0x14;
    FUN_0044eff8(sentry2,param_1,'\x01');
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    cVar1 = FUN_004512a4((int)sentry2);
    if (cVar1 != '\0') {
      local_50 = param_2;
      local_54 = 0;
      while (param_3 = param_3 + -1, 0 < param_3) {
        local_58 = FUN_0044e520();
        piVar4 = &local_58;
        piVar3 = (int *)FUN_0044f24c(*param_1);
        local_54 = FUN_0044f258(piVar3);
        bVar2 = FUN_0044f188(&local_54,piVar4);
        if (bVar2) break;
        param_1[2] = param_1[2] + 1;
        piVar4 = (int *)FUN_0044f24c(*param_1);
        FUN_0044f2f8(piVar4);
        if (param_4 == local_54) break;
        *param_2 = (undefined1)local_54;
        param_2 = param_2 + 1;
      }
      *param_2 = 0;
      local_5c = FUN_0044e520();
      bVar2 = FUN_0044f188(&local_54,&local_5c);
      if (bVar2) {
        if (param_2 == local_50) {
          local_4c = 6;
        }
        else {
          local_4c = 2;
        }
      }
      else if (param_4 != local_54) {
        piVar4 = (int *)FUN_0044f24c(*param_1);
        iVar5 = FUN_0044f258(piVar4);
        if (iVar5 == param_4) {
          piVar4 = (int *)FUN_0044f24c(*param_1);
          FUN_0044f2f8(piVar4);
        }
        else if (param_3 == 0) {
          local_4c = local_4c | 4;
        }
      }
    }
    *param_2 = 0;
    ehDtorCount = ehDtorCount + -1;
    std::basic_istream_char::sentry::_dtor((int)sentry2,2);
  }
  ehContext = 0;
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451698  FUN_00451698   (18 bytes)   [unnamed]
bool __cdecl FUN_00451698(int param_1)

{
  return (*(byte *)(param_1 + 0x30) & 5) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004516ac  FUN_004516ac   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004516ac(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004516b8  FUN_004516b8   (13 bytes)   [unnamed]
undefined4 __cdecl FUN_004516b8(undefined4 param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004516c8  FUN_004516c8   (213 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004516c8(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  int *piVar4;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x4729a4);
  local_4c = 0;
  ehContext = 0x14;
  FUN_0044f568(sentry2,param_1);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  cVar1 = FUN_004516ac((int)sentry2);
  if (cVar1 != '\0') {
    local_54 = FUN_0044e520();
    piVar4 = &local_54;
    piVar3 = (int *)FUN_0044f24c(*param_1);
    local_50 = FUN_00450258(piVar3,param_2);
    bVar2 = FUN_0044f188(&local_50,piVar4);
    if (bVar2) {
      local_4c = 1;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  std::basic_ostream_char::sentry::_dtor(sentry2,2);
  ehContext = 0;
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004517ec  FUN_004517ec   (204 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004517ec(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *sehChainHead;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x472a3c);
  local_4c = 0;
  if (param_2 == 0) {
    local_4c = 1;
  }
  else {
    FUN_0044f568(sentry2,param_1);
    cVar1 = FUN_004516ac((int)sentry2);
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_0044f24c(*param_1);
      iVar3 = FUN_00451908(piVar2);
      if (iVar3 != param_3) {
        local_4c = 1;
      }
    }
    std::basic_ostream_char::sentry::_dtor(sentry2,2);
  }
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451908  FUN_00451908   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_00451908(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451924  FUN_00451924   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00451924(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451a34  std::string::append   (274 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ab68.
int __cdecl std::string::append(int self,int other)

{
  int otherLen;
  uint uVar2;
  undefined1 *msgText;
  uint *s;
  uint pos;
  uint room;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  uint n1;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  
  __InitExceptBlockLDTC(0x472aa8);
  otherLen = std::string::size(other);
  room = g_stringNpos - otherLen;
  uVar2 = std::string::size(self);
  if (room <= uVar2) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar2 = 1;
    copyCtor = &LAB_00402ee0;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_58);
    std::string::size(other);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00474070);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,objectDtor,copyCtor,uVar2,throwFlags,throwFile,throwLine);
  }
  uVar2 = std::string::size(other);
  room = std::string::data(other);
  n1 = 0;
  pos = std::string::size(self);
  FUN_0044d5a0(self,pos,n1,room,uVar2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b48  std::string::replace_str   (60 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041aca0. replace(pos, n1, const std::string &)
int __cdecl std::string::replace_str(int self,uint pos,uint n1,int other)

{
  uint otherLen;
  uint otherLen2;
  uint otherData;
  uint zero;
  
  otherLen = std::string::size(other);
  zero = 0;
  otherLen2 = std::string::size(other);
  otherData = std::string::data(other);
  std::string::replace(self,pos,n1,otherData,otherLen2,zero,otherLen);
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b84  std::string::insert   (434 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041acdc. insert(pos, const std::string &)
void __cdecl std::string::insert(int self,uint pos,int other)

{
  uint uVar1;
  undefined1 *msgText;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x472b20);
  uVar1 = std::string::size(self);
  if (uVar1 < pos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_00403038;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_80);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00402fdc,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(other);
  uVar5 = g_stringNpos - iVar4;
  uVar1 = std::string::size(self);
  if (uVar5 <= uVar1) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_00402ee0;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_88);
    std::string::size(other);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  std::string::replace_str(self,pos,0,other);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451d38  std::string::replace_fill   (899 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ae90. replace(pos, n1, n2, ch); with pos=size,n1=0 it appends n2 copies of ch
int __cdecl std::string::replace_fill(int self,uint pos,uint n1,uint count,undefined1 ch)

{
  uint n;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *src;
  undefined4 *puVar7;
  undefined4 *sehChainHead;
  undefined4 uVar8;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  int local_a0;
  int *rep;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x472bb0);
  n = std::string::size(self);
  if (n < pos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00403038;
    uVar8 = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_80);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00402fdc,outOfRange,uVar8,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_84 = iVar4 - pos;
  if (n1 < local_84) {
    local_84 = n1;
  }
  iVar4 = std::string::size(self);
  if (g_stringNpos - count <= iVar4 - local_84) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00402ee0;
    uVar8 = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_8c);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,uVar8,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_90 = (iVar4 - local_84) + count;
  if (local_90 == 0) {
    FUN_0044c9d0(self);
    piVar5 = FUN_0044cab8();
    FUN_0044cee8(piVar5);
    src = FUN_0044cab8();
    local_94 = std::string::__rep_data((int)src);
    FUN_0044cbd4((int)local_290,self,&local_94);
  }
  else {
    iVar4 = std::string::size(self);
    local_98 = (iVar4 - local_84) - pos;
    piVar5 = (int *)std::string::__getRepOf(self);
    iVar4 = FUN_0044ca88(piVar5);
    if ((iVar4 < 2) && (n = FUN_0044da70(self), local_90 <= n)) {
      if (local_98 != 0) {
        n = local_98;
        iVar4 = std::string::__data(self);
        src = (undefined4 *)(iVar4 + pos + n1);
        iVar4 = std::string::__data(self);
        FUN_0044da50((undefined4 *)(iVar4 + pos + count),src,n);
      }
      if (count != 0) {
        iVar4 = std::string::__data(self);
        FUN_004520bc((undefined4 *)(iVar4 + pos),count,ch);
      }
      iVar4 = std::string::__getRepOf(self);
      n = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = std::string::__data(self);
      puVar2 = (undefined1 *)(iVar4 + n);
      uVar8 = FUN_0044d590();
      *puVar2 = (char)uVar8;
    }
    else {
      rep = std::string::__getRep(self,local_90,local_90);
      if (pos != 0) {
        n = pos;
        src = (undefined4 *)std::string::__data(self);
        puVar7 = (undefined4 *)std::string::__rep_data((int)rep);
        FUN_0044d24c(puVar7,src,n);
      }
      if (count != 0) {
        n = count;
        iVar4 = std::string::__rep_data((int)rep);
        FUN_004520bc((undefined4 *)(iVar4 + pos),n,ch);
      }
      if (local_98 != 0) {
        n = local_98;
        iVar4 = std::string::__data(self);
        src = (undefined4 *)(iVar4 + pos + n1);
        iVar4 = std::string::__rep_data((int)rep);
        FUN_0044d24c((undefined4 *)(iVar4 + pos + count),src,n);
      }
      FUN_0044c9d0(self);
      local_a0 = std::string::__rep_data((int)rep);
      FUN_0044cbd4((int)local_2a0,self,&local_a0);
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004520bc  FUN_004520bc   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_004520bc(undefined4 *param_1,uint n,undefined1 ch)

{
  memset(param_1,ch,n);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004520dc  FUN_004520dc   (305 bytes)   [unnamed]
int __cdecl FUN_004520dc(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  int *str;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472c18);
  piVar1 = (int *)operator_new_array();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = _vector_new_ldtc_(piVar1,0x10,param_2,0x211,(undefined*)FUN_0044c998);
  }
  uVar3 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar3 = param_1[1];
  }
  str = piVar1;
  for (iVar2 = *param_1; iVar2 != *param_1 + uVar3 * 0x10; iVar2 = iVar2 + 0x10) {
    std::string::operator_assign((int)str,iVar2);
    str = str + 4;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    std::string::operator_assign((int)(piVar1 + uVar3 * 4),(int)&GHIDRA_STACK(0x0000000c));
  }
  if (*param_1 != 0) {
    _vector_delete_ldtc_(*param_1,0x10,0,0x19,(undefined*)std::string::_dtor);
  }
  *param_1 = (int)piVar1;
  param_1[1] = param_2;
  iVar2 = *param_1;
  std::string::_dtor((int)&GHIDRA_STACK(0x0000000c),2);
  *sehChainHead = sehPrevFrame;
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452210  std::string::string_fill   (281 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041b484. std::string(n, c); throws length_error for npos (the character argument is not visible)
void __cdecl std::string::string_fill(int self,uint n)

{
  undefined1 *puVar1;
  uint *s;
  int *rep;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_15c [16];
  undefined1 exceptMsg [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  
  __InitExceptBlockLDTC(0x472c88);
  if (n == (*(uint *)&g_stringNpos)) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00402ee0;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_58);
    puVar1 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00474068);
    s = (uint *)__rwstd::except_msg_string::msgstr(puVar1);
    std::string::string_from_cstr((int)str,s);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  rep = std::string::__getRep(self,n,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_15c,self,&local_5c);
  while (n != 0) {
    puVar1 = &GHIDRA_STACK(0x0000000c);
    iVar4 = std::string::__data(self);
    FUN_0044d0fc((undefined1 *)(iVar4 + (n - 1)),puVar1);
    n = n - 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452954  FUN_00452954   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00452954(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452964  FUN_00452964   (47 bytes)   [unnamed]
undefined4 * __cdecl FUN_00452964(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_004501cc(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452994  FUN_00452994   (13 bytes)   [unnamed]
void __cdecl FUN_00452994(int *param_1,int param_2)

{
  *param_1 = *param_1 - param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004529a4  FUN_004529a4   (13 bytes)   [unnamed]
void __cdecl FUN_004529a4(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452b9c  FUN_00452b9c   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_00452b9c(undefined4 *param_1,int param_2)

{
  FUN_004507b0(param_1,(undefined4 *)(param_2 + 4));
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452bbc  FUN_00452bbc   (121 bytes)   [unnamed]
int * __cdecl FUN_00452bbc(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_0045075c(local_10,0);
  bVar1 = FUN_00451698(*param_2);
  if (bVar1) {
    FUN_0045075c(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_0044f24c(*param_2);
    FUN_0044f6a8(local_1c,piVar2);
    FUN_00452964(local_10,local_1c);
    FUN_00450800(param_1,local_10);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452c68  FUN_00452c68   (112 bytes)   [unnamed]
void __cdecl FUN_00452c68(int str,uint param_2)

{
  uint n;
  int *rep;
  undefined4 *src;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  int local_8;
  
  n = std::string::size(str);
  if (param_2 < n) {
    n = param_2;
  }
  rep = std::string::__getRep(str,param_2,n);
  n = std::string::size(str);
  src = (undefined4 *)std::string::data(str);
  puVar4 = (undefined4 *)std::string::__rep_data((int)rep);
  FUN_0044d24c(puVar4,src,n);
  FUN_0044c9d0(str);
  local_8 = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_18,str,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452cd8  FUN_00452cd8   (266 bytes)   [unnamed]
int __cdecl FUN_00452cd8(int str,byte *param_2,int param_3,int param_4)

{
  undefined1 *msgText;
  uint *s;
  int iVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  byte *pbVar11;
  undefined1 exceptMsg [240];
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str2 [16];
  undefined4 logicError [6];
  
  __InitExceptBlockLDTC(0x472dc4);
  if (param_2 == (byte *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar7 = 1;
    copyCtor = std::logic_error::logic_error;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str2);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00404790,logicError,objectDtor,(undefined*)copyCtor,uVar7,throwFlags,throwFile,throwLine);
  }
  while( true ) {
    uVar7 = std::string::size(str);
    iVar4 = g_stringNpos;
    if (uVar7 < (uint)(param_4 + param_3)) {
      *sehChainHead = sehPrevFrame;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = std::string::__data(str);
    iVar4 = FUN_00450e6c((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452de4  FUN_00452de4   (64 bytes)   [unnamed]
void __cdecl FUN_00452de4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044fd18((int)param_1);
  if ((char)uVar1 != '\0') {
    piVar2 = FUN_0044e3b8(param_1 + 2);
    if (piVar2 == (int *)0x0) {
      FUN_0044eb78(*param_1,4);
      return;
    }
    FUN_0044e7a0(*param_1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452e94  FUN_00452e94   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_00452e94(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0044cda8(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_0044cdb4((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452ec4  FUN_00452ec4   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_00452ec4(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472f4c);
  *param_1 = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452fd4  FUN_00452fd4   (11 bytes)   [unnamed]
void __cdecl FUN_00452fd4(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453564  FUN_00453564   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_00453564(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473280);
  DAT_004775c0 = DAT_004775c0 + 1;
  if (DAT_004775c0 == 1) {
    FUN_00451924(DAT_004774b4,&DAT_004774f8);
    FUN_00451924(DAT_00477538,&DAT_004774f8);
    FUN_00451924(DAT_00477578,&DAT_004774f8);
    *(uint *)(DAT_00477538 + 4) = *(uint *)(DAT_00477538 + 4) | 0x2000;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045381c  FUN_0045381c   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0045381c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473384);
  std::basic_filebuf_char::basic_filebuf_44e220((undefined4 *)&DAT_004773e8,0);
  std::basic_filebuf_char::basic_filebuf_44e220((undefined4 *)&DAT_0047742c,1);
  std::basic_filebuf_char::basic_filebuf_44e220((undefined4 *)&DAT_00477470,2);
  std::basic_istream_char::basic_istream_44ee94(&DAT_004774b4,0,0x4773e8);
  std::basic_ostream_char::basic_ostream_44ef50((int *)&DAT_004774f8,0,0x47742c);
  std::basic_ostream_char::basic_ostream_44ef50(&DAT_00477538,0,0x477470);
  std::basic_ostream_char::basic_ostream_44ef50(&DAT_00477578,0,0x477470);
  FUN_00453564(&DAT_004775b8);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004538e8  FUN_004538e8   (181 bytes)   [unnamed]
void __stdcall FUN_004538e8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473398);
  std::ios_base::Init::_dtor(0x4775b8,2);
  std::basic_ostream_char::_dtor(&DAT_00477578,2);
  std::basic_ostream_char::_dtor(&DAT_00477538,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_004774f8,2);
  std::basic_istream_char::_dtor(&DAT_004774b4,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_00477470,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0047742c,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_004773e8,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453bf0  FUN_00453bf0   (476 bytes)   [unnamed]
void __cdecl FUN_00453bf0(int param_1,int *param_2)

{
  uint uVar1;
  uint *strRep;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *sehChainHead;
  int iVar5;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *local_14;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x4737f8);
  iVar5 = 2;
  FUN_00454dd0((int)str,param_2);
  FUN_00454780(use_ClibLocale,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      strRep = local_14 + -3;
      if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar5 = *strRep + 1;
      }
      if (iVar5 != 0) goto LAB_00453ca8;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_00453ca8:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_00453cd2;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_00453cf3;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_00453d1d:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00453d3e;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_00453cd2:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_00453cf3:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_00453d1d;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_00453d3e:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = toupper(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = tolower(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453dcc  FUN_00453dcc   (145 bytes)   [unnamed]
void __cdecl FUN_00453dcc(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473834);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00473854;
    if (*(char *)(refCounted + 9) != '\0') {
      operator_delete_array();
    }
    operator_delete_array();
    operator_delete_array();
    __rwstd::ref_counted::_dtor(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453e60  FUN_00453e60   (51 bytes)   [unnamed]
uint __cdecl FUN_00453e60(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453e94  FUN_00453e94   (59 bytes)   [unnamed]
void __cdecl FUN_00453e94(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 0x10) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x38) + ((uint)*param_2 - *(int *)(param_1 + 0x28)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453ed0  FUN_00453ed0   (51 bytes)   [unnamed]
uint __cdecl FUN_00453ed0(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f04  FUN_00453f04   (59 bytes)   [unnamed]
void __cdecl FUN_00453f04(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f40  FUN_00453f40   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_00453f40(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f48  FUN_00453f48   (33 bytes)   [unnamed]
int __cdecl FUN_00453f48(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f6c  FUN_00453f6c   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_00453f6c(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f74  FUN_00453f74   (33 bytes)   [unnamed]
int __cdecl FUN_00453f74(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f98  FUN_00453f98   (93 bytes)   [unnamed]
undefined4 __cdecl FUN_00453f98(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_0047387c;
  pcVar2 = param_1;
  do {
    bVar4 = *pcVar2 == *pcVar3;
    if (!bVar4) break;
    if (*pcVar2 == '\0') {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    bVar4 = *pcVar1 == pcVar3[1];
    if (!bVar4) break;
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (!bVar4) {
    pcVar2 = "POSIX";
    do {
      bVar4 = *param_1 == *pcVar2;
      if (!bVar4) break;
      if (*param_1 == '\0') {
        return 1;
      }
      pcVar3 = param_1 + 1;
      bVar4 = *pcVar3 == pcVar2[1];
      if (!bVar4) break;
      param_1 = param_1 + 2;
      pcVar2 = pcVar2 + 2;
      bVar4 = *pcVar3 == '\0';
    } while (!bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453ff8  FUN_00453ff8   (447 bytes)   [unnamed]
undefined4 * __cdecl FUN_00453ff8(undefined4 *facet2,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *sehChainHead;
  undefined1 uVar5;
  undefined4 sehPrevFrame;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x4738b4);
  uVar5 = 0;
  puVar1 = FUN_00454218(param_2);
  std::locale::facet::facet_4539b8(facet2,puVar1,uVar5,param_3);
  *facet2 = &PTR_FUN_00473950;
  if ((undefined *)facet2[8] == &DAT_004733a8) goto LAB_004541a4;
  *(undefined1 *)(facet2 + 9) = 1;
  FUN_00454780(use_ClibLocale,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_00454097;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004540ba;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_004540ea:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0045410d;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_00454097:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004540ba:
  facet2[10] = uVar3;
  uVar3 = 0;
  facet2[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004540ea;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0045410d:
  facet2[0xc] = uVar3;
  facet2[0xd] = uVar2;
  puVar4 = (undefined1 *)facet2[0xe];
  for (uVar2 = facet2[10]; uVar2 <= (uint)facet2[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = toupper(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)facet2[0xf];
  for (uVar2 = facet2[0xc]; uVar2 <= (uint)facet2[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = tolower(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
LAB_004541a4:
  *sehChainHead = sehPrevFrame;
  return facet2;
}

} // namespace tea
