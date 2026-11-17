// TSBuild.exe — runtime / library code "OWL_TMsgThread"
// 6 functions, 0x0042c898..0x0042ca94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c898  OWL::TMsgThread::vf0   (124 bytes, 2 ranges)   [rtti:vtable virtual slot 0]
undefined4 __cdecl OWL::TMsgThread::vf0(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c51c);
  *(undefined4 *)((int)param_1 + 5) = 0;
  while ((char)param_1[1] == '\0') {
    cVar2 = (**(code **)(*param_1 + 4))();
    if (cVar2 == '\0') {
      WaitMessage();
    }
    FUN_0042c95c(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = *(undefined4 *)((int)param_1 + 5);
  *in_FS_OFFSET = local_28;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c93c  OWL::TMsgThread::vf1   (7 bytes)   [rtti:vtable virtual slot 1]
undefined4 __stdcall OWL::TMsgThread::vf1(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c944  OWL::TMsgThread::vf2   (24 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TMsgThread::vf2(undefined4 param_1,MSG *param_2)

{
  TranslateMessage(param_2);
  DispatchMessageA(param_2);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c9e0  OWL::TMsgThread::vf3   (115 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TMsgThread::vf3(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c550);
  (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((int)param_1 + 9) = 1;
  (**(code **)*param_1)();
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_0042c9b8();
  (**(code **)(*param_1 + 0x14))();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ca8c  OWL::TMsgThread::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TMsgThread::vf4(void)

{
  undefined4 in_EAX;
  
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ca94  OWL::TMsgThread::vf5   (8 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TMsgThread::vf5(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

} // namespace tea
