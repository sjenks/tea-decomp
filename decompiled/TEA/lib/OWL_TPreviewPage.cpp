// TEA.exe — runtime / library code "OWL_TPreviewPage"
// 4 functions, 0x0049c5fc..0x0049c940. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049c5fc  OWL::TPreviewPage::Find   (68 bytes)   [owl:response-table response-table-find]
//   also: OWL::TPreviewPage::Find [rtti:vtable]
undefined4 __cdecl OWL::TPreviewPage::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(*self,(int *)&OWL::TPreviewPage::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TWindow::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c640  OWL::TPreviewPage::TPreviewPage   (260 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPreviewPage's vtable at its vptr offset (+0x8) in this
int * __cdecl OWL::TPreviewPage::TPreviewPage(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508c00);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x9e;
    self[1] = (int)self + 0xa2;
    *(undefined4 *)((int)self + 0x9a) = 0;
    *(undefined ***)((int)self + 0x9e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0xa2) = &OWL::TStreamableBase::vftable;
  }
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x14;
  OWL::TWindow::TWindow_4a4de0(self,1,param_3,(uint *)0x0,0);
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x14;
  self[2] = (int)&OWL::TPreviewPage::vftable;
  *(undefined ***)*self = &PTR_LAB_00508cfc;
  *(undefined ***)self[1] = &PTR_LAB_00508d08;
  *(undefined4 *)((int)self + 0x86) = param_7;
  *(undefined4 *)((int)self + 0x8a) = *param_6;
  *(undefined4 *)((int)self + 0x8e) = param_6[1];
  *(undefined4 *)((int)self + 0x92) = param_4;
  *(undefined4 *)((int)self + 0x96) = param_5;
  self[6] = 0x50800000;
  self[0x17] = DAT_0051b198;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c768  OWL::TPreviewPage::Paint   (373 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21 (introduced by OWL::TWindow); slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TPreviewPage::Paint(int self,undefined4 *param_2,undefined4 param_3,RECT *pRect)

{
  int *piVar1;
  char cVar2;
  BOOL ok;
  int i;
  tagRECT *pRect2;
  LONG *pLVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  RECT *pRect3;
  LONG local_8c [4];
  tagRECT rect;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HDC printPreviewDC [17];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x508c40);
  ehContext = 8;
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  pRect3 = pRect;
  FUN_004a7a6c(self,&rect);
  pRect2 = &rect;
  pLVar6 = local_8c;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar6 = pRect2->left;
    pRect2 = (tagRECT *)((int)pRect2 + ((uint)bVar7 * -2 + 1) * 4);
    pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_0049bd60((undefined4*)printPreviewDC,param_2,*(undefined4 *)(self + 0x96),local_8c,pRect3);
  ehDtorCount = ehDtorCount + 5;
  ehContext = 0x14;
  (**(code **)(**(int **)(self + 0x92) + 4))();
  cVar2 = (**(code **)(**(int **)(self + 0x92) + 0x14))();
  if (cVar2 == '\0') {
    PatBlt((HDC)*param_2,0,0,*(int *)(self + 0x28),*(int *)(self + 0x2c),0xff0062);
  }
  else {
    (**(code **)(**(int **)(self + 0x92) + 0xc))();
    (**(code **)(**(int **)(self + 0x92) + 0x10))();
    ok = DPtoLP(printPreviewDC[0],(LPPOINT)pRect,2);
    piVar1 = *(int **)(self + 0x92);
    (**(code **)(*piVar1 + 0x18))
              (ok != 0,piVar1,*piVar1,piVar1,*(undefined4 *)(self + 0x86),pRect,3);
    (**(code **)(**(int **)(self + 0x92) + 0x1c))();
    (**(code **)(**(int **)(self + 0x92) + 0x20))();
  }
  ehDtorCount = ehDtorCount + -5;
  OWL::TPrintPreviewDC::_dtor((int *)printPreviewDC,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c940  OWL::TPreviewPage::EvSize   (37 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
void __cdecl OWL::TPreviewPage::EvSize(int self,int param_2)

{
  (**(code **)(*(int *)(self + 8) + 0x68))();
  OWL::TWindow::EvSize(self,param_2);
  return;
}

} // namespace tea
