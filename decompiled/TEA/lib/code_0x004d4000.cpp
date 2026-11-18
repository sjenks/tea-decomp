// TEA.exe — runtime / library code "code_0x004d4000"
// 68 functions, 0x004d40d0..0x004d7ebc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d40d0  std::string::compare   (305 bytes)   [analysis]
//   compare(pos, n, const char *s, n2): <0, 0 or >0
uint __cdecl std::string::compare(int str,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  undefined1 *msgText;
  uint *s;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  uint unused;
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x514b74);
  uVar1 = std::string::size(str);
  if (uVar1 < param_2) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_position_beyond_end_of_string_in_00516d24);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(str);
  if (iVar4 - param_2 < param_3) {
    iVar4 = std::string::size(str);
    param_3 = iVar4 - param_2;
  }
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  unused = uVar1;
  iVar4 = FUN_004ce924(str);
  uVar1 = FUN_004d4204((byte *)(iVar4 + param_2),param_4,uVar1);
  if (uVar1 == 0) {
    if (param_3 < param_5) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(param_3 != param_5);
    }
  }
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4204  FUN_004d4204   (25 bytes)   [unnamed]
int __cdecl FUN_004d4204(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004dcb2c(param_1,param_2,param_3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4220  FUN_004d4220   (257 bytes)   [unnamed]
uint __cdecl FUN_004d4220(int str,uint param_2,uint param_3,int str2)

{
  uint uVar1;
  undefined1 *msgText;
  uint *s;
  byte *pbVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str3 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x514bc0);
  uVar1 = std::string::size(str);
  if (uVar1 < param_3 + param_2) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_position_beyond_end_of_string_in_00516d24);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str3,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str3);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str3,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  uVar1 = std::string::size(str2);
  pbVar4 = (byte *)FUN_004cf40c(str2);
  uVar1 = std::string::compare(str,param_2,param_3,pbVar4,uVar1);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d44ec  FUN_004d44ec   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d44ec(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d44f8  FUN_004d44f8   (60 bytes)   [unnamed]
int __cdecl FUN_004d44f8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_004d17a8((int)param_1);
  uVar2 = FUN_004d17b4((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_004d17b4((int)param_1);
    iVar4 = FUN_004d17a8((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4534  FUN_004d4534   (325 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d4534(int *param_1,undefined1 *param_2,int param_3)

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
  
  __InitExceptBlockLDTC(0x514c40);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    ehContext = 0x14;
    FUN_004d1504(sentry2,param_1,'\x01');
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    cVar1 = FUN_004d4740((int)sentry2);
    if (cVar1 != '\0') {
      local_50 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        local_54 = FUN_004d0a2c();
        piVar3 = &local_54;
        piVar4 = (int *)FUN_004d1758(*param_1);
        local_50 = FUN_004d1764(piVar4);
        bVar2 = FUN_004d1694(&local_50,piVar3);
        if (bVar2) break;
        *param_2 = (undefined1)local_50;
        param_2 = param_2 + 1;
        param_1[2] = param_1[2] + 1;
        piVar3 = (int *)FUN_004d1758(*param_1);
        FUN_004d1804(piVar3);
      }
      local_58 = FUN_004d0a2c();
      bVar2 = FUN_004d1694(&local_50,&local_58);
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
    FUN_004d1084(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4740  FUN_004d4740   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d4740(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d48d8  std::string::__unshare   (110 bytes)   [analysis (matched TEACON.exe)]
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
  FUN_004cf758(dst,src,len);
  FUN_004ce88c(self);
  local_8 = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_18,self,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4948  FUN_004d4948   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d4948(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4954  FUN_004d4954   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004d4954(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4968  FUN_004d4968   (16 bytes)   [unnamed]
int __stdcall FUN_004d4968(void)

{
  return (*(int *)&g_stringNpos) + -0xe;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4978  FUN_004d4978   (44 bytes)   [unnamed]
int __cdecl FUN_004d4978(int str,uint s,uint param_3)

{
  uint n1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = param_3;
  n1 = std::string::size(str);
  std::string::replace(str,0,n1,s,param_3,uVar2,uVar3);
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d49a4  FUN_004d49a4   (494 bytes, 2 ranges)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
int * __cdecl FUN_004d49a4(int *param_1,int str)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *s;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *sehChainHead;
  char *pcVar9;
  int local_70 [2];
  char local_65;
  undefined4 *local_64;
  uint local_60;
  int local_5c;
  char local_55;
  undefined4 *local_54;
  uint local_50;
  int local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x514ce0);
  local_50 = 0;
  ehContext = 0x14;
  FUN_004d1504(sentry2,param_1,'\x01');
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  cVar1 = FUN_004d4740((int)sentry2);
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_004d1758(*param_1);
    local_4c = FUN_004d1804(piVar4);
    uVar7 = 0;
    s = (undefined4 *)operator_new_array();
    local_55 = '\0';
    uVar6 = 0x20;
    local_54 = s;
    while( true ) {
      local_5c = FUN_004d0a2c();
      bVar2 = FUN_004d1694(&local_4c,&local_5c);
      if (bVar2) break;
      uVar8 = uVar6;
      if (uVar6 == uVar7) {
        uVar8 = uVar6 * 2;
        ehContext = 0x20;
        local_60 = uVar6;
        local_64 = (undefined4 *)operator_new_array();
        FUN_004cff5c(local_64,s,local_60);
        operator_delete_array();
        local_54 = (undefined4 *)(uVar7 + (int)local_64);
        s = local_64;
      }
      pcVar9 = &GHIDRA_STACK(0x0000000c);
      local_65 = FUN_004d2f44((undefined1 *)&local_4c);
      bVar2 = FUN_004cf5f0(&local_65,pcVar9);
      if (bVar2) {
        local_55 = '\x01';
        break;
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_004d4968();
      if (uVar7 == uVar6) {
        local_50 = local_50 | 4;
        break;
      }
      uVar3 = FUN_004d2f44((undefined1 *)&local_4c);
      *(undefined1 *)local_54 = uVar3;
      local_54 = (undefined4 *)((int)local_54 + 1);
      piVar4 = (int *)FUN_004d1758(*param_1);
      local_4c = FUN_004d1804(piVar4);
      uVar6 = uVar8;
    }
    local_70[1] = 0;
    uVar3 = FUN_004d2f44((undefined1 *)(local_70 + 1));
    *(undefined1 *)local_54 = uVar3;
    FUN_004d4978(str,(uint)s,uVar7);
    operator_delete_array();
    local_70[0] = FUN_004d0a2c();
    bVar2 = FUN_004d1694(&local_4c,local_70);
    if (bVar2) {
      local_50 = local_50 | 2;
    }
    if ((uVar7 == 0) && (local_55 == '\0')) {
      local_50 = local_50 | 4;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  std::basic_istream_char::sentry::_dtor((int)sentry2,2);
  ehContext = 0;
  if (local_50 != 0) {
    FUN_004d1084(*param_1,local_50);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4be0  FUN_004d4be0   (18 bytes)   [unnamed]
bool __cdecl FUN_004d4be0(int param_1)

{
  return (*(byte *)(param_1 + 0x30) & 5) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4bf4  FUN_004d4bf4   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d4bf4(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4c00  FUN_004d4c00   (61 bytes)   [unnamed]
int * __cdecl FUN_004d4c00(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00514d20);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,(uint *)&DAT_00514d20,'\x01',0x80,(undefined*)FUN_004d2e04);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4c40  FUN_004d4c40   (76 bytes)   [unnamed]
int __cdecl FUN_004d4c40(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514d28);
  uVar1 = FUN_004d1758(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_004d1758(*param_2);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4c8c  FUN_004d4c8c   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d4c8c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4c98  FUN_004d4c98   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d4c98(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4ca4  FUN_004d4ca4   (298 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d4ca4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_88 [12];
  undefined4 unused;
  undefined1 local_60 [16];
  uint local_50;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x514da0);
  local_50 = 0;
  ehContext = 0x14;
  FUN_004d1a74(sentry2,param_1);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  cVar1 = FUN_004d4bf4((int)sentry2);
  if (cVar1 != '\0') {
    FUN_004d4c8c(*param_1);
    FUN_004d4c40((int)local_88,param_1);
    ehContext = 0x2c;
    FUN_004cf0b8(&loc,*param_1);
    ehDtorCount = ehDtorCount + 1;
    piVar2 = (int *)FUN_004d4c00(&loc);
    FUN_004d4e1c(local_60,piVar2);
    cVar1 = FUN_004d4c98((int)local_60);
    ehDtorCount = ehDtorCount + -1;
    unused = 0x4d4d64;
    std::locale::_dtor(&loc,2);
    if (cVar1 != '\0') {
      local_50 = 1;
    }
    FUN_004d4954(*param_1,0);
  }
  ehDtorCount = ehDtorCount + -1;
  std::basic_ostream_char::sentry::_dtor(sentry2,2);
  ehContext = 0;
  if (local_50 != 0) {
    FUN_004d1084(*param_1,local_50);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4e1c  FUN_004d4e1c   (69 bytes)   [unnamed]
undefined4 __cdecl FUN_004d4e1c(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x28))();
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4e64  FUN_004d4e64   (13 bytes)   [unnamed]
void __cdecl FUN_004d4e64(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4e74  FUN_004d4e74   (213 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d4e74(int *param_1,undefined1 param_2)

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
  
  __InitExceptBlockLDTC(0x514e44);
  local_4c = 0;
  ehContext = 0x14;
  FUN_004d1a74(sentry2,param_1);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  cVar1 = FUN_004d4bf4((int)sentry2);
  if (cVar1 != '\0') {
    local_54 = FUN_004d0a2c();
    piVar4 = &local_54;
    piVar3 = (int *)FUN_004d1758(*param_1);
    local_50 = FUN_004d34bc(piVar3,param_2);
    bVar2 = FUN_004d1694(&local_50,piVar4);
    if (bVar2) {
      local_4c = 1;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  std::basic_ostream_char::sentry::_dtor(sentry2,2);
  ehContext = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4f98  FUN_004d4f98   (204 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d4f98(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *sehChainHead;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x514edc);
  local_4c = 0;
  if (param_2 == 0) {
    local_4c = 1;
  }
  else {
    FUN_004d1a74(sentry2,param_1);
    cVar1 = FUN_004d4bf4((int)sentry2);
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_004d1758(*param_1);
      iVar3 = FUN_004d50b4(piVar2);
      if (iVar3 != param_3) {
        local_4c = 1;
      }
    }
    std::basic_ostream_char::sentry::_dtor(sentry2,2);
  }
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d50b4  FUN_004d50b4   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_004d50b4(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d50d0  FUN_004d50d0   (597 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d50d0(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *sehChainHead;
  int *piVar7;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x514f74);
  local_4c = 0;
  ehContext = 0x14;
  FUN_004d1a74(sentry2,param_1);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  cVar1 = FUN_004d4bf4((int)sentry2);
  if (cVar1 != '\0') {
    iVar4 = FUN_004d4948(*param_1);
    iVar4 = iVar4 + -1;
    uVar5 = FUN_004d1688(*param_1);
    if (((uVar5 & 0xb0) == 0) || (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x80) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d519d;
        local_54 = FUN_004d0a2c();
        piVar7 = &local_54;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_50 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_50,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d519d:
    bVar2 = FUN_004d16ec(*param_1);
    if ((bVar2) && (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x10) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d520c;
        local_5c = FUN_004d0a2c();
        piVar7 = &local_5c;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_58 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_58,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d520c:
    bVar2 = FUN_004d16ec(*param_1);
    if (bVar2) {
      local_64 = FUN_004d0a2c();
      piVar7 = &local_64;
      piVar6 = (int *)FUN_004d1758(*param_1);
      local_60 = FUN_004d34bc(piVar6,param_2);
      bVar2 = FUN_004d1694(&local_60,piVar7);
      if (bVar2) {
        local_4c = 1;
      }
    }
    bVar2 = FUN_004d16ec(*param_1);
    if ((bVar2) && (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x20) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d52ca;
        local_6c = FUN_004d0a2c();
        piVar7 = &local_6c;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_68 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_68,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d52ca:
    FUN_004d4954(*param_1,0);
  }
  ehDtorCount = ehDtorCount + -1;
  std::basic_ostream_char::sentry::_dtor(sentry2,2);
  ehContext = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5374  FUN_004d5374   (618 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004d5374(int *param_1,uint *s)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *sehChainHead;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 sentry2 [8];
  
  __InitExceptBlockLDTC(0x51500c);
  local_4c = 0;
  if (s == (uint *)0x0) {
    local_4c = 1;
  }
  else {
    ehContext = 0x14;
    FUN_004d1a74(sentry2,param_1);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    cVar1 = FUN_004d4bf4((int)sentry2);
    if (cVar1 != '\0') {
      iVar4 = FUN_004cf618(s);
      iVar5 = FUN_004d4948(*param_1);
      iVar5 = iVar5 - iVar4;
      uVar6 = FUN_004d1688(*param_1);
      if (((uVar6 & 0xb0) == 0) || (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x80) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d5456;
          local_54 = FUN_004d0a2c();
          piVar8 = &local_54;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_50 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_50,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d5456:
      bVar2 = FUN_004d16ec(*param_1);
      if ((bVar2) && (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x10) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d54c5;
          local_5c = FUN_004d0a2c();
          piVar8 = &local_5c;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_58 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_58,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d54c5:
      bVar2 = FUN_004d16ec(*param_1);
      if (((bVar2) && (iVar4 != 0)) && (iVar7 = FUN_004d1758(*param_1), iVar7 != 0)) {
        piVar8 = (int *)FUN_004d1758(*param_1);
        iVar7 = FUN_004d50b4(piVar8);
        if (iVar4 != iVar7) {
          local_4c = 1;
        }
      }
      bVar2 = FUN_004d16ec(*param_1);
      if ((bVar2) && (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x20) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d557a;
          local_64 = FUN_004d0a2c();
          piVar8 = &local_64;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_60 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_60,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d557a:
      FUN_004d4954(*param_1,0);
    }
    ehDtorCount = ehDtorCount + -1;
    std::basic_ostream_char::sentry::_dtor(sentry2,2);
  }
  ehContext = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d562c  FUN_004d562c   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004d562c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d573c  std::string::append   (274 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x515078);
  otherLen = std::string::size(other);
  room = (*(int *)&g_stringNpos) - otherLen;
  uVar2 = std::string::size(self);
  if (room <= uVar2) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar2 = 1;
    copyCtor = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(other);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,objectDtor,copyCtor,uVar2,throwFlags,throwFile,throwLine);
  }
  uVar2 = std::string::size(other);
  room = std::string::data(other);
  n1 = 0;
  pos = std::string::size(self);
  FUN_004cfaac(self,pos,n1,room,uVar2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5850  FUN_004d5850   (474 bytes)   [unnamed]
int __cdecl FUN_004d5850(int str,int str2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *msgText;
  uint *puVar3;
  int iVar4;
  uint s;
  uint pos;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint n1;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str3 [16];
  undefined4 lengthError [6];
  undefined1 str4 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x5150f0);
  uVar1 = std::string::size(str2);
  if (uVar1 < param_3) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_80);
    std::string::size(str2);
    msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str4,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str4);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str4,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(str2);
  local_84 = iVar4 - param_3;
  if (param_4 < local_84) {
    local_84 = param_4;
  }
  uVar1 = std::string::size(str);
  if ((*(int *)&g_stringNpos) - local_84 <= uVar1) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_8c);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str3,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str3);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str3,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  uVar1 = std::string::size(str2);
  s = std::string::data(str2);
  n1 = 0;
  pos = std::string::size(str);
  std::string::replace(str,pos,n1,s,uVar1,param_3,param_4);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5a2c  std::string::assign   (33 bytes)   [analysis (usage pattern, less certain) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ac7c.
void __cdecl std::string::assign(int self,int other)

{
  uint len;
  
  len = std::string::size(self);
  std::string::replace_str(self,0,len,other);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5a50  std::string::replace_str   (60 bytes)   [analysis (matched TEACON.exe)]
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
// 0x004d5a8c  std::string::insert   (434 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041acdc. insert(pos, const std::string &)
int __cdecl std::string::insert(int self,uint pos,int other)

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
  
  __InitExceptBlockLDTC(0x515180);
  uVar1 = std::string::size(self);
  if (uVar1 < pos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_80);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(other);
  uVar5 = (*(int *)&g_stringNpos) - iVar4;
  uVar1 = std::string::size(self);
  if (uVar5 <= uVar1) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_88);
    std::string::size(other);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::replace_str(self,pos,0,other);
  *sehChainHead = sehPrevFrame;
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5c40  std::string::replace_fill   (899 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x515210);
  n = std::string::size(self);
  if (n < pos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_004084c8;
    uVar8 = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_80);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,uVar8,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_84 = iVar4 - pos;
  if (n1 < local_84) {
    local_84 = n1;
  }
  iVar4 = std::string::size(self);
  if ((*(int *)&g_stringNpos) - count <= iVar4 - local_84) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00408370;
    uVar8 = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_8c);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,uVar8,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_90 = (iVar4 - local_84) + count;
  if (local_90 == 0) {
    FUN_004ce88c(self);
    piVar5 = FUN_004ce974();
    FUN_004cf3f4(piVar5);
    src = FUN_004ce974();
    local_94 = std::string::__rep_data((int)src);
    FUN_004cea90((int)local_290,self,&local_94);
  }
  else {
    iVar4 = std::string::size(self);
    local_98 = (iVar4 - local_84) - pos;
    piVar5 = (int *)std::string::__getRepOf(self);
    iVar4 = FUN_004ce944(piVar5);
    if ((iVar4 < 2) && (n = FUN_004cff7c(self), local_90 <= n)) {
      if (local_98 != 0) {
        n = local_98;
        iVar4 = FUN_004ce924(self);
        src = (undefined4 *)(iVar4 + pos + n1);
        iVar4 = FUN_004ce924(self);
        FUN_004cff5c((undefined4 *)(iVar4 + pos + count),src,n);
      }
      if (count != 0) {
        iVar4 = FUN_004ce924(self);
        FUN_004d5fc4((undefined4 *)(iVar4 + pos),count,ch);
      }
      iVar4 = std::string::__getRepOf(self);
      n = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = FUN_004ce924(self);
      puVar2 = (undefined1 *)(iVar4 + n);
      uVar8 = FUN_004cfa9c();
      *puVar2 = (char)uVar8;
    }
    else {
      rep = std::string::__getRep(self,local_90,local_90);
      if (pos != 0) {
        n = pos;
        src = (undefined4 *)FUN_004ce924(self);
        puVar7 = (undefined4 *)std::string::__rep_data((int)rep);
        FUN_004cf758(puVar7,src,n);
      }
      if (count != 0) {
        n = count;
        iVar4 = std::string::__rep_data((int)rep);
        FUN_004d5fc4((undefined4 *)(iVar4 + pos),n,ch);
      }
      if (local_98 != 0) {
        n = local_98;
        iVar4 = FUN_004ce924(self);
        src = (undefined4 *)(iVar4 + pos + n1);
        iVar4 = std::string::__rep_data((int)rep);
        FUN_004cf758((undefined4 *)(iVar4 + pos + count),src,n);
      }
      FUN_004ce88c(self);
      local_a0 = std::string::__rep_data((int)rep);
      FUN_004cea90((int)local_2a0,self,&local_a0);
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5fc4  FUN_004d5fc4   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d5fc4(undefined4 *param_1,uint n,undefined1 ch)

{
  memset(param_1,ch,n);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5fe4  FUN_004d5fe4   (305 bytes)   [unnamed]
int __cdecl FUN_004d5fe4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  int *str;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515278);
  piVar1 = (int *)operator_new_array();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = _vector_new_ldtc_(piVar1,0x10,param_2,0x211,(undefined*)FUN_004cd788);
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
// 0x004d6118  std::string::substr   (281 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041b368. result = substr(pos, n)
int __cdecl std::string::substr(int result,int self,uint pos,uint n)

{
  uint uVar1;
  undefined1 *msgText;
  uint *s;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x5152f8);
  uVar1 = std::string::size(self);
  if (uVar1 < pos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar1 = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(self);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_position_beyond_end_of_string_in_00516d24);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  if (iVar4 - pos <= n) {
    n = iVar4 - pos;
  }
  ehContext = 0x20;
  std::allocator::allocator_4ceae8(local_60);
  iVar4 = FUN_004ce924(self);
  std::string::string_from_buf(result,(undefined4 *)(iVar4 + pos),n);
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6234  std::string::string_fill   (281 bytes)   [analysis (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x515350);
  if (n == g_stringNpos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    puVar1 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
    s = (uint *)__rwstd::except_msg_string::msgstr(puVar1);
    std::string::string_from_cstr((int)str,s);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  rep = std::string::__getRep(self,n,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_15c,self,&local_5c);
  while (n != 0) {
    puVar1 = &GHIDRA_STACK(0x0000000c);
    iVar4 = FUN_004ce924(self);
    FUN_004cf608((undefined1 *)(iVar4 + (n - 1)),puVar1);
    n = n - 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6350  FUN_004d6350   (66 bytes)   [unnamed]
int __cdecl FUN_004d6350(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515380);
  FUN_004d2000(param_1,param_2 + 0x40);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6394  FUN_004d6394   (66 bytes)   [unnamed]
int __cdecl FUN_004d6394(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5153a4);
  FUN_004d2000(param_1,param_2 + 0x20);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d63d8  FUN_004d63d8   (66 bytes)   [unnamed]
int __cdecl FUN_004d63d8(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5153c8);
  FUN_004d2000(param_1,param_2 + 0x30);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6a44  FUN_004d6a44   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004d6a44(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6a54  FUN_004d6a54   (47 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d6a54(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_004d3430(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6a84  FUN_004d6a84   (13 bytes)   [unnamed]
void __cdecl FUN_004d6a84(int *param_1,int param_2)

{
  *param_1 = *param_1 - param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6a94  FUN_004d6a94   (13 bytes)   [unnamed]
void __cdecl FUN_004d6a94(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6c8c  FUN_004d6c8c   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d6c8c(undefined4 *param_1,int param_2)

{
  FUN_004d3a14(param_1,(undefined4 *)(param_2 + 4));
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6cac  FUN_004d6cac   (121 bytes)   [unnamed]
int * __cdecl FUN_004d6cac(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_004d39c0(local_10,0);
  bVar1 = FUN_004d4be0(*param_2);
  if (bVar1) {
    FUN_004d39c0(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_004d1758(*param_2);
    FUN_004d1bb4(local_1c,piVar2);
    FUN_004d6a54(local_10,local_1c);
    FUN_004d3a64(param_1,local_10);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6d58  FUN_004d6d58   (112 bytes)   [unnamed]
void __cdecl FUN_004d6d58(int str,uint param_2)

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
  FUN_004cf758(puVar4,src,n);
  FUN_004ce88c(str);
  local_8 = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_18,str,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6dc8  FUN_004d6dc8   (29 bytes)   [unnamed]
void __cdecl FUN_004d6dc8(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6e54  FUN_004d6e54   (872 bytes)   [unnamed]
void __cdecl FUN_004d6e54(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 local_238 [4];
  undefined4 local_228 [4];
  undefined4 local_218 [4];
  undefined4 local_208 [4];
  undefined4 local_1f8 [4];
  undefined4 local_1e8 [4];
  undefined4 local_1d8 [4];
  undefined4 local_1c8 [4];
  undefined4 local_1b8 [4];
  undefined1 local_1a8;
  undefined1 newStr [399];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_7;
  char local_6;
  char local_5;
  
  local_5 = '\0';
  local_6 = '\0';
  if ((*(char **)(param_1 + 0x2c) < *(char **)(param_1 + 0x30)) &&
     (((cVar1 = **(char **)(param_1 + 0x2c), cVar1 == ' ' || (cVar1 == '-')) || (cVar1 == '+')))) {
    local_5 = '\x01';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    pcVar8 = *(char **)(param_1 + 0x30);
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x2c);
    if (local_5 != '\0') {
      pcVar8 = pcVar8 + 1;
    }
    for (; pcVar8 < *(char **)(param_1 + 0x30); pcVar8 = pcVar8 + 1) {
      if ((*pcVar8 < '0') || ('9' < *pcVar8)) {
        if ((*pcVar8 != 'e') && (*pcVar8 != 'E')) {
          local_6 = '\x01';
        }
        break;
      }
    }
  }
  local_c = (int)pcVar8 - *(int *)(param_1 + 0x2c);
  if (local_5 != '\0') {
    local_c = local_c + -1;
  }
  if ((*(int *)(param_1 + 0x18) == 10) && (*(char *)(param_1 + 0x29) != '\0')) {
    pcVar3 = (char *)FUN_004d71bc(param_1);
    local_c = FUN_004dc2bc(param_1,local_c,pcVar3);
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_004d71d4(param_1);
      local_7 = (undefined1)uVar4;
    }
  }
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  iVar6 = local_18;
  iVar2 = local_14;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = (*(int *)(param_1 + 0x14) - (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c))) -
            *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (((0 < iVar5) && (iVar6 = iVar5, *(int *)(param_1 + 0x24) != 0)) &&
       (iVar6 = local_18, iVar2 = iVar5, *(int *)(param_1 + 0x24) != 1)) {
      iVar2 = local_14;
      local_10 = iVar5;
    }
  }
  local_14 = iVar2;
  local_18 = iVar6;
  FUN_004d6dc8(*(int **)(param_1 + 0x268));
  puVar7 = &local_1a8;
  while (iVar6 = local_10, local_10 = local_10 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_004d71e8(local_1b8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1b8);
    FUN_004d7218(iVar6,uVar9);
  }
  if (local_5 != '\0') {
    puVar7 = newStr;
    uVar9 = local_1a8;
    FUN_004d71e8(local_1c8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1c8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = local_14, local_14 = local_14 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_004d71e8(local_1d8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1d8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = local_c, local_c = local_c + -1, iVar6 != 0) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_004d71e8(local_1e8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1e8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = *(int *)(param_1 + 0x20), *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1,
        iVar6 != 0) {
    uVar9 = local_7;
    FUN_004d71e8(local_1f8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1f8);
    FUN_004d7218(iVar6,uVar9);
    while( true ) {
      pcVar3 = *(char **)(param_1 + 0x34);
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar3 + -1;
      if (cVar1 == '\0') break;
      uVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      FUN_004d71e8(local_208,*(undefined4 **)(param_1 + 0x278));
      iVar6 = FUN_004d7210(local_208);
      FUN_004d7218(iVar6,uVar9);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  if (local_6 != '\0') {
    uVar4 = FUN_004d7264(param_1);
    uVar9 = (undefined1)uVar4;
    FUN_004d71e8(local_218,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_218);
    FUN_004d7218(iVar6,uVar9);
    puVar7 = puVar7 + 1;
  }
  local_c = *(int *)(param_1 + 0x30) - (int)pcVar8;
  if (local_6 != '\0') {
    local_c = local_c + -1;
  }
  while (iVar6 = local_c, local_c = local_c + -1, 0 < iVar6) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_004d71e8(local_228,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_228);
    FUN_004d7218(iVar6,uVar9);
  }
  while (local_18 != 0) {
    local_18 = local_18 + -1;
    uVar9 = param_2;
    FUN_004d71e8(local_238,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_238);
    FUN_004d7218(iVar6,uVar9);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d71bc  FUN_004d71bc   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_004d71bc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004cf40c(*(int *)(param_1 + 0x270) + 8);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d71d4  FUN_004d71d4   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_004d71d4(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x270) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x270) + 1));
}

// ----------------------------------------------------------------------------------------------------
// 0x004d71e8  FUN_004d71e8   (37 bytes)   [unnamed]
void __cdecl FUN_004d71e8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7210  FUN_004d7210   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004d7210(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7218  FUN_004d7218   (74 bytes)   [unnamed]
int __cdecl FUN_004d7218(int param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_c = FUN_004d0a2c();
    piVar2 = &local_c;
    local_8 = FUN_004d34bc(*(int **)(param_1 + 8),param_2);
    bVar1 = FUN_004d1694(&local_8,piVar2);
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7264  FUN_004d7264   (16 bytes)   [unnamed]
undefined4 __cdecl FUN_004d7264(int param_1)

{
  return CONCAT31((int3)((uint)*(undefined1 **)(param_1 + 0x270) >> 8),
                  **(undefined1 **)(param_1 + 0x270));
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7320  FUN_004d7320   (6 bytes)   [unnamed]
void __stdcall FUN_004d7320(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int str;
  undefined1 in_stack_0000000c;
  undefined1 uVar5;
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [4];
  int iStack_8;
  
  iStack_8 = 0;
  iVar2 = std::string::size(str);
  iVar2 = *(int *)(param_1 + 0x14) - iVar2;
  if (0 < iVar2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = iVar2;
      iVar2 = iStack_8;
    }
    for (; iStack_8 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar5 = in_stack_0000000c;
      FUN_004d71e8(auStack_18,*(undefined4 **)(param_1 + 0x278));
      iVar2 = FUN_004d7210(auStack_18);
      FUN_004d7218(iVar2,uVar5);
      iVar2 = iStack_8;
    }
  }
  puVar3 = (undefined1 *)FUN_004cf40c(str);
  iVar2 = std::string::size(str);
  puVar4 = puVar3 + iVar2;
  for (; puVar3 < puVar4; puVar3 = puVar3 + 1) {
    uVar5 = *puVar3;
    FUN_004d71e8(auStack_28,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_28);
    FUN_004d7218(iVar2,uVar5);
  }
  for (; iStack_8 != 0; iStack_8 = iStack_8 + -1) {
    uVar5 = in_stack_0000000c;
    FUN_004d71e8(auStack_38,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_004d7210(auStack_38);
    FUN_004d7218(iVar2,uVar5);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7326  FUN_004d7326   (238 bytes)   [unnamed]
void __stdcall FUN_004d7326(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int str;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined1 uVar8;
  
  str = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = std::string::size(str);
  iVar3 = *(int *)(iVar2 + 0x14) - iVar3;
  if (0 < iVar3) {
    if (*(int *)(iVar2 + 0x24) == 0) {
      *(int *)(unaff_EBP + -4) = iVar3;
      iVar3 = 0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
      FUN_004d71e8((undefined4 *)(unaff_EBP + -0x14),*(undefined4 **)(iVar2 + 0x278));
      iVar4 = FUN_004d7210(unaff_EBP + -0x14);
      FUN_004d7218(iVar4,uVar8);
    }
  }
  puVar5 = (undefined1 *)FUN_004cf40c(str);
  str = std::string::size(str);
  puVar7 = puVar5 + str;
  for (; puVar5 < puVar7; puVar5 = puVar5 + 1) {
    uVar8 = *puVar5;
    FUN_004d71e8((undefined4 *)(unaff_EBP + -0x24),*(undefined4 **)(iVar2 + 0x278));
    str = FUN_004d7210(unaff_EBP + -0x24);
    FUN_004d7218(str,uVar8);
  }
  str = *(int *)(unaff_EBP + -4);
  while (str != 0) {
    uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
    FUN_004d71e8((undefined4 *)(unaff_EBP + -0x34),*(undefined4 **)(iVar2 + 0x278));
    str = FUN_004d7210(unaff_EBP + -0x34);
    FUN_004d7218(str,uVar8);
    piVar1 = (int *)(unaff_EBP + -4);
    *piVar1 = *piVar1 + -1;
    str = *piVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7414  FUN_004d7414   (24 bytes)   [unnamed]
int __cdecl FUN_004d7414(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    iVar1 = param_1 + 0x40;
  }
  else {
    iVar1 = param_1 + 0x30;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7854  FUN_004d7854   (517 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_004d7854(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_d0 [6];
  undefined4 local_b8 [4];
  undefined4 local_a8 [6];
  undefined4 local_90 [4];
  undefined4 local_80 [6];
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  int local_50;
  undefined4 local_48 [4];
  undefined4 local_38 [6];
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c [10];
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10 [8];
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)param_2[9];
  local_8 = (undefined4 *)FUN_004cda08((int)param_2);
  local_8 = (undefined4 *)*local_8;
  bVar3 = true;
  while (bVar2 = FUN_004cda78((int *)&local_8), puVar1 = local_8, !bVar2) {
    piVar4 = (int *)FUN_004d2a94((int)local_8);
    piVar5 = (int *)FUN_004d2a8c(local_10,param_3);
    bVar3 = FUN_004d2ab8(param_2 + 0xc,piVar5,piVar4);
    puVar6 = puVar1;
    if (bVar3) {
      local_8 = (undefined4 *)FUN_004cd864((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
    else {
      local_8 = (undefined4 *)FUN_004cda90((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
  }
  if ((char)param_2[0xb] == '\0') {
    FUN_004cd870((int)local_58,puVar6);
    if (bVar3 != false) {
      FUN_004cd82c((int)local_68,(int)param_2);
      bVar3 = FUN_004cd9ec((int)local_58,(int)local_68);
      if (bVar3) {
        local_12 = 1;
        puVar7 = &local_12;
        FUN_004d26e0((int)local_90,param_2,local_8,(int)puVar6,param_3);
        FUN_004d7a5c(local_80,local_90,puVar7);
        FUN_004d7a9c(param_1,local_80);
        return param_1;
      }
      FUN_004d2628((int)local_58);
    }
    piVar4 = (int *)FUN_004d2a8c(local_1c,param_3);
    piVar5 = (int *)FUN_004d2a94(local_50);
    bVar3 = FUN_004d2ab8(param_2 + 0xc,piVar5,piVar4);
    if (bVar3) {
      local_1d = 1;
      puVar7 = &local_1d;
      FUN_004d26e0((int)local_b8,param_2,local_8,(int)puVar6,param_3);
      FUN_004d7a5c(local_a8,local_b8,puVar7);
      FUN_004d7a9c(param_1,local_a8);
    }
    else {
      local_1e = 0;
      FUN_004d7a5c(local_d0,local_58,&local_1e);
      FUN_004d7a9c(param_1,local_d0);
    }
  }
  else {
    local_11 = 1;
    puVar7 = &local_11;
    FUN_004d26e0((int)local_48,param_2,local_8,(int)puVar6,param_3);
    FUN_004d7a5c(local_38,local_48,puVar7);
    FUN_004d7a9c(param_1,local_38);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7a5c  FUN_004d7a5c   (64 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d7a5c(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5154cc);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *param_3;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7a9c  FUN_004d7a9c   (66 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d7a9c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5154d4);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7ae0  FUN_004d7ae0   (257 bytes)   [unnamed]
uint __cdecl FUN_004d7ae0(int str,undefined4 *param_2,uint param_3,uint param_4)

{
  uint n;
  undefined1 *msgText;
  uint *s;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x515508);
  n = std::string::size(str);
  if (n < param_4) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_position_beyond_end_of_string_in_00516d24);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(str);
  if (iVar4 - param_4 <= param_3) {
    param_3 = iVar4 - param_4;
  }
  n = param_3;
  iVar4 = FUN_004ce924(str);
  FUN_004cf758(param_2,(undefined4 *)(iVar4 + param_4),n);
  *sehChainHead = sehPrevFrame;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7be4  FUN_004d7be4   (266 bytes)   [unnamed]
int __cdecl FUN_004d7be4(int str,byte *param_2,int param_3,int param_4)

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
  
  __InitExceptBlockLDTC(0x515554);
  if (param_2 == (byte *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar7 = 1;
    copyCtor = std::logic_error::logic_error_copy;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str2);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_004113dc,logicError,objectDtor,(undefined*)copyCtor,uVar7,throwFlags,throwFile,throwLine);
  }
  while( true ) {
    uVar7 = std::string::size(str);
    iVar4 = (*(int *)&g_stringNpos);
    if (uVar7 < (uint)(param_4 + param_3)) {
      *sehChainHead = sehPrevFrame;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_004ce924(str);
    iVar4 = FUN_004d4204((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7cf0  FUN_004d7cf0   (306 bytes)   [unnamed]
int __cdecl FUN_004d7cf0(int str,byte *param_2,uint param_3,uint param_4)

{
  undefined1 *msgText;
  uint *s;
  int iVar3;
  int i;
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
  
  __InitExceptBlockLDTC(0x5155a0);
  if (param_2 == (byte *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar7 = 1;
    copyCtor = std::logic_error::logic_error_copy;
    objectDtor = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str2);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_004113dc,logicError,objectDtor,(undefined*)copyCtor,uVar7,throwFlags,throwFile,throwLine);
  }
  uVar7 = std::string::size(str);
  iVar3 = (*(int *)&g_stringNpos);
  if (uVar7 < param_4) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar3 = std::string::size(str);
    uVar7 = iVar3 - param_4;
    if (param_3 <= iVar3 - param_4) {
      uVar7 = param_3;
    }
    iVar3 = (*(int *)&g_stringNpos);
    for (i = uVar7 + 1; (*(int *)&g_stringNpos) = iVar3, i != 0; i = i + -1) {
      pbVar11 = param_2;
      uVar7 = param_4;
      iVar3 = FUN_004ce924(str);
      iVar3 = FUN_004d4204((byte *)(iVar3 + i + -1),pbVar11,uVar7);
      if (iVar3 == 0) {
        *sehChainHead = sehPrevFrame;
        return i + -1;
      }
      iVar3 = (*(int *)&g_stringNpos);
    }
    *sehChainHead = sehPrevFrame;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7e24  FUN_004d7e24   (61 bytes)   [unnamed]
void __cdecl FUN_004d7e24(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004cf40c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  uVar1 = FUN_004cf40c(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(int *)(param_1 + 0x54) = param_1 + 0x40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7e64  FUN_004d7e64   (64 bytes)   [unnamed]
void __cdecl FUN_004d7e64(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_004d2f64((int)param_1);
  if ((char)uVar1 != '\0') {
    piVar2 = FUN_004d08c4(param_1 + 2);
    if (piVar2 == (int *)0x0) {
      FUN_004d1084(*param_1,4);
      return;
    }
    FUN_004d0cac(*param_1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7ebc  FUN_004d7ebc   (235 bytes)   [unnamed]
void __cdecl FUN_004d7ebc(int *param_1)

{
  undefined1 uVar1;
  undefined4 *sehChainHead;
  int *piVar2;
  undefined4 sehPrevFrame;
  undefined1 str [16];
  undefined1 str2 [16];
  undefined1 str3 [16];
  
  __InitExceptBlockLDTC(0x5155f0);
  uVar1 = (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 6) = uVar1;
  piVar2 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xc))();
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  (**(code **)(*param_1 + 0x10))(str3,*param_1,piVar2,str3,param_1);
  std::string::operator_assign((int)(param_1 + 8),(int)str3);
  std::string::_dtor((int)str3,2);
  (**(code **)(*param_1 + 0x18))();
  std::string::operator_assign((int)(param_1 + 0x10),(int)str2);
  std::string::_dtor((int)str2,2);
  (**(code **)(*param_1 + 0x14))();
  std::string::operator_assign((int)(param_1 + 0xc),(int)str);
  std::string::_dtor((int)str,2);
  FUN_004d7e24((int)(param_1 + 4));
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
