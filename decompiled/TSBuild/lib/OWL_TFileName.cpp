// TSBuild.exe — runtime / library code "OWL_TFileName"
// 1 functions, 0x0042eee8..0x0042eee8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042eee8  OWL::TFileName::~TFileName   (1024 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFileName::_dtor
void __cdecl OWL::TFileName::_dtor(int self,byte dtorFlags)

{
  int *strRep;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cb3c);
  if (self == 0) goto LAB_0042f2d7;
  if (*(int *)(self + 0x58) != 0) {
    if (*(int *)(*(int *)(self + 0x58) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x58) + -0xc);
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
      if (prevRefs != 0) goto LAB_0042ef8f;
    }
    operator_delete();
    *(undefined4 *)(self + 0x58) = 0;
  }
LAB_0042ef8f:
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
      if (prevRefs != 0) goto LAB_0042f015;
    }
    operator_delete();
    *(undefined4 *)(self + 0x48) = 0;
  }
LAB_0042f015:
  if (*(int *)(self + 0x38) != 0) {
    if (*(int *)(*(int *)(self + 0x38) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x38) + -0xc);
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
      if (prevRefs != 0) goto LAB_0042f0b7;
    }
    operator_delete();
    *(undefined4 *)(self + 0x38) = 0;
  }
LAB_0042f0b7:
  if (*(int *)(self + 0x28) != 0) {
    if (*(int *)(*(int *)(self + 0x28) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x28) + -0xc);
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
      if (prevRefs != 0) goto LAB_0042f159;
    }
    operator_delete();
    *(undefined4 *)(self + 0x28) = 0;
  }
LAB_0042f159:
  if (*(int *)(self + 0x18) != 0) {
    if (*(int *)(*(int *)(self + 0x18) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x18) + -0xc);
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
      if (prevRefs != 0) goto LAB_0042f21f;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_0042f21f:
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
      if (prevRefs != 0) goto LAB_0042f2ca;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0042f2ca:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0042f2d7:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
