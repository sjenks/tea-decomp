// TEA.exe — runtime / library code "PVWEdit"
// 1 functions, 0x004b6720..0x004b6720. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b6720  PVWEdit::EvKillFocus   (154 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
//   also: OWL::TEdit::EvKillFocus [owl:response-table]
void __cdecl PVWEdit::EvKillFocus(int *param_1,HWND param_2)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  
  if ((param_1[6] != 0) && (hWnd = param_2, DAT_0050dfc8 == (int *)0x0)) {
    while ((hWnd != (HWND)0x0 &&
           (LVar2 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c)), LVar2 == 0))) {
      hWnd = GetParent(hWnd);
    }
    if ((((hWnd != (HWND)0x0) && (iVar3 = GetDlgCtrlID(param_2), iVar3 != 2)) && (iVar3 != 1)) &&
       (cVar1 = FUN_004b7060(param_1,'\0'), cVar1 == '\0')) {
      DAT_0050dfc8 = param_1;
      PostMessageA(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),0x7ffe,*(WPARAM *)(*param_1 + 0xc),0);
    }
  }
  OWL::TWindow::EvKillFocus(*param_1);
  return;
}

} // namespace tea
