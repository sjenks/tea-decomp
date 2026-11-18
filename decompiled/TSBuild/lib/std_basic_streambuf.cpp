// TSBuild.exe — runtime / library code "std_basic_streambuf"
// 14 functions, 0x0045ad88..0x00462c44. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045ad88  std::basic_streambuf<char>::basic_streambuf   (79 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_streambuf<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_streambuf_char::basic_streambuf
undefined4 * __cdecl std::basic_streambuf_char::basic_streambuf(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4860b8);
  *self = &std::basic_streambuf_char::vftable;
  FUN_0045add8(self + 8);
  FUN_0045ae40((int)self,'\x01');
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b1a0  std::basic_streambuf<char>::~basic_streambuf   (95 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_streambuf_char::_dtor
void __cdecl std::basic_streambuf_char::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4861cc);
  if (self != (undefined4 *)0x0) {
    *self = &std::basic_streambuf_char::vftable;
    std::locale::_dtor(self + 8,2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea10  std::basic_streambuf<char>::vf9   (10 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::basic_streambuf_char::vf9
void __stdcall std::basic_streambuf_char::vf9(void)

{
  FUN_0045b17c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea1c  std::basic_streambuf<char>::vf10   (10 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::basic_streambuf_char::vf10
void __stdcall std::basic_streambuf_char::vf10(void)

{
  FUN_0045b17c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea28  std::basic_streambuf<char>::vf12   (7 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::basic_streambuf_char::vf12
undefined4 __stdcall std::basic_streambuf_char::vf12(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea30  std::basic_streambuf<char>::vf8   (67 bytes)   [rtti:vtable virtual slot 8]
//   written in code as std::basic_streambuf_char::vf8
void __cdecl std::basic_streambuf_char::vf8(int *self)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_0045b17c();
  piVar2 = &local_c;
  local_8 = (**(code **)(*self + 0x1c))();
  bVar1 = FUN_0045bde4(&local_8,piVar2);
  if (bVar1) {
    FUN_0045b17c();
  }
  else {
    FUN_0045bf54(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea74  std::basic_streambuf<char>::vf7   (10 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::basic_streambuf_char::vf7
void __stdcall std::basic_streambuf_char::vf7(void)

{
  FUN_0045b17c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f3d8  std::basic_streambuf<char>::vf5   (141 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::basic_streambuf_char::vf5
int __cdecl std::basic_streambuf_char::vf5(int self)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_0045bef8(self);
  if (iVar1 == 0) {
    iVar1 = FUN_0045de3c(self);
    if (iVar1 != 0) {
      uVar4 = FUN_0045de3c(self);
      uVar5 = FUN_0045de48(self);
      uVar6 = FUN_0045de48(self);
      FUN_0045bfec(self,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_0045de3c(self);
    uVar3 = FUN_0045bf04(self);
    if (uVar3 < uVar2) {
      uVar4 = FUN_0045de3c(self);
      uVar5 = FUN_0045bef8(self);
      uVar6 = FUN_0045de54(self);
      FUN_0045bfec(self,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_0045bf04(self);
  iVar7 = FUN_0045bef8(self);
  return iVar1 - iVar7;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f468  std::basic_streambuf<char>::vf6   (159 bytes)   [rtti:vtable virtual slot 6]
//   written in code as std::basic_streambuf_char::vf6
uint __cdecl std::basic_streambuf_char::vf6(int *self,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *src;
  uint n;
  int *piVar7;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_0045f184(self);
    uVar3 = param_3;
    if (iVar4 <= (int)param_3) {
      uVar3 = FUN_0045f184(self);
    }
    if (0 < (int)uVar3) {
      n = uVar3;
      src = (undefined4 *)FUN_0045bef8((int)self);
      src = FUN_00459ea8(param_2,src,n);
      param_2 = (undefined4 *)((int)src + uVar3);
      FUN_0045bfa0((int)self,uVar3);
    }
    for (; (int)uVar3 < (int)param_3; uVar3 = uVar3 + 1) {
      local_c = FUN_0045b17c();
      piVar7 = &local_c;
      local_8 = FUN_0045bf54(self);
      bVar2 = FUN_0045bde4(&local_8,piVar7);
      if (bVar2) {
        return uVar3;
      }
      uVar1 = FUN_0045d91c((undefined1 *)&local_8);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f508  std::basic_streambuf<char>::vf11   (92 bytes)   [rtti:vtable virtual slot 11]
//   written in code as std::basic_streambuf_char::vf11
int __cdecl std::basic_streambuf_char::vf11(int *self,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    iVar3 = 0;
  }
  else {
    for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
      local_c = FUN_0045b17c();
      piVar4 = &local_c;
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_8 = FUN_0045de6c(self,uVar1);
      bVar2 = FUN_0045bde4(&local_8,piVar4);
      if (bVar2) {
        return iVar3;
      }
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004601c0  std::basic_streambuf<char>::vf2   (8 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_streambuf_char::vf2
undefined4 __cdecl std::basic_streambuf_char::vf2(undefined4 self)

{
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004616b0  std::basic_streambuf<char>::vf3   (23 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::basic_streambuf_char::vf3
int * __cdecl std::basic_streambuf_char::vf3(int *self)

{
  FUN_0045e370(self,-1);
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004616c8  std::basic_streambuf<char>::vf4   (23 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::basic_streambuf_char::vf4
int * __cdecl std::basic_streambuf_char::vf4(int *self)

{
  FUN_0045e370(self,-1);
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462c44  std::basic_streambuf<char>::vf1   (24 bytes)   [rtti:vtable virtual slot 1]
//   written in code as std::basic_streambuf_char::vf1
void __cdecl std::basic_streambuf_char::vf1(int self,int *param_2)

{
  FUN_004661c0((int *)(self + 0x20),param_2);
  return;
}

} // namespace tea
