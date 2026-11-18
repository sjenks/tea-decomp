// TEA.exe — application module "GridViewWindows"
// 1 functions, 0x00463058..0x00463058. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00463058  GridViewWindows::~GridViewWindows   (662 bytes)   [rtti:dtor destructor]
//   written in code as GridViewWindows::_dtor
void __cdecl GridViewWindows::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb7e4);
  if (self == 0) goto LAB_004632de;
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x140));
  if (*(undefined4 **)(self + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(self + 0x18))();
  }
  if (*(int *)(self + 0x144) != 0) {
    TEAViewProfileWindows::_dtor(*(int *)(self + 0x144),3);
  }
  if (*(int *)(self + 0x160) != 0) {
    if (*(int *)(*(int *)(self + 0x160) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x160) + -0xc);
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
      if (prevRefs != 0) goto LAB_00463160;
    }
    operator_delete();
    *(undefined4 *)(self + 0x160) = 0;
  }
LAB_00463160:
  if (*(int *)(self + 0x150) != 0) {
    if (*(int *)(*(int *)(self + 0x150) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x150) + -0xc);
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
      if (prevRefs != 0) goto LAB_004631dd;
    }
    operator_delete();
    *(undefined4 *)(self + 0x150) = 0;
  }
LAB_004631dd:
  _vector_delete_ldtc_(self + 0xf0,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(self + 0xa0,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(self + 0x60,0x10,4,1,(undefined*)std::string::_dtor);
  _vector_delete_ldtc_(self + 0x20,0x10,4,1,(undefined*)std::string::_dtor);
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
      if (prevRefs != 0) goto LAB_004632ce;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004632ce:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004632de:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
