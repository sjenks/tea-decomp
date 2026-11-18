// TEA.exe — application module "SearchModeButton"
// 9 functions, 0x00450940..0x0045f0c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450940  SearchModeButton::SearchModeButton   (278 bytes)   [rtti:vtable-store constructor]
//   constructor: stores SearchModeButton's vtable at its vptr offset (+0xc) in this
int * __cdecl SearchModeButton::SearchModeButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f79f0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TStatic::TStatic_4c7a28(self,1,param_3,param_4,0,0);
  self[3] = (int)&SearchModeButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fa17c;
  *(undefined ***)self[2] = &PTR_LAB_004fa188;
  *(undefined ***)(*self + 8) = &PTR_LAB_004fa194;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450a78  SearchModeButton::vf12   (94 bytes)   [rtti:vtable virtual slot 12]
void __cdecl SearchModeButton::vf12(int *self,LPMSG lParam)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (lParam->message == 0x200) {
    if (*(int *)(*self + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*self + 0x14) + 8);
    }
    puVar1 = FUN_004dd744(*(int *)(*self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    (**(code **)(puVar1[3] + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450ad8  SearchModeButton::vf5   (25 bytes)   [rtti:vtable virtual slot 5]
void __cdecl SearchModeButton::vf5(undefined4 self,int param_2)

{
  DrawFrameControl(*(HDC *)(param_2 + 0x18),(LPRECT)(param_2 + 0x1c),3,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ed70  SearchModeButton::~SearchModeButton   (165 bytes)   [rtti:dtor destructor]
//   written in code as SearchModeButton::_dtor
void __cdecl SearchModeButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fa300);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 10,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 8,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ef10  std::vector<Definition>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_Definition::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_Definition::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_DefinitionRecord(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045efa4  std::vector<OWL::TWindow *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_OWL_TWindow_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_OWL_TWindow_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_451754(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045efdc  std::vector<TEAViewWindows::OutputGroup *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_TEAViewWindows_OutputGroup_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_TEAViewWindows_OutputGroup_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_45176c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f08c  std::vector<MatchEngine *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_MatchEngine_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_45f0c4(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f0c4  std::_Destroy_range_ptr_45f0c4   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_45f0c4(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

} // namespace tea
