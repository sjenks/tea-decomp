// TSMerge.exe — runtime / library code "OWL_TEditFile"
// 15 functions, 0x0043b9b8..0x0043d6e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043b9b8  OWL::TEditFile::vf8   (69 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TEditFile::vf8(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&DAT_0046d7c4,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEditSearch::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ba40  OWL::TEditFile::~TEditFile   (281 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEditFile::_dtor
void __cdecl OWL::TEditFile::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d834);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TEditFile::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0046465c;
    *(undefined ***)param_1[2] = &PTR_LAB_00464668;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464674;
    operator_delete_array();
    OWL::TOpenSaveDialog::TData::_dtor((int)(param_1 + 0xe),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
    OWL::TEditSearch::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x1d,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1b,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bb5c  OWL::TEditFile::vf20   (818 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TEditFile::vf20(int *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 extraout_ECX;
  int *piVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x46d884);
  OWL::TEditSearch::vf20(param_1);
  param_1[0xe] = 0x1006;
  param_1[0xe] = param_1[0xe] | 0x200000;
  bVar2 = FUN_004109c0();
  if (bVar2) {
    param_1[0xe] = param_1[0xe] | 0x80000;
  }
  FUN_00444058((int)local_14,*(int *)(*param_1 + 0x70),0x7f2a);
  FUN_00445b04(local_c,param_1 + 0xe,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043bc40;
    }
    operator_delete();
    local_c = (char *)0x0;
  }
LAB_0043bc40:
  FUN_0043be90(param_1,(uint *)param_1[0x18]);
  if ((param_1[0x18] == 0) || (cVar3 = (**(code **)(param_1[3] + 100))(), cVar3 != '\0'))
  goto LAB_0043be7d;
  FUN_00444058((int)local_34,*(int *)(*param_1 + 0x70),0x7f27);
  local_1c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_2c + -4);
    piVar6 = std::string::__getRep(local_24,uVar1,uVar1);
    local_1c = (byte *)(piVar6 + 3);
    memcpy((undefined4 *)local_1c,(undefined4 *)local_2c,uVar1);
  }
  else {
    local_1c = local_2c;
    pbVar7 = local_2c + -0xc;
    if (pbVar7 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar7 = local_2c + -0xc;
      if (pbVar7 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_0043bdaa;
    }
    operator_delete();
    local_2c = (byte *)0x0;
  }
LAB_0043bdaa:
  puVar5 = (undefined1 *)operator_new_array();
  FUN_00457ef4(puVar5,local_1c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  FUN_0043be90(param_1,(uint *)0x0);
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar7 = local_1c + -0xc;
      if (pbVar7 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_0043be7d;
    }
    operator_delete();
  }
LAB_0043be7d:
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c0a4  OWL::TEditFile::vf23   (74 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TEditFile::vf23(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1;
  uVar1 = (**(code **)(param_1[3] + 0x58))();
  if ((char)uVar1 != '\0') {
    (**(code **)(param_1[3] + 0x24))(uVar1,param_1[3],piVar2,param_1);
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_0042d1a4(*param_1,0xb9,0,0);
    FUN_0043be90(param_1,(uint *)0x0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c0f0  OWL::TEditFile::vf26   (612 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TEditFile::vf26(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x46d97c);
  cVar2 = (**(code **)(param_1[3] + 100))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_0043be90(param_1,param_2);
    goto LAB_0043c343;
  }
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f27);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    piVar3 = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = (byte *)(piVar3 + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    pbVar6 = local_1c + -0xc;
    if (pbVar6 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar6 = local_1c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043c280;
    }
    operator_delete();
    local_1c = (byte *)0x0;
  }
LAB_0043c280:
  puVar5 = (undefined1 *)operator_new_array();
  FUN_00457ef4(puVar5,local_c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043c343;
    }
    operator_delete();
  }
LAB_0043c343:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c354  OWL::TEditFile::vf24   (301 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TEditFile::vf24(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_138;
  int local_114;
  int local_110;
  undefined4 local_94 [2];
  undefined4 local_8c [34];
  
  __InitExceptBlockLDTC(0x46d9d0);
  cVar1 = (**(code **)(param_1[3] + 0x58))();
  if (cVar1 != '\0') {
    *(undefined1 *)param_1[0x10] = 0;
    piVar2 = FUN_00445ea8(&local_114,0,*param_1,(int)(param_1 + 0xe),0,0,0);
    iVar3 = (**(code **)(piVar2[3] + 0x14))();
    cVar1 = iVar3 == 1;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(&local_114,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
    OWL::TWindow::_dtor(local_8c,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
    OWL::TStreamableBase::_dtor(local_94,0);
    if (cVar1 != '\0') {
      (**(code **)(param_1[3] + 0x68))();
    }
  }
  *in_FS_OFFSET = local_138;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c484  OWL::TEditFile::vf25   (293 bytes)   [rtti:vtable virtual slot 25]
uint __cdecl OWL::TEditFile::vf25(int *param_1,int param_2)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined **local_18;
  int *local_14;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  __InitExceptBlockLDTC(0x46da04);
  if ((param_2 == 0) && (param_1[0x18] == 0)) {
    uVar4 = 0;
    *in_FS_OFFSET = local_3c;
  }
  else {
    uVar4 = 0;
    local_18 = &OWL::TFile::vftable;
    local_14 = (int *)0x0;
    local_10 = 1;
    local_f = 0;
    local_b = 0;
    (*(code *)PTR_FUN_0046616c)();
    if ((local_14 != (int *)0x0) && (iVar1 = (**(code **)(*local_14 + 0x38))(), -1 < iVar1)) {
      (**(code **)(param_1[3] + 0x24))();
      pCVar2 = FUN_0043af08(param_1,iVar1 + 1);
      if (pCVar2 != (LPSTR)0x0) {
        iVar3 = (**(code **)(*local_14 + 0x1c))();
        if (iVar3 == iVar1) {
          pCVar2[iVar1] = '\0';
          FUN_0042d1a4(*param_1,0xb9,0,0);
        }
        uVar4 = (uint)(iVar3 == iVar1);
        FUN_0043afc4(param_1,pCVar2,'\x01');
      }
    }
    OWL::TFile::_dtor((int *)&local_18,2);
    *in_FS_OFFSET = local_3c;
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c5ac  OWL::TEditFile::vf27   (631 bytes, 2 ranges)   [rtti:vtable virtual slot 27]
undefined4 __cdecl OWL::TEditFile::vf27(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x46da50);
  iVar2 = FUN_0042d1a4(*param_1,0xb8,0,0);
  uVar3 = 0;
  if (iVar2 == 0) {
LAB_0043c816:
    *in_FS_OFFSET = local_48;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  if (param_1[0x18] == 0) {
    uVar3 = (**(code **)(param_1[3] + 0x70))();
    *in_FS_OFFSET = local_48;
    return uVar3;
  }
  uVar3 = (**(code **)(param_1[3] + 0x74))();
  if ((char)uVar3 != '\0') goto LAB_0043c816;
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f28);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    piVar4 = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = (byte *)(piVar4 + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    pbVar6 = local_1c + -0xc;
    if (pbVar6 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar6 = local_1c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar2 = *(int *)pbVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c747;
    }
    operator_delete();
    local_1c = (byte *)0x0;
  }
LAB_0043c747:
  puVar5 = (undefined1 *)operator_new_array();
  FUN_00457ef4(puVar5,local_c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  uVar3 = 0;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar2 = *(int *)pbVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c803;
    }
    operator_delete();
  }
LAB_0043c803:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c82c  OWL::TEditFile::vf28   (1033 bytes)   [rtti:vtable virtual slot 28]
undefined4 __cdecl OWL::TEditFile::vf28(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined4 local_158;
  undefined1 local_134 [8];
  byte *local_12c;
  undefined1 local_124 [8];
  byte *local_11c;
  int local_114;
  int local_110;
  undefined4 local_94 [2];
  undefined4 local_8c [34];
  
  __InitExceptBlockLDTC(0x46dad0);
  if (param_1[0x18] == 0) {
    *(undefined1 *)param_1[0x10] = 0;
  }
  else {
    FUN_00455bc0((char *)param_1[0x10],(char *)param_1[0x18]);
  }
  piVar2 = FUN_00446060(&local_114,0,*param_1,(int)(param_1 + 0xe),0,0,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar7 = iVar3 == 1;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_114,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
  OWL::TWindow::_dtor(local_8c,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_94,0);
  if (cVar7 == '\0') goto LAB_0043cc1f;
  cVar7 = (**(code **)(param_1[3] + 0x74))();
  if (cVar7 != '\0') {
    uVar4 = FUN_0043be90(param_1,(uint *)param_1[0x10]);
    *in_FS_OFFSET = local_158;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  FUN_00444058((int)local_134,*(int *)(*param_1 + 0x70),0x7f28);
  local_11c = (byte *)0x0;
  if (*(int *)(local_12c + -0xc) == -1 || *(int *)(local_12c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_12c + -4);
    piVar2 = std::string::__getRep(local_124,uVar1,uVar1);
    local_11c = (byte *)(piVar2 + 3);
    memcpy((undefined4 *)local_11c,(undefined4 *)local_12c,uVar1);
  }
  else {
    local_11c = local_12c;
    pbVar6 = local_12c + -0xc;
    if (pbVar6 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (local_12c != (byte *)0x0) {
    if (*(int *)(local_12c + -0xc) != -1) {
      pbVar6 = local_12c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar3 = *(int *)pbVar6 + 1;
      }
      if (iVar3 != 0) goto LAB_0043cb2f;
    }
    operator_delete();
    local_12c = (byte *)0x0;
  }
LAB_0043cb2f:
  puVar5 = (undefined1 *)operator_new_array();
  FUN_00457ef4(puVar5,local_11c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (local_11c != (byte *)0x0) {
    if (*(int *)(local_11c + -0xc) != -1) {
      pbVar6 = local_11c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar3 = *(int *)pbVar6 + 1;
      }
      if (iVar3 != 0) goto LAB_0043cc1f;
    }
    operator_delete();
  }
LAB_0043cc1f:
  *in_FS_OFFSET = local_158;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cc6c  OWL::TEditFile::vf29   (281 bytes)   [rtti:vtable virtual slot 29]
undefined4 __cdecl OWL::TEditFile::vf29(int *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 local_3c;
  undefined **local_18;
  int *local_14;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  __InitExceptBlockLDTC(0x46db40);
  if ((param_2 == 0) && (param_1[0x18] == 0)) {
    uVar3 = 0;
    *in_FS_OFFSET = local_3c;
  }
  else {
    local_18 = &OWL::TFile::vftable;
    local_14 = (int *)0x0;
    local_10 = 1;
    local_f = 0;
    local_b = 0;
    (*(code *)PTR_FUN_0046616c)();
    if (local_14 == (int *)0x0) {
      uVar3 = 0;
      OWL::TFile::_dtor((int *)&local_18,2);
      *in_FS_OFFSET = local_3c;
    }
    else {
      uVar3 = 0;
      puVar1 = (uint *)FUN_0043af08(param_1,0);
      if (puVar1 != (uint *)0x0) {
        puVar4 = puVar1;
        pcVar2 = strlen(puVar1);
        uVar3 = (**(code **)(*local_14 + 0x20))(local_14,*local_14,puVar4,local_14,puVar1,pcVar2);
        FUN_0043afc4(param_1,(LPCSTR)puVar1,'\0');
        if ((char)uVar3 != '\0') {
          FUN_0042d1a4(*param_1,0xb9,0,0);
        }
      }
      OWL::TFile::_dtor((int *)&local_18,2);
      *in_FS_OFFSET = local_3c;
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cd88  OWL::TEditFile::vf22   (1251 bytes, 2 ranges)   [rtti:vtable virtual slot 22]
uint __cdecl OWL::TEditFile::vf22(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x46dbb4);
  iVar1 = FUN_0042d1a4(*param_1,0xb8,0,0);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_68;
    return 1;
  }
  FUN_00444058((int)local_34,*(int *)(*param_1 + 0x70),0x7f29);
  local_c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar4 = *(uint *)(local_2c + -4);
    piVar2 = std::string::__getRep(local_14,uVar4,uVar4);
    local_c = (byte *)(piVar2 + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_2c,uVar4);
  }
  else {
    local_c = local_2c;
    pbVar5 = local_2c + -0xc;
    if (pbVar5 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar5 = *(int *)pbVar5 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar5 = local_2c + -0xc;
      if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0043cf19;
    }
    operator_delete();
    local_2c = (byte *)0x0;
  }
LAB_0043cf19:
  FUN_00444058((int)local_44,*(int *)(*param_1 + 0x70),0x7f26);
  local_1c = (int *)0x0;
  if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
    uVar4 = local_3c[-1];
    local_1c = std::string::__getRep(local_24,uVar4,uVar4);
    local_1c = local_1c + 3;
    memcpy(local_1c,local_3c,uVar4);
  }
  else {
    local_1c = local_3c;
    piVar2 = local_3c + -3;
    if (piVar2 != &DAT_00471d5c) {
      *piVar2 = *piVar2 + 1;
    }
  }
  if (local_3c != (int *)0x0) {
    if (local_3c[-3] != -1) {
      piVar2 = local_3c + -3;
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d0a2;
    }
    operator_delete();
    local_3c = (int *)0x0;
  }
LAB_0043d0a2:
  puVar3 = (undefined1 *)operator_new_array();
  FUN_00457ef4(puVar3,local_c);
  iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (iVar1 == 6) {
    uVar4 = (**(code **)(param_1[3] + 0x6c))();
  }
  else {
    uVar4 = (uint)(iVar1 != 2);
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar2 = local_1c + -3;
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d1b9;
    }
    operator_delete();
    local_1c = (int *)0x0;
  }
LAB_0043d1b9:
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar5 = local_c + -0xc;
      if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d24b;
    }
    operator_delete();
  }
LAB_0043d24b:
  *in_FS_OFFSET = local_68;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d274  OWL::TEditFile::vf21   (16 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TEditFile::vf21(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x58))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d4b0  OWL::TEditFile::Streamer::vf1   (62 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TEditFile::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0043d4f0(iVar1,param_2);
  puVar2 = FUN_00422a30(param_2);
  *(undefined4 **)(iVar1 + 0x60) = puVar2;
  if (**(char **)(iVar1 + 0x60) == '\0') {
    operator_delete();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d548  OWL::TEditFile::Streamer::vf2   (54 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEditFile::Streamer::vf2(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0043d580(iVar1,param_2);
  if (*(int *)(iVar1 + 0x60) == 0) {
    puVar2 = (uint *)&DAT_0046dc54;
  }
  else {
    puVar2 = *(uint **)(iVar1 + 0x60);
  }
  FUN_00422e78(param_2,puVar2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d6e4  OWL::TEditFile::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEditFile::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
