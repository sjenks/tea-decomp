// TSBuild.exe — runtime / library code "std_basic_ostream"
// 2 functions, 0x0045b7ec..0x0045c440. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045b7ec  std::basic_ostream<char>::~basic_ostream   (118 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::_dtor
void __cdecl std::basic_ostream_char::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486354);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &std::basic_ostream_char::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_0048769c;
    if ((param_2 & 2) != 0) {
      std::basic_ios_char::_dtor(param_1 + 2,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c440  std::basic_ostream<char>::sentry::~sentry   (160 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::sentry::_dtor
void __cdecl std::basic_ostream_char::sentry::_dtor(undefined4 *param_1,byte param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = FUN_0045bdd8(*(int *)*param_1);
    if ((uVar3 & 0x2000) != 0) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*param_1);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*param_1,1);
      }
    }
    cVar1 = FUN_0045c3c0();
    if ((cVar1 != '\0') &&
       ((bVar2 = FUN_0045c3cc((undefined *)*param_1), bVar2 ||
        (bVar2 = FUN_0045c3e0((undefined4 *)*param_1), bVar2)))) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*param_1);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*param_1,1);
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
    return;
  }
  return;
}

} // namespace tea
