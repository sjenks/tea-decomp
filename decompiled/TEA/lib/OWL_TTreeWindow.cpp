// TEA.exe — runtime / library code "OWL_TTreeWindow"
// 8 functions, 0x004ca394..0x004cbe64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ca394  OWL::TTreeWindow::vf20   (27 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TTreeWindow::vf20(int *param_1)

{
  FUN_004a76a8(*param_1,0x111c,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca3b0  OWL::TTreeWindow::vf21   (30 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TTreeWindow::vf21(int *param_1,undefined4 param_2,short param_3)

{
  FUN_004a76a8(*param_1,0x111b,(int)param_3,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb934  OWL::TTreeWindow::~TTreeWindow   (252 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTreeWindow::_dtor
void __cdecl OWL::TTreeWindow::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51282c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TTreeWindow::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0051297c;
    *(undefined ***)param_1[2] = &PTR_LAB_00512988;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00512994;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba30  OWL::TTreeWindow::vf30   (10 bytes)   [rtti:vtable virtual slot 30]
char * __stdcall OWL::TTreeWindow::vf30(void)

{
  return "SysTreeView32";
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba3c  OWL::TTreeWindow::vf29   (7 bytes)   [rtti:vtable virtual slot 29]
undefined4 __stdcall OWL::TTreeWindow::vf29(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbd1c  OWL::TTreeWindow::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TTreeWindow::Streamer::vf1(int param_1,int *param_2)

{
  FUN_004ad498(*(int *)(param_1 + 8),param_2);
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbd38  OWL::TTreeWindow::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TTreeWindow::Streamer::vf2(int param_1,int *param_2)

{
  FUN_004ad520(*(int *)(param_1 + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbe64  OWL::TTreeWindow::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TTreeWindow::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
