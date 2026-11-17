// TEA.exe — runtime / library code "OWL_TComboBox"
// 7 functions, 0x004acd74..0x004ad684. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004acd74  OWL::TComboBox::~TComboBox   (252 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TComboBox::_dtor
void __cdecl OWL::TComboBox::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50c588);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TComboBox::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0050c4b4;
    *(undefined ***)param_1[2] = &PTR_LAB_0050c4c0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050c4cc;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aceec  OWL::TComboBox::vf29   (547 bytes)   [rtti:vtable virtual slot 29]
undefined4 __cdecl OWL::TComboBox::vf29(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  int local_3c;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x50c600);
  if (param_3 == 0) {
    FUN_004ac7b4(param_2);
    iVar1 = (**(code **)(param_1[3] + 0x24))();
    local_3c = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1[3] + 0x40))();
        if (local_3c < iVar2) {
          local_3c = iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    puVar3 = (uint *)operator_new_array();
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(param_1[3] + 0x44))();
        cVar7 = '\0';
        uVar4 = (**(code **)(param_1[3] + 0x48))();
        FUN_004ac9dc(param_2,puVar3,uVar4,cVar7);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    operator_delete_array();
    iVar1 = (**(code **)(param_1[3] + 0x6c))();
    if (iVar1 < 0) {
      iVar1 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
      if (iVar1 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        puVar3 = (uint *)operator_new_array();
        GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)puVar3,iVar1 + 1);
        FUN_004aca54(param_2,puVar3);
        operator_delete_array();
      }
    }
    else {
      iVar5 = (**(code **)(param_1[3] + 0x40))();
      if (iVar5 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        iVar5 = iVar5 + 1;
        puVar3 = (uint *)operator_new_array();
        (**(code **)(param_1[3] + 0x44))(puVar3,param_1[3],iVar5,param_1,puVar3,iVar1);
        FUN_004aca54(param_2,puVar3);
        operator_delete_array();
      }
    }
  }
  else if (param_3 == 1) {
    (**(code **)(param_1[3] + 0x58))();
    FUN_0049bb48(*param_2,(undefined*)FUN_004aced4);
    for (uVar6 = 0; uVar6 < *(uint *)(param_2[1] + 1); uVar6 = uVar6 + 1) {
      (**(code **)(param_1[3] + 0x4c))();
    }
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_2[4]);
    if (-1 < param_2[6]) {
      (**(code **)(param_1[3] + 0x2c))();
    }
  }
  *in_FS_OFFSET = local_34;
  return 0x1c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad110  OWL::TComboBox::vf30   (10 bytes)   [rtti:vtable virtual slot 30]
char * __stdcall OWL::TComboBox::vf30(void)

{
  return "COMBOBOX";
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad11c  OWL::TComboBox::vf33   (177 bytes)   [rtti:vtable virtual slot 33]
void __cdecl OWL::TComboBox::vf33(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50c690);
  OWL::TWindow::vf30(*param_1);
  FUN_004ace70(param_1,param_1[5]);
  for (hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    LVar1 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 == 0) {
      piVar2 = (int *)operator_new();
      if (piVar2 != (int *)0x0) {
        FUN_004a4ed0(piVar2,0,hWnd,(int *)0x0);
      }
      (**(code **)(piVar2[2] + 0x34))();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad1d0  OWL::TComboBox::vf34   (139 bytes)   [rtti:vtable virtual slot 34]
void __cdecl OWL::TComboBox::vf34(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50c6c0);
  for (hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    LVar1 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 != 0) {
      (*(code *)**(undefined4 **)(LVar1 + 8))();
    }
  }
  OWL::TWindow::vf31();
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad4f0  OWL::TComboBox::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TComboBox::Streamer::vf2(int param_1,int *param_2)

{
  FUN_004ad520(*(int *)(param_1 + 8),param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad684  OWL::TComboBox::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TComboBox::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
