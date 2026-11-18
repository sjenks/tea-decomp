// TEA.exe — runtime / library code "OWL_TRichEdit"
// 3 functions, 0x00486aa8..0x00486d64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00486aa8  OWL::TRichEdit::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TRichEdit::Streamer::vf1(int self,int *param_2)

{
  FUN_00486ac4(*(int *)(self + 8),param_2);
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00486b1c  OWL::TRichEdit::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TRichEdit::Streamer::vf2(int self,int *param_2)

{
  FUN_00486b34(*(int *)(self + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486d64  OWL::TRichEdit::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3]
undefined4 __stdcall OWL::TRichEdit::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
