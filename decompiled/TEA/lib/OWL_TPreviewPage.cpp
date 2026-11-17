// TEA.exe — runtime / library code "OWL_TPreviewPage"
// 3 functions, 0x0049c5fc..0x0049c940. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049c5fc  OWL::TPreviewPage::Find   (68 bytes)   [owl:response-table response-table-find]
//   also: OWL::TPreviewPage::vf33 [rtti:vtable]
undefined4 __cdecl OWL::TPreviewPage::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(*param_1,(int *)&OWL::TPreviewPage::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TWindow::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c768  OWL::TPreviewPage::vf21   (373 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TPreviewPage::vf21(int param_1,undefined4 *param_2,undefined4 param_3,RECT *param_4)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  RECT *pRVar8;
  LONG local_8c [4];
  tagRECT local_7c;
  undefined4 local_6c;
  undefined2 local_5c;
  int local_50;
  HDC local_48 [17];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x508c40);
  local_5c = 8;
  local_7c.left = 0;
  local_7c.top = 0;
  local_7c.right = 0;
  local_7c.bottom = 0;
  pRVar8 = param_4;
  FUN_004a7a6c(param_1,&local_7c);
  ptVar5 = &local_7c;
  pLVar6 = local_8c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pLVar6 = ptVar5->left;
    ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_0049bd60((undefined4*)local_48,param_2,*(undefined4 *)(param_1 + 0x96),local_8c,pRVar8);
  local_50 = local_50 + 5;
  local_5c = 0x14;
  (**(code **)(**(int **)(param_1 + 0x92) + 4))();
  cVar2 = (**(code **)(**(int **)(param_1 + 0x92) + 0x14))();
  if (cVar2 == '\0') {
    PatBlt((HDC)*param_2,0,0,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),0xff0062);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x92) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x92) + 0x10))();
    BVar3 = DPtoLP(local_48[0],(LPPOINT)param_4,2);
    piVar1 = *(int **)(param_1 + 0x92);
    (**(code **)(*piVar1 + 0x18))
              (BVar3 != 0,piVar1,*piVar1,piVar1,*(undefined4 *)(param_1 + 0x86),param_4,3);
    (**(code **)(**(int **)(param_1 + 0x92) + 0x1c))();
    (**(code **)(**(int **)(param_1 + 0x92) + 0x20))();
  }
  local_50 = local_50 + -5;
  OWL::TPrintPreviewDC::_dtor((int *)local_48,2);
  *in_FS_OFFSET = local_6c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c940  OWL::TPreviewPage::EvSize   (37 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
void __cdecl OWL::TPreviewPage::EvSize(int param_1,int param_2)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x68))();
  OWL::TWindow::EvSize(param_1,param_2);
  return;
}

} // namespace tea
