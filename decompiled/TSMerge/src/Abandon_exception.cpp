// TSMerge.exe — application module "Abandon_exception"
// 24 functions, 0x00409794..0x0040bdac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00409794  Abandon_exception::Abandon_exception   (62 bytes)   [rtti:vtable-store constructor]
//   constructor: stores Abandon_exception's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl Abandon_exception::Abandon_exception(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462d5c);
  *self = &std::exception::vftable;
  *self = &Abandon_exception::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409868  WordLess   (50 bytes)   [analysis]
//   strict weak order of two words (std::string compare) used by the sorts and merges
//   file placement: inferred (address adjacency)
int __cdecl WordLess(int cmp,int a,int b)

{
  for (; a != cmp; cmp = cmp + 0x10) {
    std::string::operator_assign(b,cmp);
    b = b + 0x10;
  }
  return b;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040989c  std::__merge_adaptive_string   (493 bytes)   [analysis]
//   merges two adjacent sorted runs of words using a buffer (std::inplace_merge internals; role inferred from structure)
//   file placement: inferred (address adjacency)
void __cdecl std::__merge_adaptive_string(int param_1,int param_2,int param_3,uint param_4,uint param_5,int b,int param_7, undefined4 param_8,undefined4 *less)

{
  int value2;
  int iVar2;
  int value;
  uint dest;
  uint dest2;
  
  if (((int)param_5 < (int)param_4) || (param_7 < (int)param_4)) {
    if (param_7 < (int)param_5) {
      std::__set_ptr_409bd4(&dest2,0);
      std::__set_ptr_409bd4(&dest,0);
      if ((int)param_5 < (int)param_4) {
        dest2 = (int)param_4 >> 1;
        if ((int)dest2 < 0) {
          dest2 = dest2 + ((param_4 & 1) != 0);
        }
        value = param_1 + dest2 * 0x10;
        value2 = std::lower_bound_string(param_2,param_3,value,less);
        iVar2 = value2 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        dest = iVar2 >> 4;
      }
      else {
        dest = (int)param_5 >> 1;
        if ((int)dest < 0) {
          dest = dest + ((param_5 & 1) != 0);
        }
        value2 = param_2 + dest * 0x10;
        value = std::upper_bound_string(param_1,param_2,value2,less);
        iVar2 = value - param_1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        dest2 = iVar2 >> 4;
      }
      iVar2 = std::__merge_backward_string(value,param_2,value2,param_4 - dest2,dest,b,param_7);
      std::__merge_adaptive_string(param_1,value,iVar2,dest2,dest,b,param_7,0,less);
      std::__merge_adaptive_string(iVar2,value2,param_3,param_4 - dest2,param_5 - dest,b,param_7,0,less
                  );
    }
    else {
      value2 = WordLess(param_2,param_3,b);
      std::__rotate_adaptive_string(param_1,param_2,b,value2,param_3,less);
    }
  }
  else {
    value2 = WordLess(param_1,param_2,b);
    std::merge_string(b,value2,param_2,param_3,param_1,less);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409a8c  std::__rotate_adaptive_string   (326 bytes)   [analysis]
//   rotates a range of words through the buffer (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__rotate_adaptive_string(int first,int last,int first2,int last2,int destEnd,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int counter;
  int unused;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462b30);
  if (last == first) {
    std::copy_backward_string(first2,last2,destEnd);
    *sehChainHead = sehPrevFrame;
  }
  else if (last2 == first2) {
    std::copy_backward_string(first,last,destEnd);
    *sehChainHead = sehPrevFrame;
  }
  else {
    unused = last + -0x10;
    counter = last2 + -0x10;
    while( true ) {
      while( true ) {
        cVar1 = (**(code **)*param_6)();
        if (cVar1 == '\0') {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_00409830;
          objectDtor = 0;
          Abandon_exception::Abandon_exception(&abandonException);
          _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        iVar2 = PollCancel(counter,unused);
        if (iVar2 < 1) break;
        destEnd = destEnd + -0x10;
        std::string::operator_assign(destEnd,unused);
        if (unused == first) {
          std::copy_backward_string(first2,counter + 0x10,destEnd);
          *sehChainHead = sehPrevFrame;
          return;
        }
        unused = unused + -0x10;
      }
      destEnd = destEnd + -0x10;
      std::string::operator_assign(destEnd,counter);
      if (counter == first2) break;
      counter = counter + -0x10;
    }
    std::copy_backward_string(first,unused + 0x10,destEnd);
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409bd4  std::__set_ptr_409bd4   (13 bytes)   [analysis]
//   stores a pointer
//   file placement: inferred (address adjacency)
void __cdecl std::__set_ptr_409bd4(undefined4 *dest,undefined4 value)

{
  *dest = value;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409be4  std::lower_bound_string   (211 bytes)   [analysis]
//   first word not less than a value (polls for cancellation)
//   file placement: inferred (address adjacency)
int __cdecl std::lower_bound_string(int first,int last,int value,undefined4 *less)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int counter;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462b54);
  counter = last - first;
  if (counter < 0) {
    counter = counter + 0xf;
  }
  uVar5 = counter >> 4;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = (int)uVar1 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar1 & 1) != 0);
    }
    counter = uVar5 * 0x10 + first;
    cVar2 = (**(code **)*less)();
    if (cVar2 == '\0') {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00409830;
      objectDtor = 0;
      Abandon_exception::Abandon_exception(&abandonException);
      _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    iVar3 = PollCancel(counter,value);
    if (0 < iVar3) {
      first = counter + 0x10;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409cb8  std::upper_bound_string   (211 bytes)   [analysis]
//   first word greater than a value (polls for cancellation)
//   file placement: inferred (address adjacency)
int __cdecl std::upper_bound_string(int first,int last,int value,undefined4 *less)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int unused;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462b78);
  unused = last - first;
  if (unused < 0) {
    unused = unused + 0xf;
  }
  uVar5 = unused >> 4;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = (int)uVar1 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar1 & 1) != 0);
    }
    unused = uVar5 * 0x10 + first;
    cVar2 = (**(code **)*less)();
    if (cVar2 == '\0') {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00409830;
      objectDtor = 0;
      Abandon_exception::Abandon_exception(&abandonException);
      _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    iVar3 = PollCancel(value,unused);
    if (iVar3 < 1) {
      first = unused + 0x10;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409d8c  std::__merge_backward_string   (184 bytes)   [analysis]
//   merges two sorted runs from the back (inferred)
//   file placement: inferred (address adjacency)
int __cdecl std::__merge_backward_string(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar1 = WordLess(param_2,param_3,param_6);
    std::copy_backward_string(param_1,param_2,param_3);
    iVar1 = WordLess(param_6,iVar1,param_1);
  }
  else if (param_7 < param_4) {
    if ((param_2 != param_1) && (param_2 != param_3)) {
      std::rotate_string(param_1,param_2,param_3);
    }
    iVar1 = param_1 + param_5 * 0x10;
  }
  else {
    iVar1 = WordLess(param_1,param_2,param_6);
    WordLess(param_2,param_3,param_1);
    iVar1 = std::copy_backward_string(param_6,iVar1,param_3);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409e44  std::rotate_string   (107 bytes)   [analysis]
//   rotates a range of words (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::rotate_string(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar2 = param_3 - param_1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar1 = std::__gcd(iVar2 >> 4,iVar1 >> 4);
  while (iVar1 != 0) {
    iVar2 = param_2 - param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    std::__rotate_cycle_string(param_1,param_3,(iVar1 + -1) * 0x10 + param_1,iVar2 >> 4);
    iVar1 = iVar1 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409eb0  std::__gcd   (34 bytes)   [analysis]
//   greatest common divisor (used by rotate)
//   file placement: inferred (address adjacency)
int __cdecl std::__gcd(int a,int b)

{
  int iVar1;
  
  while (b != 0) {
    iVar1 = a % b;
    a = b;
    b = iVar1;
  }
  return a;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409ed4  std::__rotate_cycle_string   (448 bytes)   [analysis]
//   rotate by cycles (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__rotate_cycle_string(int param_1,int param_2,int param_3,int param_4)

{
  uint len;
  int str;
  int iVar3;
  int *strRep;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  int *str2;
  
  __InitExceptBlockLDTC(0x462bac);
  str2 = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    len = *(uint *)(*(int *)(param_3 + 8) + -4);
    str2 = std::string::__getRep(local_14,len,len);
    str2 = str2 + 3;
    memcpy(str2,*(undefined4 **)(param_3 + 8),len);
  }
  else {
    str2 = *(int **)(param_3 + 8);
    strRep = str2 + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  iVar3 = param_4 * 0x10 + param_3;
  str = param_3;
  while (iVar3 != param_3) {
    std::string::operator_assign(str,iVar3);
    iVar5 = param_2 - iVar3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    str = iVar3;
    if (param_4 < iVar5 >> 4) {
      iVar3 = iVar3 + param_4 * 0x10;
    }
    else {
      iVar3 = param_2 - iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar3 = (param_4 - (iVar3 >> 4)) * 0x10 + param_1;
    }
  }
  std::string::operator_assign(str,(int)local_14);
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0040a07d;
    }
    operator_delete();
  }
LAB_0040a07d:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a094  std::__introsort_loop_wordlist   (764 bytes)   [analysis]
//   quicksort loop of std::sort over the word list (polls for cancellation; inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::__introsort_loop_wordlist(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int last;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint counter2;
  undefined4 in_stack_fffffef8;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 *counter;
  undefined4 *puVar13;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  undefined1 local_14 [8];
  int *str;
  
  __InitExceptBlockLDTC(0x462c10);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_0040a37f:
    *sehChainHead = sehPrevFrame;
    return;
  }
joined_r0x0040a0bf:
  do {
    last = iVar2 + 0x10;
    if (last == param_2) goto LAB_0040a37f;
    str = (int *)0x0;
    iVar4 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      str = std::string::__getRep(local_14,uVar1,uVar1);
      str = str + 3;
      in_stack_fffffef8 = 0x40a182;
      memcpy(str,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      str = *(int **)(iVar2 + 0x18);
      piVar5 = str + -3;
      if (piVar5 != &g_nullStringRep) {
        *piVar5 = *piVar5 + 1;
      }
    }
    cVar3 = (**(code **)*param_3)();
    if (cVar3 == '\0') {
      throwLine = 0;
      throwFile = 0;
      in_stack_fffffef8 = 0;
      counter2 = 1;
      copyCtor = &LAB_00409830;
      objectDtor = 0;
      Abandon_exception::Abandon_exception(&abandonException);
      _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,counter2,in_stack_fffffef8,
                   throwFile,throwLine);
    }
    counter = local_14;
    iVar4 = PollCancel((int)counter,param_1);
    if (iVar4 < 1) {
      puVar13 = param_3;
      if (str[-3] == -1 || str[-3] + 1 < 0) {
        uVar1 = str[-1];
        piVar5 = std::string::__getRep(&GHIDRA_STACK(0xfffffef4),uVar1,uVar1);
        piVar5 = piVar5 + 3;
        memcpy(piVar5,str,uVar1);
      }
      else {
        strRep = str + -3;
        piVar5 = str;
        if (strRep != &g_nullStringRep) {
          *strRep = *strRep + 1;
        }
      }
      std::__median_string(last,counter2,in_stack_fffffef8,(int)piVar5,counter,puVar13);
    }
    else {
      in_stack_fffffef8 = 0x40a1ef;
      std::copy_backward_string(param_1,last,iVar2 + 0x20);
      std::string::operator_assign(param_1,(int)local_14);
    }
    iVar2 = last;
    if (str != (int *)0x0) {
      if (str[-3] != -1) {
        piVar5 = str + -3;
        if (piVar5 == &g_nullStringRep) {
          last = 1;
        }
        else if (piVar5 == &g_nullStringRep) {
          last = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          last = *piVar5 + 1;
        }
        if (last != 0) goto joined_r0x0040a0bf;
      }
      operator_delete();
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a390  std::__median_string   (302 bytes)   [analysis]
//   median of three words (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__median_string(int str,undefined4 counter,undefined4 param_3,int param_4,undefined4 param_5, undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int unused;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462c80);
  while( true ) {
    unused = str + -0x10;
    cVar1 = (**(code **)*param_6)();
    if (cVar1 == '\0') {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00409830;
      objectDtor = 0;
      Abandon_exception::Abandon_exception(&abandonException);
      _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    iVar2 = PollCancel((int)&counter,unused);
    if (iVar2 < 1) break;
    std::string::operator_assign(str,unused);
    str = unused;
  }
  std::string::operator_assign(str,(int)&counter);
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      strRep = (int *)(param_4 + -0xc);
      if (strRep == &g_nullStringRep) {
        unused = 1;
      }
      else if (strRep == &g_nullStringRep) {
        unused = 1;
      }
      else {
        *strRep = *strRep + -1;
        unused = *strRep + 1;
      }
      if (unused != 0) goto LAB_0040a4a7;
    }
    operator_delete();
  }
LAB_0040a4a7:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a4c0  std::__merge_without_buffer_string   (961 bytes)   [analysis]
//   in-place merge (inferred)
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::__merge_without_buffer_string(int param_1,int param_2,int last,uint param_4,uint param_5,undefined4 *less)

{
  char cVar1;
  int value;
  int last2;
  int *strRep;
  int value2;
  undefined4 *sehChainHead;
  undefined4 uVar6;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  uint dest;
  uint dest2 [3];
  int *unused;
  int *unused2;
  int *newData;
  undefined4 *src;
  uint unused3;
  undefined1 *unused4;
  int *newRep;
  int *unused5;
  uint len;
  int *strRep2;
  undefined1 *unused6;
  int *local_44;
  undefined4 unused7;
  undefined4 local_3c;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_18 [8];
  int *str;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462ccc);
  if ((param_4 == 0) || (param_5 == 0)) {
    *sehChainHead = local_3c;
    return local_3c;
  }
  if (param_4 + param_5 != 2) {
    std::__set_ptr_409bd4(dest2,0);
    std::__set_ptr_409bd4(&dest,0);
    if ((int)param_5 < (int)param_4) {
      dest2[0] = (int)param_4 >> 1;
      if ((int)dest2[0] < 0) {
        dest2[0] = dest2[0] + ((param_4 & 1) != 0);
      }
      value2 = param_1 + dest2[0] * 0x10;
      value = std::lower_bound_string(param_2,last,value2,less);
      last2 = value - param_2;
      if (last2 < 0) {
        last2 = last2 + 0xf;
      }
      dest = last2 >> 4;
    }
    else {
      dest = (int)param_5 >> 1;
      if ((int)dest < 0) {
        dest = dest + ((param_5 & 1) != 0);
      }
      value = param_2 + dest * 0x10;
      value2 = std::upper_bound_string(param_1,param_2,value,less);
      last2 = value2 - param_1;
      if (last2 < 0) {
        last2 = last2 + 0xf;
      }
      dest2[0] = last2 >> 4;
    }
    if ((param_2 != value2) && (param_2 != value)) {
      std::rotate_string(value2,param_2,value);
    }
    last2 = value2 + dest * 0x10;
    std::__merge_without_buffer_string(param_1,value2,last2,dest2[0],dest,less);
    uVar6 = std::__merge_without_buffer_string(last2,value,last,param_4 - dest2[0],param_5 - dest,less);
    *sehChainHead = local_3c;
    return uVar6;
  }
  cVar1 = (**(code **)*less)();
  if (cVar1 == '\0') {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00409830;
    uVar6 = 0;
    ehContext = 8;
    Abandon_exception::Abandon_exception(&abandonException);
    ehDtorCount = ehDtorCount + 2;
    _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,uVar6,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  value = PollCancel(param_2,param_1);
  if (0 < value) {
    ehContext = 0x20;
    unused7 = 0;
    str = (int *)0x0;
    value = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (value == -1 || value + 1 < 0) {
      len = *(uint *)(*(int *)(param_1 + 8) + -4);
      newRep = std::string::__getRep(local_18,len,len);
      unused4 = local_18;
      newData = newRep + 3;
      unused3 = len;
      src = *(undefined4 **)(param_1 + 8);
      unused5 = newData;
      str = newData;
      memcpy(newData,src,len);
    }
    else {
      local_44 = *(int **)(param_1 + 8);
      unused6 = local_18;
      strRep2 = local_44 + -3;
      str = local_44;
      if (strRep2 != &g_nullStringRep) {
        *strRep2 = *strRep2 + 1;
      }
    }
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign(param_1,param_2);
    std::string::operator_assign(param_2,(int)local_18);
    ehDtorCount = ehDtorCount + -1;
    if (str != (int *)0x0) {
      if (str[-3] != -1) {
        strRep = str + -3;
        if (strRep == &g_nullStringRep) {
          value = 1;
        }
        else if (strRep == &g_nullStringRep) {
          value = 1;
        }
        else {
          *strRep = *strRep + -1;
          value = *strRep + 1;
        }
        if (value != 0) goto LAB_0040a6c6;
      }
      unused2 = str + -3;
      unused = str + -3;
      operator_delete();
    }
  }
LAB_0040a6c6:
  *sehChainHead = local_3c;
  return local_3c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a884  std::stable_sort_wordlist   (545 bytes)   [analysis]
//   sorts the word list, removing duplicates afterwards (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::stable_sort_wordlist(int param_1,int last,undefined4 *less)

{
  int last2;
  int iVar2;
  int iVar3;
  int last3;
  
  last2 = last - param_1;
  if (last2 < 0) {
    last2 = last2 + 0xf;
  }
  if (last2 >> 4 < 0xf) {
    std::__introsort_loop_wordlist(param_1,last,less);
  }
  else {
    last3 = last2 >> 5;
    if (last3 < 0) {
      last3 = last3 + (uint)((last2 >> 4 & 1U) != 0);
    }
    last3 = last3 * 0x10 + param_1;
    last2 = last3 - param_1;
    if (last2 < 0) {
      last2 = last2 + 0xf;
    }
    if (last2 >> 4 < 0xf) {
      std::__introsort_loop_wordlist(param_1,last3,less);
    }
    else {
      last2 = last3 - param_1;
      if (last2 < 0) {
        last2 = last2 + 0xf;
      }
      iVar3 = last2 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((last2 >> 4 & 1U) != 0);
      }
      last2 = iVar3 * 0x10 + param_1;
      std::stable_sort_wordlist(param_1,last2,less);
      std::stable_sort_wordlist(last2,last3,less);
      iVar3 = last3 - last2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = last2 - param_1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      std::__merge_without_buffer_string(param_1,last2,last3,iVar2 >> 4,iVar3 >> 4,less);
    }
    last2 = last - last3;
    if (last2 < 0) {
      last2 = last2 + 0xf;
    }
    if (last2 >> 4 < 0xf) {
      std::__introsort_loop_wordlist(last3,last,less);
    }
    else {
      last2 = last - last3;
      if (last2 < 0) {
        last2 = last2 + 0xf;
      }
      iVar3 = last2 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((last2 >> 4 & 1U) != 0);
      }
      last2 = iVar3 * 0x10 + last3;
      std::stable_sort_wordlist(last3,last2,less);
      std::stable_sort_wordlist(last2,last,less);
      iVar3 = last - last2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = last2 - last3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      std::__merge_without_buffer_string(last3,last2,last,iVar2 >> 4,iVar3 >> 4,less);
    }
    last2 = last - last3;
    if (last2 < 0) {
      last2 = last2 + 0xf;
    }
    iVar3 = last3 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    std::__merge_without_buffer_string(param_1,last3,last,iVar3 >> 4,last2 >> 4,less);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040aae0  Abandon_exception::~Abandon_exception   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as Abandon_exception::_dtor
void __cdecl Abandon_exception::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462d78);
  if (self != (undefined4 *)0x0) {
    std::exception::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ad10  Abandon_exception::vf1   (35 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
char * __stdcall Abandon_exception::vf1(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462f68);
  *sehChainHead = sehPrevFrame;
  return "abandon exception";
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ad34  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_00473f2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ad40  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_string(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ad78  std::basic_ostream<char>::sentry::~sentry   (2338 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::sentry::_dtor
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::basic_ostream_char::sentry::_dtor(undefined4 *self,byte dtorFlags)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined1 exceptMsg3 [248];
  undefined4 unused3;
  undefined1 exceptMsg4 [248];
  undefined4 unused4;
  undefined1 exceptMsg5 [248];
  undefined4 unused5;
  undefined1 exceptMsg6 [240];
  undefined1 *unused6;
  undefined4 unused7;
  int unused8;
  int unused9;
  int *strRep;
  uint *msgText;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  int *strRep2;
  uint *msgText2;
  undefined1 *unused14;
  undefined4 unused15;
  int unused16;
  int unused17;
  int *strRep3;
  uint *local_17c;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int *strRep4;
  uint *msgText3;
  undefined1 *unused22;
  undefined4 unused23;
  int unused24;
  int unused25;
  int *strRep5;
  uint *msgText4;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  int *strRep6;
  uint *local_11c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str7;
  undefined1 str2 [8];
  int str8;
  undefined1 str3 [8];
  int str9;
  undefined4 failure2 [6];
  undefined4 failure3 [6];
  undefined4 failure4 [6];
  undefined1 str4 [8];
  int str10;
  undefined1 str5 [8];
  int str11;
  undefined1 str6 [8];
  int str12;
  undefined4 failure5 [6];
  undefined4 failure6 [6];
  undefined4 failure7 [6];
  
  __InitExceptBlockLDTC(0x462eb4);
  if (self == (undefined4 *)0x0) goto LAB_0040b686;
  if ((*(byte *)(*(int *)*self + 5) & 0x20) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)*self + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*self;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((uVar4 & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x14;
          local_11c = (uint *)__rwstd::except_msg_string::format(exceptMsg6,PTR_s_iostream_object_has_failbit_set_00473194)
          ;
          iVar3 = std::string::string_from_cstr((int)str6,local_11c);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure7,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str12 != 0) {
            if (*(int *)(str12 + -0xc) != -1) {
              strRep6 = (int *)(str12 + -0xc);
              if (strRep6 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (strRep6 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *strRep6 = *strRep6 + -1;
                iVar3 = *strRep6 + 1;
              }
              if (iVar3 != 0) goto LAB_0040af14;
            }
            unused29 = str12 + -0xc;
            unused28 = str12 + -0xc;
            operator_delete();
            unused27 = 0;
            unused26 = str6;
            str12 = 0;
            unused5 = 0;
          }
LAB_0040af14:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure7,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x2c;
          msgText4 = (uint *)__rwstd::except_msg_string::format(exceptMsg5,PTR_s_iostream_object_has_badbit_set_00473198);
          iVar3 = std::string::string_from_cstr((int)str5,msgText4);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure6,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str11 != 0) {
            if (*(int *)(str11 + -0xc) != -1) {
              strRep5 = (int *)(str11 + -0xc);
              if (strRep5 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (strRep5 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *strRep5 = *strRep5 + -1;
                iVar3 = *strRep5 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b061;
            }
            unused25 = str11 + -0xc;
            unused24 = str11 + -0xc;
            operator_delete();
            unused23 = 0;
            unused22 = str5;
            str11 = 0;
            unused4 = 0;
          }
LAB_0040b061:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure6,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar4 = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x44;
          msgText3 = (uint *)__rwstd::except_msg_string::format(exceptMsg4,PTR_s_iostream_object_has_eofbit_set_0047319c);
          iVar2 = std::string::string_from_cstr((int)str4,msgText3);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure5,iVar2);
          ehDtorCount = ehDtorCount + 2;
          if (str10 != 0) {
            if (*(int *)(str10 + -0xc) != -1) {
              strRep4 = (int *)(str10 + -0xc);
              if (strRep4 == &g_nullStringRep) {
                iVar2 = 1;
              }
              else if (strRep4 == &g_nullStringRep) {
                iVar2 = 1;
              }
              else {
                *strRep4 = *strRep4 + -1;
                iVar2 = *strRep4 + 1;
              }
              if (iVar2 != 0) goto LAB_0040b1ae;
            }
            unused21 = str10 + -0xc;
            unused20 = str10 + -0xc;
            operator_delete();
            unused19 = 0;
            unused18 = str4;
            str10 = 0;
            unused3 = 0;
          }
LAB_0040b1ae:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure5,objectDtor,copyCtor,uVar4,throwFlags,throwFile,throwLine);
        }
      }
    }
  }
  if ((DAT_00473200 != '\0') &&
     ((piVar1 = (int *)*self, piVar1 == (int *)&DAT_004774f8 || (piVar1 == &DAT_00477538)))) {
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*self;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x68;
          local_17c = (uint *)__rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00473194)
          ;
          iVar3 = std::string::string_from_cstr((int)str3,local_17c);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure4,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str9 != 0) {
            if (*(int *)(str9 + -0xc) != -1) {
              strRep3 = (int *)(str9 + -0xc);
              if (strRep3 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (strRep3 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *strRep3 = *strRep3 + -1;
                iVar3 = *strRep3 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b386;
            }
            unused17 = str9 + -0xc;
            unused16 = str9 + -0xc;
            operator_delete();
            unused15 = 0;
            unused14 = str3;
            str9 = 0;
            unused2 = 0;
          }
LAB_0040b386:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure4,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x80;
          msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00473198);
          iVar3 = std::string::string_from_cstr((int)str2,msgText2);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure3,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str8 != 0) {
            if (*(int *)(str8 + -0xc) != -1) {
              strRep2 = (int *)(str8 + -0xc);
              if (strRep2 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (strRep2 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *strRep2 = *strRep2 + -1;
                iVar3 = *strRep2 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b4f1;
            }
            unused13 = str8 + -0xc;
            unused12 = str8 + -0xc;
            operator_delete();
            unused11 = 0;
            unused10 = str2;
            str8 = 0;
            unused = 0;
          }
LAB_0040b4f1:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure3,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar4 = 1;
          copyCtor = &LAB_004086e0;
          objectDtor = 0;
          ehContext = 0x98;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_0047319c);
          iVar2 = std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure2,iVar2);
          ehDtorCount = ehDtorCount + 2;
          if (str7 != 0) {
            if (*(int *)(str7 + -0xc) != -1) {
              strRep = (int *)(str7 + -0xc);
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
              if (iVar2 != 0) goto LAB_0040b65c;
            }
            unused9 = str7 + -0xc;
            unused8 = str7 + -0xc;
            operator_delete();
            unused7 = 0;
            unused6 = str;
            str7 = 0;
          }
LAB_0040b65c:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_00408678,failure2,objectDtor,copyCtor,uVar4,throwFlags,throwFile,throwLine);
        }
      }
    }
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0040b686:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b7b0  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462f80);
  if (self != (int *)0x0) {
    puVar1 = (undefined4 *)*self;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b8c4  ApplyConversion   (1190 bytes)   [analysis]
//   converts a word for output under the conversion option (as is / lower case / upper case / letters only)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040b9e9) */
int __cdecl ApplyConversion(int out,int word_,int conversion)

{
  uint uVar1;
  char *len;
  int iVar3;
  int *rep;
  uint *puVar5;
  undefined4 *sehChainHead;
  byte *i;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x463324);
  if (conversion == 0) {
    *(undefined4 *)(out + 8) = 0;
    iVar3 = *(int *)(*(int *)(word_ + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(word_ + 8) + -4);
      rep = std::string::__getRep(out,uVar1,uVar1);
      *(int **)(out + 8) = rep + 3;
      memcpy(*(undefined4 **)(out + 8),*(undefined4 **)(word_ + 8),uVar1);
    }
    else {
      *(undefined4 *)(out + 8) = *(undefined4 *)(word_ + 8);
      rep = (int *)(*(int *)(out + 8) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
    return out;
  }
  local_c = (undefined4 *)&g_emptyStringData;
  for (i = *(byte **)(word_ + 8);
      (byte *)(*(int *)(word_ + 8) + *(int *)(*(int *)(word_ + 8) + -4)) != i;
      i = i + 1) {
    if (*i < 0x80) {
      if (conversion == 1) {
        std::string::replace_fill((int)str,local_c[-1],0,1,*i);
      }
      else if (conversion == 2) {
        iVar3 = isalpha((int)(char)*i);
        if (iVar3 != 0) {
          std::string::replace_fill((int)str,local_c[-1],0,1,*i);
        }
      }
      else if (conversion == 3) {
        iVar3 = isalpha((int)(char)*i);
        if (iVar3 != 0) {
          uVar1 = tolower((int)(char)*i);
          std::string::replace_fill((int)str,local_c[-1],0,1,(char)uVar1);
        }
      }
      else if ((conversion == 4) && (iVar3 = isalpha((int)(char)*i), iVar3 != 0)) {
        uVar1 = toupper((int)(char)*i);
        std::string::replace_fill((int)str,local_c[-1],0,1,(char)uVar1);
      }
    }
    else {
      puVar5 = (uint *)(&std::ios_base::failure::vftable)[*i];
      if (puVar5 != (uint *)0x0) {
        if ((conversion == 1) || (conversion == 2)) {
          uVar1 = local_c[-1];
          len = strlen(puVar5);
          std::string::replace((int)str,uVar1,0,(uint)puVar5,(uint)len,0,(uint)len);
        }
        else {
          for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
            if (conversion == 3) {
              uVar1 = tolower((int)(char)*puVar5);
              std::string::replace_fill((int)str,local_c[-1],0,1,(char)uVar1);
            }
            else {
              uVar1 = toupper((int)(char)*puVar5);
              std::string::replace_fill((int)str,local_c[-1],0,1,(char)uVar1);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(out + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    rep = std::string::__getRep(out,uVar1,uVar1);
    *(int **)(out + 8) = rep + 3;
    memcpy(*(undefined4 **)(out + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(out + 8) = local_c;
    rep = (int *)(*(int *)(out + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar3 = *rep + 1;
      }
      if (iVar3 != 0) goto LAB_0040bd4f;
    }
    operator_delete();
  }
LAB_0040bd4f:
  *sehChainHead = sehPrevFrame;
  return out;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040bd6c  InitRegistryPaths   (61 bytes)   [analysis]
//   static initialiser of the registry key path strings ("Software\Crossword Man\TEA Crossword Helper 2.11")
//   file placement: inferred (address adjacency)
void __stdcall InitRegistryPaths(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4633a8);
  std::string::string_from_cstr(0x4768ac,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040bdac  DestroyRegistryPaths   (163 bytes)   [analysis]
//   static destructor of the registry key path strings
//   file placement: inferred (address adjacency)
void __stdcall DestroyRegistryPaths(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4633bc);
  if (DAT_004768b4 != 0) {
    if (*(int *)(DAT_004768b4 + -0xc) != -1) {
      strRep = (int *)(DAT_004768b4 + -0xc);
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
      if (prevRefs != 0) goto LAB_0040be3f;
    }
    operator_delete();
    DAT_004768b4 = 0;
  }
LAB_0040be3f:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
