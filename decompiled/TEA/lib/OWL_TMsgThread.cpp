// TEA.exe — runtime / library code "OWL_TMsgThread"
// 7 functions, 0x00498c80..0x00498eb4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498c80  OWL::TMsgThread::TMsgThread   (56 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMsgThread's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMsgThread::TMsgThread(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508310);
  *self = &OWL::TMsgThread::vftable;
  *(undefined1 *)(self + 1) = 0;
  *(undefined4 *)((int)self + 5) = 0;
  *(undefined1 *)((int)self + 9) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498cb8  OWL::TMsgThread::vf0   (124 bytes, 2 ranges)   [rtti:vtable virtual slot 0]
undefined4 __cdecl OWL::TMsgThread::vf0(int *self)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508338);
  *(undefined4 *)((int)self + 5) = 0;
  while ((char)self[1] == '\0') {
    cVar2 = (**(code **)(*self + 4))();
    if (cVar2 == '\0') {
      WaitMessage();
    }
    FUN_00498d7c(self);
  }
  *(undefined1 *)(self + 1) = 0;
  uVar1 = *(undefined4 *)((int)self + 5);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498d5c  OWL::TMsgThread::vf1   (7 bytes)   [rtti:vtable virtual slot 1]
undefined4 __stdcall OWL::TMsgThread::vf1(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498d64  OWL::TMsgThread::vf2   (24 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TMsgThread::vf2(undefined4 self,MSG *pMsg)

{
  TranslateMessage(pMsg);
  DispatchMessageA(pMsg);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498e00  OWL::TMsgThread::vf3   (115 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TMsgThread::vf3(int *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50836c);
  (**(code **)(*self + 0x10))();
  *(undefined1 *)((int)self + 9) = 1;
  (**(code **)*self)();
  *(undefined1 *)((int)self + 9) = 0;
  FUN_00498dd8();
  (**(code **)(*self + 0x14))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498eac  OWL::TMsgThread::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TMsgThread::vf4(void)

{
  undefined4 in_EAX;
  
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498eb4  OWL::TMsgThread::vf5   (8 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TMsgThread::vf5(undefined4 self,undefined4 param_2)

{
  return param_2;
}

} // namespace tea
