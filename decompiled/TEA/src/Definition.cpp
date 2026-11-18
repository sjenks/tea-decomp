// TEA.exe — application module "Definition"
// 1 functions, 0x00410f40..0x00410f40. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410f40  Definition::~Definition   (570 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as Definition::_dtor
void __cdecl Definition::_dtor(int self,byte dtorFlags)

{
  int *strRep;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec9fc);
  if (self == 0) goto LAB_00411169;
  if (*(int *)(self + 0x70) != 0) {
    if (*(int *)(*(int *)(self + 0x70) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x70) + -0xc);
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
      if (prevRefs != 0) goto LAB_00410fe5;
    }
    operator_delete();
    *(undefined4 *)(self + 0x70) = 0;
  }
LAB_00410fe5:
  if (*(int *)(self + 0x60) != 0) {
    if (*(int *)(*(int *)(self + 0x60) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x60) + -0xc);
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
      if (prevRefs != 0) goto LAB_0041106c;
    }
    operator_delete();
    *(undefined4 *)(self + 0x60) = 0;
  }
LAB_0041106c:
  std::_Destroy_range_string(self + 0x38,*(int *)(self + 0x3c),*(int *)(self + 0x40));
  operator_delete();
  std::_Destroy_range_string(self + 0x18,*(int *)(self + 0x1c),*(int *)(self + 0x20));
  operator_delete();
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
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
      if (prevRefs != 0) goto LAB_0041115c;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0041115c:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00411169:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
