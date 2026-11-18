// TSMerge.exe — runtime / library code "rwstd_locale_imp"
// 2 functions, 0x004544a4..0x004545c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004544a4  __rwstd::locale_imp::locale_imp   (252 bytes)   [rtti:vtable-store constructor]
//   constructor: stores __rwstd::locale_imp's vtable at its vptr offset (+0x0) in this
/* WARNING: Removing unreachable block (ram,0x00454543) */
undefined4 * __cdecl __rwstd::locale_imp::locale_imp(undefined4 *self,int param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 str;
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x473b4c);
  ehContext = 8;
  *self = &__rwstd::ref_counted::vftable;
  self[1] = param_3;
  *self = &__rwstd::locale_imp::vftable;
  self[2] = 0;
  self[3] = 0;
  ehDtorCount = ehDtorCount + 2;
  local_2c = 0;
  str = 0x454505;
  FUN_0044cdc8(self + 4,param_2,&local_2c);
  self[6] = 0;
  self[7] = 0;
  self[10] = 0;
  self[10] = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  *(undefined1 *)(self + 0xc) = 0;
  ehContext = 0x38;
  std::string::string_from_cstr((int)&str,(uint *)&DAT_00473b19);
  ehContext = 0x2c;
  FUN_004520dc(self + 2,6);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004545c4  __rwstd::locale_imp::~locale_imp   (390 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_imp::_dtor
void __cdecl __rwstd::locale_imp::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *puVar1;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473bc0);
  if (self == (undefined4 *)0x0) goto LAB_0045473a;
  *self = &__rwstd::locale_imp::vftable;
  iVar2 = self[5];
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    puVar1 = *(undefined4 **)(self[4] + iVar2 * 4);
    if (((puVar1 != (undefined4 *)0x0) && (puVar1[1] = puVar1[1] + -1, puVar1[1] == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  if (self[10] != 0) {
    if (*(int *)(self[10] + -0xc) != -1) {
      strRep = (int *)(self[10] + -0xc);
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
      if (iVar2 != 0) goto LAB_004546c2;
    }
    operator_delete();
    self[10] = 0;
  }
LAB_004546c2:
  if (self[4] != 0) {
    operator_delete_array();
  }
  if (self[2] != 0) {
    _vector_delete_ldtc_(self[2],0x10,0,0x19,(undefined*)std::string::_dtor);
  }
  __rwstd::ref_counted::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0045473a:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
