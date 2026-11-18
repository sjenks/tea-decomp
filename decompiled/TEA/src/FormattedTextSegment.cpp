// TEA.exe — application module "FormattedTextSegment"
// 2 functions, 0x00481ebc..0x00481f7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00481ebc  FormattedTextSegment::~FormattedTextSegment   (191 bytes)   [rtti:dtor destructor]
//   written in code as FormattedTextSegment::_dtor
void __cdecl FormattedTextSegment::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502f20);
  if (self == 0) goto LAB_00481f6a;
  if (*(int *)(self + 0x48) != 0) {
    if (*(int *)(*(int *)(self + 0x48) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x48) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00481f5a;
    }
    operator_delete();
    *(undefined4 *)(self + 0x48) = 0;
  }
LAB_00481f5a:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00481f6a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481f7c  FormattedTextSegment::FormattedTextSegment   (287 bytes)   [analysis]
//   a run of text with its character format
/* WARNING: Removing unreachable block (ram,0x00481fd7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00481fdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FormattedTextSegment::FormattedTextSegment(undefined4 *self,undefined4 *paragraph,undefined4 *text,undefined4 *source)

{
  int i;
  undefined4 *pos;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  undefined4 *local_8;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x502f60);
  pos = self;
  for (i = 0x27; i != 0; i = i + -1) {
    *pos = *paragraph;
    paragraph = paragraph + (uint)bVar3 * -2 + 1;
    pos = pos + (uint)bVar3 * -2 + 1;
  }
  self[0x29] = 0;
  self[0x2a] = 0;
  self[0x2e] = 0;
  self[0x28] = 0x100;
  self[0x30] = 0;
  self[0x31] = 0;
  self[0x32] = 0x2d0;
  for (i = 0; i < *(short *)((int)self + 0x1a); i = i + 1) {
    self[i + 0x33] = *text;
    text = text + 1;
  }
  local_8 = (undefined4 *)operator_new();
  if (local_8 != (undefined4 *)0x0) {
    RtfFilter::CopyRunFormat(local_8,source);
  }
  pos = (undefined4 *)self[0x2a];
  if (pos == (undefined4 *)self[0x2e]) {
    std::vector_ptr::insert_aux_480144((int)(self + 0x28),pos,(undefined4*)&local_8);
  }
  else {
    *pos = local_8;
    self[0x2a] = self[0x2a] + 4;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
