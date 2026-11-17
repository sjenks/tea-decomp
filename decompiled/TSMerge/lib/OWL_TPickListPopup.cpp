// TSMerge.exe — runtime / library code "OWL_TPickListPopup"
// 3 functions, 0x00424308..0x00424418. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424308  OWL::TPickListPopup::vf7   (127 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TPickListPopup::vf7(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  tagPOINT local_c;
  
  (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0x93) = 0xfffffffe;
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  TrackPopupMenu(*(HMENU *)(param_1 + 0x8a),0,local_c.x,local_c.y,0,*(HWND *)(param_1 + 0xc),
                 (RECT *)0x0);
  BVar1 = IsWindow(*(HWND *)(param_1 + 0xc));
  if (BVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_004217e8((int *)(*(int *)(param_1 + 0x6c) + 0x11));
    uVar2 = *(undefined4 *)(param_1 + 0x93);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424388  OWL::TPickListPopup::vf18   (19 bytes)   [rtti:vtable virtual slot 18]
undefined4 __cdecl OWL::TPickListPopup::vf18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x93) = param_2;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424418  OWL::TPickListPopup::~TPickListPopup   (138 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPickListPopup::_dtor
void __cdecl OWL::TPickListPopup::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468e80);
  if (param_1 != (int *)0x0) {
    OWL::TMenu::_dtor((undefined4 *)((int)param_1 + 0x86),0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
    OWL::TWindow::_dtor(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
    if ((param_2 & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x9f),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
