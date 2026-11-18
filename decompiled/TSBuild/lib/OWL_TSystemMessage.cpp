// TSBuild.exe — runtime / library code "OWL_TSystemMessage"
// 1 functions, 0x0042c7ac..0x0042c7ac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c7ac  OWL::TSystemMessage::~TSystemMessage   (178 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSystemMessage::_dtor
void __cdecl OWL::TSystemMessage::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c4e0);
  if (self == 0) goto LAB_0042c84d;
  if (*(int *)(self + 0xc) != 0) {
    if (*(int *)(*(int *)(self + 0xc) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0xc) + -0xc);
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
      if (prevRefs != 0) goto LAB_0042c840;
    }
    operator_delete();
    *(undefined4 *)(self + 0xc) = 0;
  }
LAB_0042c840:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0042c84d:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
