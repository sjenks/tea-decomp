// TEA.exe — application module "SearchModeButton"
// 8 functions, 0x00450a78..0x0045f0c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450a78  SearchModeButton::vf12   (94 bytes)   [rtti:vtable virtual slot 12]
void __cdecl SearchModeButton::vf12(int *param_1,LPMSG param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2->message == 0x200) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
    }
    puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    (**(code **)(puVar1[3] + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450ad8  SearchModeButton::vf5   (25 bytes)   [rtti:vtable virtual slot 5]
void __cdecl SearchModeButton::vf5(undefined4 param_1,int param_2)

{
  DrawFrameControl(*(HDC *)(param_2 + 0x18),(LPRECT)(param_2 + 0x1c),3,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ed70  SearchModeButton::~SearchModeButton   (165 bytes)   [rtti:dtor destructor]
//   written in code as SearchModeButton::_dtor
void __cdecl SearchModeButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fa300);
  if (param_1 != (int *)0x0) {
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
// 0x0045ef10  std::vector<Definition>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_Definition::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_Definition::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040b62c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045efa4  std::vector<OWL::TWindow *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_OWL_TWindow_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_OWL_TWindow_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00451754(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045efdc  std::vector<TEAViewWindows::OutputGroup *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_TEAViewWindows_OutputGroup_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_TEAViewWindows_OutputGroup_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0045176c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f08c  std::vector<MatchEngine *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_MatchEngine_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0045f0c4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f0c4  FUN_0045f0c4   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045f0c4(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

} // namespace tea
