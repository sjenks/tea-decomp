// TEA.exe — runtime / library code "std_num_put"
// 13 functions, 0x004d20e4..0x004d77e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d20e4  std::num_put<char,std::ostreambuf_iterator<char>>::~num_put   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::_dtor
void __cdecl std::num_put_char_std_ostreambuf_iterator_char::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x514814);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::num_put_char_std_ostreambuf_iterator_char::vftable;
    std::locale::facet::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6de8  std::num_put<char,std::ostreambuf_iterator<char>>::vf12   (106 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf12
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf12(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dc0e0((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7274  std::num_put<char,std::ostreambuf_iterator<char>>::vf2   (169 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf2
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_284 [624];
  int local_14;
  
  uVar2 = param_8;
  iVar1 = param_7;
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  uVar3 = FUN_004d1688(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_004dbfc4((int)local_284);
    FUN_004d6e54((int)local_284,(char)uVar2);
  }
  else {
    FUN_004d7414(local_14 + -0x18,param_9);
    FUN_004d7320((int)local_284);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d742c  std::num_put<char,std::ostreambuf_iterator<char>>::vf7   (104 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf7
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf7(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbda4((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7494  std::num_put<char,std::ostreambuf_iterator<char>>::vf5   (106 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf5
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf5(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dc1d4((int)local_284,param_9,param_10);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7500  std::num_put<char,std::ostreambuf_iterator<char>>::vf10   (104 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf10
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbf68((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7568  std::num_put<char,std::ostreambuf_iterator<char>>::vf6   (111 bytes)   [rtti:vtable virtual slot 6]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf6
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10,undefined2 param_11)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dc254((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d75d8  std::num_put<char,std::ostreambuf_iterator<char>>::vf3   (104 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf3
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf3(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dc020((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7640  std::num_put<char,std::ostreambuf_iterator<char>>::vf8   (105 bytes)   [rtti:vtable virtual slot 8]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf8
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbea8((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d76ac  std::num_put<char,std::ostreambuf_iterator<char>>::vf13   (106 bytes)   [rtti:vtable virtual slot 13]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf13
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf13(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dc07c((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7718  std::num_put<char,std::ostreambuf_iterator<char>>::vf11   (104 bytes)   [rtti:vtable virtual slot 11]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf11
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf11(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbf0c((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7780  std::num_put<char,std::ostreambuf_iterator<char>>::vf4   (104 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf4
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbfc4((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d77e8  std::num_put<char,std::ostreambuf_iterator<char>>::vf9   (105 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::num_put_char_std_ostreambuf_iterator_char::vf9
undefined4 * __cdecl std::num_put_char_std_ostreambuf_iterator_char::vf9(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbe44((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

} // namespace tea
