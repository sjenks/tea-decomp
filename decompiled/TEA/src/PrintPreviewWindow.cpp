// TEA.exe — application module "PrintPreviewWindow"
// 25 functions, 0x00426498..0x004283a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00426498  PrintPreviewWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PrintPreviewWindow::vf14 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[2],(int *)&PrintPreviewWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDecoratedFrame::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004264e0  PrintPreviewWindow::EvSize   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
void __stdcall PrintPreviewWindow::EvSize(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004264e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x35) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004264ec  FUN_004264ec   (2207 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00426770) */
/* WARNING: Removing unreachable block (ram,0x00426b63) */
int * __cdecl FUN_004264ec(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7, int param_8,uint *param_9,undefined4 param_10,int *param_11)

{
  uint *puVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  LPCSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  tagRECT *ptVar7;
  int *piVar8;
  LONG *pLVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  DEVMODEA *pDVar11;
  int iVar12;
  LONG local_118;
  int local_114;
  int local_10c;
  tagRECT local_108;
  int local_f8 [2];
  int local_f0;
  tagRECT local_e8;
  int local_d0;
  int local_c0;
  int local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  char *local_b0;
  char *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int *local_7c;
  uint *local_78;
  int *local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined4 *local_34;
  int *local_30;
  undefined1 local_2c [8];
  char *local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  bVar10 = 0;
  __InitExceptBlockLDTC(0x4f1af0);
  local_58 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x142;
    *(int **)((int)param_1 + 0x142) = param_1 + 0x2e;
    param_1[0x2e] = (int)(param_1 + 0x2b);
    param_1[0x2f] = (int)(param_1 + 0x2c);
    *(int **)((int)param_1 + 0x146) = param_1 + 0x2b;
    *(int **)((int)param_1 + 0x14a) = param_1 + 0x2c;
    param_1[1] = (int)(param_1 + 0x2e);
    param_1[2] = (int)(param_1 + 0x2b);
    param_1[3] = (int)(param_1 + 0x2c);
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
    param_1[0x2b] = (int)&OWL::TEventHandler::vftable;
    local_6c = param_1 + 0x2c;
    *local_6c = (int)&OWL::TStreamableBase::vftable;
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x2e,1);
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x142),1);
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x61;
  if (param_11 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *param_11;
  }
  FUN_004ae248(param_1,1,param_4,param_9,iVar6,0,0);
  local_4c = local_4c + 2;
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x61;
  *(undefined ***)((int)param_1 + 0x35) = &PrintPreviewWindow::vftable;
  param_1[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)param_1[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)param_1[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f1f74;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f2004;
  param_1[0x14] = param_7;
  param_1[0x15] = param_8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  std::string::string_from_cstr((int)(param_1 + 0x1c),param_3);
  param_1[0x22] = 0;
  param_1[0x22] = (int)&DAT_00513d64;
  local_d0 = param_1[0x22];
  local_4c = local_4c + 2;
  param_1[0x24] = param_5;
  param_1[0x25] = (int)param_11;
  param_1[0x26] = param_6;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  iVar6 = *(int *)(param_1[0x14] + 8);
  puVar1 = (uint *)FUN_004c3f38(iVar6);
  FUN_004cf41c((int)(param_1 + 0x20),(uint *)"Print Page ()");
  local_7c = param_1 + 0x20;
  local_78 = puVar1;
  pcVar2 = strlen(puVar1);
  FUN_004cfad4((int)local_7c,0xc,0,(uint)local_78,(uint)pcVar2,0,(uint)pcVar2);
  local_30 = (int *)operator_new();
  if (local_30 != (int *)0x0) {
    local_58 = 0x38;
    pDVar11 = *(DEVMODEA **)(iVar6 + 0x56);
    pCVar3 = (LPCSTR)FUN_004c3f58(iVar6);
    pCVar4 = (LPCSTR)FUN_004c3f18(iVar6);
    FUN_0049caa8(local_30,pCVar4,(LPCSTR)puVar1,pCVar3,pDVar11);
    local_58 = 0x2c;
  }
  param_1[0x16] = (int)local_30;
  (**(code **)(*(int *)param_1[0x14] + 0x14))();
  local_84 = *(int *)(param_1[0x14] + 0x26);
  local_80 = *(int *)(param_1[0x14] + 0x2a);
  param_1[0x17] = local_84;
  param_1[0x18] = local_80;
  *(undefined4 *)(param_1[1] + 0x5c) = DAT_0051b1d4;
  (**(code **)(*(int *)((int)param_1 + 0x35) + 0x4c))();
  if (param_1[0x18] < param_1[0x17]) {
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) | 0x100000;
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) & 0xffdfffff;
  }
  else {
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) | 0x200000;
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) & 0xffefffff;
  }
  local_34 = (undefined4 *)operator_new();
  if (local_34 != (undefined4 *)0x0) {
    local_58 = 0x50;
    if (param_1[0x25] == 0) {
      iVar6 = param_1[0x25];
    }
    else {
      iVar6 = *(int *)param_1[0x25];
    }
    FUN_0044f260(local_34,iVar6,1,1,0,0);
    local_58 = 0x44;
  }
  *(undefined4 **)(*(int *)param_1[0x25] + 0x44) = local_34;
  local_34[0xb] = 0x18;
  local_34[10] = 0x18;
  iVar6 = param_1[1];
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xffffffff;
  local_e8.left = 0;
  local_e8.top = 0;
  local_e8.right = 0;
  local_e8.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&local_e8);
  ptVar7 = &local_e8;
  pLVar9 = local_f8;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = ptVar7->left;
    ptVar7 = (tagRECT *)((int)ptVar7 + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = param_1[1];
  *(int *)(iVar6 + 0x28) = local_f0 - local_f8[0];
  local_108.left = 0;
  local_108.top = 0;
  local_108.right = 0;
  local_108.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&local_108);
  ptVar7 = &local_108;
  pLVar9 = &local_118;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = ptVar7->left;
    ptVar7 = (tagRECT *)((int)ptVar7 + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = param_1[1];
  *(int *)(iVar6 + 0x2c) = (local_10c - local_114) + 1;
  MapWindowPoints(*(HWND *)(param_4 + 0xc),*(HWND *)(iVar6 + 0xc),(LPPOINT)(iVar6 + 0x20),1);
  local_58 = 0x68;
  FUN_00401d10((int)local_14,(int)(param_1 + 0x1c),(uint *)"Position");
  local_4c = local_4c + 1;
  local_58 = 0x74;
  iVar12 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_44);
  local_4c = local_4c + 1;
  Persist::Persist(local_1c,(int)local_44,iVar6,iVar12);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar8 = (int *)(local_3c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426b32;
    }
    local_88 = local_3c + -0xc;
    local_8c = local_3c + -0xc;
    operator_delete();
    local_90 = 0;
    local_94 = local_44;
    local_3c = 0;
  }
