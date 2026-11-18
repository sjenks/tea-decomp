// TSBuild.exe — runtime / library code "OWL_TWindow"
// 65 functions, 0x0042fb54..0x00438d94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042fb54  OWL::TWindow::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TWindow::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TWindow::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cd34);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00403c70,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fbbc  OWL::TWindow::TWindow   (192 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TWindow's vtable at its vptr offset (+0x8) in this
int * __cdecl OWL::TWindow::TWindow(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cd4c);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x8a;
    self[1] = (int)self + 0x8e;
    *(undefined4 *)((int)self + 0x86) = 0;
    *(undefined ***)((int)self + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  self[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*self = &PTR_LAB_0047ce48;
  *(undefined ***)self[1] = &PTR_LAB_0047ce54;
  self[0xc] = 0;
  self[0xf] = 0;
  self[0x15] = 0;
  self[0x17] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fcf4  OWL::TWindow::Streamer::vf1   (823 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TWindow::Streamer::vf1(int self,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_54;
  int *unused;
  uint local_4c;
  int *unused2;
  undefined4 *local_44;
  char local_3d;
  int *unused3;
  undefined4 *local_38;
  int *unused4;
  undefined4 *local_30;
  undefined2 *local_2c;
  uint *local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar1 = *(int *)(self + 8);
  local_8 = FUN_0042da9c(param_2);
  if ((local_8 & 1) == 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x7e) = 0;
    *(undefined4 *)(iVar1 + 0x7a) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    FUN_00436adc(iVar1);
    FUN_00450984(param_2,(undefined4 *)(iVar1 + 0x70));
    local_c = 0;
    FUN_00439490(param_2,&local_c);
    *(undefined4 *)(iVar1 + 0x10) = local_c;
    FUN_0042d9a0(param_2,iVar1 + 0x74,4);
    if ((*(byte *)(iVar1 + 0x74) & 4) == 0) {
      local_14 = (uint *)(iVar1 + 0x2c);
      local_18 = (uint *)(iVar1 + 0x28);
      local_1c = (uint *)(iVar1 + 0x24);
      local_20 = (uint *)(iVar1 + 0x20);
      local_24 = iVar1 + 0x1c;
      FUN_0042d9a0(param_2,iVar1 + 0x18,4);
      FUN_0042d9a0(param_2,local_24,4);
      uVar2 = FUN_0042da9c(param_2);
      *local_20 = uVar2;
      uVar2 = FUN_0042da9c(param_2);
      *local_1c = uVar2;
      uVar2 = FUN_0042da9c(param_2);
      *local_18 = uVar2;
      uVar2 = FUN_0042da9c(param_2);
      *local_14 = uVar2;
      FUN_0042d9a0(param_2,&local_10,4);
      *(undefined4 *)(iVar1 + 0x38) = local_10;
      *(code **)(iVar1 + 0x40) = DefWindowProcA;
    }
    else {
      *(code **)(iVar1 + 0x40) = DefWindowProcA;
      memset((undefined4 *)(iVar1 + 0x18),0,0x28);
    }
    puVar4 = (undefined4 *)(iVar1 + 0x3c);
    puVar7 = (undefined4 *)(iVar1 + 0x30);
    local_28 = (uint *)(iVar1 + 0x34);
    uVar2 = FUN_0042da9c(param_2);
    *local_28 = uVar2;
    piVar3 = FUN_00439490(param_2,puVar7);
    FUN_00439490(piVar3,puVar4);
    local_2c = (undefined2 *)(iVar1 + 0x78);
    uVar2 = FUN_0042dac0(param_2);
    *local_2c = (short)uVar2;
    FUN_0042fc7c(param_2,(undefined4 *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = **(int **)(iVar1 + 0x70);
      }
      puVar4 = FUN_00468488(*(int *)(iVar1 + 0x70),iVar8,(int *)&DAT_00404d74,(int *)&DAT_004039bc,0
                           );
      *(undefined4 **)(iVar1 + 0x6c) = puVar4;
      if (*(int *)(iVar1 + 0x6c) == 0) {
        iVar8 = 0;
        puVar4 = (undefined4 *)FUN_0041c4a0();
        uVar5 = FUN_0041c6e8(puVar4,iVar8);
        *(undefined4 *)(iVar1 + 0x6c) = uVar5;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x6c);
      if (param_3 == 1) {
        if ((local_8 & 2) != 0) {
          *(int *)(*(int *)(iVar1 + 0x14) + 0x7a) = iVar1;
        }
        local_30 = (undefined4 *)(iVar1 + 0x7a);
        unused4 = param_2;
        FUN_0042fc7c(param_2,local_30);
        local_38 = (undefined4 *)(iVar1 + 0x7e);
        unused3 = param_2;
        FUN_0042fc7c(param_2,local_38);
      }
      else {
        FUN_004381f0(*(int *)(iVar1 + 0x14),iVar1);
        local_3d = DAT_0047cd04;
        DAT_0047cd04 = 1;
        local_44 = (undefined4 *)(iVar1 + 0x7a);
        unused2 = param_2;
        FUN_0042fc7c(param_2,local_44);
        DAT_0047cd04 = local_3d;
        if (local_3d != '\0') {
          DAT_0047cd04 = 0;
          unused = param_2;
          local_4c = FUN_0042da9c(param_2);
          uVar2 = 0;
          if (local_4c != 0) {
            do {
              FUN_0042fc7c(param_2,&local_54);
              uVar2 = uVar2 + 1;
            } while (uVar2 < local_4c);
          }
          DAT_0047cd04 = '\x01';
        }
      }
    }
    FUN_0045297c(param_2,(undefined4 *)(iVar1 + 0x44));
    if (*(int *)(iVar1 + 0x44) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x44) + 4))();
    }
    *(undefined4 *)(iVar1 + 0x58) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x54);
    piVar3 = FUN_00450984(param_2,(undefined4 *)(iVar1 + 0x50));
    FUN_00439490(piVar3,puVar4);
    FUN_0043888c(iVar1,*(int *)(iVar1 + 0x50),*(int *)(iVar1 + 0x54));
    FUN_0042d9a0(param_2,iVar1 + 0x5c,4);
    puVar6 = FUN_0042e8f4(iVar1);
    *(undefined1 **)(iVar1 + 0x68) = puVar6;
  }
  else {
    *(undefined4 *)(iVar1 + 0x7a) = 0;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043002c  OWL::TWindow::Streamer::vf2   (694 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TWindow::Streamer::vf2(int self,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint windowLong;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_4c;
  int *unused;
  int *unused2;
  int local_40;
  int *unused3;
  int local_38;
  char local_31;
  undefined4 unused4;
  uint local_2c;
  undefined4 local_28;
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int *unused9;
  
  iVar1 = *(int *)(self + 8);
  FUN_004380e4(iVar1);
  bVar3 = false;
  if (((*(byte *)(iVar1 + 0x74) & 0x40) == 0) && ((*(byte *)(iVar1 + 0x74) & 0x10) == 0)) {
    if ((*(int *)(iVar1 + 0x14) != 0) &&
       ((((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x40) != 0 ||
         ((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x10) != 0)) &&
        (iVar1 == *(int *)(*(int *)(iVar1 + 0x14) + 0x7a))))) {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  unused9 = param_2;
  FUN_0042df1c(param_2);
  if (!bVar3) {
    FUN_004509d4(param_2,*(int **)(iVar1 + 0x70));
    local_c = *(undefined4 *)(iVar1 + 0x10);
    FUN_004394f4(param_2,&local_c);
    local_10 = *(uint *)(iVar1 + 0x74);
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_10 = local_10 | 2;
    }
    FUN_0042de94(param_2,&local_10,4);
    if ((*(byte *)(iVar1 + 0x74) & 4) == 0) {
      uVar6 = *(uint *)(iVar1 + 0x18) & 0xc6ffffff;
      if (*(int *)(iVar1 + 0xc) != 0) {
        windowLong = GetWindowLongA(*(HWND *)(iVar1 + 0xc),-0x10);
        uVar6 = uVar6 | windowLong & 0x39000000;
      }
      local_14 = *(undefined4 *)(iVar1 + 0x38);
      unused8 = *(undefined4 *)(iVar1 + 0x2c);
      unused7 = *(undefined4 *)(iVar1 + 0x28);
      unused6 = *(undefined4 *)(iVar1 + 0x24);
      unused5 = *(undefined4 *)(iVar1 + 0x20);
      local_28 = *(undefined4 *)(iVar1 + 0x1c);
      local_2c = uVar6;
      FUN_0042de94(param_2,&local_2c,4);
      FUN_0042de94(param_2,&local_28,4);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042de94(param_2,&local_14,4);
    }
    puVar8 = (undefined4 *)(iVar1 + 0x3c);
    puVar7 = (undefined4 *)(iVar1 + 0x30);
    unused4 = *(undefined4 *)(iVar1 + 0x34);
    FUN_0042df1c(param_2);
    piVar5 = FUN_004394f4(param_2,puVar7);
    FUN_004394f4(piVar5,puVar8);
    FUN_0042dee0(param_2);
    FUN_0042fccc(param_2,*(int *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) != 0) {
      local_31 = DAT_0047cd05;
      DAT_0047cd05 = 1;
      local_38 = *(int *)(iVar1 + 0x7a);
      unused3 = param_2;
      FUN_0042fccc(param_2,local_38);
      DAT_0047cd05 = local_31;
      if (local_31 != '\0') {
        DAT_0047cd05 = 0;
        local_40 = FUN_004380cc(*(int *)(iVar1 + 0x14));
        local_40 = local_40 + -1;
        unused2 = param_2;
        FUN_0042df1c(param_2);
        for (iVar2 = *(int *)(iVar1 + 0x7e); iVar1 != iVar2; iVar2 = *(int *)(iVar2 + 0x7e)) {
          FUN_0042fccc(param_2,iVar2);
        }
        DAT_0047cd05 = '\x01';
      }
    }
    FUN_004529cc(param_2,*(int **)(iVar1 + 0x44));
    puVar8 = (undefined4 *)(iVar1 + 0x54);
    unused = param_2;
    piVar5 = FUN_004509d4(param_2,*(int **)(iVar1 + 0x50));
    FUN_004394f4(piVar5,puVar8);
    local_4c = *(undefined4 *)(iVar1 + 0x5c);
    FUN_0042de94(param_2,&local_4c,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430414  OWL::TWindow::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TWindow::Streamer::vf3(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435b8c  OWL::TWindow::Find   (33 bytes)   [owl:response-table response-table-find]
//   also: OWL::TWindow::Find [rtti:vtable]
undefined4 __cdecl OWL::TWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(*self,(int *)&OWL::TWindow::__entries,param_2,param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435c28  OWL::TWindow::TWindow_435c28   (237 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TWindow's vtable at its vptr offset (+0x8) in this
int * __cdecl OWL::TWindow::TWindow_435c28(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e624);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x8a;
    self[1] = (int)self + 0x8e;
    *(undefined4 *)((int)self + 0x86) = 0;
    *(undefined ***)((int)self + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  self[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*self = &PTR_LAB_0047ce48;
  *(undefined ***)self[1] = &PTR_LAB_0047ce54;
  self[3] = 0;
  self[4] = 0;
  self[0xc] = 0;
  self[0xf] = 0;
  self[0x10] = 0;
  self[0x15] = 0;
  self[0x17] = 0;
  self[0x1a] = 0;
  self[0x1c] = 0;
  FUN_00435df4((int)self,param_3,param_4,param_5);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435d18  OWL::TWindow::TWindow_435d18   (218 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TWindow's vtable at its vptr offset (+0x8) in this
int * __cdecl OWL::TWindow::TWindow_435d18(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e648);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x8a;
    self[1] = (int)self + 0x8e;
    *(undefined4 *)((int)self + 0x86) = 0;
    *(undefined ***)((int)self + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  self[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*self = &PTR_LAB_0047ce48;
  *(undefined ***)self[1] = &PTR_LAB_0047ce54;
  self[3] = 0;
  self[4] = 0;
  self[0xc] = 0;
  self[0xf] = 0;
  self[0x10] = 0;
  self[0x15] = 0;
  self[0x17] = 0;
  self[0x1a] = 0;
  self[0x1c] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435f74  OWL::TWindow::~TWindow   (500 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TWindow::_dtor
void __cdecl OWL::TWindow::_dtor(undefined4 *self,uint dtorFlags)

{
  code *dwNewLong;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e67c);
  if (self != (undefined4 *)0x0) {
    self[2] = &OWL::TWindow::vftable;
    *(undefined ***)*self = &PTR_LAB_0047ce48;
    *(undefined ***)self[1] = &PTR_LAB_0047ce54;
    if (self[3] != 0) {
      if (self[0x10] == 0) {
        dwNewLong = DefWindowProcA;
      }
      else {
        dwNewLong = (code *)self[0x10];
      }
      SetWindowLongA((HWND)self[3],-4,(LONG)dwNewLong);
    }
    FUN_0042ea7c((int)self);
    self[0x1a] = 0;
    FUN_00436ac4(*(int *)((int)self + 0x82));
    FUN_00438260((int)self,(undefined*)FUN_00435630);
    if ((self[3] != 0) && ((*(byte *)(self + 0x1d) & 1) == 0)) {
      (**(code **)(self[2] + 0x18))();
    }
    if (self[5] != 0) {
      (**(code **)(*(int *)(self[5] + 8) + 0x80))();
    }
    if (self[0x1b] != 0) {
      FUN_0043bafc(self[0x1b],(int)self);
    }
    if ((short)((uint)self[0xc] >> 0x10) != 0) {
      operator_delete_array();
    }
    FUN_004363ac((int)self,0);
    if ((short)((uint)self[4] >> 0x10) != 0) {
      operator_delete_array();
    }
    self[4] = 0;
    if ((self[0x16] != 0) && (self[0x14] != 0)) {
      FUN_0043888c((int)self,0,0);
    }
    if ((undefined4 *)self[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)self[0x18])();
    }
    if ((dtorFlags & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x8e),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436168  OWL::TWindow::PreProcessMsg   (158 bytes)   [rtti:vtable virtual slot 10]
//   vtable slot 10; slot name identified from OWL::TWindow's own implementation of that slot
bool __cdecl OWL::TWindow::PreProcessMsg(int self,LPMSG lParam)

{
  int *piVar1;
  BOOL ok;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(self + 8) + 4))();
  if (piVar1 != (int *)0x0) {
    ok = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (ok != 0) {
      if (lParam->hwnd != *(HWND *)(self + 0xc)) {
        ok = IsChild(*(HWND *)(self + 0xc),lParam->hwnd);
        if (ok == 0) goto LAB_004361e2;
      }
      if ((0x1ff < lParam->message) && (lParam->message < 0x20e)) {
        FUN_00438338(*piVar1,0x407,0,(LPARAM)lParam);
      }
    }
  }
LAB_004361e2:
  if (*(int *)(self + 0x4c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = TranslateAcceleratorA(*(HWND *)(self + 0xc),*(HACCEL *)(self + 0x4c),lParam);
  }
  return iVar3 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436208  OWL::TWindow::IdleAction   (122 bytes)   [rtti:vtable virtual slot 11]
//   vtable slot 11; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::IdleAction(int self,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(self + 0x7a) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(self + 0x7a) + 0x7e);
  }
  if (iVar4 != 0) {
    do {
      if ((param_2 == 0) || ((*(byte *)(iVar4 + 0x75) & 0x10) != 0)) {
        cVar1 = (**(code **)(*(int *)(iVar4 + 8) + 0x2c))();
        if (cVar1 == '\0') {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0xffffefff;
        }
        else {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) | 0x1000;
          uVar3 = 1;
        }
      }
      iVar4 = *(int *)(iVar4 + 0x7e);
      if (iVar4 == 0) {
        return uVar3;
      }
      if (*(int *)(self + 0x7a) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(self + 0x7a) + 0x7e);
      }
    } while (iVar4 != iVar2);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436284  OWL::TWindow::EvSysColorChange   (32 bytes)   [owl:response-table message-handler]
//   WM_SYSCOLORCHANGE
void __cdecl OWL::TWindow::EvSysColorChange(int self)

{
  FUN_004383d0(self,0x15,0,0);
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004362a4  OWL::TWindow::RemoveChild   (81 bytes)   [rtti:vtable virtual slot 32]
//   vtable slot 32; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::RemoveChild(int self,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(self + 0x7a) != 0)) {
    for (iVar1 = *(int *)(self + 0x7a);
        (*(int *)(self + 0x7a) != *(int *)(iVar1 + 0x7e) && (param_2 != *(int *)(iVar1 + 0x7e)));
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    if (param_2 == *(int *)(iVar1 + 0x7e)) {
      if (iVar1 == *(int *)(iVar1 + 0x7e)) {
        *(undefined4 *)(self + 0x7a) = 0;
        return;
      }
      if (*(int *)(self + 0x7a) == *(int *)(iVar1 + 0x7e)) {
        *(int *)(self + 0x7a) = iVar1;
      }
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(*(int *)(iVar1 + 0x7e) + 0x7e);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004362f8  OWL::TWindow::SetParent   (140 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::SetParent(int self,int param_2)

{
  HWND hWnd;
  
  if (param_2 != *(int *)(self + 0x14)) {
    if (*(int *)(self + 0x14) != 0) {
      (**(code **)(*(int *)(*(int *)(self + 0x14) + 8) + 0x80))();
    }
    *(undefined4 *)(self + 0x7e) = 0;
    *(int *)(self + 0x14) = param_2;
    if (*(int *)(self + 0x14) != 0) {
      FUN_004381f0(*(int *)(self + 0x14),self);
    }
  }
  if ((*(int *)(self + 0xc) != 0) && (*(int *)(self + 0x14) != 0)) {
    if (*(int *)(self + 0xc) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(self + 0xc));
    }
    if (hWnd != *(HWND *)(*(int *)(self + 0x14) + 0xc)) {
      if (param_2 == 0) {
        SetParent(*(HWND *)(self + 0xc),(HWND)0x0);
      }
      else if (*(int *)(param_2 + 0xc) != 0) {
        SetParent(*(HWND *)(self + 0xc),*(HWND *)(param_2 + 0xc));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436384  OWL::TWindow::SetDocTitle   (39 bytes)   [rtti:vtable virtual slot 14]
//   vtable slot 14; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::SetDocTitle(int self)

{
  undefined4 uVar1;
  
  if (*(int *)(self + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x14) + 8) + 0x38))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043661c  OWL::TWindow::EvCommand   (174 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::EvCommand(undefined4 *self,int param_2,HWND hWnd,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int unused;
  undefined4 unused2;
  HWND unused3;
  code *unused4;
  
  unused4 = (code *)0x0;
  if (hWnd == (HWND)0x0) {
    param_4 = 0;
  }
  else {
    unused3 = hWnd;
    puVar2 = (undefined4 *)FUN_00436e00(hWnd,self[0x1b]);
    if (puVar2 == (undefined4 *)0x0) {
      unused4 = FUN_0043568a;
      if (param_2 == 0) {
        uVar3 = FUN_00436428((int)self);
        return uVar3;
      }
    }
    else {
      param_2 = -1;
      self = puVar2;
    }
  }
  local_1c = param_4;
  unused2 = 0;
  unused = param_2;
  cVar1 = (**(code **)(self[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar3 = FUN_00436428((int)self);
  }
  else {
    uVar3 = FUN_00422b40(*self,(int)&local_1c);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004366cc  OWL::TWindow::EvNotify   (244 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::EvNotify(undefined4 *self,int param_2,undefined4 *param_3)

{
  char cVar1;
  HWND hWnd;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  int unused;
  undefined4 unused2;
  undefined4 tooltipEnabler [3];
  byte local_14;
  HWND hWnd2;
  code *unused3;
  
  if (param_3[2] == -0x208) {
    OWL::TTooltipEnabler::TTooltipEnabler(tooltipEnabler,(int)param_3,self[3]);
    puVar3 = tooltipEnabler;
    if (self[5] == 0) {
      hWnd = (HWND)self[3];
    }
    else if (self[3] == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent((HWND)self[3]);
    }
    FUN_00436810(self,hWnd,puVar3);
    if ((local_14 & 1) != 0) {
      return 0;
    }
  }
  unused3 = (code *)0x0;
  hWnd2 = (HWND)*param_3;
  puVar3 = (undefined4 *)FUN_00436e00(hWnd2,self[0x1b]);
  if (puVar3 == (undefined4 *)0x0) {
    unused3 = FUN_0043568a;
    if (param_2 == 0) {
      uVar4 = FUN_00436428((int)self);
      return uVar4;
    }
  }
  else {
    param_2 = -1;
    self = puVar3;
  }
  local_30 = param_3[2];
  unused = param_2;
  unused2 = 0;
  cVar1 = (**(code **)(self[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar4 = FUN_00436428((int)self);
  }
  else {
    uVar4 = FUN_00422b40(*self,(int)&local_30);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004367c0  OWL::TWindow::EvCommandEnable   (78 bytes)   [rtti:vtable virtual slot 20]
//   vtable slot 20; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::EvCommandEnable(undefined4 *self,int param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  unused = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  unused2 = 0;
  cVar1 = (**(code **)(self[2] + 0x84))();
  if (cVar1 != '\0') {
    FUN_00422b40(*self,(int)&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436984  OWL::TWindow::DefWindowProc   (28 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::DefWindowProc(int self,UINT msg,WPARAM wParam,LPARAM lParam)

{
  CallWindowProcA(*(WNDPROC *)(self + 0x40),*(HWND *)(self + 0xc),msg,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436aec  OWL::TWindow::WindowProc   (596 bytes, 2 ranges)   [rtti:vtable virtual slot 16]
//   vtable slot 16; slot name identified from OWL::TWindow's own implementation of that slot
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl OWL::TWindow::WindowProc(undefined4 *self,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_2c;
  undefined4 unused;
  undefined4 unused2;
  uint local_1c [3];
  int local_10;
  undefined *local_c;
  uint local_8;
  
  if (param_2 == 0x7fff) {
    (**(code **)(self[2] + 0x50))();
    uVar2 = 0;
  }
  else if (param_2 == 0x111) {
    uVar2 = (**(code **)(self[2] + 0x48))();
  }
  else if (param_2 == 0x4e) {
    if (DAT_0047e1a9 == '\0') {
      _DAT_0048caf5 = 0;
      _DAT_0048cafd = 0;
      DAT_0047e1a9 = '\x01';
    }
    _DAT_0048caf9 = 0xffffffff;
    uVar2 = (**(code **)(self[2] + 0x4c))();
  }
  else {
    if (*(int *)((int)self + 0x82) == 0) {
      if (self == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = self[2];
      }
      puVar3 = FUN_00468310((int)self,iVar4,0x403c70);
      *(undefined4 *)((int)self + 0x82) = puVar3[1];
    }
    local_8 = (*(uint *)((int)self + 0x82) ^ param_2) % 0x1f;
    local_1c[0] = param_2;
    local_1c[1] = 0;
    local_10 = 0;
    local_c = FUN_004356b3();
    uVar2 = FUN_00436a84((int)local_c,local_8,param_2,*(int *)((int)self + 0x82));
    if ((char)uVar2 == '\0') {
      cVar1 = (**(code **)(self[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_00436a54((int)local_c,local_8,*(undefined4 *)((int)self + 0x82),param_2,local_10,
                     local_1c[2] - (int)self);
        uVar2 = FUN_00422b40(*self,(int)local_1c);
        return uVar2;
      }
      FUN_00436a54((int)local_c,local_8,*(undefined4 *)((int)self + 0x82),param_2,0,0);
    }
    else {
      local_10 = *(int *)(local_c + local_8 * 0x10 + 4);
      if (local_10 != 0) {
        local_1c[2] = *(int *)(local_c + local_8 * 0x10 + 0xc) + (int)self;
        uVar2 = FUN_00422b40(*self,(int)local_1c);
        return uVar2;
      }
    }
    if ((*(byte *)(self + 0x1d) & 0x10) != 0) {
      local_2c = param_2;
      unused = param_3;
      unused2 = 0;
      cVar1 = (**(code **)(*(int *)(self[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_00422b40(*(undefined4 *)self[0x1b],(int)&local_2c);
        return uVar2;
      }
      cVar1 = (**(code **)(*(int *)(self[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_00422b40(*(undefined4 *)self[0x1b],(int)local_1c);
        return uVar2;
      }
    }
    uVar2 = (**(code **)(self[2] + 0x44))();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e58  OWL::TWindow::EvCreate   (29 bytes)   [owl:response-table message-handler]
//   WM_CREATE
void __cdecl OWL::TWindow::EvCreate(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x78))();
  *(uint *)(self + 0x74) = *(uint *)(self + 0x74) | 0x20;
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e78  OWL::TWindow::HoldFocusHWnd   (7 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __stdcall OWL::TWindow::HoldFocusHWnd(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e80  OWL::TWindow::EvKillFocus   (70 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl OWL::TWindow::EvKillFocus(int self)

{
  char cVar1;
  int iVar2;
  
  if ((*(byte *)(self + 0x74) & 0x20) != 0) {
    iVar2 = *(int *)(self + 0x14);
    while ((iVar2 != 0 && (cVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0x30))(), cVar1 == '\0'))) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436ec8  OWL::TWindow::EvSize   (181 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TWindow::EvSize(int self,int param_2)

{
  uint uVar1;
  tagRECT rect;
  
  FUN_00435bfc(self);
  if (((DAT_0047e1aa == '\0') && (*(int *)(self + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0047e1aa = 1;
    (**(code **)(**(int **)(self + 0x44) + 0xc))();
    (**(code **)(**(int **)(self + 0x44) + 0x10))();
    DAT_0047e1aa = '\0';
  }
  if (param_2 == 0) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004386c0(self,&rect);
    *(LONG *)(self + 0x28) = rect.right - rect.left;
    *(LONG *)(self + 0x2c) = rect.bottom - rect.top;
  }
  if (*(int *)(self + 0x14) != 0) {
    uVar1 = FUN_004385cc(self);
    if ((uVar1 & 4) == 0) {
      FUN_00438338(*(int *)(self + 0x14),0x210,5,*(LPARAM *)(self + 0xc));
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436f80  OWL::TWindow::EvMove   (143 bytes)   [owl:response-table message-handler]
//   WM_MOVE
void __cdecl OWL::TWindow::EvMove(int self)

{
  BOOL ok;
  uint windowLong;
  tagRECT rect;
  
  ok = IsIconic(*(HWND *)(self + 0xc));
  if (ok == 0) {
    ok = IsZoomed(*(HWND *)(self + 0xc));
    if (ok == 0) {
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004386c0(self,&rect);
      windowLong = GetWindowLongA(*(HWND *)(self + 0xc),-0x10);
      if ((((windowLong & 0x40000000) == 0x40000000) && (*(int *)(self + 0x14) != 0)) &&
         (*(int *)(*(int *)(self + 0x14) + 0xc) != 0)) {
        ScreenToClient(*(HWND *)(*(int *)(self + 0x14) + 0xc),(LPPOINT)&rect);
      }
      *(LONG *)(self + 0x20) = rect.left;
      *(LONG *)(self + 0x24) = rect.top;
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437010  OWL::TWindow::EvCompareitem   (54 bytes)   [owl:response-table message-handler]
//   WM_COMPAREITEM
void __cdecl OWL::TWindow::EvCompareitem(int self,undefined4 param_2,int param_3)

{
  LRESULT lResult;
  
  lResult = FUN_00436e00(*(HWND *)(param_3 + 8),*(LPARAM *)(self + 0x6c));
  if (lResult == 0) {
    FUN_00436428(self);
  }
  else {
    FUN_00438398(lResult,'\x01');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437048  OWL::TWindow::EvDeleteitem   (64 bytes)   [owl:response-table message-handler]
//   WM_DELETEITEM
void __cdecl OWL::TWindow::EvDeleteitem(int self,undefined4 param_2,int param_3)

{
  LRESULT lResult;
  
  lResult = FUN_00436e00(*(HWND *)(param_3 + 0xc),*(LPARAM *)(self + 0x6c));
  if ((*(int *)(param_3 + 0xc) == *(int *)(self + 0xc)) || (lResult == 0)) {
    FUN_00436428(self);
  }
  else {
    FUN_00438398(lResult,'\x01');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437088  OWL::TWindow::EvDrawItem   (94 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_DRAWITEM
void __cdecl OWL::TWindow::EvDrawItem(int self,undefined4 ctrlId,int *drawInfo)

{
  int *piVar1;
  LRESULT lResult;
  
  if (*drawInfo == 1) {
    piVar1 = FUN_00438f08((undefined4 *)drawInfo[0xb]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  else {
    lResult = FUN_00436e00((HWND)drawInfo[5],*(LPARAM *)(self + 0x6c));
    if ((drawInfo[5] != *(int *)(self + 0xc)) && (lResult != 0)) {
      FUN_00438398(lResult,'\x01');
      return;
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004370e8  OWL::TWindow::EvMeasureItem   (221 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_MEASUREITEM
void __cdecl OWL::TWindow::EvMeasureItem(undefined4 *self,WPARAM ctrlId,int *measureInfo)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 unused;
  undefined4 unused2;
  HWND hWnd;
  
  if (*measureInfo == 1) {
    piVar2 = FUN_00438f08((undefined4 *)measureInfo[5]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else {
    hWnd = GetDlgItem((HWND)self[3],measureInfo[1]);
    puVar3 = (undefined4 *)FUN_00436e00(hWnd,self[0x1b]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_0042e86c();
      if (puVar4 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_0043831c((int)self);
      }
      else if (self != puVar4) {
        puVar3 = puVar4;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[3] != 0) {
        FUN_00438338((int)puVar3,0x2c,ctrlId,(LPARAM)measureInfo);
        return;
      }
      local_18 = 0x2c;
      unused = 0;
      unused2 = 0;
      cVar1 = (**(code **)(puVar3[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_00422b40(*puVar3,(int)&local_18);
        return;
      }
    }
  }
  FUN_00436428((int)self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004371cc  OWL::TWindow::EvShared_4371cc   (164 bytes)   [owl:response-table message-handler]
//   one handler for 7 table entries: WM_CTLCOLORMSGBOX; WM_CTLCOLOREDIT; WM_CTLCOLORLISTBOX; WM_CTLCOLORBTN; WM_CTLCOLORDLG; WM_CTLCOLORSCROLLBAR; WM_CTLCOLORSTATIC
//   also: OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]
void __cdecl OWL::TWindow::EvShared_4371cc(int self)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(self + 8) + 0x84))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)(self + 8) + 0x44))();
  }
  else {
    ((code *)pcRam0000000c)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004372e8  OWL::TWindow::EvRegisteredMsg_4372e8   (185 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
LRESULT __cdecl OWL::TWindow::EvRegisteredMsg_4372e8(int self,int param_2,LPARAM lParam)

{
  SHORT SVar1;
  uint uVar2;
  HWND hWnd;
  LRESULT lResult;
  uint uVar4;
  
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  if (DAT_0047e1ab == '\0') {
    DAT_0048cb01 = GetDesktopWindow();
    DAT_0047e1ab = DAT_0047e1ab + '\x01';
  }
  hWnd = GetFocus();
  if (hWnd == (HWND)0x0) {
    lResult = FUN_00438338(self,0x20a,param_2 << 0x10 | uVar2 | uVar4,lParam);
  }
  else {
    do {
      lResult = SendMessageA(hWnd,0x20a,param_2 << 0x10 | uVar2 | uVar4,lParam);
      hWnd = GetParent(hWnd);
      if (lResult != 0) {
        return lResult;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      lResult = 0;
    } while (hWnd != DAT_0048cb01);
  }
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004373a4  OWL::TWindow::EvMouseWheel   (124 bytes)   [owl:response-table message-handler]
//   WM_MOUSEWHEEL
bool __cdecl OWL::TWindow::EvMouseWheel(int self,byte param_2,int param_3)

{
  uint nNumerator;
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xc) == 0) {
    if (*(int *)(self + 0x44) == 0) {
      iVar1 = FUN_00436428(self);
      bVar2 = iVar1 != 0;
    }
    else {
      nNumerator = FUN_00435718();
      if (nNumerator != 0xffffffff) {
        MulDiv(-param_3,nNumerator,0x78);
      }
      (**(code **)(**(int **)(self + 0x44) + 0x2c))();
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437420  OWL::TWindow::EvHScroll   (88 bytes)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TWindow::EvHScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl)

{
  uint windowLong;
  
  windowLong = GetWindowLongA(*(HWND *)(self + 0xc),-0x10);
  if (((windowLong & 0x100000) == 0) && (*(int *)(self + 0x44) == 0)) {
    FUN_00437270(self,scrollCode,thumbPos,hWndCtl);
  }
  else if (*(int *)(self + 0x44) == 0) {
    FUN_00436428(self);
  }
  else {
    (**(code **)(**(int **)(self + 0x44) + 0x28))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437478  OWL::TWindow::EvVScroll   (88 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TWindow::EvVScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl)

{
  uint windowLong;
  
  windowLong = GetWindowLongA(*(HWND *)(self + 0xc),-0x10);
  if (((windowLong & 0x200000) == 0) && (*(int *)(self + 0x44) == 0)) {
    FUN_00437270(self,scrollCode,thumbPos,hWndCtl);
  }
  else if (*(int *)(self + 0x44) == 0) {
    FUN_00436428(self);
  }
  else {
    (**(code **)(**(int **)(self + 0x44) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004374d0  OWL::TWindow::EvEraseBkgnd   (352 bytes)   [owl:response-table message-handler]
//   WM_ERASEBKGND
bool __cdecl OWL::TWindow::EvEraseBkgnd(int self,undefined4 hdc)

{
  int iVar1;
  tagRECT *pRect;
  LONG *pLVar3;
  undefined4 *sehChainHead;
  bool bVar4;
  byte bVar5;
  int x;
  int y;
  int local_70;
  int local_6c;
  tagRECT rect;
  COLORREF color;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  HDC tdc [9];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x47e714);
  if (*(int *)(self + 0x5c) == DAT_0048c654) {
    iVar1 = FUN_00436428(self);
    bVar4 = iVar1 != 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    if (*(int *)(self + 0x5c) != DAT_0048c658) {
      ehContext = 8;
      FUN_00421c0c((undefined4*)tdc,hdc);
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x20;
      FUN_0043c4b4(brush,(uint *)(self + 0x5c),'\x01');
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      FUN_00421cec((undefined4*)tdc,brush);
      OWL::TDC::vf8(&color,(int *)tdc,(uint *)(self + 0x5c));
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004386fc(self,&rect);
      pRect = &rect;
      pLVar3 = &x;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = pRect->left;
        pRect = (tagRECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      }
      PatBlt(tdc[0],x,y,local_70 - x,local_6c - y,0xf00021);
      FUN_00421e18((undefined4*)tdc);
      ehDtorCount = ehDtorCount + -2;
      OWL::TBrush::_dtor(brush,2);
      ehDtorCount = ehDtorCount + -1;
      OWL::TDC::_dtor((int *)tdc,2);
    }
    bVar4 = true;
    *sehChainHead = sehPrevFrame;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437630  OWL::TWindow::EvMsg_19   (178 bytes)   [owl:response-table message-handler]
//   message 0x0019
uint __cdecl OWL::TWindow::EvMsg_19(int self,HDC hdc,undefined4 param_3,int param_4)

{
  uint color;
  uint *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint brush [2];
  
  __InitExceptBlockLDTC(0x47e750);
  if ((((*(int *)(self + 0x5c) == DAT_0048c654) || (*(int *)(self + 0x5c) == DAT_0048c658)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    color = FUN_00436428(self);
    *sehChainHead = sehPrevFrame;
  }
  else {
    color = FUN_00420364((uint *)(self + 0x5c));
    SetBkColor(hdc,color);
    puVar2 = FUN_0043c4b4(brush,(uint *)(self + 0x5c),'\x01');
    color = *puVar2;
    OWL::TBrush::_dtor(brush,2);
    *sehChainHead = sehPrevFrame;
  }
  return color;
}

// ----------------------------------------------------------------------------------------------------
// 0x004376e4  OWL::TWindow::EvPaint   (190 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl OWL::TWindow::EvPaint(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int paintDC [26];
  
  __InitExceptBlockLDTC(0x47e784);
  if ((*(byte *)(self + 0x74) & 1) == 0) {
    FUN_0042eb8c(paintDC,*(HWND *)(self + 0xc));
    if (*(int *)(self + 0x44) != 0) {
      (**(code **)(**(int **)(self + 0x44) + 0x1c))();
    }
    (**(code **)(*(int *)(self + 8) + 0x54))();
    if (*(int *)(self + 0x44) != 0) {
      (**(code **)(**(int **)(self + 0x44) + 0x20))();
    }
    OWL::TPaintDC::_dtor(paintDC,2);
  }
  else {
    FUN_00436428(self);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377a4  OWL::TWindow::Paint   (5 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21; slot name identified from OWL::TWindow's own implementation of that slot
void __stdcall OWL::TWindow::Paint(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377ac  OWL::TWindow::EvSetCursor   (58 bytes)   [owl:response-table message-handler]
//   WM_SETCURSOR
bool __cdecl OWL::TWindow::EvSetCursor(int self,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == *(int *)(self + 0xc)) && (param_3 == 1)) && (*(int *)(self + 0x58) != 0)) {
    SetCursor(*(HCURSOR *)(self + 0x58));
    return true;
  }
  iVar1 = FUN_00436428(self);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377e8  OWL::TWindow::EvLButtonDown   (149 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TWindow::EvLButtonDown(int self)

{
  char cVar1;
  BOOL ok;
  tagMSG msg;
  
  if (*(int *)(self + 0x44) != 0) {
    cVar1 = (**(code **)(**(int **)(self + 0x44) + 0x38))();
    if (cVar1 != '\0') {
      msg.message = 0;
      SetCapture(*(HWND *)(self + 0xc));
      while (msg.message != 0x202) {
        cVar1 = (**(code **)(**(int **)(self + 0x44) + 0x38))();
        if ((cVar1 == '\0') || ((msg.message == 0x200 && (((byte)msg.wParam & 1) == 0))))
        break;
        ok = PeekMessageA(&msg,(HWND)0x0,0,0,1);
        if (ok != 0) {
          TranslateMessage(&msg);
          DispatchMessageA(&msg);
        }
        (**(code **)(**(int **)(self + 0x44) + 0x3c))();
      }
      ReleaseCapture();
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437894  OWL::TWindow::Destroy   (128 bytes)   [rtti:vtable virtual slot 6]
//   vtable slot 6; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::Destroy(int self,undefined4 param_2)

{
  BOOL ok;
  
  if (*(int *)(self + 0xc) != 0) {
    FUN_00438260(self,(undefined*)FUN_00437880);
    if ((*(byte *)(self + 0x75) & 0x20) != 0) {
      FUN_0043c050(*(int *)(self + 0x6c),param_2);
      *(uint *)(self + 0x74) = *(uint *)(self + 0x74) & 0xffffdfff;
      if ((*(int *)(self + 0x14) != 0) && (*(int *)(*(int *)(self + 0x14) + 0xc) != 0)) {
        SetFocus(*(HWND *)(*(int *)(self + 0x14) + 0xc));
      }
    }
    if (((*(byte *)(self + 0x74) & 1) == 0) &&
       (ok = DestroyWindow(*(HWND *)(self + 0xc)), ok != 0)) {
      *(undefined4 *)(self + 0xc) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437914  OWL::TWindow::GetWindowClass   (168 bytes)   [rtti:vtable virtual slot 28]
//   vtable slot 28; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::GetWindowClass(int self,undefined4 *param_2)

{
  HCURSOR hCursor;
  undefined4 uVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)(*(int *)(self + 0x70) + 8);
  param_2[5] = 0;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  param_2[6] = hCursor;
  if ((((*(uint *)(self + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(self + 0x5c) != DAT_0048c654)) && (*(int *)(self + 0x5c) != DAT_0048c658)) {
    param_2[7] = (*(uint *)(self + 0x5c) & 0xffff) + 1;
  }
  else {
    param_2[7] = 6;
  }
  param_2[8] = 0;
  uVar2 = (**(code **)(*(int *)(self + 8) + 0x74))();
  param_2[9] = uVar2;
  *param_2 = 8;
  param_2[1] = FUN_0042e88c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004379bc  OWL::TWindow::GetClassName   (115 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29; slot name identified from OWL::TWindow's own implementation of that slot
char * __cdecl OWL::TWindow::GetClassName(int self)

{
  if ((((*(uint *)(self + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(self + 0x5c) != DAT_0048c654)) && (*(int *)(self + 0x5c) != DAT_0048c658)) {
    sprintf(&DAT_0048cb05,(byte *)"%s:%X");
    return &DAT_0048cb05;
  }
  return "OWL_Window";
}

// ----------------------------------------------------------------------------------------------------
// 0x00437a5c  OWL::TWindow::PerformCreate   (77 bytes)   [rtti:vtable virtual slot 5]
//   vtable slot 5; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::PerformCreate(int self,HMENU hMenu)

{
  LPCSTR lpClassName;
  HWND hWnd;
  LPCSTR lpWindowName;
  DWORD dwStyle;
  int X;
  int Y;
  int nWidth;
  int nHeight;
  HINSTANCE hInstance;
  LPVOID lpParam;
  
  lpParam = *(LPVOID *)(self + 0x38);
  hInstance = *(HINSTANCE *)(*(int *)(self + 0x70) + 8);
  if (*(int *)(self + 0x14) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(*(int *)(self + 0x14) + 0xc);
  }
  nHeight = *(int *)(self + 0x2c);
  nWidth = *(int *)(self + 0x28);
  Y = *(int *)(self + 0x24);
  X = *(int *)(self + 0x20);
  dwStyle = *(DWORD *)(self + 0x18);
  lpWindowName = *(LPCSTR *)(self + 0x10);
  lpClassName = (LPCSTR)(**(code **)(*(int *)(self + 8) + 0x74))();
  hWnd = CreateWindowExA(*(DWORD *)(self + 0x1c),lpClassName,lpWindowName,dwStyle,X,Y,nWidth,
                           nHeight,hWnd,hMenu,hInstance,lpParam);
  *(HWND *)(self + 0xc) = hWnd;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437aac  OWL::TWindow::Create   (368 bytes)   [rtti:vtable virtual slot 4]
//   vtable slot 4; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::Create(int self)

{
  char cVar1;
  undefined4 in_EAX;
  HWND hWnd;
  LRESULT lResult;
  code *windowLong;
  int iVar5;
  undefined3 uVar6;
  HMENU hMenu;
  
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  if (*(int *)(self + 0xc) == 0) {
    hMenu = (HMENU)0x0;
    *(uint *)(self + 0x74) = *(uint *)(self + 0x74) & 0xfffffffd;
    if ((*(byte *)(self + 0x74) & 0x10) != 0) {
      FUN_00438670(self,0,0x40000,0);
    }
    if ((*(byte *)(self + 0x74) & 4) == 0) {
      cVar1 = (**(code **)(*(int *)(self + 8) + 0xc))();
      if (cVar1 == '\0') {
        FUN_004391f0(self,0x7fed);
      }
      else {
        FUN_0042e87c(self);
        FUN_00437a30(self);
        if (*(int *)(self + 0x30) == 0) {
          hMenu = *(HMENU *)(self + 0x34);
        }
        else {
          hMenu = FUN_0044fec8(*(int *)(self + 0x70),*(LPCSTR *)(self + 0x30));
        }
        (**(code **)(*(int *)(self + 8) + 0x14))();
      }
    }
    else {
      if (*(int *)(self + 0x14) == 0) {
        hWnd = (HWND)0x0;
      }
      else {
        hWnd = GetDlgItem(*(HWND *)(*(int *)(self + 0x14) + 0xc),*(int *)(self + 0x34));
      }
      *(HWND *)(self + 0xc) = hWnd;
    }
    if (*(int *)(self + 0xc) == 0) {
      if (*(int *)(self + 0x30) != 0) {
        DestroyMenu(hMenu);
      }
      FUN_004391f0(self,0x7feb);
    }
    lResult = FUN_00436e00(*(HWND *)(self + 0xc),*(LPARAM *)(self + 0x6c));
    if (lResult == 0) {
      FUN_00438458(self);
      FUN_004384cc(self,'\0');
      windowLong = (code *)GetWindowLongA(*(HWND *)(self + 0xc),-4);
      if (windowLong == FUN_0042e88c) {
        iVar5 = FUN_0042e86c();
        if (iVar5 == 0) {
          FUN_0042e87c(self);
        }
        FUN_00438338(self,0x4400,0,0);
        *(uint *)(self + 0x74) = *(uint *)(self + 0x74) | 0x20;
      }
      else {
        FUN_00437d74(self);
        iVar5 = FUN_0042e86c();
        if (self == iVar5) {
          FUN_0042e87c(0);
        }
        *(uint *)(self + 0x74) = *(uint *)(self + 0x74) | 0xa0;
      }
      lResult = (**(code **)(*(int *)(self + 8) + 0x78))();
    }
    uVar6 = (undefined3)((uint)lResult >> 8);
  }
  return CONCAT31(uVar6,1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c1c  OWL::TWindow::Execute   (16 bytes)   [rtti:vtable virtual slot 7]
//   vtable slot 7; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::Execute(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c2c  OWL::TWindow::DoExecute   (58 bytes)   [rtti:vtable virtual slot 8]
//   vtable slot 8; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::DoExecute(int self)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(self + 0x6c) != 0) {
    cVar1 = (**(code **)(*(int *)(self + 8) + 0x10))();
    if (cVar1 != '\0') {
      *(uint *)(self + 0x74) = *(uint *)(self + 0x74) | 0x2000;
      uVar2 = FUN_0043bf00(*(int *)(self + 0x6c),self,0x2000);
      return uVar2;
    }
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c68  OWL::TWindow::SetupWindow   (151 bytes)   [rtti:vtable virtual slot 30]
//   vtable slot 30; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::SetupWindow(int self)

{
  int *piVar1;
  
  if (*(int *)(self + 0x44) != 0) {
    (**(code **)(**(int **)(self + 0x44) + 4))();
    (**(code **)(**(int **)(self + 0x44) + 0x10))();
  }
  if (((*(byte *)(self + 0x74) & 0x10) != 0) &&
     (piVar1 = (int *)(**(code **)(*(int *)(*(int *)(self + 0x6c) + 0x1b) + 0x34))(),
     piVar1 != (int *)0x0)) {
    if (*(int *)(*piVar1 + 0x14) == 0) {
      (**(code **)(*(int *)(*piVar1 + 8) + 0x34))();
    }
    if (*(int *)(*piVar1 + 0xc) == 0) {
      FUN_00438618(*piVar1,0,0x8000000,0);
      (**(code **)(*(int *)(*piVar1 + 8) + 0x10))();
    }
  }
  FUN_00438164(self);
  (**(code **)(*(int *)(self + 8) + 0x5c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d00  OWL::TWindow::CleanupWindow   (5 bytes)   [rtti:vtable virtual slot 31]
//   vtable slot 31; slot name identified from OWL::TWindow's own implementation of that slot
void __stdcall OWL::TWindow::CleanupWindow(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d08  OWL::TWindow::Transfer   (76 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22; slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TWindow::Transfer(int self,int param_2)

{
  if (param_2 != 0) {
    FUN_00438260(self,(undefined*)FUN_004358a8);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d54  OWL::TWindow::TransferData   (30 bytes)   [rtti:vtable virtual slot 23]
//   vtable slot 23; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::TransferData(int self)

{
  if (*(int *)(self + 0x48) != 0) {
    (**(code **)(*(int *)(self + 8) + 0x58))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437dd4  OWL::TWindow::Register   (233 bytes)   [rtti:vtable virtual slot 3]
//   vtable slot 3; slot name identified from OWL::TWindow's own implementation of that slot
bool __cdecl OWL::TWindow::Register(int self)

{
  ATOM atom;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  WNDCLASSA wndClass;
  
  if (DAT_0047e1f2 == '\0') {
    puVar2 = FUN_0041b958();
    DAT_0047e1f1 = *(int *)(puVar2 + 0x10) != 2;
    DAT_0047e1f2 = DAT_0047e1f2 + '\x01';
  }
  if (DAT_0047e1f1 == '\0') {
    bVar4 = false;
  }
  else {
    (**(code **)(*(int *)(self + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    bVar4 = iVar3 != 0;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(self + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(self + 8) + 0x70))();
      (**(code **)(*(int *)(self + 8) + 0x74))();
      iVar3 = FUN_004502e8();
      if (iVar3 == 0) {
        atom = RegisterClassA(&wndClass);
        return atom != 0;
      }
    }
  }
  return true;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437ec0  OWL::TWindow::CanClose   (34 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; slot name identified from OWL::TWindow's own implementation of that slot
bool __cdecl OWL::TWindow::CanClose(int self)

{
  int iVar1;
  
  iVar1 = FUN_00438220(self,(undefined*)FUN_004358d8);
  return iVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437ee4  OWL::TWindow::CloseWindow   (64 bytes)   [rtti:vtable virtual slot 9]
//   vtable slot 9; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::CloseWindow(int self,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(byte *)(self + 0x74) & 0x10) == 0) {
    iVar2 = self;
    uVar1 = (**(code **)(*(int *)(self + 8) + 0x3c))();
  }
  else {
    iVar2 = *(int *)(self + 0x6c);
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x1b) + 4))();
  }
  if ((char)uVar1 != '\0') {
    (**(code **)(*(int *)(self + 8) + 0x18))(uVar1,*(int *)(self + 8),iVar2,self,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437f24  OWL::TWindow::EvClose   (82 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl OWL::TWindow::EvClose(int self)

{
  if ((*(byte *)(self + 0x74) & 1) == 0) {
    (**(code **)(*(int *)(self + 8) + 0x24))();
    if ((*(int *)(self + 0xc) == 0) && ((*(byte *)(self + 0x75) & 8) != 0)) {
      FUN_0043babc(*(int *)(self + 0x6c),self);
    }
    return;
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437f78  OWL::TWindow::EvDestroy   (77 bytes)   [owl:response-table message-handler]
//   WM_DESTROY
void __cdecl OWL::TWindow::EvDestroy(int self)

{
  *(uint *)(self + 0x74) = *(uint *)(self + 0x74) & 0xffffffdf;
  (**(code **)(*(int *)(self + 8) + 0x7c))();
  if ((((*(byte *)(self + 0x74) & 1) == 0) && ((*(byte *)(self + 0x74) & 0x10) != 0)) &&
     (*(char *)(*(int *)(self + 0x6c) + 0x1a) != '\0')) {
    PostQuitMessage(0);
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437fc8  OWL::TWindow::EvNCDestroy   (22 bytes)   [owl:response-table message-handler]
//   WM_NCDESTROY
void __cdecl OWL::TWindow::EvNCDestroy(int self)

{
  FUN_00436428(self);
  *(undefined4 *)(self + 0xc) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437fe0  OWL::TWindow::EvQueryEndSession   (82 bytes)   [owl:response-table message-handler]
//   WM_QUERYENDSESSION
uint __cdecl OWL::TWindow::EvQueryEndSession(int self)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(self + 0x74) & 1) != 0) {
    iVar1 = FUN_00436428(self);
    return (uint)(iVar1 != 0);
  }
  if ((*(byte *)(self + 0x74) & 0x10) != 0) {
    uVar2 = (**(code **)(*(int *)(*(int *)(self + 0x6c) + 0x1b) + 4))();
    return uVar2;
  }
  uVar2 = (**(code **)(*(int *)(self + 8) + 0x3c))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438034  OWL::TWindow::EvEndSession   (60 bytes)   [owl:response-table message-handler]
//   WM_ENDSESSION
void __cdecl OWL::TWindow::EvEndSession(int self,char param_2)

{
  if (param_2 != '\0') {
    _ThrowExceptionLDTC((uint *)&DAT_00438070,(undefined4 *)&GHIDRA_STACK(0xfffffffb),0,&LAB_004380ac,1,0,0,0);
    return;
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004380b4  OWL::TWindow::EvChildinvalid   (22 bytes)   [owl:response-table message-handler]
//   WM_CHILDINVALID
void __cdecl OWL::TWindow::EvChildinvalid(undefined4 self,HWND hWnd)

{
  SendMessageA(hWnd,0x7ffe,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004387b4  OWL::TWindow::ShowWindow   (173 bytes, 2 ranges)   [rtti:vtable virtual slot 25]
//   vtable slot 25; slot name identified from OWL::TWindow's own implementation of that slot
bool __cdecl OWL::TWindow::ShowWindow(int self,int cmdShow)

{
  int iVar1;
  BOOL ok;
  bool bVar3;
  
  if (DAT_0047e14c == '\0') {
    if (*(int *)(self + 0xc) == 0) {
      switch(cmdShow) {
      case 0:
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) & 0xefffffff;
        break;
      case 1:
      case 9:
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x10000000;
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) & 0xdeffffff;
        break;
      case 2:
      case 6:
      case 7:
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x10000000;
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x20000000;
        break;
      case 3:
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x10000000;
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x1000000;
        break;
      case 4:
      case 5:
      case 8:
        *(uint *)(self + 0x18) = *(uint *)(self + 0x18) | 0x10000000;
      }
      bVar3 = true;
    }
    else if (cmdShow == 6) {
      iVar1 = FUN_00436d48(self,0x112,0xf020,0);
      bVar3 = iVar1 != 0;
    }
    else {
      ok = ShowWindow(*(HWND *)(self + 0xc),cmdShow);
      bVar3 = ok != 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004389ac  OWL::TWindow::EvInitMenuPopup   (324 bytes)   [owl:response-table message-handler]
//   WM_INITMENUPOPUP
void __cdecl OWL::TWindow::EvInitMenuPopup(int self,HMENU hPopupMenu,undefined4 index,char sysMenu)

{
  HMENU hMenu;
  UINT UVar2;
  int nPos;
  undefined4 *sehChainHead;
  undefined **menuItemEnabler [3];
  undefined4 unused;
  HMENU unused2;
  int unused3;
  int pos;
  int itemCount;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 menu [3];
  
  __InitExceptBlockLDTC(0x47e7c4);
  if ((*(byte *)(self + 0x74) & 1) == 0) {
    if ((sysMenu == '\0') && (hPopupMenu != (HMENU)0x0)) {
      itemCount = GetMenuItemCount(hPopupMenu);
      nPos = 0;
      if (0 < itemCount) {
        do {
          hMenu = GetMenu(*(HWND *)(self + 0xc));
          if (hPopupMenu == hMenu) {
            UVar2 = GetMenuItemID(hPopupMenu,nPos);
          }
          else {
            ehContext = 8;
            OWL::TMenu::TMenu_42bc04(menu,hPopupMenu,0);
            ehDtorCount = ehDtorCount + 1;
            ehContext = 0x14;
            UVar2 = FUN_0042bce8((int)menu,nPos);
            ehDtorCount = ehDtorCount + -1;
            OWL::TMenu::_dtor(menu,2);
            ehContext = 0;
          }
          if ((UVar2 != 0) && ((short)UVar2 != -1)) {
            if ((UVar2 == 0x7d01) || (0xf000 < UVar2)) break;
            pos = nPos;
            OWL::TCommandEnabler::TCommandEnabler((undefined4*)menuItemEnabler,UVar2,*(undefined4 *)(self + 0xc));
            menuItemEnabler[0] = &OWL::TMenuItemEnabler::vftable;
            unused2 = hPopupMenu;
            unused3 = pos;
            UVar2 = GetMenuItemID(hPopupMenu,pos);
            if (UVar2 == 0xffffffff) {
              unused = 2;
            }
            (**(code **)(*(int *)(self + 8) + 0x50))();
          }
          nPos = nPos + 1;
        } while (nPos < itemCount);
      }
    }
  }
  else {
    FUN_00436428(self);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438af0  OWL::TWindow::EvContextMenu   (134 bytes)   [owl:response-table message-handler]
//   WM_CONTEXTMENU
void __cdecl OWL::TWindow::EvContextMenu(int self,undefined4 hWndChild,int x,int y)

{
  int x2;
  int unused;
  int unused2;
  HWND hWnd;
  int unused3;
  int unused4;
  int unused5;
  
  if (*(int *)(self + 0x60) == 0) {
    FUN_00436428(self);
  }
  else {
    unused5 = x;
    unused3 = x;
    unused4 = y;
    x2 = x;
    unused = y;
    unused2 = self;
    FUN_00436d48(**(int **)(*(int *)(self + 0x6c) + 0x2b),0x7ef1,0,&x2);
    hWnd = *(HWND *)(self + 0xc);
    TrackPopupMenu(*(HMENU *)(*(int *)(self + 0x60) + 4),2,x,y,0,hWnd,(RECT *)0x0
                  );
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438b78  OWL::TWindow::EvEnteridle   (86 bytes)   [owl:response-table message-handler]
//   WM_ENTERIDLE
void __cdecl OWL::TWindow::EvEnteridle(int self,int param_2,HWND hWnd)

{
  LRESULT lResult;
  
  if (param_2 == 0) {
    if ((*(byte *)(self + 0x74) & 0x10) == 0) {
      lResult = FUN_00436e00(hWnd,*(LPARAM *)(self + 0x6c));
      if (lResult != 0) {
        (**(code **)(*(int *)(lResult + 8) + 0x2c))();
      }
    }
    else {
      (**(code **)(*(int *)(self + 8) + 0x2c))();
    }
  }
  FUN_00436428(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d94  OWL::TWindow::EnableTooltip   (151 bytes)   [rtti:vtable virtual slot 2]
//   vtable slot 2; slot name identified from OWL::TWindow's own implementation of that slot
void __cdecl OWL::TWindow::EnableTooltip(int self,byte wParam)

{
  int *tooltip;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e7f4);
  if (*(int *)(self + 100) == 0) {
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,self,'\x01',0);
    }
    FUN_00438e2c(self,tooltip);
  }
  else if (*(int *)(**(int **)(self + 100) + 0xc) != 0) {
    FUN_00438338(**(int **)(self + 100),0x401,(uint)wParam,0);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
