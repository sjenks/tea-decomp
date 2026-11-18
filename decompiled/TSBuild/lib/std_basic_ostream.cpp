// TSBuild.exe — runtime / library code "std_basic_ostream"
// 4 functions, 0x0045b268..0x0045c440. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045b268  std::basic_ostream<char>::basic_ostream   (95 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ostream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ostream_char::basic_ostream
undefined4 * __cdecl std::basic_ostream_char::basic_ostream(undefined4 *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486214);
  if (vbasesBuilt == 0) {
    *self = self + 2;
    std::basic_ios_char::basic_ios(self + 2);
  }
  self[1] = &std::basic_ostream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_0048769c;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7ec  std::basic_ostream<char>::~basic_ostream   (118 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::_dtor
void __cdecl std::basic_ostream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486354);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_ostream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_0048769c;
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 2,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bbac  std::basic_ostream<char>::basic_ostream_45bbac   (166 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ostream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ostream_char::basic_ostream_45bbac
int * __cdecl std::basic_ostream_char::basic_ostream_45bbac(int *self,int vbasesBuilt,int param_3)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48642c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 2);
    std::basic_ios_char::basic_ios(self + 2);
  }
  self[1] = (int)&std::basic_ostream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_0048769c;
  if (param_3 == 0) {
    FUN_0045b330(*self,0);
  }
  else {
    uVar1 = FUN_0045bba0(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0045b330(*self,0);
    }
    else {
      FUN_0045b330(*self,param_3);
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c440  std::basic_ostream<char>::sentry::~sentry   (160 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::sentry::_dtor
void __cdecl std::basic_ostream_char::sentry::_dtor(undefined4 *self,byte dtorFlags)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (self != (undefined4 *)0x0) {
    uVar3 = FUN_0045bdd8(*(int *)*self);
    if ((uVar3 & 0x2000) != 0) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*self);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*self,1);
      }
    }
    cVar1 = FUN_0045c3c0();
    if ((cVar1 != '\0') &&
       ((bVar2 = FUN_0045c3cc((undefined *)*self), bVar2 ||
        (bVar2 = FUN_0045c3e0((undefined4 *)*self), bVar2)))) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*self);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*self,1);
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
    return;
  }
  return;
}

} // namespace tea