LAB_00426b32:
  local_24 = &DAT_00513d64;
  local_4c = local_4c + 1;
  local_58 = 0x5c;
  uVar5 = Persist::QueryValueSized((int)local_1c,(int)local_14,(int)local_2c);
  if ((char)uVar5 != '\0') {
    FUN_0044ee84(local_24,&local_98,&local_9c,&local_a0,&local_a4,&local_a8);
    iVar6 = FUN_004153ec(local_9c,local_a0,local_a4,local_a8);
    if (iVar6 != 0) {
      if (local_a0 < 0) {
        local_a0 = 0;
      }
      param_1[0x28] = local_98;
      *(int *)(param_1[1] + 0x20) = local_9c;
      *(int *)(param_1[1] + 0x24) = local_a0;
      *(int *)(param_1[1] + 0x28) = local_a4;
      *(int *)(param_1[1] + 0x2c) = local_a8;
    }
  }
  local_4c = local_4c + -1;
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar8 = (int *)(local_24 + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426ccf;
    }
    local_ac = local_24 + -0xc;
    local_b0 = local_24 + -0xc;
    operator_delete();
    local_b4 = 0;
    local_b8 = local_2c;
    local_24 = (char *)0x0;
  }
LAB_00426ccf:
  local_4c = local_4c + -1;
  Persist::_dtor((int)local_1c,2);
  local_4c = local_4c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar8 = (int *)(local_c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426d73;
    }
    local_bc = local_c + -0xc;
    local_c0 = local_c + -0xc;
    operator_delete();
  }
