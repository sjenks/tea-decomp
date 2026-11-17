// TEA.exe — runtime / library code "OWL_TTabControl"
// 6 functions, 0x0049e888..0x0049eb08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049e888  OWL::TTabControl::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TTabControl::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TTabControl::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TTabControl::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ea08  OWL::TTabControl::~TTabControl   (210 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTabControl::_dtor
void __cdecl OWL::TTabControl::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50954c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TTabControl::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_005095a0;
    *(undefined ***)param_1[2] = &PTR_LAB_005095ac;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_005095b8;
    OWL::TControl::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eadc  OWL::TTabControl::vf10   (20 bytes)   [rtti:vtable virtual slot 10]
char * __cdecl OWL::TTabControl::vf10(int param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
  return "SysTabControl32";
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eaf0  OWL::TTabControl::vf9   (7 bytes)   [rtti:vtable virtual slot 9]
undefined4 __stdcall OWL::TTabControl::vf9(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eaf8  OWL::TTabControl::EvVScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TTabControl::EvVScroll(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eb08  OWL::TTabControl::EvHScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TTabControl::EvHScroll(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

} // namespace tea
