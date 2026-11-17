// TEA.exe — application module "GripBar"
// 3 functions, 0x00473ba8..0x00473df0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00473ba8  GripBar::~GripBar   (165 bytes)   [rtti:dtor destructor]
//   written in code as GripBar::_dtor
void __cdecl GripBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ff2fc);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x19;
    OWL::TMessageBar::_dtor(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x19;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x7b),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x73),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473ccc  OWL::TStatusBar::~TStatusBar   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatusBar::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatusBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ff304);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x19;
    OWL::TMessageBar::_dtor(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x19;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x19;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x7b),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x73),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473df0  FUN_00473df0   (288 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00473ece) */
/* WARNING: Removing unreachable block (ram,0x00473e2a) */
/* WARNING: Removing unreachable block (ram,0x00473ef0) */
/* WARNING: Removing unreachable block (ram,0x00473e65) */
/* WARNING: Removing unreachable block (ram,0x00473ea2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x00473eaa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00473df0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ff31c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x60) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