LAB_00426d73:
  *in_FS_OFFSET = local_68;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426de4  PrintPreviewWindow::~PrintPreviewWindow   (780 bytes)   [rtti:dtor destructor]
//   written in code as PrintPreviewWindow::_dtor
void __cdecl PrintPreviewWindow::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  __InitExceptBlockLDTC(0x4f1bec);
  if (param_1 == (int *)0x0) goto LAB_004270df;
  *(undefined ***)((int)param_1 + 0x35) = &PrintPreviewWindow::vftable;
  param_1[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)param_1[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)param_1[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f1f74;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f2004;
  if (param_1[0x1a] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1a] + 8))();
  }
  if (param_1[0x1b] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1b] + 8))();
  }
  if (param_1[0x16] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16] + 5))();
  }
  if (param_1[0x22] != 0) {
    if (*(int *)(param_1[0x22] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x22] + -0xc);
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
      if (iVar1 != 0) goto LAB_00426f60;
    }
    operator_delete();
    param_1[0x22] = 0;
  }
LAB_00426f60:
  if (param_1[0x1e] != 0) {
    if (*(int *)(param_1[0x1e] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x1e] + -0xc);
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
      if (iVar1 != 0) goto LAB_00426fe0;
    }
    operator_delete();
    param_1[0x1e] = 0;
  }
