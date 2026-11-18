// TEA.exe — runtime / library code "code_0x004d0000"
// 131 functions, 0x004d00c0..0x004d3fc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d00c0  FUN_004d00c0   (152 bytes)   [unnamed]
void __cdecl FUN_004d00c0(int str)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004d0158(str);
  if (iVar1 != 0) {
    piVar2 = (int *)std::string::__getRepOf_4d0164(str);
    iVar1 = FUN_004d0178(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf_4d0164(str);
      iVar1 = FUN_004d0184(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf_4d0164(str);
    std::allocator::allocator_4d023c(local_c);
    FUN_004d0264();
    std::string::size_4d0334(str);
    std::string::__getRepOf_4d0164(str);
    std::allocator::allocator_4d027c(local_14);
    FUN_004d02a4();
    local_18 = 0;
    FUN_004d02b4((int)local_28,str,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0158  FUN_004d0158   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0158(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0164  std::string::__getRepOf_4d0164   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00416740 (20 bytes; the code occurs several times, e.g. one template instance per type). the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf_4d0164(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d0158(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0178  FUN_004d0178   (11 bytes)   [unnamed]
int __cdecl FUN_004d0178(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0184  FUN_004d0184   (34 bytes)   [unnamed]
int __cdecl FUN_004d0184(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    iVar2 = FUN_004d021c(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d01a8  FUN_004d01a8   (6 bytes)   [unnamed]
undefined * __stdcall FUN_004d01a8(void)

{
  return &DAT_005140f8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d01b0  FUN_004d01b0   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d01b0(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51410c);
  FUN_004d01e8(param_1,1);
  *(undefined2 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d01e8  FUN_004d01e8   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d01e8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514114);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d021c  FUN_004d021c   (32 bytes)   [unnamed]
int __cdecl FUN_004d021c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d023c  std::allocator::allocator_4d023c   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4d023c(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51411c);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0264  FUN_004d0264   (15 bytes)   [unnamed]
void __stdcall FUN_004d0264(void)

{
  FUN_004d0274();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0274  FUN_004d0274   (5 bytes)   [unnamed]
void __stdcall FUN_004d0274(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d027c  std::allocator::allocator_4d027c   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4d027c(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514124);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d02a4  FUN_004d02a4   (15 bytes)   [unnamed]
void __stdcall FUN_004d02a4(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d02b4  FUN_004d02b4   (35 bytes)   [unnamed]
int __cdecl FUN_004d02b4(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_004d02d8(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d02d8  FUN_004d02d8   (52 bytes)   [unnamed]
int __cdecl FUN_004d02d8(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51412c);
  std::allocator::allocator_4d030c(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d030c  std::allocator::allocator_4d030c   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4d030c(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514134);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0334  std::string::size_4d0334   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0041687c (20 bytes; the code occurs several times, e.g. one template instance per type). length of the string (rep->length)
undefined4 __cdecl std::string::size_4d0334(int self)

{
  int rep;
  
  rep = std::string::__getRepOf_4d0164(self);
  return *(undefined4 *)(rep + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0348  FUN_004d0348   (111 bytes)   [unnamed]
int __cdecl FUN_004d0348(int param_1)

{
  undefined4 *rep;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x514154);
  ehContext = 8;
  local_30[1] = 0;
  FUN_004d03b8(param_1,local_30 + 1);
  rep = FUN_004ce974();
  local_30[0] = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_40,param_1,local_30);
  piVar2 = FUN_004ce974();
  FUN_004cf3f4(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d03b8  FUN_004d03b8   (58 bytes)   [unnamed]
int __cdecl FUN_004d03b8(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514174);
  std::allocator::allocator_4cea44(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d03f4  FUN_004d03f4   (111 bytes)   [unnamed]
int __cdecl FUN_004d03f4(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x51418c);
  ehContext = 8;
  local_30[1] = 0;
  FUN_004d0480(param_1,local_30 + 1);
  puVar1 = FUN_004d01a8();
  local_30[0] = FUN_004d04bc((int)puVar1);
  FUN_004d02b4((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_004d01a8();
  FUN_004d04c8(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0480  FUN_004d0480   (58 bytes)   [unnamed]
int __cdecl FUN_004d0480(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5141ac);
  std::allocator::allocator_4d027c(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d04bc  FUN_004d04bc   (11 bytes)   [unnamed]
int __cdecl FUN_004d04bc(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d04c8  FUN_004d04c8   (21 bytes)   [unnamed]
void __cdecl FUN_004d04c8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d05d0  FUN_004d05d0   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d05d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51575c);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0688  FUN_004d0688   (70 bytes)   [unnamed]
int * __cdecl FUN_004d0688(int *param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515774);
  if (DAT_0051bc08 == 0) {
    FUN_004daff8();
  }
  iVar1 = DAT_0051bc08;
  *param_1 = DAT_0051bc08;
  FUN_004d8174(iVar1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d06f0  FUN_004d06f0   (51 bytes)   [unnamed]
void __cdecl FUN_004d06f0(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0xc;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0724  FUN_004d0724   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_004d0724(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d08c4  FUN_004d08c4   (358 bytes)   [unnamed]
int * __cdecl FUN_004d08c4(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514310);
  operator_delete();
  operator_delete();
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  param_1[0xe] = (int)puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  param_1[0xf] = (int)puVar2;
  param_1[0xd] = 0;
  bVar1 = FUN_004d0a30(param_1,param_1[9]);
  if ((bVar1) && (iVar3 = FUN_004d0724(), iVar3 != param_1[9])) {
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      FUN_004d0a2c();
      (**(code **)(*param_1 + 0x24))();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar3 = FUN_004d0724();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) != '\0') {
        FUN_004d0a2c();
        (**(code **)(*param_1 + 0x24))();
      }
      operator_delete_array();
      param_1[0x10] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      param_1[0xb] = 0;
      iVar3 = FUN_004d0a40(param_1,param_1[9]);
      if (iVar3 == -1) {
        param_1 = (int *)0x0;
        *sehChainHead = sehPrevFrame;
      }
      else {
        iVar3 = FUN_004d0724();
        param_1[9] = iVar3;
        *sehChainHead = sehPrevFrame;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0a2c  FUN_004d0a2c   (4 bytes)   [unnamed]
undefined4 __stdcall FUN_004d0a2c(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0a30  FUN_004d0a30   (15 bytes)   [unnamed]
bool __cdecl FUN_004d0a30(undefined4 param_1,int param_2)

{
  return param_2 < 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0a40  FUN_004d0a40   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0a40(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_004ddd90(param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0be0  FUN_004d0be0   (79 bytes)   [unnamed]
void __cdecl FUN_004d0be0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 6;
  uVar1 = FUN_004d0c30(param_1);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0c30  FUN_004d0c30   (99 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0c30(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int loc;
  
  __InitExceptBlockLDTC(0x5143e8);
  FUN_004cf0b8(&loc,param_1);
  piVar1 = (int *)FUN_004cecf8(&loc);
  uVar2 = FUN_004d0c94(piVar1);
  std::locale::_dtor(&loc,2);
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0c94  FUN_004d0c94   (21 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0c94(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0cac  FUN_004d0cac   (21 bytes)   [unnamed]
void __cdecl FUN_004d0cac(int param_1,uint param_2)

{
  FUN_004d0cc4(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0cc4  FUN_004d0cc4   (637 bytes)   [unnamed]
void __cdecl FUN_004d0cc4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *msgText;
  uint *puVar4;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  undefined1 exceptMsg3 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 failure2 [6];
  undefined1 str2 [16];
  undefined4 failure3 [6];
  undefined1 str3 [16];
  undefined4 failure4 [6];
  
  __InitExceptBlockLDTC(0x514480);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_004d0f44(param_1);
  uVar2 = FUN_004d0f50(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_0047ec80;
      objectDtor = 0;
      ehContext = 0x14;
      std::allocator::allocator_4ceae8(local_a8);
      msgText = __rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00515af8);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str3,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure4,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str3,2);
      ehContext = 8;
      _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure4,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_0047ec80;
      objectDtor = 0;
      ehContext = 0x2c;
      std::allocator::allocator_4ceae8(local_b0);
      msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00515afc);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str2,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure3,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str2,2);
      ehContext = 0x20;
      _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure3,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
    uVar1 = FUN_004d0f44(param_1);
    uVar2 = FUN_004d0f50(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_0047ec80;
      objectDtor = 0;
      ehContext = 0x44;
      std::allocator::allocator_4ceae8(local_b8);
      msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_00515b00);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure2,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str,2);
      ehContext = 0x38;
      _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure2,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0f44  FUN_004d0f44   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0f44(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0f50  FUN_004d0f50   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d0f50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0f5c  FUN_004d0f5c   (266 bytes)   [unnamed]
int * __cdecl FUN_004d0f5c(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar3 = param_3 & 0xffffffdf | 1;
  }
  iVar1 = FUN_004d0724();
  if (iVar1 == param_1[9]) {
    param_1[1] = param_3;
    FUN_004d06f0((int)param_1,'\0');
    uVar3 = *(uint *)(&DAT_00515a78 + (uVar3 & 0xffffff3f) * 4);
    if (uVar3 == 0xffffffff) {
      param_1 = (int *)0x0;
    }
    else {
      if ((param_3 & 8) != 0) {
        if ((param_3 & 0x40) != 0) {
          uVar3 = uVar3 & 0xfffffeff;
        }
        if ((param_3 & 0x80) != 0) {
          uVar3 = uVar3 | 0x400;
        }
      }
      iVar1 = thunk_FUN_004ddf38(fileName,uVar3,param_4);
      param_1[9] = iVar1;
      iVar2 = FUN_004d0724();
      if (iVar1 == iVar2) {
        param_1 = (int *)0x0;
      }
      else {
        operator_delete_array();
        iVar1 = operator_new_array();
        param_1[0x10] = iVar1;
        if ((param_3 & 0x20) != 0) {
          iVar1 = FUN_004d1068(param_1,param_1[9],0,2);
          param_1[0xd] = iVar1;
          if (iVar1 == -1) {
            FUN_004d08c4(param_1);
            operator_delete_array();
            param_1[0x10] = 0;
            iVar1 = FUN_004d0724();
            param_1[9] = iVar1;
            param_1 = (int *)0x0;
          }
        }
      }
    }
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1068  FUN_004d1068   (25 bytes)   [unnamed]
DWORD __cdecl FUN_004d1068(undefined4 param_1,uint param_2,LONG lDistanceToMove,int param_4)

{
  DWORD DVar1;
  
  DVar1 = thunk_FUN_004ddec0(param_2,lDistanceToMove,param_4);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1084  FUN_004d1084   (24 bytes)   [unnamed]
void __cdecl FUN_004d1084(int param_1,uint param_2)

{
  FUN_004d0cac(param_1,*(uint *)(param_1 + 0x30) | param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d12b8  FUN_004d12b8   (69 bytes)   [unnamed]
void __cdecl FUN_004d12b8(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_004d0cac(*param_1,0);
  piVar1 = FUN_004d0f5c(param_1 + 3,fileName,param_3 | 4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_004d1084(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1450  FUN_004d1450   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1450(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1504  FUN_004d1504   (385 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d1504(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  int local_38;
  int local_34;
  int local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  
  __InitExceptBlockLDTC(0x5145ec);
  ehContext = 8;
  *param_1 = param_2;
  bVar1 = FUN_004d16ec(*param_2);
  if (!bVar1) {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_004d1672;
  }
  iVar2 = FUN_004d1700(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_004d1688(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      ehContext = 0x14;
      FUN_004cf0b8(&loc,*param_2);
      ehDtorCount = ehDtorCount + 1;
      iVar2 = FUN_004cecf8(&loc);
      ehContext = 8;
      do {
        piVar3 = (int *)FUN_004d1758(*param_2);
        local_30 = FUN_004d1764(piVar3);
        local_34 = FUN_004d0a2c();
        bVar1 = FUN_004d1694(&local_30,&local_34);
        if (bVar1) {
LAB_004d1601:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_004d16ac(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_004d1601;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x004d160e;
        piVar3 = (int *)FUN_004d1758(*param_2);
        FUN_004d17c0(piVar3);
      } while( true );
    }
  }
  goto LAB_004d1648;
code_r0x004d160e:
  local_38 = FUN_004d0a2c();
  bVar1 = FUN_004d1694(&local_30,&local_38);
  if (bVar1) {
    FUN_004d1084(*param_2,2);
  }
  ehDtorCount = ehDtorCount + -1;
  std::locale::_dtor(&loc,2);
LAB_004d1648:
  bVar1 = FUN_004d16ec(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_004d1672:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1688  FUN_004d1688   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1688(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1694  FUN_004d1694   (21 bytes)   [unnamed]
bool __cdecl FUN_004d1694(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d16ac  FUN_004d16ac   (28 bytes)   [unnamed]
bool __cdecl FUN_004d16ac(int param_1,uint param_2,byte param_3)

{
  return (*(uint *)(*(int *)(param_1 + 0x20) + (uint)param_3 * 4) & param_2) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d16ec  FUN_004d16ec   (18 bytes)   [unnamed]
bool __cdecl FUN_004d16ec(int param_1)

{
  return *(int *)(param_1 + 0x30) == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1700  FUN_004d1700   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1700(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d170c  FUN_004d170c   (57 bytes)   [unnamed]
int * __cdecl FUN_004d170c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004d1758(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004d1758(*param_1);
    iVar1 = FUN_004d1748(piVar2);
    if (iVar1 == -1) {
      FUN_004d1084(*param_1,1);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1748  FUN_004d1748   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1748(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1758  FUN_004d1758   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1758(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1764  FUN_004d1764   (55 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1764(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 regHigh;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_004d17a8((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_004d17b4((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_004d17a8((int)param_1);
    uVar1 = FUN_004d179c(puVar5);
    uVar4 = CONCAT31(regHigh,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar6,param_1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d179c  FUN_004d179c   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d179c(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d17a8  FUN_004d17a8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d17a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d17b4  FUN_004d17b4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d17b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d17c0  FUN_004d17c0   (67 bytes)   [unnamed]
void __cdecl FUN_004d17c0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_004d0a2c();
  piVar2 = &local_c;
  local_8 = FUN_004d1804(param_1);
  bVar1 = FUN_004d1694(&local_8,piVar2);
  if (bVar1) {
    FUN_004d0a2c();
  }
  else {
    FUN_004d1764(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1804  FUN_004d1804   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1804(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 regHigh;
  undefined4 uStack_8;
  
  uVar2 = FUN_004d17a8((int)param_1);
  uVar3 = FUN_004d17b4((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_004d17a8((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_004d1850((int)param_1,1);
    uVar1 = FUN_004d179c((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(regHigh,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1850  FUN_004d1850   (14 bytes)   [unnamed]
void __cdecl FUN_004d1850(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d187c  FUN_004d187c   (26 bytes)   [unnamed]
void __cdecl FUN_004d187c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1898  FUN_004d1898   (23 bytes)   [unnamed]
void __cdecl FUN_004d1898(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d18b0  FUN_004d18b0   (14 bytes)   [unnamed]
void __cdecl FUN_004d18b0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d198c  FUN_004d198c   (69 bytes)   [unnamed]
void __cdecl FUN_004d198c(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_004d0cac(*param_1,0);
  piVar1 = FUN_004d0f5c(param_1 + 2,fileName,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_004d1084(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1a74  FUN_004d1a74   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d1a74(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined1 local_34 [12];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x514664);
  ehContext = 8;
  *param_1 = param_2;
  iVar3 = FUN_004d1700(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar4);
  }
  cVar1 = FUN_004d1b5c();
  if (cVar1 != '\0') {
    bVar2 = FUN_004d1b68((undefined *)param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517358);
    }
    bVar2 = FUN_004d1b7c(param_2);
    if (bVar2) {
      FUN_004de85c((int *)&DAT_00517370);
    }
  }
  iVar3 = FUN_004d1758(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_004d1758(*param_2);
    uVar5 = FUN_004d1450(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_004d1758(*param_2);
      FUN_004d1bb4(local_34,piVar4);
    }
  }
  bVar2 = FUN_004d16ec(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_004d1084(*param_2,1);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1b5c  FUN_004d1b5c   (10 bytes)   [unnamed]
undefined1 __stdcall FUN_004d1b5c(void)

{
  return (*(undefined1 *)&DAT_00515b64);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1b68  FUN_004d1b68   (19 bytes)   [unnamed]
bool __cdecl FUN_004d1b68(undefined *param_1)

{
  return param_1 == &DAT_0051bb24;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1b7c  FUN_004d1b7c   (19 bytes)   [unnamed]
bool __cdecl FUN_004d1b7c(undefined4 *param_1)

{
  return param_1 == &DAT_0051bb64;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1bb4  FUN_004d1bb4   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_004d1bb4(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0xc))();
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1bdc  FUN_004d1bdc   (143 bytes)   [unnamed]
int __cdecl FUN_004d1bdc(int str,uint param_2,int param_3)

{
  int *rep;
  undefined4 *sehChainHead;
  undefined1 local_3c [16];
  int local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x514688);
  ehContext = 8;
  FUN_004cf778(str,0);
  rep = std::string::__getRep(str,param_3 - param_2,0);
  local_2c = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_3c,str,&local_2c);
  std::string::replace(str,0,0,param_2,param_3 - param_2,0,param_3 - param_2);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1c6c  std::string::string_from_buf   (465 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00418dec. std::string(const char *s, size_type n)
int __cdecl std::string::string_from_buf(int self,undefined4 *s,uint n)

{
  undefined1 *msgText;
  uint *puVar2;
  int *rep;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  undefined *copyCtor2;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_27c [16];
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  undefined1 str2 [16];
  undefined4 logicError [6];
  
  __InitExceptBlockLDTC(0x514710);
  ehContext = 8;
  FUN_004cf778(self,0);
  if (s == (undefined4 *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = std::logic_error::logic_error_copy;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_80);
    msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    puVar2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,puVar2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str2);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str2,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_004113dc,logicError,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  if (n == g_stringNpos) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor2 = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x44;
    std::allocator::allocator_4ceae8(local_88);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
    puVar2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,puVar2);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x38;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,objectDtor,copyCtor2,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  rep = std::string::__getRep(self,n,n);
  local_8c = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_27c,self,&local_8c);
  puVar4 = (undefined4 *)FUN_004ce924(self);
  FUN_004cf758(puVar4,s,n);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1e40  FUN_004d1e40   (373 bytes)   [unnamed]
int __cdecl FUN_004d1e40(int param_1,int str,uint param_3,uint param_4)

{
  uint n;
  undefined1 *msgText;
  uint *s;
  int iVar4;
  int *rep;
  undefined4 *src;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
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
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x51479c);
  ehContext = 8;
  FUN_004cf778(param_1,0);
  n = std::string::size(str);
  if (n < param_3) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_004084c8;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_58);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,objectDtor,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(str);
  n = iVar4 - param_3;
  ehContext = 8;
  if (param_4 < n) {
    n = param_4;
  }
  if (param_4 == g_stringNpos) {
    param_4 = 0;
  }
  uVar8 = n;
  if (n < param_4) {
    uVar8 = param_4;
  }
  rep = std::string::__getRep(param_1,uVar8,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_004ce924(str);
  src = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_004ce924(param_1);
  FUN_004cf758(puVar7,src,n);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1fb8  FUN_004d1fb8   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d1fb8(undefined4 *facet2,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515798);
  std::locale::facet::facet(facet2,param_2,0x20);
  *facet2 = &PTR_FUN_005158a0;
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2000  FUN_004d2000   (226 bytes)   [unnamed]
int __cdecl FUN_004d2000(int param_1,int str)

{
  int *piVar1;
  int iVar2;
  uint n;
  undefined4 *src;
  undefined4 *puVar5;
  undefined4 *sehChainHead;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x5147e4);
  ehContext = 8;
  std::allocator::allocator_4ceae8(local_34);
  local_2c = 0;
  FUN_004d03b8(param_1,&local_2c);
  piVar1 = (int *)std::string::__getRepOf(str);
  iVar2 = FUN_004ce944(piVar1);
  if (iVar2 < 1) {
    n = std::string::size(str);
    piVar1 = std::string::__getRep(param_1,n,n);
    local_3c = std::string::__rep_data((int)piVar1);
    FUN_004cea90((int)local_5c,param_1,&local_3c);
    src = (undefined4 *)FUN_004cf40c(str);
    puVar5 = (undefined4 *)FUN_004ce924(param_1);
    FUN_004cf758(puVar5,src,n);
  }
  else {
    local_38 = FUN_004ce924(str);
    FUN_004cea90((int)local_4c,param_1,&local_38);
    piVar1 = (int *)std::string::__getRepOf(param_1);
    FUN_004cf3f4(piVar1);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2174  FUN_004d2174   (163 bytes)   [unnamed]
void __cdecl FUN_004d2174(undefined4 *facet2,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514838);
  if (facet2 != (undefined4 *)0x0) {
    *facet2 = &PTR_FUN_00515a3c;
    std::string::_dtor((int)(facet2 + 0x10),2);
    std::string::_dtor((int)(facet2 + 0xc),2);
    std::string::_dtor((int)(facet2 + 8),2);
    std::locale::facet::_dtor(facet2,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2218  FUN_004d2218   (93 bytes)   [unnamed]
void __cdecl FUN_004d2218(undefined4 *facet,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51485c);
  if (facet != (undefined4 *)0x0) {
    *facet = &PTR_FUN_00515a14;
    FUN_004d2174(facet,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2278  FUN_004d2278   (125 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_004d2278(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x514890);
  local_2c = FUN_004d2320(param_1);
  std::allocator::allocator(local_34);
  ehContext = 8;
  iVar1 = FUN_004ce7ec((int)local_2c);
  uVar2 = FUN_004ce7f8(local_34,iVar1);
  FUN_004d2574(local_34,uVar2,param_2);
  *sehChainHead = sehPrevFrame;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2320  FUN_004d2320   (97 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d2320(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_004d2384(param_1);
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  uVar1 = FUN_004cdab0();
  puVar2[1] = uVar1;
  uVar1 = FUN_004cdab0();
  puVar2[2] = uVar1;
  uVar1 = FUN_004cdab0();
  puVar2[3] = uVar1;
  *puVar2 = 0;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2384  FUN_004d2384   (213 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004d2384(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  undefined1 local_54 [24];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x5148c4);
  FUN_004ceb88((int)(param_1 + 2));
  std::allocator::allocator_4cec58(local_34);
  local_2c = (undefined4 *)FUN_004d2494();
  ehContext = 8;
  std::allocator::allocator_4cec20(local_3c);
  iVar1 = FUN_004d2504();
  local_2c[2] = iVar1;
  ehContext = 0;
  piVar3 = param_1 + 2;
  uVar2 = FUN_004ceb94((int)piVar3);
  *local_2c = uVar2;
  local_2c[1] = *param_1;
  FUN_004ceba0((int)local_54,(int)piVar3,(undefined4*)&local_2c);
  iVar1 = FUN_004ceb88((int)piVar3);
  iVar1 = *(int *)(iVar1 + 8);
  param_1[7] = iVar1;
  param_1[8] = iVar1 + *param_1 * 0x28;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2494  FUN_004d2494   (112 bytes)   [unnamed]
int __stdcall FUN_004d2494(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 badAlloc;
  
  __InitExceptBlockLDTC(0x5148e8);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00404134;
    objectDtor = 0;
    std::bad_alloc::bad_alloc(&badAlloc);
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,&badAlloc,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2504  FUN_004d2504   (112 bytes)   [unnamed]
int __stdcall FUN_004d2504(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 badAlloc;
  
  __InitExceptBlockLDTC(0x51490c);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00404134;
    objectDtor = 0;
    std::bad_alloc::bad_alloc(&badAlloc);
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,&badAlloc,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2574  FUN_004d2574   (21 bytes)   [unnamed]
void __cdecl FUN_004d2574(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_004d258c(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d258c  FUN_004d258c   (78 bytes)   [unnamed]
void __cdecl FUN_004d258c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514930);
  puVar1 = (undefined4 *)FUN_004cf9b8(0x18,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004d25dc(puVar1,param_2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d25dc  FUN_004d25dc   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d25dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514960);
  *param_1 = *param_2;
  FUN_004d2000((int)(param_1 + 2),(int)(param_2 + 2));
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2628  FUN_004d2628   (182 bytes)   [unnamed]
int __cdecl FUN_004d2628(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004ce568(*(undefined4 *)(param_1 + 8));
  if (*piVar2 == 0) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    piVar2 = (int *)FUN_004cda1c(*piVar2);
    if (*piVar2 == *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)FUN_004cda90(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
      return param_1;
    }
  }
  piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004cd864(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_004cda1c(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  else {
    piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while( true ) {
      piVar2 = (int *)FUN_004cda90(iVar4);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) break;
      piVar2 = (int *)FUN_004cda90(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d26e0  FUN_004d26e0   (939 bytes)   [unnamed]
int __cdecl FUN_004d26e0(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_c [8];
  
  puVar2 = FUN_004d2278(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (param_4 != param_2[9]) {
    bVar1 = FUN_004cda78((int *)&param_3);
    if (bVar1) {
      piVar3 = (int *)FUN_004d2a94(param_4);
      piVar4 = (int *)FUN_004d2a8c(local_c,param_5);
      bVar1 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
      if (!bVar1) {
        puVar5 = (undefined4 *)FUN_004cda90(param_4);
        *puVar5 = puVar2;
        piVar3 = (int *)FUN_004cdab4((int)param_2);
        if (*piVar3 == param_4) {
          puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
          *puVar5 = puVar2;
        }
        goto LAB_004d27a4;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004cd864(param_4);
  *puVar5 = puVar2;
  if (param_4 == param_2[9]) {
    puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
    *puVar5 = puVar2;
    puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
    *puVar5 = puVar2;
  }
  else {
    piVar3 = (int *)FUN_004cda9c((int)param_2);
    if (*piVar3 == param_4) {
      puVar5 = (undefined4 *)FUN_004cda9c((int)param_2);
      *puVar5 = puVar2;
    }
  }
LAB_004d27a4:
  piVar3 = (int *)FUN_004cda1c((int)puVar2);
  *piVar3 = param_4;
  param_3 = puVar2;
LAB_004d2a36:
  do {
    piVar3 = (int *)FUN_004cda08((int)param_2);
    if ((undefined4 *)*piVar3 == param_3) {
LAB_004d2a5e:
      puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      FUN_004cd870(param_1,puVar2);
      return param_1;
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004ce568(*puVar5);
    if (*piVar3 != 0) goto LAB_004d2a5e;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    iVar6 = *piVar3;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if (iVar6 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      param_4 = *piVar3;
      bVar1 = FUN_004cda78(&param_4);
      if (!bVar1) {
        piVar3 = (int *)FUN_004ce568(param_4);
        if (*piVar3 == 0) {
          puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004ce568(param_4);
          *puVar5 = 1;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          param_3 = (undefined4 *)*puVar5;
          goto LAB_004d2a36;
        }
      }
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      if ((undefined4 *)*piVar3 == param_3) {
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        param_3 = (undefined4 *)*piVar3;
        FUN_004ce5e0((int)param_2,(int)param_3);
      }
      puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      FUN_004ce6a8((int)param_2,*piVar3);
      goto LAB_004d2a36;
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    param_4 = *piVar3;
    bVar1 = FUN_004cda78(&param_4);
    if (!bVar1) {
      piVar3 = (int *)FUN_004ce568(param_4);
      if (*piVar3 == 0) {
        puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
        puVar5 = (undefined4 *)FUN_004ce568(param_4);
        *puVar5 = 1;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 0;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        param_3 = (undefined4 *)*puVar5;
        goto LAB_004d2a36;
      }
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if ((undefined4 *)*piVar3 == param_3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      param_3 = (undefined4 *)*piVar3;
      FUN_004ce6a8((int)param_2,(int)param_3);
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 1;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 0;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    FUN_004ce5e0((int)param_2,*piVar3);
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2a8c  FUN_004d2a8c   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004d2a8c(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2a94  FUN_004d2a94   (33 bytes)   [unnamed]
undefined4 __cdecl FUN_004d2a94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [8];
  
  iVar1 = FUN_004ce7ec(param_1);
  uVar2 = FUN_004d2a8c(local_c,iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2ab8  FUN_004d2ab8   (21 bytes)   [unnamed]
bool __cdecl FUN_004d2ab8(undefined4 param_1,int *param_2,int *param_3)

{
  return *param_2 < *param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2ad0  FUN_004d2ad0   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_004d2ad0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined4 auStack_18 [2];
  int iStack_10;
  int iStack_8;
  
  iVar5 = param_2[9];
  piVar3 = (int *)FUN_004d2bbc((int)param_2);
  iStack_8 = *piVar3;
  while( true ) {
    bVar2 = FUN_004cda78(&iStack_8);
    if (bVar2) break;
    piVar3 = param_3;
    piVar4 = (int *)FUN_004d2a94(iStack_8);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
    iVar1 = iStack_8;
    if (bVar2) {
      piVar3 = (int *)FUN_004cda90(iStack_8);
      iStack_8 = *piVar3;
    }
    else {
      piVar3 = (int *)FUN_004cd864(iStack_8);
      iStack_8 = *piVar3;
      iVar5 = iVar1;
    }
  }
  FUN_004cd870((int)auStack_18,iVar5);
  FUN_004cd89c((int)auStack_28,(int)param_2);
  bVar2 = FUN_004cd9ec((int)auStack_18,(int)auStack_28);
  if (!bVar2) {
    piVar3 = (int *)FUN_004d2a94(iStack_10);
    bVar2 = FUN_004d2ab8(param_2 + 0xc,param_3,piVar3);
    if (!bVar2) {
      puVar6 = auStack_18;
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c((int)auStack_38,(int)param_2);
  puVar6 = auStack_38;
LAB_004d2b9c:
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2ad6  FUN_004d2ad6   (230 bytes)   [unnamed]
undefined4 __stdcall FUN_004d2ad6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 uVar8;
  
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  uVar8 = *(undefined4 *)(iVar2 + 0x24);
  puVar5 = (undefined4 *)FUN_004d2bbc(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = *puVar5;
  while( true ) {
    bVar4 = FUN_004cda78((int *)(unaff_EBP + -4));
    if (bVar4) break;
    piVar7 = piVar1;
    piVar6 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -4));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar6,piVar7);
    if (bVar4) {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBP + -4);
      puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
  }
  FUN_004cd870(unaff_EBP + -0x14,uVar8);
  FUN_004cd89c(unaff_EBP + -0x24,iVar2);
  bVar4 = FUN_004cd9ec(unaff_EBP + -0x14,unaff_EBP + -0x24);
  if (!bVar4) {
    piVar7 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -0xc));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar1,piVar7);
    if (!bVar4) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c(unaff_EBP + -0x34,iVar2);
  puVar5 = (undefined4 *)(unaff_EBP + -0x34);
LAB_004d2b9c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = puVar5[2];
  return *(undefined4 *)(unaff_EBP + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2bbc  FUN_004d2bbc   (18 bytes)   [unnamed]
int __cdecl FUN_004d2bbc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cda1c(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2bd0  FUN_004d2bd0   (129 bytes)   [unnamed]
int __cdecl FUN_004d2bd0(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2c54  FUN_004d2c54   (129 bytes)   [unnamed]
int __cdecl FUN_004d2c54(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2cd8  FUN_004d2cd8   (53 bytes)   [unnamed]
void __cdecl FUN_004d2cd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_004d2d10();
    return;
  }
  if (param_1 == 1) {
    FUN_004d2d98();
    return;
  }
  FUN_004d2db0(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2d10  FUN_004d2d10   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_004d2d10(void)

{
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514990);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_004d1fb8(facet,1);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2d98  FUN_004d2d98   (22 bytes)   [unnamed]
void __stdcall FUN_004d2d98(void)

{
  FUN_004d2db0(0,&DAT_0051303d,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2db0  FUN_004d2db0   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d2db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5149c0);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_004d1fb8(facet,param_3);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2e04  FUN_004d2e04   (53 bytes)   [unnamed]
void __cdecl FUN_004d2e04(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_004d2e3c();
    return;
  }
  if (param_1 == 1) {
    FUN_004d2ed8();
    return;
  }
  FUN_004d2ef0(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2e3c  FUN_004d2e3c   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_004d2e3c(void)

{
  undefined4 *numPut;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5149f0);
  numPut = (undefined4 *)operator_new();
  if (numPut != (undefined4 *)0x0) {
    std::num_put_char_std_ostreambuf_iterator_char::num_put(numPut,1);
  }
  *sehChainHead = sehPrevFrame;
  return numPut;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2ed8  FUN_004d2ed8   (22 bytes)   [unnamed]
void __stdcall FUN_004d2ed8(void)

{
  FUN_004d2ef0(0,&DAT_00513040,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2ef0  FUN_004d2ef0   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d2ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *numPut;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514a44);
  numPut = (undefined4 *)operator_new();
  if (numPut != (undefined4 *)0x0) {
    std::num_put_char_std_ostreambuf_iterator_char::num_put(numPut,param_3);
  }
  *sehChainHead = sehPrevFrame;
  return numPut;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f44  FUN_004d2f44   (10 bytes)   [unnamed]
undefined1 __cdecl FUN_004d2f44(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f50  FUN_004d2f50   (18 bytes)   [unnamed]
bool __cdecl FUN_004d2f50(int param_1)

{
  return *(int *)(param_1 + 0x24) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f64  FUN_004d2f64   (18 bytes)   [unnamed]
undefined4 __cdecl FUN_004d2f64(int param_1)

{
  bool bVar1;
  undefined3 regHigh;
  
  bVar1 = FUN_004d2f50(param_1 + 8);
  return CONCAT31(regHigh,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f78  FUN_004d2f78   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d2f78(int param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f84  FUN_004d2f84   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_004d2f84(int param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3420  FUN_004d3420   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3420(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3430  FUN_004d3430   (19 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d3430(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3444  FUN_004d3444   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3444(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3474  FUN_004d3474   (21 bytes)   [unnamed]
int __cdecl FUN_004d3474(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d348c  FUN_004d348c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d348c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3498  FUN_004d3498   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3498(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d34a4  FUN_004d34a4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d34a4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d34b0  FUN_004d34b0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004d34b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x004d34bc  FUN_004d34bc   (75 bytes)   [unnamed]
undefined4 __cdecl FUN_004d34bc(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 regHigh;
  undefined1 *puVar5;
  
  uVar2 = FUN_004d348c((int)param_1);
  uVar3 = FUN_004d34b0((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar5 = param_2;
    uVar1 = FUN_004d179c(&param_2);
    uVar4 = CONCAT31(regHigh,uVar1);
  }
  else {
    puVar5 = &param_2;
    uVar1 = FUN_004d179c(puVar5);
    uVar4 = (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar5,param_1,uVar1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3508  FUN_004d3508   (66 bytes)   [unnamed]
int * __cdecl FUN_004d3508(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514ab4);
  FUN_004d354c(param_1,(int *)(param_2 + 0x20));
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d354c  FUN_004d354c   (56 bytes)   [unnamed]
int * __cdecl FUN_004d354c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5157bc);
  iVar1 = *param_2;
  *param_1 = iVar1;
  FUN_004d8174(iVar1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d35a0  FUN_004d35a0   (58 bytes)   [unnamed]
int * __cdecl FUN_004d35a0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00516ab8);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,(uint *)&DAT_00516ab8,'\x01',0x20,(undefined*)FUN_004d2cd8);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d35dc  FUN_004d35dc   (49 bytes)   [unnamed]
bool __cdecl FUN_004d35dc(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_004de4cc(param_2,buffer,param_4 * param_5);
  return uVar1 == param_4 * param_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d39c0  FUN_004d39c0   (81 bytes)   [unnamed]
int * __cdecl FUN_004d39c0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514ac8);
  *param_1 = param_2;
  puVar1 = FUN_004d05d0(&local_2c,0);
  FUN_004d3a14(param_1 + 1,puVar1);
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3a14  FUN_004d3a14   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d3a14(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5157d0);
  *param_1 = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3a40  FUN_004d3a40   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3a40(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3a4c  FUN_004d3a4c   (23 bytes)   [unnamed]
bool __cdecl FUN_004d3a4c(int *param_1,int *param_2)

{
  return *param_2 < *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3a64  FUN_004d3a64   (80 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d3a64(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514ad0);
  FUN_004d05d0(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_004d3430(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3ab4  FUN_004d3ab4   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3ab4(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (((char)param_1[2] == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*param_1 == *param_2) &&
       ((bVar1 = FUN_004d3b00(param_1 + 1,param_2 + 1), bVar1 &&
        ((char)param_1[2] == (char)param_2[2])))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3b00  FUN_004d3b00   (23 bytes)   [unnamed]
bool __cdecl FUN_004d3b00(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3f5c  FUN_004d3f5c   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_004d3f5c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3f8c  FUN_004d3f8c   (13 bytes)   [unnamed]
void __cdecl FUN_004d3f8c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3f9c  FUN_004d3f9c   (40 bytes)   [unnamed]
char * __cdecl FUN_004d3f9c(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_004de1a0(param_2,buffer,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3fc4  FUN_004d3fc4   (156 bytes)   [unnamed]
int __cdecl FUN_004d3fc4(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int loc;
  
  __InitExceptBlockLDTC(0x514b28);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_004d3508(&loc,param_1);
    piVar3 = (int *)FUN_004cecf8(&loc);
    uVar4 = FUN_004d0c94(piVar3);
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

} // namespace tea
