// TEA.exe — runtime / library code "PVWPathListBox"
// 2 functions, 0x004bfaec..0x004bfaf8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004bfaec  PVWPathListBox::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from PVWPathListBox's OWL::TWindow subobject vtable at 0x004efe80 (through the this-adjusting thunk at 0x00421f33); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TListBox::vf30 [rtti:vtable]
char * __stdcall PVWPathListBox::GetClassName(void)

{
  return "LISTBOX";
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfaf8  PVWPathListBox::Transfer   (615 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from PVWPathListBox's OWL::TWindow subobject vtable at 0x004efe80 (through the this-adjusting thunk at 0x00421f46); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TListBox::vf29 [rtti:vtable]
undefined4 __cdecl PVWPathListBox::Transfer(int *self,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int lParam;
  int iVar4;
  uint *s;
  undefined4 uVar6;
  WPARAM wParam;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint i;
  undefined4 *sehChainHead;
  char cVar13;
  uint local_48;
  int local_38;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50fd98);
  lParam = *self;
  uVar2 = FUN_004a78f0(lParam);
  if (param_3 == 0) {
    FUN_004bf6d0(param_2);
    lParam = (**(code **)(self[3] + 0x24))();
    local_38 = 0;
    iVar11 = 0;
    if (0 < lParam) {
      do {
        iVar4 = (**(code **)(self[3] + 0x40))();
        if (local_38 < iVar4) {
          local_38 = iVar4;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < lParam);
    }
    s = (uint *)operator_new_array();
    for (lParam = 0; iVar11 = (**(code **)(self[3] + 0x24))(), lParam < iVar11; lParam = lParam + 1)
    {
      (**(code **)(self[3] + 0x44))();
      cVar13 = '\0';
      uVar6 = (**(code **)(self[3] + 0x48))();
      FUN_004bf908(param_2,s,uVar6,cVar13);
    }
    FUN_004bf704((int)param_2);
    if ((uVar2 & 0x808) == 0) {
      lParam = (**(code **)(self[3] + 0x6c))();
      FUN_004bf950((int)param_2,lParam);
    }
    else {
      wParam = FUN_004bfd60(self);
      if (0 < (int)wParam) {
        lParam = operator_new_array();
        FUN_004bfdd8(self,lParam,wParam);
        iVar11 = 0;
        if (0 < (int)wParam) {
          do {
            FUN_004bf950((int)param_2,*(int *)(lParam + iVar11 * 4));
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)wParam);
        }
        operator_delete_array();
      }
    }
    operator_delete_array();
  }
  else if (param_3 == 1) {
    (**(code **)(self[3] + 0x58))(uVar2,self[3],lParam,self);
    uVar8 = FUN_004bf6f4((int)param_2);
    local_48 = 0xffffffff;
    for (i = 0; i < *(uint *)(*param_2 + 1); i = i + 1) {
      uVar9 = (**(code **)(self[3] + 0x60))();
      if (i < *(uint *)(param_2[1] + 1)) {
        (**(code **)(self[3] + 0x4c))();
      }
      uVar1 = local_48;
      if ((uVar2 & 0x808) == 0) {
        if ((((uVar8 == 0) || (uVar1 = uVar9, i != **(uint **)(param_2[2] + 9))) &&
            (uVar1 = local_48, local_48 != 0xffffffff)) && ((int)uVar9 <= (int)local_48)) {
          uVar1 = local_48 + 1;
        }
      }
      else {
        uVar10 = 0;
        if (uVar8 != 0) {
          do {
            if (*(uint *)(*(int *)(param_2[2] + 9) + uVar10 * 4) == i) {
              FUN_004a76a8(*self,0x185,1,uVar9 & 0xffff);
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
      }
      local_48 = uVar1;
    }
    if ((local_48 != 0xffffffff) && ((uVar2 & 0x808) == 0)) {
      (**(code **)(self[3] + 0x70))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return 0xc;
}

} // namespace tea
