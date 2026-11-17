// TEA.exe — runtime / library code "OWL_TGroupBox"
// 2 functions, 0x004bf4e4..0x004bf634. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004bf4e4  OWL::TGroupBox::vf10   (31 bytes)   [rtti:vtable virtual slot 10]
char * __cdecl OWL::TGroupBox::vf10(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorShade";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf634  OWL::TGroupBox::vf9   (67 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGroupBox::vf9(int *param_1,int param_2)

{
  if ((char)param_1[5] != '\0') {
    PostMessageA(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),0x111,
                 param_2 << 0x10 | (uint)*(ushort *)(*param_1 + 0x34),*(LPARAM *)(*param_1 + 0xc));
  }
  return;
}

} // namespace tea
