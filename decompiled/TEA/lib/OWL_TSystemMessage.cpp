// TEA.exe — runtime / library code "OWL_TSystemMessage"
// 1 functions, 0x00498bcc..0x00498bcc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498bcc  OWL::TSystemMessage::~TSystemMessage   (178 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSystemMessage::_dtor
void __cdecl OWL::TSystemMessage::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5082fc);
  if (param_1 == 0) goto LAB_00498c6d;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0xc) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00498c60;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_00498c60:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00498c6d:
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
