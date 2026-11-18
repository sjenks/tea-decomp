// TEA.exe — runtime / library code "OWL_TStatusBar"
// 7 functions, 0x0049d3fc..0x0049dc20. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049d3fc  OWL::TStatusBar::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TStatusBar::vf26 [rtti:vtable]
undefined4 __cdecl OWL::TStatusBar::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[4],(int *)&OWL::TStatusBar::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TGadgetWindow::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d444  OWL::TStatusBar::TStatusBar   (1326 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TStatusBar's vtable at its vptr offset (+0x18) in this
int * __cdecl OWL::TStatusBar::TStatusBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, uint *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int len;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 uVar6;
  ushort uVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_64;
  undefined1 unused;
  undefined1 unused2;
  undefined1 unused3;
  undefined1 unused4;
  undefined *local_5c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *modeGadget;
  int *textGadget;
  int windowDC;
  int local_27;
  
  __InitExceptBlockLDTC(0x509148);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x7b;
    *(int *)((int)self + 0x7b) = (int)self + 0x6f;
    *(int *)((int)self + 0x7f) = (int)self + 0x73;
    self[4] = (int)self + 0x6f;
    self[5] = (int)self + 0x73;
    *(undefined4 *)((int)self + 0x6b) = 0;
    *(undefined4 *)((int)self + 0x77) = 0;
    *(undefined ***)((int)self + 0x6f) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x73) = &OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x7b),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
  }
  *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x19;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x19;
  OWL::TMessageBar::TMessageBar(self,1,param_3,param_6,param_7);
  ehDtorCount = ehDtorCount + 3;
  *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x19;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x19;
  self[6] = (int)&OWL::TStatusBar::vftable;
  self[1] = (int)&PTR_LAB_00509288;
  *(undefined ***)self[4] = &PTR_LAB_005092a8;
  *(undefined ***)self[5] = &PTR_LAB_005092b4;
  *(undefined ***)(*self + 8) = &PTR_LAB_005092c0;
  *(undefined4 *)((int)self + 0x56) = 1;
  *(undefined4 *)((int)self + 0x5a) = 0;
  *(undefined4 *)((int)self + 0x52) = param_4;
  *(undefined4 *)((int)self + 0x62) = param_5;
  *(undefined4 *)((int)self + 0x66) = 0;
  *(undefined4 *)((int)self + 0x5e) = 0;
  *(undefined1 *)((int)self + 0x6a) = 1;
  pcVar10 = "EXT|CAPS|NUM|SCRL|OVR|REC";
  uVar7 = 0x7f12;
  iVar5 = *(int *)(*self + 0x70);
  piVar1 = (int *)FUN_0049d0a8();
  FUN_0049d148(piVar1,iVar5,uVar7,(uint *)pcVar10);
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x8000;
  if ((*(int *)((int)self + 0x52) == 1) || (*(int *)((int)self + 0x52) == 4)) {
    *(undefined1 *)((int)self + 0x4d) = 0;
  }
  else {
    *(undefined4 *)((int)self + 0x5a) = 2;
  }
  iVar5 = *(int *)((int)self + 0x52);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      self[10] = 2;
      *(undefined1 *)((int)self + 0x2f) = 0xff;
      *(undefined1 *)((int)self + 0x2d) = 0xff;
      *(undefined1 *)((int)self + 0x2e) = *(undefined1 *)((int)self + 0x2d);
      *(undefined1 *)(self + 0xb) = *(undefined1 *)((int)self + 0x2e);
    }
    else if (iVar5 - 2U < 2) {
      self[10] = 0;
      uVar2 = FUN_004917ac((int)self,4);
      *(char *)(self + 0xb) = (char)uVar2;
      uVar2 = FUN_004917ac((int)self,4);
      *(char *)((int)self + 0x2d) = (char)uVar2;
      if ((*(byte *)((int)self + 0x62) & 0x40) != 0) {
        uVar2 = FUN_004917ac((int)self,1);
        *(char *)((int)self + 0x2d) = (char)uVar2;
      }
      iVar5 = GetSystemMetrics(DAT_00509df0);
      *(char *)((int)self + 0x2f) = (char)iVar5;
      *(undefined1 *)((int)self + 0x2e) = *(undefined1 *)((int)self + 0x2f);
    }
  }
  FUN_0048ff7c(self[2],*(undefined4 *)((int)self + 0x52));
  ehContext = 0x14;
  FUN_004a8760(&windowDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x20;
  (**(code **)(local_27 + 0x14))();
  for (iVar5 = 0; piVar1 = (int *)FUN_0049d0a8(), iVar5 < *piVar1; iVar5 = iVar5 + 1) {
    if ((1 << ((byte)iVar5 & 0x1f) & *(uint *)((int)self + 0x62)) != 0) {
      if ((&DAT_00508ffc)[iVar5] == 0) {
        textGadget = (int *)operator_new();
        if (textGadget != (int *)0x0) {
          ehContext = 0x38;
          uVar11 = 0;
          local_5c = FUN_0049d0a8();
          puVar8 = *(uint **)(*(int *)(local_5c + 8) + iVar5 * 4);
          puVar3 = FUN_0049d0a8();
          len = lstrlenA(*(LPCSTR *)(*(int *)(puVar3 + 8) + iVar5 * 4));
          OWL::TTextGadget::TTextGadget(textGadget,(&DAT_00509014)[iVar5],*(undefined4 *)((int)self + 0x52),0,len,
                       puVar8,uVar11);
          ehContext = 0x2c;
        }
        piVar1 = textGadget;
        (**(code **)(*textGadget + 4))();
      }
      else {
        piVar1 = (int *)operator_new();
        modeGadget = piVar1;
        if (piVar1 != (int *)0x0) {
          ehContext = 0x50;
          uVar12 = 0;
          uVar9 = 1;
          uVar11 = *(undefined4 *)((int)self + 0x52);
          uVar6 = (&DAT_00509014)[iVar5];
          puVar3 = FUN_0049d0a8();
          OWL::TModeGadget::TModeGadget(modeGadget,(&DAT_00508ffc)[iVar5],*(uint **)(*(int *)(puVar3 + 8) + iVar5 * 4),
                       uVar6,uVar11,uVar9,uVar12);
          piVar1 = modeGadget;
        }
      }
      local_64 = *(undefined4 *)((int)piVar1 + 0x2e);
      unused3 = (undefined1)piVar1[0xd];
      unused4 = *(undefined1 *)((int)piVar1 + 0x35);
      ehContext = 0x20;
      unused2 = 2;
      unused = 2;
      FUN_0048ff54((int)piVar1,&local_64);
      OWL::TGadgetWindow::vf5(self,(int)piVar1,1,0);
      *(int *)((int)self + 0x5e) = *(int *)((int)self + 0x5e) + 1;
    }
  }
  if ((*(byte *)((int)self + 0x62) & 0x40) != 0) {
    FUN_0049d994(self);
  }
  ehDtorCount = ehDtorCount + -3;
  OWL::TWindowDC::_dtor(&windowDC,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049da5c  OWL::TStatusBar::vf20   (147 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TStatusBar::vf20(int self,undefined4 param_2,int *param_3,int *param_4)

{
  int metric;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  metric = GetSystemMetrics(DAT_00509de8);
  if (*(int *)(self + 0x52) == 1) {
    *param_4 = *param_4 - metric;
  }
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  puVar2 = FUN_004dd744((int)param_3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar2 == (undefined4 *)0x0) &&
     (uVar3 = FUN_0049da2c(self,(int)param_3), (char)uVar3 != '\0')) {
    iVar5 = *(int *)(self + 0x56);
    if (iVar5 == 0) {
      *param_4 = *param_4 + *(int *)(self + 0x5a);
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_004917ac(self,*(int *)(self + 0x5a));
      *param_4 = *param_4 + uVar4;
    }
    else if (iVar5 == 2) {
      *param_4 = *param_4 + *(int *)(self + 0x5a) * metric;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049daf0  OWL::TStatusBar::vf5   (72 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TStatusBar::vf5(int *self,int param_2,int param_3,int param_4)

{
  FUN_0048ff7c(param_2,*(undefined4 *)((int)self + 0x52));
  if (param_4 == 0) {
    param_4 = FUN_00490df0(self + 1,(self[3] - *(int *)((int)self + 0x5e)) + -1);
  }
  OWL::TGadgetWindow::vf5(self,param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049db38  OWL::TStatusBar::vf27   (39 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TStatusBar::vf27(int *self,uint *param_2)

{
  if (*(char *)((int)self + 0x6a) != '\0') {
    OWL::TMessageBar::vf27(self,param_2);
    return;
  }
  FUN_004987c4((int)self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049db60  OWL::TStatusBar::EvNCHitTest   (190 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl OWL::TStatusBar::EvNCHitTest(int *self,LPPOINT point)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_14 [4];
  
  uVar2 = FUN_004a5774(*self);
  piVar3 = (int *)FUN_00490dd0((int)(self + 1),0x7537);
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  puVar4 = FUN_004dd744((int)piVar3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar4 != (undefined4 *)0x0) && ((*(byte *)((int)puVar4 + 0x42) & 1) != 0)) {
    ScreenToClient(*(HWND *)(*self + 0xc),point);
    piVar3 = (int *)((int)puVar4 + 10);
    piVar6 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
    if ((((point->x < local_14[0]) || (local_14[2] + 1 <= point->x)) ||
        (point->y < local_14[1])) || (local_14[3] + 1 <= point->y)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049dc20  OWL::TStatusBar::EvMsg_7ef5   (259 bytes)   [owl:response-table message-handler]
//   message 0x7ef5
void __cdecl OWL::TStatusBar::EvMsg_7ef5(int *self,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5091e4);
  piVar2 = (int *)FUN_00490dd0((int)(self + 1),0x7537);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  puVar3 = FUN_004dd744((int)piVar2,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  bVar1 = false;
  if (param_2 == 2) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(self[6] + 0x1c))();
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
      *(int *)((int)self + 0x5e) = *(int *)((int)self + 0x5e) + -1;
      (**(code **)(self[6] + 0x34))();
      bVar1 = true;
    }
  }
  else if (((param_2 == 0) && (puVar3 == (undefined4 *)0x0)) &&
          ((*(byte *)((int)self + 0x62) & 0x40) != 0)) {
    piVar2 = self;
    uVar4 = FUN_0049d994(self);
    (**(code **)(self[6] + 0x34))(uVar4,self[6],piVar2,self);
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)(*self + 0x14);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + 8);
    }
    puVar3 = FUN_004dd744(iVar5,iVar6,(int *)&DAT_0040299c,(int *)&DAT_00428c70,0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar3[3] + 4))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
