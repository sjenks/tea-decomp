// TEA.exe — runtime / library code "PVWEdit"
// 1 functions, 0x004b6720..0x004b6720. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b6720  PVWEdit::EvKillFocus   (154 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
//   also: OWL::TEdit::EvKillFocus [owl:response-table]
void __cdecl PVWEdit::EvKillFocus(int *self,HWND hWndGetFocus)

{
  char cVar1;
  HWND hWnd;
  LRESULT lResult;
  int iVar3;
  
  if ((self[6] != 0) && (hWnd = hWndGetFocus, DAT_0050dfc8 == (int *)0x0)) {
    while ((hWnd != (HWND)0x0 &&
           (lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c)), lResult == 0))) {
      hWnd = GetParent(hWnd);
    }
    if ((((hWnd != (HWND)0x0) && (iVar3 = GetDlgCtrlID(hWndGetFocus), iVar3 != 2)) && (iVar3 != 1)) &&
       (cVar1 = FUN_004b7060(self,'\0'), cVar1 == '\0')) {
      DAT_0050dfc8 = self;
      PostMessageA(*(HWND *)(*(int *)(*self + 0x14) + 0xc),0x7ffe,*(WPARAM *)(*self + 0xc),0);
    }
  }
  OWL::TWindow::EvKillFocus(*self);
  return;
}

} // namespace tea
