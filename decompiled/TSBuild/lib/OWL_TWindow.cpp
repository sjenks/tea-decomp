// TSBuild.exe — runtime / library code "OWL_TWindow"
// 61 functions, 0x0042fcf4..0x00438d94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042fcf4  OWL::TWindow::Streamer::vf1   (823 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TWindow::Streamer::vf1(int param_1,int *param_2,int param_3)

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
  int *local_50;
  uint local_4c;
  int *local_48;
  undefined4 *local_44;
  char local_3d;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
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
  
  iVar1 = *(int *)(param_1 + 8);
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
        local_34 = param_2;
        FUN_0042fc7c(param_2,local_30);
        local_38 = (undefined4 *)(iVar1 + 0x7e);
        local_3c = param_2;
        FUN_0042fc7c(param_2,local_38);
      }
      else {
        FUN_004381f0(*(int *)(iVar1 + 0x14),iVar1);
        local_3d = DAT_0047cd04;
        DAT_0047cd04 = 1;
        local_44 = (undefined4 *)(iVar1 + 0x7a);
        local_48 = param_2;
        FUN_0042fc7c(param_2,local_44);
        DAT_0047cd04 = local_3d;
        if (local_3d != '\0') {
          DAT_0047cd04 = 0;
          local_50 = param_2;
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
void __cdecl OWL::TWindow::Streamer::vf2(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  char local_31;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 8);
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
  local_8 = param_2;
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
        uVar4 = GetWindowLongA(*(HWND *)(iVar1 + 0xc),-0x10);
        uVar6 = uVar6 | uVar4 & 0x39000000;
      }
      local_14 = *(undefined4 *)(iVar1 + 0x38);
      local_18 = *(undefined4 *)(iVar1 + 0x2c);
      local_1c = *(undefined4 *)(iVar1 + 0x28);
      local_20 = *(undefined4 *)(iVar1 + 0x24);
      local_24 = *(undefined4 *)(iVar1 + 0x20);
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
    local_30 = *(undefined4 *)(iVar1 + 0x34);
    FUN_0042df1c(param_2);
    piVar5 = FUN_004394f4(param_2,puVar7);
    FUN_004394f4(piVar5,puVar8);
    FUN_0042dee0(param_2);
    FUN_0042fccc(param_2,*(int *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) != 0) {
      local_31 = DAT_0047cd05;
      DAT_0047cd05 = 1;
      local_38 = *(int *)(iVar1 + 0x7a);
      local_3c = param_2;
      FUN_0042fccc(param_2,local_38);
      DAT_0047cd05 = local_31;
      if (local_31 != '\0') {
        DAT_0047cd05 = 0;
        local_40 = FUN_004380cc(*(int *)(iVar1 + 0x14));
        local_40 = local_40 + -1;
        local_44 = param_2;
        FUN_0042df1c(param_2);
        for (iVar2 = *(int *)(iVar1 + 0x7e); iVar1 != iVar2; iVar2 = *(int *)(iVar2 + 0x7e)) {
          FUN_0042fccc(param_2,iVar2);
        }
        DAT_0047cd05 = '\x01';
      }
    }
    FUN_004529cc(param_2,*(int **)(iVar1 + 0x44));
    puVar8 = (undefined4 *)(iVar1 + 0x54);
    local_48 = param_2;
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
//   also: OWL::TWindow::vf33 [rtti:vtable]
undefined4 __cdecl OWL::TWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(*param_1,(int *)&OWL::TWindow::__entries,param_2,param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435f74  OWL::TWindow::~TWindow   (500 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TWindow::_dtor
void __cdecl OWL::TWindow::_dtor(undefined4 *param_1,uint param_2)

{
  code *dwNewLong;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47e67c);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &OWL::TWindow::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_0047ce48;
    *(undefined ***)param_1[1] = &PTR_LAB_0047ce54;
    if (param_1[3] != 0) {
      if (param_1[0x10] == 0) {
        dwNewLong = DefWindowProcA;
      }
      else {
        dwNewLong = (code *)param_1[0x10];
      }
      SetWindowLongA((HWND)param_1[3],-4,(LONG)dwNewLong);
    }
    FUN_0042ea7c((int)param_1);
    param_1[0x1a] = 0;
    FUN_00436ac4(*(int *)((int)param_1 + 0x82));
    FUN_00438260((int)param_1,(undefined*)FUN_00435630);
    if ((param_1[3] != 0) && ((*(byte *)(param_1 + 0x1d) & 1) == 0)) {
      (**(code **)(param_1[2] + 0x18))();
    }
    if (param_1[5] != 0) {
      (**(code **)(*(int *)(param_1[5] + 8) + 0x80))();
    }
    if (param_1[0x1b] != 0) {
      FUN_0043bafc(param_1[0x1b],(int)param_1);
    }
    if ((short)((uint)param_1[0xc] >> 0x10) != 0) {
      operator_delete_array();
    }
    FUN_004363ac((int)param_1,0);
    if ((short)((uint)param_1[4] >> 0x10) != 0) {
      operator_delete_array();
    }
    param_1[4] = 0;
    if ((param_1[0x16] != 0) && (param_1[0x14] != 0)) {
      FUN_0043888c((int)param_1,0,0);
    }
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])();
    }
    if ((param_2 & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x8e),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436168  OWL::TWindow::vf10   (158 bytes)   [rtti:vtable virtual slot 10]
bool __cdecl OWL::TWindow::vf10(int param_1,LPMSG param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 4))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      if (param_2->hwnd != *(HWND *)(param_1 + 0xc)) {
        BVar2 = IsChild(*(HWND *)(param_1 + 0xc),param_2->hwnd);
        if (BVar2 == 0) goto LAB_004361e2;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_00438338(*piVar1,0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_004361e2:
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = TranslateAcceleratorA(*(HWND *)(param_1 + 0xc),*(HACCEL *)(param_1 + 0x4c),param_2);
  }
  return iVar3 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436208  OWL::TWindow::vf11   (122 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TWindow::vf11(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
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
      if (*(int *)(param_1 + 0x7a) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
      }
    } while (iVar4 != iVar2);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436284  OWL::TWindow::EvSysColorChange   (32 bytes)   [owl:response-table message-handler]
//   WM_SYSCOLORCHANGE
void __cdecl OWL::TWindow::EvSysColorChange(int param_1)

{
  FUN_004383d0(param_1,0x15,0,0);
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004362a4  OWL::TWindow::vf32   (81 bytes)   [rtti:vtable virtual slot 32]
void __cdecl OWL::TWindow::vf32(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x7a) != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x7a);
        (*(int *)(param_1 + 0x7a) != *(int *)(iVar1 + 0x7e) && (param_2 != *(int *)(iVar1 + 0x7e)));
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    if (param_2 == *(int *)(iVar1 + 0x7e)) {
      if (iVar1 == *(int *)(iVar1 + 0x7e)) {
        *(undefined4 *)(param_1 + 0x7a) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x7a) == *(int *)(iVar1 + 0x7e)) {
        *(int *)(param_1 + 0x7a) = iVar1;
      }
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(*(int *)(iVar1 + 0x7e) + 0x7e);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004362f8  OWL::TWindow::vf13   (140 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TWindow::vf13(int param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_2 != *(int *)(param_1 + 0x14)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x80))();
    }
    *(undefined4 *)(param_1 + 0x7e) = 0;
    *(int *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_004381f0(*(int *)(param_1 + 0x14),param_1);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (pHVar1 != *(HWND *)(*(int *)(param_1 + 0x14) + 0xc)) {
      if (param_2 == 0) {
        SetParent(*(HWND *)(param_1 + 0xc),(HWND)0x0);
      }
      else if (*(int *)(param_2 + 0xc) != 0) {
        SetParent(*(HWND *)(param_1 + 0xc),*(HWND *)(param_2 + 0xc));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436384  OWL::TWindow::vf14   (39 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TWindow::vf14(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x38))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043661c  OWL::TWindow::vf18   (174 bytes)   [rtti:vtable virtual slot 18]
undefined4 __cdecl OWL::TWindow::vf18(undefined4 *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  undefined4 local_10;
  HWND local_c;
  code *local_8;
  
  local_8 = (code *)0x0;
  if (param_3 == (HWND)0x0) {
    param_4 = 0;
  }
  else {
    local_c = param_3;
    puVar2 = (undefined4 *)FUN_00436e00(param_3,param_1[0x1b]);
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = FUN_0043568a;
      if (param_2 == 0) {
        uVar3 = FUN_00436428((int)param_1);
        return uVar3;
      }
    }
    else {
      param_2 = -1;
      param_1 = puVar2;
    }
  }
  local_1c = param_4;
  local_10 = 0;
  local_18 = param_2;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar3 = FUN_00436428((int)param_1);
  }
  else {
    uVar3 = FUN_00422b40(*param_1,(int)&local_1c);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004366cc  OWL::TWindow::vf19   (244 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TWindow::vf19(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20 [3];
  byte local_14;
  HWND local_c;
  code *local_8;
  
  if (param_3[2] == -0x208) {
    FUN_004308d4(local_20,(int)param_3,param_1[3]);
    puVar3 = local_20;
    if (param_1[5] == 0) {
      pHVar2 = (HWND)param_1[3];
    }
    else if (param_1[3] == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = GetParent((HWND)param_1[3]);
    }
    FUN_00436810(param_1,pHVar2,puVar3);
    if ((local_14 & 1) != 0) {
      return 0;
    }
  }
  local_8 = (code *)0x0;
  local_c = (HWND)*param_3;
  puVar3 = (undefined4 *)FUN_00436e00(local_c,param_1[0x1b]);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = FUN_0043568a;
    if (param_2 == 0) {
      uVar4 = FUN_00436428((int)param_1);
      return uVar4;
    }
  }
  else {
    param_2 = -1;
    param_1 = puVar3;
  }
  local_30 = param_3[2];
  local_2c = param_2;
  local_24 = 0;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar4 = FUN_00436428((int)param_1);
  }
  else {
    uVar4 = FUN_00422b40(*param_1,(int)&local_30);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004367c0  OWL::TWindow::vf20   (78 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TWindow::vf20(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  local_8 = 0;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 != '\0') {
    FUN_00422b40(*param_1,(int)&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436984  OWL::TWindow::vf17   (28 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TWindow::vf17(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  CallWindowProcA(*(WNDPROC *)(param_1 + 0x40),*(HWND *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436aec  OWL::TWindow::vf16   (596 bytes, 2 ranges)   [rtti:vtable virtual slot 16]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl OWL::TWindow::vf16(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_20;
  uint local_1c [3];
  int local_10;
  undefined *local_c;
  uint local_8;
  
  if (param_2 == 0x7fff) {
    (**(code **)(param_1[2] + 0x50))();
    uVar2 = 0;
  }
  else if (param_2 == 0x111) {
    uVar2 = (**(code **)(param_1[2] + 0x48))();
  }
  else if (param_2 == 0x4e) {
    if (DAT_0047e1a9 == '\0') {
      _DAT_0048caf5 = 0;
      _DAT_0048cafd = 0;
      DAT_0047e1a9 = '\x01';
    }
    _DAT_0048caf9 = 0xffffffff;
    uVar2 = (**(code **)(param_1[2] + 0x4c))();
  }
  else {
    if (*(int *)((int)param_1 + 0x82) == 0) {
      if (param_1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[2];
      }
      puVar3 = FUN_00468310((int)param_1,iVar4,0x403c70);
      *(undefined4 *)((int)param_1 + 0x82) = puVar3[1];
    }
    local_8 = (*(uint *)((int)param_1 + 0x82) ^ param_2) % 0x1f;
    local_1c[0] = param_2;
    local_1c[1] = 0;
    local_10 = 0;
    local_c = FUN_004356b3();
    uVar2 = FUN_00436a84((int)local_c,local_8,param_2,*(int *)((int)param_1 + 0x82));
    if ((char)uVar2 == '\0') {
      cVar1 = (**(code **)(param_1[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_00436a54((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,local_10,
                     local_1c[2] - (int)param_1);
        uVar2 = FUN_00422b40(*param_1,(int)local_1c);
        return uVar2;
      }
      FUN_00436a54((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,0,0);
    }
    else {
      local_10 = *(int *)(local_c + local_8 * 0x10 + 4);
      if (local_10 != 0) {
        local_1c[2] = *(int *)(local_c + local_8 * 0x10 + 0xc) + (int)param_1;
        uVar2 = FUN_00422b40(*param_1,(int)local_1c);
        return uVar2;
      }
    }
    if ((*(byte *)(param_1 + 0x1d) & 0x10) != 0) {
      local_2c = param_2;
      local_28 = param_3;
      local_20 = 0;
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_00422b40(*(undefined4 *)param_1[0x1b],(int)&local_2c);
        return uVar2;
      }
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_00422b40(*(undefined4 *)param_1[0x1b],(int)local_1c);
        return uVar2;
      }
    }
    uVar2 = (**(code **)(param_1[2] + 0x44))();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e58  OWL::TWindow::EvCreate   (29 bytes)   [owl:response-table message-handler]
//   WM_CREATE
void __cdecl OWL::TWindow::EvCreate(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x78))();
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20;
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e78  OWL::TWindow::vf12   (7 bytes)   [rtti:vtable virtual slot 12]
undefined4 __stdcall OWL::TWindow::vf12(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436e80  OWL::TWindow::EvKillFocus   (70 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl OWL::TWindow::EvKillFocus(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 0x20) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    while ((iVar2 != 0 && (cVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0x30))(), cVar1 == '\0'))) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436ec8  OWL::TWindow::EvSize   (181 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TWindow::EvSize(int param_1,int param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  FUN_00435bfc(param_1);
  if (((DAT_0047e1aa == '\0') && (*(int *)(param_1 + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0047e1aa = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    DAT_0047e1aa = '\0';
  }
  if (param_2 == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004386c0(param_1,&local_14);
    *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
    *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_004385cc(param_1);
    if ((uVar1 & 4) == 0) {
      FUN_00438338(*(int *)(param_1 + 0x14),0x210,5,*(LPARAM *)(param_1 + 0xc));
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436f80  OWL::TWindow::EvMove   (143 bytes)   [owl:response-table message-handler]
//   WM_MOVE
void __cdecl OWL::TWindow::EvMove(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  tagRECT local_14;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0xc));
  if (BVar1 == 0) {
    BVar1 = IsZoomed(*(HWND *)(param_1 + 0xc));
    if (BVar1 == 0) {
      local_14.left = 0;
      local_14.top = 0;
      local_14.right = 0;
      local_14.bottom = 0;
      FUN_004386c0(param_1,&local_14);
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
      if ((((uVar2 & 0x40000000) == 0x40000000) && (*(int *)(param_1 + 0x14) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0)) {
        ScreenToClient(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc),(LPPOINT)&local_14);
      }
      *(LONG *)(param_1 + 0x20) = local_14.left;
      *(LONG *)(param_1 + 0x24) = local_14.top;
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437010  OWL::TWindow::EvCompareitem   (54 bytes)   [owl:response-table message-handler]
//   WM_COMPAREITEM
void __cdecl OWL::TWindow::EvCompareitem(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_00436e00(*(HWND *)(param_3 + 8),*(LPARAM *)(param_1 + 0x6c));
  if (LVar1 == 0) {
    FUN_00436428(param_1);
  }
  else {
    FUN_00438398(LVar1,'\x01');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437048  OWL::TWindow::EvDeleteitem   (64 bytes)   [owl:response-table message-handler]
//   WM_DELETEITEM
void __cdecl OWL::TWindow::EvDeleteitem(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_00436e00(*(HWND *)(param_3 + 0xc),*(LPARAM *)(param_1 + 0x6c));
  if ((*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc)) || (LVar1 == 0)) {
    FUN_00436428(param_1);
  }
  else {
    FUN_00438398(LVar1,'\x01');
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437088  OWL::TWindow::EvDrawItem   (94 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_DRAWITEM
void __cdecl OWL::TWindow::EvDrawItem(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  LRESULT LVar2;
  
  if (*param_3 == 1) {
    piVar1 = FUN_00438f08((undefined4 *)param_3[0xb]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  else {
    LVar2 = FUN_00436e00((HWND)param_3[5],*(LPARAM *)(param_1 + 0x6c));
    if ((param_3[5] != *(int *)(param_1 + 0xc)) && (LVar2 != 0)) {
      FUN_00438398(LVar2,'\x01');
      return;
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004370e8  OWL::TWindow::EvMeasureItem   (221 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_MEASUREITEM
void __cdecl OWL::TWindow::EvMeasureItem(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  HWND local_8;
  
  if (*param_3 == 1) {
    piVar2 = FUN_00438f08((undefined4 *)param_3[5]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else {
    local_8 = GetDlgItem((HWND)param_1[3],param_3[1]);
    puVar3 = (undefined4 *)FUN_00436e00(local_8,param_1[0x1b]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_0042e86c();
      if (puVar4 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_0043831c((int)param_1);
      }
      else if (param_1 != puVar4) {
        puVar3 = puVar4;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[3] != 0) {
        FUN_00438338((int)puVar3,0x2c,param_2,(LPARAM)param_3);
        return;
      }
      local_18 = 0x2c;
      local_14 = 0;
      local_c = 0;
      cVar1 = (**(code **)(puVar3[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_00422b40(*puVar3,(int)&local_18);
        return;
      }
    }
  }
  FUN_00436428((int)param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004371cc  OWL::TWindow::EvShared_4371cc   (164 bytes)   [owl:response-table message-handler]
//   one handler for 7 table entries: WM_CTLCOLORMSGBOX; WM_CTLCOLOREDIT; WM_CTLCOLORLISTBOX; WM_CTLCOLORBTN; WM_CTLCOLORDLG; WM_CTLCOLORSCROLLBAR; WM_CTLCOLORSTATIC
//   also: OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]; OWL::TWindow::EvShared_4371cc [owl:response-table]
void __cdecl OWL::TWindow::EvShared_4371cc(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x84))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  else {
    ((code *)pcRam0000000c)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004372e8  OWL::TWindow::EvRegisteredMsg_4372e8   (185 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
LRESULT __cdecl OWL::TWindow::EvRegisteredMsg_4372e8(int param_1,int param_2,LPARAM param_3)

{
  SHORT SVar1;
  uint uVar2;
  HWND hWnd;
  LRESULT LVar3;
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
    LVar3 = FUN_00438338(param_1,0x20a,param_2 << 0x10 | uVar2 | uVar4,param_3);
  }
  else {
    do {
      LVar3 = SendMessageA(hWnd,0x20a,param_2 << 0x10 | uVar2 | uVar4,param_3);
      hWnd = GetParent(hWnd);
      if (LVar3 != 0) {
        return LVar3;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      LVar3 = 0;
    } while (hWnd != DAT_0048cb01);
  }
  return LVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004373a4  OWL::TWindow::EvMouseWheel   (124 bytes)   [owl:response-table message-handler]
//   WM_MOUSEWHEEL
bool __cdecl OWL::TWindow::EvMouseWheel(int param_1,byte param_2,int param_3)

{
  uint nNumerator;
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xc) == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar1 = FUN_00436428(param_1);
      bVar2 = iVar1 != 0;
    }
    else {
      nNumerator = FUN_00435718();
      if (nNumerator != 0xffffffff) {
        MulDiv(-param_3,nNumerator,0x78);
      }
      (**(code **)(**(int **)(param_1 + 0x44) + 0x2c))();
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
void __cdecl OWL::TWindow::EvHScroll(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  uint uVar1;
  
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  if (((uVar1 & 0x100000) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    FUN_00437270(param_1,param_2,param_3,param_4);
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00436428(param_1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x28))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437478  OWL::TWindow::EvVScroll   (88 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TWindow::EvVScroll(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  uint uVar1;
  
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  if (((uVar1 & 0x200000) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    FUN_00437270(param_1,param_2,param_3,param_4);
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00436428(param_1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004374d0  OWL::TWindow::EvEraseBkgnd   (352 bytes)   [owl:response-table message-handler]
//   WM_ERASEBKGND
bool __cdecl OWL::TWindow::EvEraseBkgnd(int param_1,undefined4 param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  byte bVar5;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  tagRECT local_68;
  COLORREF local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  uint local_30 [2];
  HDC local_28 [9];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x47e714);
  if (*(int *)(param_1 + 0x5c) == DAT_0048c654) {
    iVar1 = FUN_00436428(param_1);
    bVar4 = iVar1 != 0;
    *in_FS_OFFSET = local_54;
  }
  else {
    if (*(int *)(param_1 + 0x5c) != DAT_0048c658) {
      local_44 = 8;
      FUN_00421c0c((undefined4*)local_28,param_2);
      local_38 = local_38 + 1;
      local_44 = 0x20;
      FUN_0043c4b4(local_30,(uint *)(param_1 + 0x5c),'\x01');
      local_38 = local_38 + 2;
      local_44 = 0x14;
      FUN_00421cec((undefined4*)local_28,local_30);
      OWL::TDC::vf8(&local_58,(int *)local_28,(uint *)(param_1 + 0x5c));
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      FUN_004386fc(param_1,&local_68);
      ptVar2 = &local_68;
      pLVar3 = &local_78;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar5 * -2 + 1) * 4);
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      }
      PatBlt(local_28[0],local_78,local_74,local_70 - local_78,local_6c - local_74,0xf00021);
      FUN_00421e18((undefined4*)local_28);
      local_38 = local_38 + -2;
      OWL::TBrush::_dtor(local_30,2);
      local_38 = local_38 + -1;
      OWL::TDC::_dtor((int *)local_28,2);
    }
    bVar4 = true;
    *in_FS_OFFSET = local_54;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437630  OWL::TWindow::EvMsg_19   (178 bytes)   [owl:response-table message-handler]
//   message 0x0019
uint __cdecl OWL::TWindow::EvMsg_19(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47e750);
  if ((((*(int *)(param_1 + 0x5c) == DAT_0048c654) || (*(int *)(param_1 + 0x5c) == DAT_0048c658)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    uVar1 = FUN_00436428(param_1);
    *in_FS_OFFSET = local_30;
  }
  else {
    uVar1 = FUN_00420364((uint *)(param_1 + 0x5c));
    SetBkColor(param_2,uVar1);
    puVar2 = FUN_0043c4b4(local_c,(uint *)(param_1 + 0x5c),'\x01');
    uVar1 = *puVar2;
    OWL::TBrush::_dtor(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004376e4  OWL::TWindow::EvPaint   (190 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl OWL::TWindow::EvPaint(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  __InitExceptBlockLDTC(0x47e784);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_0042eb8c(local_6c,*(HWND *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))();
    }
    (**(code **)(*(int *)(param_1 + 8) + 0x54))();
    if (*(int *)(param_1 + 0x44) != 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x20))();
    }
    OWL::TPaintDC::_dtor(local_6c,2);
  }
  else {
    FUN_00436428(param_1);
  }
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377a4  OWL::TWindow::vf21   (5 bytes)   [rtti:vtable virtual slot 21]
void __stdcall OWL::TWindow::vf21(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377ac  OWL::TWindow::EvSetCursor   (58 bytes)   [owl:response-table message-handler]
//   WM_SETCURSOR
bool __cdecl OWL::TWindow::EvSetCursor(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == *(int *)(param_1 + 0xc)) && (param_3 == 1)) && (*(int *)(param_1 + 0x58) != 0)) {
    SetCursor(*(HCURSOR *)(param_1 + 0x58));
    return true;
  }
  iVar1 = FUN_00436428(param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004377e8  OWL::TWindow::EvLButtonDown   (149 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TWindow::EvLButtonDown(int param_1)

{
  char cVar1;
  BOOL BVar2;
  tagMSG local_20;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x38))();
    if (cVar1 != '\0') {
      local_20.message = 0;
      SetCapture(*(HWND *)(param_1 + 0xc));
      while (local_20.message != 0x202) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x38))();
        if ((cVar1 == '\0') || ((local_20.message == 0x200 && (((byte)local_20.wParam & 1) == 0))))
        break;
        BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
        if (BVar2 != 0) {
          TranslateMessage(&local_20);
          DispatchMessageA(&local_20);
        }
        (**(code **)(**(int **)(param_1 + 0x44) + 0x3c))();
      }
      ReleaseCapture();
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437894  OWL::TWindow::vf6   (128 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TWindow::vf6(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00438260(param_1,(undefined*)FUN_00437880);
    if ((*(byte *)(param_1 + 0x75) & 0x20) != 0) {
      FUN_0043c050(*(int *)(param_1 + 0x6c),param_2);
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffdfff;
      if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0)) {
        SetFocus(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc));
      }
    }
    if (((*(byte *)(param_1 + 0x74) & 1) == 0) &&
       (BVar1 = DestroyWindow(*(HWND *)(param_1 + 0xc)), BVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437914  OWL::TWindow::vf28   (168 bytes)   [rtti:vtable virtual slot 28]
void __cdecl OWL::TWindow::vf28(int param_1,undefined4 *param_2)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)(*(int *)(param_1 + 0x70) + 8);
  param_2[5] = 0;
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  param_2[6] = pHVar1;
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_0048c654)) && (*(int *)(param_1 + 0x5c) != DAT_0048c658)) {
    param_2[7] = (*(uint *)(param_1 + 0x5c) & 0xffff) + 1;
  }
  else {
    param_2[7] = 6;
  }
  param_2[8] = 0;
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x74))();
  param_2[9] = uVar2;
  *param_2 = 8;
  param_2[1] = FUN_0042e88c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004379bc  OWL::TWindow::vf29   (115 bytes)   [rtti:vtable virtual slot 29]
char * __cdecl OWL::TWindow::vf29(int param_1)

{
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_0048c654)) && (*(int *)(param_1 + 0x5c) != DAT_0048c658)) {
    FUN_0046a5c8(&DAT_0048cb05,(byte *)"%s:%X");
    return &DAT_0048cb05;
  }
  return "OWL_Window";
}

// ----------------------------------------------------------------------------------------------------
// 0x00437a5c  OWL::TWindow::vf5   (77 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TWindow::vf5(int param_1,HMENU param_2)

{
  LPCSTR lpClassName;
  HWND pHVar1;
  LPCSTR lpWindowName;
  DWORD dwStyle;
  int X;
  int Y;
  int nWidth;
  int nHeight;
  HINSTANCE hInstance;
  LPVOID lpParam;
  
  lpParam = *(LPVOID *)(param_1 + 0x38);
  hInstance = *(HINSTANCE *)(*(int *)(param_1 + 0x70) + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(param_1 + 0x14) + 0xc);
  }
  nHeight = *(int *)(param_1 + 0x2c);
  nWidth = *(int *)(param_1 + 0x28);
  Y = *(int *)(param_1 + 0x24);
  X = *(int *)(param_1 + 0x20);
  dwStyle = *(DWORD *)(param_1 + 0x18);
  lpWindowName = *(LPCSTR *)(param_1 + 0x10);
  lpClassName = (LPCSTR)(**(code **)(*(int *)(param_1 + 8) + 0x74))();
  pHVar1 = CreateWindowExA(*(DWORD *)(param_1 + 0x1c),lpClassName,lpWindowName,dwStyle,X,Y,nWidth,
                           nHeight,pHVar1,param_2,hInstance,lpParam);
  *(HWND *)(param_1 + 0xc) = pHVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437aac  OWL::TWindow::vf4   (368 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TWindow::vf4(int param_1)

{
  char cVar1;
  undefined4 in_EAX;
  HWND pHVar2;
  LRESULT LVar3;
  code *pcVar4;
  int iVar5;
  undefined3 uVar6;
  HMENU hMenu;
  
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    hMenu = (HMENU)0x0;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffd;
    if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
      FUN_00438670(param_1,0,0x40000,0);
    }
    if ((*(byte *)(param_1 + 0x74) & 4) == 0) {
      cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
      if (cVar1 == '\0') {
        FUN_004391f0(param_1,0x7fed);
      }
      else {
        FUN_0042e87c(param_1);
        FUN_00437a30(param_1);
        if (*(int *)(param_1 + 0x30) == 0) {
          hMenu = *(HMENU *)(param_1 + 0x34);
        }
        else {
          hMenu = FUN_0044fec8(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x30));
        }
        (**(code **)(*(int *)(param_1 + 8) + 0x14))();
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        pHVar2 = (HWND)0x0;
      }
      else {
        pHVar2 = GetDlgItem(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc),*(int *)(param_1 + 0x34));
      }
      *(HWND *)(param_1 + 0xc) = pHVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        DestroyMenu(hMenu);
      }
      FUN_004391f0(param_1,0x7feb);
    }
    LVar3 = FUN_00436e00(*(HWND *)(param_1 + 0xc),*(LPARAM *)(param_1 + 0x6c));
    if (LVar3 == 0) {
      FUN_00438458(param_1);
      FUN_004384cc(param_1,'\0');
      pcVar4 = (code *)GetWindowLongA(*(HWND *)(param_1 + 0xc),-4);
      if (pcVar4 == FUN_0042e88c) {
        iVar5 = FUN_0042e86c();
        if (iVar5 == 0) {
          FUN_0042e87c(param_1);
        }
        FUN_00438338(param_1,0x4400,0,0);
        *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20;
      }
      else {
        FUN_00437d74(param_1);
        iVar5 = FUN_0042e86c();
        if (param_1 == iVar5) {
          FUN_0042e87c(0);
        }
        *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0xa0;
      }
      LVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x78))();
    }
    uVar6 = (undefined3)((uint)LVar3 >> 8);
  }
  return CONCAT31(uVar6,1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c1c  OWL::TWindow::vf7   (16 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TWindow::vf7(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c2c  OWL::TWindow::vf8   (58 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TWindow::vf8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
    if (cVar1 != '\0') {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x2000;
      uVar2 = FUN_0043bf00(*(int *)(param_1 + 0x6c),param_1,0x2000);
      return uVar2;
    }
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437c68  OWL::TWindow::vf30   (151 bytes)   [rtti:vtable virtual slot 30]
void __cdecl OWL::TWindow::vf30(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
  }
  if (((*(byte *)(param_1 + 0x74) & 0x10) != 0) &&
     (piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1b) + 0x34))(),
     piVar1 != (int *)0x0)) {
    if (*(int *)(*piVar1 + 0x14) == 0) {
      (**(code **)(*(int *)(*piVar1 + 8) + 0x34))();
    }
    if (*(int *)(*piVar1 + 0xc) == 0) {
      FUN_00438618(*piVar1,0,0x8000000,0);
      (**(code **)(*(int *)(*piVar1 + 8) + 0x10))();
    }
  }
  FUN_00438164(param_1);
  (**(code **)(*(int *)(param_1 + 8) + 0x5c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d00  OWL::TWindow::vf31   (5 bytes)   [rtti:vtable virtual slot 31]
void __stdcall OWL::TWindow::vf31(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d08  OWL::TWindow::vf22   (76 bytes)   [rtti:vtable virtual slot 22]
undefined4 __cdecl OWL::TWindow::vf22(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00438260(param_1,(undefined*)FUN_004358a8);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437d54  OWL::TWindow::vf23   (30 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TWindow::vf23(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x58))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437dd4  OWL::TWindow::vf3   (233 bytes)   [rtti:vtable virtual slot 3]
bool __cdecl OWL::TWindow::vf3(int param_1)

{
  ATOM AVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  WNDCLASSA local_2c;
  
  if (DAT_0047e1f2 == '\0') {
    puVar2 = FUN_0041b958();
    DAT_0047e1f1 = *(int *)(puVar2 + 0x10) != 2;
    DAT_0047e1f2 = DAT_0047e1f2 + '\x01';
  }
  if (DAT_0047e1f1 == '\0') {
    bVar4 = false;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    bVar4 = iVar3 != 0;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x70))();
      (**(code **)(*(int *)(param_1 + 8) + 0x74))();
      iVar3 = FUN_004502e8();
      if (iVar3 == 0) {
        AVar1 = RegisterClassA(&local_2c);
        return AVar1 != 0;
      }
    }
  }
  return true;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437ec0  OWL::TWindow::vf15   (34 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl OWL::TWindow::vf15(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00438220(param_1,(undefined*)FUN_004358d8);
  return iVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437ee4  OWL::TWindow::vf9   (64 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TWindow::vf9(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 0x10) == 0) {
    iVar2 = param_1;
    uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x1b) + 4))();
  }
  if ((char)uVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + 8) + 0x18))(uVar1,*(int *)(param_1 + 8),iVar2,param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437f24  OWL::TWindow::EvClose   (82 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl OWL::TWindow::EvClose(int param_1)

{
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x24))();
    if ((*(int *)(param_1 + 0xc) == 0) && ((*(byte *)(param_1 + 0x75) & 8) != 0)) {
      FUN_0043babc(*(int *)(param_1 + 0x6c),param_1);
    }
    return;
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437f78  OWL::TWindow::EvDestroy   (77 bytes)   [owl:response-table message-handler]
//   WM_DESTROY
void __cdecl OWL::TWindow::EvDestroy(int param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffdf;
  (**(code **)(*(int *)(param_1 + 8) + 0x7c))();
  if ((((*(byte *)(param_1 + 0x74) & 1) == 0) && ((*(byte *)(param_1 + 0x74) & 0x10) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x6c) + 0x1a) != '\0')) {
    PostQuitMessage(0);
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437fc8  OWL::TWindow::EvNCDestroy   (22 bytes)   [owl:response-table message-handler]
//   WM_NCDESTROY
void __cdecl OWL::TWindow::EvNCDestroy(int param_1)

{
  FUN_00436428(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437fe0  OWL::TWindow::EvQueryEndSession   (82 bytes)   [owl:response-table message-handler]
//   WM_QUERYENDSESSION
uint __cdecl OWL::TWindow::EvQueryEndSession(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    iVar1 = FUN_00436428(param_1);
    return (uint)(iVar1 != 0);
  }
  if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1b) + 4))();
    return uVar2;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438034  OWL::TWindow::EvEndSession   (60 bytes)   [owl:response-table message-handler]
//   WM_ENDSESSION
void __cdecl OWL::TWindow::EvEndSession(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_00471ae8((uint *)&DAT_00438070,(undefined4 *)&GHIDRA_STACK(0xfffffffb),0,&LAB_004380ac,1,0,0,0);
    return;
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004380b4  OWL::TWindow::EvChildinvalid   (22 bytes)   [owl:response-table message-handler]
//   WM_CHILDINVALID
void __cdecl OWL::TWindow::EvChildinvalid(undefined4 param_1,HWND param_2)

{
  SendMessageA(param_2,0x7ffe,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004387b4  OWL::TWindow::vf25   (173 bytes, 2 ranges)   [rtti:vtable virtual slot 25]
bool __cdecl OWL::TWindow::vf25(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  if (DAT_0047e14c == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      switch(param_2) {
      case 0:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
        break;
      case 1:
      case 9:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xdeffffff;
        break;
      case 2:
      case 6:
      case 7:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
        break;
      case 3:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
        break;
      case 4:
      case 5:
      case 8:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
      }
      bVar3 = true;
    }
    else if (param_2 == 6) {
      iVar1 = FUN_00436d48(param_1,0x112,0xf020,0);
      bVar3 = iVar1 != 0;
    }
    else {
      BVar2 = ShowWindow(*(HWND *)(param_1 + 0xc),param_2);
      bVar3 = BVar2 != 0;
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
void __cdecl OWL::TWindow::EvInitMenuPopup(int param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  HMENU pHVar1;
  UINT UVar2;
  int nPos;
  undefined4 *in_FS_OFFSET;
  undefined **local_54 [3];
  undefined4 local_48;
  HMENU local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47e7c4);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
      local_38 = GetMenuItemCount(param_2);
      nPos = 0;
      if (0 < local_38) {
        do {
          pHVar1 = GetMenu(*(HWND *)(param_1 + 0xc));
          if (param_2 == pHVar1) {
            UVar2 = GetMenuItemID(param_2,nPos);
          }
          else {
            local_24 = 8;
            FUN_0042bc04(local_10,param_2,0);
            local_18 = local_18 + 1;
            local_24 = 0x14;
            UVar2 = FUN_0042bce8((int)local_10,nPos);
            local_18 = local_18 + -1;
            OWL::TMenu::_dtor(local_10,2);
            local_24 = 0;
          }
          if ((UVar2 != 0) && ((short)UVar2 != -1)) {
            if ((UVar2 == 0x7d01) || (0xf000 < UVar2)) break;
            local_3c = nPos;
            FUN_00435bb0((undefined4*)local_54,UVar2,*(undefined4 *)(param_1 + 0xc));
            local_54[0] = &OWL::TMenuItemEnabler::vftable;
            local_44 = param_2;
            local_40 = local_3c;
            UVar2 = GetMenuItemID(param_2,local_3c);
            if (UVar2 == 0xffffffff) {
              local_48 = 2;
            }
            (**(code **)(*(int *)(param_1 + 8) + 0x50))();
          }
          nPos = nPos + 1;
        } while (nPos < local_38);
      }
    }
  }
  else {
    FUN_00436428(param_1);
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438af0  OWL::TWindow::EvContextMenu   (134 bytes)   [owl:response-table message-handler]
//   WM_CONTEXTMENU
void __cdecl OWL::TWindow::EvContextMenu(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  HWND local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00436428(param_1);
  }
  else {
    local_8 = param_3;
    local_10 = param_3;
    local_c = param_4;
    local_20 = param_3;
    local_1c = param_4;
    local_18 = param_1;
    FUN_00436d48(**(int **)(*(int *)(param_1 + 0x6c) + 0x2b),0x7ef1,0,&local_20);
    local_14 = *(HWND *)(param_1 + 0xc);
    TrackPopupMenu(*(HMENU *)(*(int *)(param_1 + 0x60) + 4),2,param_3,param_4,0,local_14,(RECT *)0x0
                  );
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438b78  OWL::TWindow::EvEnteridle   (86 bytes)   [owl:response-table message-handler]
//   WM_ENTERIDLE
void __cdecl OWL::TWindow::EvEnteridle(int param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 0x74) & 0x10) == 0) {
      LVar1 = FUN_00436e00(param_3,*(LPARAM *)(param_1 + 0x6c));
      if (LVar1 != 0) {
        (**(code **)(*(int *)(LVar1 + 8) + 0x2c))();
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
    }
  }
  FUN_00436428(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d94  OWL::TWindow::vf2   (151 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TWindow::vf2(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47e7f4);
  if (*(int *)(param_1 + 100) == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00430958(piVar1,0,param_1,'\x01',0);
    }
    FUN_00438e2c(param_1,piVar1);
  }
  else if (*(int *)(**(int **)(param_1 + 100) + 0xc) != 0) {
    FUN_00438338(**(int **)(param_1 + 100),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
