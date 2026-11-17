// TEA.exe — runtime / library code "OWL_TNumericStatic"
// 3 functions, 0x004c470c..0x004c62d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c470c  OWL::TNumericStatic::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TNumericStatic::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TNumericStatic::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TNumericStatic::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c48a4  OWL::TNumericStatic::EvMsg_464   (208 bytes)   [owl:response-table message-handler]
//   message 0x0464
undefined4 __cdecl OWL::TNumericStatic::EvMsg_464(int *param_1,int param_2)

{
  LPSTR lpString;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510e88);
  param_1[6] = param_2;
  if (0 < param_1[6]) {
    strlen(*(uint **)(*param_1 + 0x10));
    lpString = (LPSTR)operator_new_array();
    wsprintfA(lpString,*(LPCSTR *)(*param_1 + 0x10),param_1[6]);
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
    operator_delete_array();
  }
  hWnd = GetDlgItem(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),-1);
  if (0 < param_1[6]) {
    FUN_004a7aa0(*param_1,(HWND)0x0,0,0,0,0,0x53);
    if (hWnd != (HWND)0x0) {
      ShowWindow(hWnd,0);
    }
    UpdateWindow(*(HWND *)(*param_1 + 0xc));
  }
  *in_FS_OFFSET = local_2c;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c62d8  OWL::TNumericStatic::~TNumericStatic   (196 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TNumericStatic::_dtor
void __cdecl OWL::TNumericStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511600);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