LAB_00426fe0:
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x61;
  OWL::TDecoratedFrame::_dtor(param_1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x61;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    OWL::TFrameWindow::_dtor((int *)((int)param_1 + 0x142),0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x2e,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x2c,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004270df:
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427134  PrintPreviewWindow::vf19   (942 bytes)   [rtti:vtable virtual slot 19]
void __cdecl PrintPreviewWindow::vf19(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_50;
  
  __InitExceptBlockLDTC(0x4f1d00);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_00490fa8(puVar2,10,'\0',0);
    }
    FUN_0048ce64(piVar1,0,*(undefined4 *)(param_1 + 4),0,puVar2,iVar4);
  }
  *(int **)(param_1 + 100) = piVar1;
  *(undefined1 *)((int)piVar1 + 0x36) = 2;
  if (param_2 != (int *)0x0) {
    for (; param_2[1] != 0; param_2 = param_2 + 2) {
      for (iVar4 = 0; puVar2 = *(uint **)(param_2[1] + iVar4 * 4), puVar2 != (uint *)0x0;
          iVar4 = iVar4 + 1) {
        piVar1 = (int *)operator_new();
        if (piVar1 != (int *)0x0) {
          FUN_00488c78(piVar1,puVar2,puVar2,'\x01',1,puVar2 == (uint *)*param_2,'\0');
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
      }
      piVar1 = (int *)operator_new();
      if (piVar1 != (int *)0x0) {
        FUN_00490848(piVar1,0x14,0,1);
      }
      (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
    }
  }
  puVar3 = (undefined4 *)operator_new();
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0049eb84(puVar3,0x1680,3,0,8,(uint *)0x0,0);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00490848(piVar1,6,0,1);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x1658,0x1658,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x1662,0x1662,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00490848(piVar1,0x14,0,1);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x163a,0x163a,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  (**(code **)(*(int *)(param_1 + 0x35) + 4))();
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004274e4  OWL::TControl::Streamer::vf4   (12 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
/* WARNING: Instruction at (ram,0x004275e1) overlaps instruction at (ram,0x004275de)
    */
/* WARNING: Removing unreachable block (ram,0x004275b0) */
/* WARNING: Removing unreachable block (ram,0x0042759a) */
/* WARNING: Removing unreachable block (ram,0x004275af) */
void OWL::TControl::Streamer::vf4(char *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  undefined3 uVar10;
  undefined3 uVar11;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uVar12;
  byte *pbVar13;
  int unaff_EBX;
  byte *pbVar14;
  undefined4 *unaff_ESI;
  byte *pbVar15;
  byte *unaff_EDI;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  byte *in_stack_ffffbd6b;
  byte *pbStack_4291;
  undefined4 uStack_4289;
  byte *pbStack_4285;
  byte *pbStack_4281;
  byte *pbStack_427d;
  byte *pbStack_4279;
  char cStack_4275;
  char *pcStack_4271;
  undefined1 *puStack_426d;
  byte *pbStack_4261;
  byte *pbStack_425d;
  char cStack_4259;
  char *pcStack_4255;
  char acStack_4224 [16928];
  
  *param_1 = *param_1 + (char)param_1;
  pbVar16 = (byte *)((int)param_1 * 2);
  bVar2 = *pbVar16;
  *pbVar16 = *pbVar16 + param_3;
  pbVar16 = (byte *)&uStack_4289;
  uVar12 = (undefined2)param_2;
  out(*unaff_ESI,uVar12);
  out(*(undefined1 *)(unaff_ESI + 1),uVar12);
  if (unaff_EBX == -1) {
code_r0x0042756d:
    pbVar6 = pbStack_4279;
    pbVar14 = pbStack_4285;
    if (unaff_EDI != (byte *)0xffffffff) {
      uStack_4289 = (byte *)&uStack_4289;
      OWL::TDecoratedFrame::vf9((int *)pbStack_4281);
      pbVar6 = *(byte **)(*(int *)(pbStack_4281 + 0x90) + 0x168);
      pbVar14 = pbStack_4281;
    }
    if (pbVar6 != (byte *)0x0) {
code_r0x00427598:
      FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,1,(LPARAM)pbVar6);
    }
    pbVar16 = *(byte **)(*(int *)(pbVar14 + 0x90) + 0x16c);
    if (pbVar16 == (byte *)0x0) goto LAB_004275d0;
  }
  else {
    out(*(undefined4 *)((int)unaff_ESI + 5),uVar12);
    bVar3 = in(uVar12);
    *unaff_EDI = bVar3;
    bVar17 = param_2 == -1;
    pcVar5 = pcStack_4271;
    pbVar13 = pbStack_4279;
    pbVar14 = pbStack_427d;
    pbVar15 = uStack_4289;
    if (!CARRY1(bVar2,param_3)) {
      cVar4 = (char)pcStack_4271 - *pcStack_4271;
      pcVar5 = (char *)CONCAT31((int3)((uint)pcStack_4271 >> 8),cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      pcStack_4271 = (char *)0x54004285;
      bVar18 = (int)&uStack_4289 + 1 < 0;
      bVar17 = &GHIDRA_STACK(0x00000000) == (undefined1 *)0x4288;
      pbVar16 = (byte *)0x54004285;
      unaff_EDI = pbVar16;
      if (!bVar17) {
        pbVar15 = puStack_426d + 1;
        out(*puStack_426d,(short)pbStack_425d);
        pcVar5 = pcStack_4255;
        pbVar13 = pbStack_425d;
        pbVar14 = pbStack_4261;
        cStack_4275 = cStack_4259;
        goto code_r0x0042751c;
      }
code_r0x0042756b:
      if (bVar18) {
        pbVar14 = pbStack_4261 + 1;
        goto LAB_004275d0;
      }
      goto code_r0x0042756d;
    }
code_r0x0042751c:
    uVar10 = (undefined3)((uint)pbStack_4279 >> 8);
    if (!bVar17) {
      uVar11 = (undefined3)((uint)pcVar5 >> 8);
      cVar4 = (char)pcVar5 - *pcVar5;
      pcVar5 = (char *)CONCAT31(uVar11,cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      pbVar6 = (byte *)(CONCAT31(uVar11,cVar4) | 0x85);
      pbVar1 = pbVar13 + (int)pbVar6 * 2 + 0x76;
      *pbVar1 = *pbVar1 + (char)(pbVar13 + 1);
      if (*pbVar1 != 0) {
        uVar12 = SUB42(pbVar13 + 1,0);
        out(*(undefined4 *)pbVar15,uVar12);
        out(pbVar15[4],uVar12);
        if (pbVar16 != (byte *)0xffffffff) {
          pcVar5 = (char *)CONCAT31(uVar10,(char)pbStack_4279 - *pbStack_4279);
          pbVar13 = pbStack_4281;
          pbVar14 = pbStack_4285;
          pbVar15 = pbStack_4291;
          cStack_4275 = (char)pbStack_427d;
          goto code_r0x0042753e;
        }
        pbStack_4279[4] = pbStack_4279[4] + (char)pbStack_4281;
        pbVar16 = pbStack_4279;
        goto code_r0x00427561;
      }
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
      *pbVar6 = *pbVar6 | (byte)pbVar6;
      goto code_r0x00427598;
    }
code_r0x0042753e:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
    bVar2 = *pbVar15;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),bVar2);
    if ((*pbVar13 & bVar2) != 0) {
      cVar4 = (char)pbStack_4279 - *pbStack_4279;
      pbVar16 = (byte *)CONCAT31(uVar10,cVar4);
      *pbVar16 = *pbVar16 + cVar4;
      in_stack_ffffbd6b = pbVar14;
code_r0x00427561:
      *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + (char)pbStack_427d;
      in_stack_ffffbd6b[0x42] = in_stack_ffffbd6b[0x42] ^ (byte)((uint)pbStack_4285 >> 8);
      pcVar5 = acStack_4224 + (int)pbStack_4281 * 2;
      *pcVar5 = *pcVar5 + (char)pbStack_4281;
      bVar18 = *pcVar5 < '\0';
      pbStack_4261 = pbStack_4285;
      unaff_EDI = in_stack_ffffbd6b;
      goto code_r0x0042756b;
    }
    *pbVar16 = *pbVar16;
    pbVar14[-0x17affbbd] = pbVar14[-0x17affbbd] + cStack_4275;
    *pbVar16 = *pbVar16 | bVar2;
    pbVar16 = pbVar14;
  }
  FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,0,(LPARAM)pbVar16);
LAB_004275d0:
  (**(code **)(**(int **)(pbVar14 + 0x54) + 4))();
  iVar7 = *(int *)(*(int *)(pbVar14 + 0x50) + 8);
  (**(code **)(**(int **)(pbVar14 + 0x54) + 0x24))();
  *(undefined4 *)(iVar7 + 0xc) = 1;
  *(undefined4 *)(iVar7 + 8) = 1;
  iVar7 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x48))();
  *(int *)(pbVar14 + 0x68) = iVar7;
  (**(code **)(*(int *)(iVar7 + 8) + 0x10))();
  pbVar14[0x6c] = 0;
  pbVar14[0x6d] = 0;
  pbVar14[0x6e] = 0;
  pbVar14[0x6f] = 0;
  iVar7 = GetSystemMetrics(2);
  iVar8 = GetSystemMetrics(3);
  iVar7 = iVar7 + iVar8;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  *(int *)(pbVar14 + 0x9c) = iVar7 >> 2;
  pbVar16 = pbVar14;
  uVar9 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x44))();
  (**(code **)(*(int *)(pbVar14 + 0x35) + 0x50))(uVar9,*(int *)(pbVar14 + 0x35),pbVar16,pbVar14);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427578  PrintPreviewWindow::vf9   (297 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PrintPreviewWindow::vf9(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  OWL::TDecoratedFrame::vf9(param_1);
  if (*(int *)(param_1[0x24] + 0x168) != 0) {
    FUN_004a76a8(param_1[1],0x80,1,*(int *)(param_1[0x24] + 0x168));
  }
  if (*(int *)(param_1[0x24] + 0x16c) != 0) {
    FUN_004a76a8(param_1[1],0x80,0,*(int *)(param_1[0x24] + 0x16c));
  }
  (**(code **)(*(int *)param_1[0x15] + 4))();
  iVar1 = *(int *)(param_1[0x14] + 8);
  (**(code **)(*(int *)param_1[0x15] + 0x24))();
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x48))();
  param_1[0x1a] = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
  param_1[0x1b] = 0;
  iVar1 = GetSystemMetrics(2);
  iVar2 = GetSystemMetrics(3);
  iVar1 = iVar1 + iVar2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  param_1[0x27] = iVar1 >> 2;
  piVar4 = param_1;
  uVar3 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x44))();
  (**(code **)(*(int *)((int)param_1 + 0x35) + 0x50))
            (uVar3,*(int *)((int)param_1 + 0x35),piVar4,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004276a4  PrintPreviewWindow::vf15   (58 bytes)   [rtti:vtable virtual slot 15]
undefined4 __cdecl PrintPreviewWindow::vf15(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = OWL::TWindow::vf4(iVar3);
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    (**(code **)(*(int *)(iVar1 + 8) + 100))(iVar1,*(int *)(iVar1 + 8),iVar3,iVar1,3);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004276e0  PrintPreviewWindow::vf3   (153 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
undefined4 __cdecl PrintPreviewWindow::vf3(int *param_1,LPMSG param_2)

{
  undefined4 uVar1;
  
  if (param_2->message == 0x100) {
    switch(param_2->wParam) {
    case 0x1b:
      uVar1 = FUN_00428340((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x21:
    case 0x25:
    case 0x26:
      uVar1 = PrintPreviewWindow::Cmd5720((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x22:
    case 0x27:
    case 0x28:
      uVar1 = PrintPreviewWindow::Cmd5730((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x23:
      uVar1 = FUN_004283a8((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x24:
      uVar1 = FUN_0042835c((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  if (param_2->message == 0x20a) {
    param_2->message = 0x115;
    param_2->wParam = (uint)((int)param_2->wParam < 0);
    param_2->lParam = 0;
  }
  uVar1 = OWL::TDecoratedFrame::vf3(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004277a0  PrintPreviewWindow::vf16   (719 bytes)   [rtti:vtable virtual slot 16]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PrintPreviewWindow::vf16(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  uint local_1d8 [66];
  undefined4 local_d0;
  WINDOWPLACEMENT local_b8;
  undefined1 *local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  int local_78;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f1e44);
  local_b8.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(*(int *)(param_1 + 4) + 0xc),&local_b8);
  if (BVar1 == 0) goto LAB_00427a4e;
  local_50 = 0x14;
  FUN_00401d10((int)local_14,param_1 + 0x70,(uint *)"Position");
  local_44 = local_44 + 1;
  local_50 = 0x20;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_2c);
  local_44 = local_44 + 1;
  Persist::Persist(local_1c,(int)local_2c,iVar3,iVar4);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004278bb;
    }
    local_64 = local_24 + -0xc;
    operator_delete();
    local_68 = 0;
    local_6c = local_2c;
    local_24 = 0;
    local_d0 = 0;
  }
LAB_004278bb:
  local_50 = 8;
  IsZoomed(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
  FUN_0044eee4((undefined1 *)local_1d8);
  local_50 = 0x38;
  std::string::string_from_cstr((int)local_3c,local_1d8);
  local_44 = local_44 + 1;
  FUN_0044ec78((int)local_1c,(int)local_14,(int)local_3c);
  local_44 = local_44 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004279b1;
    }
    local_78 = local_34 + -0xc;
    operator_delete();
    local_7c = 0;
    local_80 = local_3c;
    local_34 = 0;
  }
LAB_004279b1:
  local_50 = 8;
  local_44 = local_44 + -1;
  Persist::_dtor((int)local_1c,2);
  local_44 = local_44 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00427a48;
    }
    local_84 = local_c + -0xc;
    operator_delete();
    local_88 = 0;
    local_8c = local_14;
    local_c = 0;
  }
LAB_00427a48:
  local_50 = 0;
LAB_00427a4e:
  OWL::TWindow::vf6(*(int *)(param_1 + 4),param_2);
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a70  PrintPreviewWindow::vf13   (88 bytes)   [rtti:vtable virtual slot 13]
void __cdecl PrintPreviewWindow::vf13(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_2;
  }
  puVar2 = FUN_004dd744((int)param_2,iVar1,(int *)&DAT_00427ac8,(int *)&DAT_00427b08,0);
  if ((puVar2 == (undefined4 *)0x0) || (param_2[1] != 0x163a)) {
    OWL::TDecoratedFrame::vf13(param_1,param_2);
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427b54  PrintPreviewWindow::vf18   (102 bytes)   [rtti:vtable virtual slot 18; function defined from vtable-slot]
int * __cdecl PrintPreviewWindow::vf18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f1eb0);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_0049c640(piVar1,0,param_2,param_3,param_4,param_5,param_6);
  }
  *in_FS_OFFSET = local_2c;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427bd8  PrintPreviewWindow::vf17   (599 bytes)   [rtti:vtable virtual slot 17]
void __cdecl PrintPreviewWindow::vf17(int param_1)

{
  undefined4 local_5c;
  byte local_58;
  byte local_57;
  byte local_56;
  int local_55;
  undefined4 local_51;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  undefined4 local_4a;
  undefined4 local_46;
  byte local_42;
  byte local_41;
  byte local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  byte local_37;
  byte local_36;
  byte local_35;
  undefined4 local_34;
  undefined4 local_30;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  int local_29;
  undefined4 local_25;
  byte local_21;
  byte local_20;
  byte local_1f;
  int local_1e;
  undefined4 local_1a;
  byte local_16;
  byte local_15;
  byte local_14;
  int local_13;
  undefined4 local_f;
  byte local_b;
  byte local_a;
  byte local_9;
  int local_8;
  
  FUN_00495f90(&local_30);
  FUN_00496088((int)&local_30,'\0');
  local_29 = *(int *)(param_1 + 0x9c);
  local_30 = 0;
  local_2c = local_2c & 0xf0;
  local_2b = local_2b & 0xf0 | 3;
  local_2a = local_2a & 0xf0;
  local_25 = 0;
  local_21 = local_21 & 0xf0 | 1;
  local_20 = local_20 & 0xf0 | 3;
  local_1f = local_1f & 0xf0 | 1;
  local_8 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) < local_8) {
    local_f = 0;
    local_b = local_b & 0xf0 | 3;
    local_a = local_a & 0xf0 | 2;
    local_9 = local_9 & 0xf0 | 3;
    local_13 = (local_8 * 0x5f) / *(int *)(param_1 + 0x60);
    local_1a = *(undefined4 *)(param_1 + 0x68);
    local_16 = local_16 & 0xf0 | 5;
    local_15 = local_15 & 0xf0 | 1;
    local_14 = local_14 & 0xf0 | 6;
    local_8 = local_29;
  }
  else {
    local_8 = (*(int *)(param_1 + 0x60) * 0x5f) / local_8;
    local_f = *(undefined4 *)(param_1 + 0x68);
    local_b = local_b & 0xf0 | 6;
    local_a = local_a & 0xf0 | 1;
    local_9 = local_9 & 0xf0 | 5;
    local_1a = 0;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 2;
    local_14 = local_14 & 0xf0 | 2;
    local_13 = local_29;
  }
  local_1e = local_29;
  FUN_00494fc8(*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x68),&local_30);
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_00495f90(&local_5c);
    local_5c = *(undefined4 *)(param_1 + 0x68);
    local_55 = *(int *)(param_1 + 0x9c) * 2;
    local_58 = local_58 & 0xf0;
    local_57 = local_57 & 0xf0 | 3;
    local_56 = local_56 & 0xf0 | 2;
    local_4d = local_4d & 0xf0 | 1;
    local_4c = local_4c & 0xf0 | 4;
    local_4b = local_4b & 0xf0 | 1;
    local_4a = 0;
    local_42 = local_42 & 0xf0 | 5;
    local_41 = local_41 & 0xf0 | 4;
    local_40 = local_40 & 0xf0 | 5;
    local_3f = 0;
    local_37 = local_37 & 0xf0 | 3;
    local_36 = local_36 & 0xf0 | 4;
    local_35 = local_35 & 0xf0 | 3;
    local_34 = 0;
    local_51 = local_5c;
    local_46 = local_5c;
    local_3b = local_5c;
    FUN_00494fc8(*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x6c),&local_5c);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x94) + 0xc) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427e30  PrintPreviewWindow::vf20   (179 bytes)   [rtti:vtable virtual slot 20]
void __cdecl PrintPreviewWindow::vf20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_68 [25];
  
  piVar1 = (int *)FUN_00490dd0(*(int *)(param_1 + 100) + 4,0x1680);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  puVar2 = FUN_004dd744((int)piVar1,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_00427f30,0);
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(*(int *)(param_1 + 0x6c) + 0x86) == 0)) {
      FUN_004e0344((undefined1 *)local_68,(byte *)"Page %d of %d");
    }
    else {
      FUN_004e0344((undefined1 *)local_68,(byte *)"Page %d - %d");
    }
    FUN_0049ed44((int)puVar2,local_68);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427f8c  PrintPreviewWindow::EvHelp   (39 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_HELP
void __stdcall PrintPreviewWindow::EvHelp(void)

{
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427fb4  PrintPreviewWindow::vf21   (178 bytes)   [rtti:vtable virtual slot 21]
void __cdecl PrintPreviewWindow::vf21(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = FUN_004dd744((int)*(int **)(*(int *)param_1[0x25] + 0x44),
                        **(int **)(*(int *)param_1[0x25] + 0x44),(int *)&DAT_00428068,
                        (int *)&DAT_004280c0,1);
  FUN_0044f8cc((int)piVar1,0);
  if (param_2 != 1) {
    (**(code **)(*piVar1 + 0x14))();
    (**(code **)(*piVar1 + 0x2c))();
  }
  OWL::TDecoratedFrame::EvSize(param_1,param_2,param_3);
  FUN_0044f8cc((int)piVar1,1);
  if ((param_2 != 1) && (param_1[0x1a] != 0)) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428114  PrintPreviewWindow::CeCmd5690   (18 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND_ENABLE(5690)
void __cdecl PrintPreviewWindow::CeCmd5690(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428128  PrintPreviewWindow::CeCmd5720   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(5720)
void __cdecl PrintPreviewWindow::CeCmd5720(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042814c  PrintPreviewWindow::CeCmd5730   (38 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(5730)
void __cdecl PrintPreviewWindow::CeCmd5730(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428174  PrintPreviewWindow::Cmd5690   (306 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5690)
void __cdecl PrintPreviewWindow::Cmd5690(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  (**(code **)(**(int **)(param_1 + 0x54) + 4))();
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  *(undefined4 *)((int)puVar2 + 0x25) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 4);
  *(undefined4 *)((int)puVar2 + 0x29) = 0;
  *(undefined4 *)((int)puVar2 + 0x2d) = 0;
  StartDocA((HDC)*puVar2,(DOCINFOA *)((int)puVar2 + 0x21));
  (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
  for (iVar5 = *(int *)(iVar1 + 8); iVar5 <= *(int *)(iVar1 + 8); iVar5 = iVar5 + 1) {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
    if (cVar4 == '\0') break;
    StartPage((HDC)**(undefined4 **)(param_1 + 0x58));
    (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
    piVar3 = *(int **)(param_1 + 0x58);
    FUN_0048db40(piVar3);
    EndPage((HDC)*piVar3);
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))();
  EndDoc((HDC)**(undefined4 **)(param_1 + 0x58));
  (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004282a8  PrintPreviewWindow::Cmd5720   (76 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5720)
undefined4 __cdecl PrintPreviewWindow::Cmd5720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  if (*(int *)(iVar1 + 0x10) < *(int *)(iVar1 + 8)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    FUN_0049c744(*(int *)(param_1 + 0x68),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004282f4  PrintPreviewWindow::Cmd5730   (76 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5730)
undefined4 __cdecl PrintPreviewWindow::Cmd5730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 0x14)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428340  FUN_00428340   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00428340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(**(int **)(param_1 + 0x94) + 8) + 0x24))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042835c  FUN_0042835c   (76 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0042835c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(iVar2 + 8);
  if (1 < *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(undefined4 *)(iVar1 + 8) = 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),1);
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004283a8  FUN_004283a8   (75 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004283a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  iVar2 = *(int *)(iVar1 + 0x14);
  if (*(int *)(iVar1 + 0xc) < iVar2) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *(int *)(iVar1 + 8) = iVar2;
    FUN_0049c744(*(int *)(param_1 + 0x68),iVar2);
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return iVar2;
}

} // namespace tea
