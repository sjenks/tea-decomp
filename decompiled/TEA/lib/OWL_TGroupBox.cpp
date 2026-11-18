// TEA.exe — runtime / library code "OWL_TGroupBox"
// 3 functions, 0x004bf4e4..0x004bf634. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004bf4e4  OWL::TGroupBox::vf10   (31 bytes)   [rtti:vtable virtual slot 10]
char * __cdecl OWL::TGroupBox::vf10(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorShade";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf504  OWL::TGroupBox::TGroupBox   (303 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TGroupBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TGroupBox::TGroupBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50fbfc);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x25;
    *(int *)((int)self + 0x25) = (int)self + 0x19;
    *(int *)((int)self + 0x29) = (int)self + 0x1d;
    self[1] = (int)self + 0x19;
    self[2] = (int)self + 0x1d;
    *(undefined4 *)((int)self + 0x15) = 0;
    *(undefined4 *)((int)self + 0x21) = 0;
    *(undefined ***)((int)self + 0x19) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x1d) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x25),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -1;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -1;
  OWL::TControl::TControl_4ad87c(self,1,param_3,param_4,param_5);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 1;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 1;
  self[3] = (int)&OWL::TGroupBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050fc50;
  *(undefined ***)self[2] = &PTR_LAB_0050fc5c;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050fc68;
  *(undefined1 *)(self + 5) = 1;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) & 0xfffffeff;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf634  OWL::TGroupBox::vf9   (67 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGroupBox::vf9(int *self,int param_2)

{
  if ((char)self[5] != '\0') {
    PostMessageA(*(HWND *)(*(int *)(*self + 0x14) + 0xc),0x111,
                 param_2 << 0x10 | (uint)*(ushort *)(*self + 0x34),*(LPARAM *)(*self + 0xc));
  }
  return;
}

} // namespace tea
