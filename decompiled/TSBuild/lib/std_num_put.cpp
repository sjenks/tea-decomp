// TSBuild.exe — runtime / library code "std_num_put"
// 14 functions, 0x0045cabc..0x00462800. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045cabc  std::num_put<char,std::ostreambuf_iterator<char>>::~num_put   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::_dtor
void __cdecl std::num_put_char_std_ostreambuf_iterator_char::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4866f4);
  if (self != (undefined4 *)0x0) {
    *self = &std::num_put_char_std_ostreambuf_iterator_char::vftable;
    std::locale::facet::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d864  std::num_put<char,std::ostreambuf_iterator<char>>::num_put   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char> > >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::num_put
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::num_put(undefined4 *self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486900);
  std::locale::facet::facet(self,param_2,0x80);
  *self = &std::num_put_char_std_ostreambuf_iterator_char::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461e00  std::num_put<char,std::ostreambuf_iterator<char>>::vf12   (106 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf12
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf12(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466e8c((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046228c  std::num_put<char,std::ostreambuf_iterator<char>>::vf2   (169 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf2
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf2(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_284 [624];
  int local_14;
  
  uVar2 = param_8;
  iVar1 = param_7;
  FUN_0045984c((int)local_284,&param_3,param_7);
  uVar3 = FUN_0045bdd8(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_00466d70((int)local_284);
    FUN_00461e6c((int)local_284,(char)uVar2);
  }
  else {
    FUN_0046242c(local_14 + -0x18,param_9);
    FUN_00462338((int)local_284);
  }
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462444  std::num_put<char,std::ostreambuf_iterator<char>>::vf7   (104 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf7
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf7(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466b50((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004624ac  std::num_put<char,std::ostreambuf_iterator<char>>::vf5   (106 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf5
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf5(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466f80((int)local_284,param_9,param_10);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462518  std::num_put<char,std::ostreambuf_iterator<char>>::vf10   (104 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf10
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf10(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466d14((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462580  std::num_put<char,std::ostreambuf_iterator<char>>::vf6   (111 bytes)   [rtti:vtable virtual slot 6]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf6
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf6(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10,undefined2 param_11)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00467000((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004625f0  std::num_put<char,std::ostreambuf_iterator<char>>::vf3   (104 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf3
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf3(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466dcc((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462658  std::num_put<char,std::ostreambuf_iterator<char>>::vf8   (105 bytes)   [rtti:vtable virtual slot 8]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf8
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf8(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466c54((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004626c4  std::num_put<char,std::ostreambuf_iterator<char>>::vf13   (106 bytes)   [rtti:vtable virtual slot 13]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf13
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf13(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466e28((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462730  std::num_put<char,std::ostreambuf_iterator<char>>::vf11   (104 bytes)   [rtti:vtable virtual slot 11]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf11
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf11(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466cb8((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462798  std::num_put<char,std::ostreambuf_iterator<char>>::vf4   (104 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf4
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf4(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466d70((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462800  std::num_put<char,std::ostreambuf_iterator<char>>::vf9   (105 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf9
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf9(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466bf0((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *self = param_3;
  self[1] = param_4;
  self[2] = param_5;
  *(undefined1 *)(self + 3) = param_6;
  return self;
}

} // namespace tea
