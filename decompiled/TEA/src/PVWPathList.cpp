// TEA.exe — application module "PVWPathList"
// 78 functions, 0x00420274..0x004258e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420274  PVWPathList::~PVWPathList   (696 bytes)   [rtti:dtor destructor]
//   written in code as PVWPathList::_dtor
void __cdecl PVWPathList::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  
  __InitExceptBlockLDTC(0x4efa00);
  if (param_1 == (int *)0x0) goto LAB_0042051b;
  if (param_1[0x16c] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16c] + 0xc))();
  }
  if (param_1[0x16d] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16d] + 0xc))();
  }
  if (param_1[0x16e] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16e] + 0xc))();
  }
  if (param_1[0x16f] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16f] + 0xc))();
  }
  if (param_1[0x16a] != 0) {
    if (*(int *)(param_1[0x16a] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x16a] + -0xc);
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
      if (iVar1 != 0) goto LAB_004203d5;
    }
    operator_delete();
    param_1[0x16a] = 0;
  }
LAB_004203d5:
  OWL::TButton::_dtor(param_1 + 0x13c,2);
  OWL::TButton::_dtor(param_1 + 0x111,2);
  OWL::TButton::_dtor(param_1 + 0xe6,2);
  OWL::TButton::_dtor(param_1 + 0xbb,2);
  OWL::TButton::_dtor(param_1 + 0x90,2);
  if (param_1[0x8e] != 0) {
    if (*(int *)(param_1[0x8e] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x8e] + -0xc);
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
      if (iVar1 != 0) goto LAB_004204c9;
    }
    operator_delete();
    param_1[0x8e] = 0;
  }
LAB_004204c9:
  PVWEdit::_dtor(param_1 + 0x5a,2);
  PVWPathListBox::_dtor(param_1 + 0x2c,2);
  PVWPathListBox::_dtor(param_1,2);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0042051b:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042056c  FUN_0042056c   (1555 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042056c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  int local_b94;
  int local_b90;
  uint local_b78;
  int local_b4c;
  undefined4 local_b48;
  int local_b24 [696];
  undefined1 local_44 [8];
  uint *local_3c;
  undefined1 local_34 [8];
  char *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4efb0c);
  iVar2 = param_1;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  local_b94 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x6c))
                        (param_1 + 0xb0,*(int *)(param_1 + 0xbc),iVar2,param_1 + 0xb0);
  local_b4c = iVar1 + 1;
  if (param_2 < 0x1ed2) {
    if (param_2 - 0x1ebeU < 2) {
      local_b4c = iVar1 + -1;
    }
    else if (1 < param_2 - 0x1ec8U) goto LAB_00420b6d;
    FUN_0041f8c8((int)local_14,param_1,iVar1);
    FUN_0041fbe4(param_1,(int)local_14,local_b4c);
    (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar7 = (int *)(local_c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar2 = *piVar7 + 1;
        }
        if (iVar2 != 0) goto LAB_00420b6d;
      }
      operator_delete();
      local_c = 0;
    }
  }
  else if (param_2 - 0x1ed2U < 2) {
    if ((-1 < local_b94) &&
       (iVar2 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))(), local_b94 < iVar2)) {
      iVar2 = param_1 + 0xb0;
      FUN_0041f8c8((int)local_24,iVar2,local_b94);
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
      FUN_0041fbe4(param_1,(int)local_24,iVar1);
      iVar1 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))();
      if (iVar1 <= local_b94) {
        local_b94 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))
                              (iVar1,*(int *)(param_1 + 0xbc),iVar2);
        local_b94 = local_b94 + -1;
      }
      if (-1 < local_b94) {
        (**(code **)(*(int *)(param_1 + 0xbc) + 0x70))();
      }
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar7 = (int *)(local_1c + -0xc);
          if (piVar7 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar7 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar7 = *piVar7 + -1;
            iVar2 = *piVar7 + 1;
          }
          if (iVar2 != 0) goto LAB_00420b6d;
        }
        operator_delete();
        local_1c = 0;
      }
    }
  }
  else if (param_2 - 0x1edcU < 2) {
    FUN_0041f8c8((int)local_34,param_1,iVar1);
    local_b78 = DAT_005140ac;
    if (*(uint *)(local_2c + -4) < DAT_005140ac) {
      local_b78 = *(uint *)(local_2c + -4);
    }
    pcVar3 = FUN_00420b88(local_2c,'\\',local_b78);
    uVar6 = DAT_005140ac;
    if (pcVar3 != (char *)0x0) {
      uVar6 = (int)pcVar3 - (int)local_2c;
    }
    if ((uVar6 != 0xffffffff) &&
       (iVar2 = FUN_004d4220((int)local_34,0,uVar6 + 1,param_1 + 0x230), iVar2 == 0)) {
      FUN_0041fbe4(param_1 + 0xb0,(int)local_34,-1);
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
    if (iVar2 <= iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
      iVar1 = iVar1 + -1;
    }
    if (-1 < iVar1) {
      (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
    }
    if (local_2c != (char *)0x0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar7 = (int *)(local_2c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar2 = *piVar7 + 1;
        }
        if (iVar2 != 0) goto LAB_00420b6d;
      }
      operator_delete();
      local_2c = (char *)0x0;
    }
  }
  else if (param_2 - 0x1ee6U < 2) {
    local_b90 = 0;
    if (iVar1 < 0) {
      if (-1 < local_b94) {
        local_b90 = *(int *)(param_1 + 0xc4);
      }
    }
    else {
      local_b90 = *(int *)(param_1 + 0x14);
      local_b94 = iVar1;
    }
    if (local_b90 != 0) {
      puVar4 = (uint *)FUN_00408c98(local_b90,local_b94);
      std::string::string_from_cstr((int)local_44,puVar4);
      puVar4 = thunk_strrchr(local_3c,'.');
      if (puVar4 != (uint *)0x0) {
        iVar2 = FUN_004dcbf8((char *)puVar4,PTR_DAT_004f33b8);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x160) == 0) {
            uVar5 = *(undefined4 *)(param_1 + 0x160);
          }
          else {
            uVar5 = **(undefined4 **)(param_1 + 0x160);
          }
          piVar7 = FUN_00401150(local_b24,0,uVar5,*(int *)(param_1 + 0x164),local_b90,local_b94);
          (**(code **)(piVar7[3] + 0x14))();
          TEADictionaryPropertiesWindows::_dtor(local_b24,2);
        }
        else {
          FUN_004dcbf8((char *)puVar4,PTR_DAT_004f33bc);
        }
      }
      if (local_3c != (uint *)0x0) {
        if (local_3c[-3] != 0xffffffff) {
          puVar4 = local_3c + -3;
          if (puVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (puVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *puVar4 = *puVar4 - 1;
            iVar2 = *puVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_00420b6d;
        }
        operator_delete();
        local_3c = (uint *)0x0;
      }
    }
  }
LAB_00420b6d:
  FUN_00420bb4(param_1);
  *in_FS_OFFSET = local_b48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b88  FUN_00420b88   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_00420b88(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (param_2 == *pcVar1) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420bb4  FUN_00420bb4   (261 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00420bb4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4efbb4);
  puVar1 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x14));
  std::string::string_from_cstr((int)local_14,puVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x160) + 0xc) + 0x94))();
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00420c7d;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00420c7d:
  FUN_00420cbc(param_1,*(int *)(param_1 + 0x228) + 0x1e96);
  FUN_00420cbc(param_1,*(int *)(param_1 + 0x228) + 0x1ea0);
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420cbc  FUN_00420cbc   (367 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00420cbc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint bEnable;
  HWND hWnd;
  int *piVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x6c))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x398) + 8) + 0x60))();
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x228) + 0x1ea0 == param_2)) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x228) + 0x1e96 == param_2)) {
    (**(code **)(*(int *)(param_1 + 0xbc) + 0x70))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x398) + 8) + 0x60))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x240) + 8) + 0x60))();
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x2ec) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x444) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x4f0) + 8) + 0x60))();
  if (*(int *)(param_1 + 0x5b0) != 0) {
    uVar2 = FUN_0041fea4(param_1);
    uVar4 = 0;
    piVar3 = &DAT_004ed280;
    do {
      bEnable = uVar2 & 0xff;
      hWnd = GetDlgItem(*(HWND *)(**(int **)(param_1 + 0x160) + 0xc),*piVar3);
      EnableWindow(hWnd,bEnable);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420e2c  FUN_00420e2c   (145 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00420e2c(int param_1,int param_2)

{
  BOOL BVar1;
  
  if (param_2 == *(int *)(param_1 + 0x228) + 0x1e96) {
    BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x444) + 0xc));
    if (BVar1 != 0) {
      FUN_0042056c(param_1,*(int *)(param_1 + 0x228) + 0x1edc);
      return;
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x228) + 0x1ea0) {
    BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x398) + 0xc));
    if (BVar1 != 0) {
      FUN_0042056c(param_1,*(int *)(param_1 + 0x228) + 0x1ed2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420ec0  FUN_00420ec0   (684 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00420f55) */
void __cdecl FUN_00420ec0(int param_1,int *param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined *local_88;
  undefined *local_7c;
  WPARAM local_78;
  WPARAM local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined4 local_44 [12];
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4efc04);
  iVar2 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  if ((((iVar2 == 0x1e96) || (iVar2 == 0x1ea0)) || (iVar2 == 0x1e97)) || (iVar2 == 0x1ea1)) {
    if (param_2 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[3];
    }
    piVar3 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_00402be8,(int *)&DAT_004070f4,0);
    local_c = &DAT_00513d64;
    local_88 = &DAT_00513d64;
    local_4c = local_4c + 1;
    local_58 = 0x20;
    uVar4 = *(uint *)(param_3 + 0xc);
    local_70 = (int)(short)uVar4;
    local_6c = (int)(short)(uVar4 >> 0x10);
    local_74 = FUN_004a76a8(*piVar3,0x1a9,0,local_6c << 0x10 | uVar4 & 0xffff);
    iVar2 = (**(code **)(piVar3[3] + 0x24))();
    if ((int)local_74 < iVar2) {
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_78 = local_74;
      iVar2 = FUN_004a76a8(*piVar3,0x198,local_74,(LPARAM)&local_a0);
      if (iVar2 != -1) {
        if (((local_70 < local_a0) || (local_98 <= local_70)) ||
           ((local_6c < local_9c || (local_94 <= local_6c)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_00408dac(piVar3[5],local_74);
        }
      }
    }
    uVar4 = FUN_004d40d0((int)local_14,0,*(uint *)(local_c + -4),*(byte **)(param_1 + 0x5a8),
                         *(uint *)(*(int *)(param_1 + 0x5a8) + -4));
    if (uVar4 != 0) {
      FUN_004cf384(param_1 + 0x5a0,(int)local_14);
      local_58 = 0x2c;
      puVar5 = FUN_0049f498(local_44,*(undefined4 *)(**(int **)(param_1 + 0x160) + 0xc),
                            *(undefined4 *)(*param_2 + 0xc),*(uint **)(param_1 + 0x5a8));
      local_4c = local_4c + 2;
      FUN_004a76a8(*param_4,0x40c,0,(LPARAM)puVar5);
      local_4c = local_4c + -2;
      operator_delete_array();
      local_58 = 0x20;
    }
    local_4c = local_4c + -1;
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0042115b;
      }
      local_7c = local_c + -0xc;
      operator_delete();
    }
  }
LAB_0042115b:
  *in_FS_OFFSET = local_68;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042116c  FUN_0042116c   (1153 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00421274) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0042116c(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined3 extraout_var;
  int *piVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined4 *in_FS_OFFSET;
  char *pcVar10;
  uint local_98;
  undefined4 local_88;
  undefined1 local_64 [8];
  char *local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4efcdc);
  FUN_0041b48c((int *)(param_1 + 0x168),param_2);
  FUN_00401d10((int)local_54,param_2,(uint *)&DAT_004ed376);
  FUN_004cf384(param_1 + 0x230,(int)local_54);
  if (local_4c != 0) {
    if (*(int *)(local_4c + -0xc) != -1) {
      piVar7 = (int *)(local_4c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_00421249;
    }
    operator_delete();
    local_4c = 0;
  }
LAB_00421249:
  local_c = &DAT_00513d64;
  FUN_00401d10((int)local_24,param_1 + 0x230,(uint *)&DAT_004ed378 /* "*.*" */);
  FUN_00414278(&local_44,(int)local_24);
  for (local_98 = local_40; local_98 < local_3c; local_98 = local_98 + 0x10) {
    puVar1 = *(uint **)(local_98 + 8);
    puVar4 = thunk_strrchr(puVar1,'.');
    if (puVar4 != (uint *)0x0) {
      FUN_00401d10((int)local_64,param_1 + 0x230,puVar1);
      for (iVar3 = 0; iVar6 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14)), iVar3 < iVar6;
          iVar3 = iVar3 + 1) {
        pcVar10 = local_5c;
        pcVar5 = (char *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar3);
        iVar6 = FUN_004dcbf8(pcVar5,pcVar10);
        if (iVar6 == 0) break;
      }
      iVar6 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14));
      if (iVar6 <= iVar3) {
        uVar8 = 0;
        ppuVar9 = &PTR_DAT_004f33b0;
        do {
          if (((1 << ((byte)uVar8 & 0x1f) & *(uint *)(param_1 + 0x224)) != 0) &&
             (iVar3 = FUN_004dcbf8((char *)puVar4,*ppuVar9), iVar3 == 0)) break;
          uVar8 = uVar8 + 1;
          ppuVar9 = ppuVar9 + 1;
        } while (uVar8 < 4);
        if ((uVar8 != 4) &&
           ((*(int *)(param_1 + 0x224) != 4 ||
            (bVar2 = FUN_004216dc(param_1,(int)local_64), CONCAT31(extraout_var,bVar2) != 0)))) {
          if (*(int *)(local_c + -4) != 0) {
            std::string::replace_fill((int)local_14,*(uint *)(local_c + -4),0,1,0x3b);
          }
          std::string::append((int)local_14,(int)local_64);
        }
      }
      if (local_5c != (char *)0x0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar7 = (int *)(local_5c + -0xc);
          if (piVar7 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar7 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar7 = *piVar7 + -1;
            iVar3 = *piVar7 + 1;
          }
          if (iVar3 != 0) goto LAB_0042147c;
        }
        operator_delete();
        local_5c = (char *)0x0;
      }
    }
LAB_0042147c:
  }
  FUN_0041f1c8(param_1 + 0xb0,(int)local_14,'\x01');
  FUN_0040b4f0(&local_44,local_40,local_3c);
  operator_delete();
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_00421547;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_00421547:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar7 = (int *)(local_c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar3 = *piVar7 + 1;
      }
      if (iVar3 != 0) goto LAB_004215da;
    }
    operator_delete();
  }
LAB_004215da:
  *in_FS_OFFSET = local_88;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004215f0  FUN_004215f0   (173 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004215f0(int param_1,int param_2)

{
  FUN_0041f1c8(param_1,param_2,'\0');
  if (*(int **)(param_1 + 0x5b0) != (int *)0x0) {
    FUN_0041b218(*(int **)(param_1 + 0x5b0));
    FUN_004a76a8(**(int **)(param_1 + 0x5b4),0x465,0,999);
    FUN_0041b218(*(int **)(param_1 + 0x5b8));
    FUN_004a76a8(**(int **)(param_1 + 0x5bc),0x465,0,999);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004216a0  FUN_004216a0   (60 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004216a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0041b280(*(int **)(param_2 + 0x5b0));
  uVar2 = FUN_0041b280(*(int **)(param_2 + 0x5b8));
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004216dc  FUN_004216dc   (108 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004216dc(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  bool bVar4;
  undefined4 local_c;
  
  bVar4 = false;
  puVar2 = FUN_00407734(*(uint **)(param_2 + 8));
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = TSDictionaryList::GetCount((int)puVar2);
    if (iVar3 == 1) {
      uVar1 = FUN_00408b6c((int)puVar2,0);
      if (CONCAT31(extraout_var,uVar1) != 0) {
        FUN_00408e24((int)puVar2,0);
        bVar4 = 0 < local_c;
      }
    }
  }
  TSDictionaryList::ReleaseDictionaries((int)puVar2);
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217d0  OWL::TDefaultGUIFont::~TDefaultGUIFont   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDefaultGUIFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TDefaultGUIFont::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efd94);
  if (param_1 != (uint *)0x0) {
    OWL::TGdiObject::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219dc  OWL::TChooseColorDialog::TData::~TData   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TChooseColorDialog::TData::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TChooseColorDialog::TData::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efd9c);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a88  OWL::TPen::~TPen   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPen::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPen::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efdb0);
  if (param_1 != (uint *)0x0) {
    OWL::TGdiObject::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421b48  FUN_00421b48   (69 bytes)   [unnamed; function defined from prologue-scan]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00421b48(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efdb8);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421c10  OWL::TPopupMenu::~TPopupMenu   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPopupMenu::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPopupMenu::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efdcc);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TMenu::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cd0  OWL::TListBox::vf9   (28 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf9(int *param_1)

{
  FUN_004a76a8(*param_1,0x18b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cec  OWL::TListBox::vf10   (32 bytes)   [rtti:vtable virtual slot 10]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf10(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,399,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d0c  OWL::TListBox::vf11   (45 bytes)   [rtti:vtable virtual slot 11]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf11(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004a6094(*param_1,0x1a2,param_3,param_2);
  (**(code **)(param_1[3] + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d3c  OWL::TListBox::vf12   (28 bytes)   [rtti:vtable virtual slot 12]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf12(int *param_1)

{
  FUN_004a76a8(*param_1,0x18e,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d58  OWL::TListBox::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf13(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x197,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d78  OWL::TListBox::vf14   (28 bytes)   [rtti:vtable virtual slot 14]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf14(int *param_1)

{
  FUN_004a76a8(*param_1,0x193,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d94  OWL::TListBox::vf15   (30 bytes)   [rtti:vtable virtual slot 15]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf15(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x194,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421db4  OWL::TListBox::vf16   (30 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf16(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x18a,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421dd4  OWL::TListBox::vf17   (32 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf17(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x189,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421df4  OWL::TListBox::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf18(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x199,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e14  OWL::TListBox::vf19   (32 bytes)   [rtti:vtable virtual slot 19]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf19(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x19a,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e34  OWL::TListBox::vf20   (30 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf20(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x1a1,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e54  OWL::TListBox::vf21   (48 bytes)   [rtti:vtable virtual slot 21]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf21(int *param_1,WPARAM param_2,ushort param_3)

{
  FUN_004a76a8(*param_1,0x1a0,param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e84  OWL::TListBox::vf22   (28 bytes)   [rtti:vtable virtual slot 22]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf22(int *param_1)

{
  FUN_004a76a8(*param_1,0x184,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ea0  OWL::TListBox::vf23   (32 bytes)   [rtti:vtable virtual slot 23]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf23(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x18d,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ec0  OWL::TListBox::vf24   (30 bytes)   [rtti:vtable virtual slot 24]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf24(int *param_1,LPARAM param_2)

{
  FUN_004a76a8(*param_1,0x180,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ee0  OWL::TListBox::vf25   (32 bytes)   [rtti:vtable virtual slot 25]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf25(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x181,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421f00  OWL::TListBox::vf26   (30 bytes)   [rtti:vtable virtual slot 26]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::vf26(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x182,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ff8  OWL::TEdit::vf13   (32 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::vf13(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0xb0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422018  OWL::TEdit::vf14   (36 bytes)   [rtti:vtable virtual slot 14]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TEdit::vf14(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042203c  OWL::TEdit::vf15   (42 bytes)   [rtti:vtable virtual slot 15]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TEdit::vf15(int *param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xb1,param_2,param_3);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422068  OWL::TEdit::vf17   (28 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::vf17(int *param_1)

{
  FUN_004a76a8(*param_1,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422084  OWL::TEdit::vf18   (42 bytes)   [rtti:vtable virtual slot 18]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::vf18(int *param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_004a76a8(*param_1,0xd7,0,CONCAT22(param_2,param_3));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004220b0  OWL::TEdit::vf19   (32 bytes)   [rtti:vtable virtual slot 19]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::vf19(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0xd6,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422160  OWL::TComboBox::vf9   (28 bytes)   [rtti:vtable virtual slot 9]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf9(int *param_1)

{
  FUN_004a76a8(*param_1,0x146,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042217c  OWL::TComboBox::vf10   (32 bytes)   [rtti:vtable virtual slot 10]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf10(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x14c,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042219c  OWL::TComboBox::vf11   (45 bytes)   [rtti:vtable virtual slot 11]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf11(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x158,param_3,param_2);
  (**(code **)(param_1[3] + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004221cc  OWL::TComboBox::vf12   (28 bytes)   [rtti:vtable virtual slot 12]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf12(int *param_1)

{
  FUN_004a76a8(*param_1,0x15b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004221e8  OWL::TComboBox::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf13(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x15c,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422208  OWL::TComboBox::vf14   (28 bytes)   [rtti:vtable virtual slot 14]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf14(int *param_1)

{
  FUN_004a76a8(*param_1,0x15d,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422224  OWL::TComboBox::vf15   (30 bytes)   [rtti:vtable virtual slot 15]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf15(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x15e,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422244  OWL::TComboBox::vf16   (30 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf16(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x149,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422264  OWL::TComboBox::vf17   (32 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf17(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x148,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422284  OWL::TComboBox::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf18(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x150,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222a4  OWL::TComboBox::vf19   (32 bytes)   [rtti:vtable virtual slot 19]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf19(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x151,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222c4  OWL::TComboBox::vf20   (30 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf20(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x154,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222e4  OWL::TComboBox::vf21   (48 bytes)   [rtti:vtable virtual slot 21]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf21(int *param_1,WPARAM param_2,ushort param_3)

{
  FUN_004a76a8(*param_1,0x153,param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422314  OWL::TComboBox::vf22   (28 bytes)   [rtti:vtable virtual slot 22]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf22(int *param_1)

{
  FUN_004a76a8(*param_1,0x14b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422330  OWL::TComboBox::vf23   (32 bytes)   [rtti:vtable virtual slot 23]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf23(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x145,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422350  OWL::TComboBox::vf24   (30 bytes)   [rtti:vtable virtual slot 24]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf24(int *param_1,LPARAM param_2)

{
  FUN_004a76a8(*param_1,0x143,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422370  OWL::TComboBox::vf25   (32 bytes)   [rtti:vtable virtual slot 25]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf25(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x14a,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422390  OWL::TComboBox::vf26   (30 bytes)   [rtti:vtable virtual slot 26]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf26(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x144,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223b0  OWL::TComboBox::vf27   (28 bytes)   [rtti:vtable virtual slot 27]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf27(int *param_1)

{
  FUN_004a76a8(*param_1,0x147,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223cc  OWL::TComboBox::vf28   (30 bytes)   [rtti:vtable virtual slot 28]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf28(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0x14e,param_2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223ec  OWL::TComboBox::vf31   (32 bytes)   [rtti:vtable virtual slot 31]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf31(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x158,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042240c  OWL::TComboBox::vf32   (32 bytes)   [rtti:vtable virtual slot 32]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::vf32(int *param_1,LPARAM param_2,WPARAM param_3)

{
  FUN_004a76a8(*param_1,0x14d,param_3,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422b88  OWL::TRichEdit::~TRichEdit   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRichEdit::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f0d88);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TEditFile::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x1e,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1c,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422cf8  OWL::TUpDown::~TUpDown   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TUpDown::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TUpDown::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f0d90);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x14;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x14;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xe,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xc,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422de4  FUN_00422de4   (12 bytes)   [unnamed; function defined from prologue-scan]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00422de4(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422df0  OWL::TAPointer<char>::~TAPointer   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_char::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TAPointer_char::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e14  FUN_00422e14   (12 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00422e14(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e20  OWL::TAPointer<OWL::TColor>::~TAPointer   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TColor::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TAPointer_OWL_TColor::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f80  FUN_00422f80   (65 bytes)   [unnamed; function defined from prologue-scan]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00422f80(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f0e14);
  if (DAT_004f0d98 != '\0') {
    LookupConfiguration::_dtor(0x519900,2);
    DAT_004f0d98 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422fc4  FUN_00422fc4   (81 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined * __cdecl FUN_00422fc4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f10ec);
  if (DAT_004f0d98 == '\0') {
    FUN_00424c28((int *)&DAT_00519900,param_1);
    DAT_004f0d98 = DAT_004f0d98 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00519900;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423078  FUN_00423078   (2982 bytes, 3 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00423278) */
/* WARNING: Removing unreachable block (ram,0x00423932) */
/* WARNING: Removing unreachable block (ram,0x00423a24) */
/* WARNING: Removing unreachable block (ram,0x004239d0) */
/* WARNING: Removing unreachable block (ram,0x00423a17) */
/* WARNING: Removing unreachable block (ram,0x00423abb) */
/* WARNING: Removing unreachable block (ram,0x00423adf) */
/* WARNING: Removing unreachable block (ram,0x00423aea) */
/* WARNING: Removing unreachable block (ram,0x00423b2a) */
/* WARNING: Removing unreachable block (ram,0x00423b03) */
/* WARNING: Removing unreachable block (ram,0x00423b23) */
/* WARNING: Removing unreachable block (ram,0x00423b10) */
/* WARNING: Removing unreachable block (ram,0x00423b2f) */
/* WARNING: Removing unreachable block (ram,0x00423b33) */
/* WARNING: Removing unreachable block (ram,0x00423b81) */
/* WARNING: Removing unreachable block (ram,0x0042351a) */
uint __cdecl FUN_00423078(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  LPARAM lParam;
  WPARAM wParam;
  char *pcVar4;
  HINSTANCE pHVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  char cVar10;
  bool bVar11;
  undefined1 local_1b1;
  uint local_1b0;
  int local_160;
  uint local_15c;
  undefined *local_150;
  undefined *local_14c;
  int *local_148;
  undefined1 *local_144;
  undefined4 local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  undefined4 *local_12c;
  uint local_128;
  undefined1 *local_124;
  int *local_120;
  int *local_11c;
  uint local_118;
  int *local_114;
  undefined1 *local_110;
  int *local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_fd;
  undefined1 *local_fc;
  undefined *local_f8;
  undefined4 local_f4;
  undefined *local_e8;
  undefined *local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined *local_bc;
  undefined4 local_b8;
  char *local_b4;
  HWND local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c [3];
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f1198);
  local_a0 = 1;
LAB_00423098:
  local_a4 = 0;
  iVar9 = 0;
LAB_004230a2:
  iVar7 = 0;
LAB_004230a4:
  iVar6 = *(int *)(param_1 + iVar9 * 4) + iVar7 * 0x38;
  if (*(int *)(iVar6 + 0x40) != 0) {
    if (param_3 == 0x31a6) {
      if (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0) {
        local_a8 = iVar6 + 0x48;
        local_ac = param_1 + 0x20;
        uVar2 = FUN_004d40d0(local_ac,0,*(uint *)(*(int *)(param_1 + 0x28) + -4),
                             *(byte **)(iVar6 + 0x50),*(uint *)(*(int *)(iVar6 + 0x50) + -4));
        if (uVar2 != 0) goto LAB_004238f3;
      }
    }
    else {
      iVar1 = local_a4 + 1;
      iVar3 = local_a4 + 0x3340;
      local_a4 = iVar1;
      if (iVar3 != param_3) goto LAB_004238f3;
    }
    if (iVar9 == 0) {
      if (*(int *)(*(int *)(iVar6 + 0x60) + -4) != 0) {
        local_f4 = 0;
        local_fc = local_34;
        local_f8 = &DAT_00513d64;
        local_2c = &DAT_00513d64;
        local_74 = local_74 + 1;
        local_80 = 0x68;
        for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
          iVar9 = FUN_004e1310((int)(char)*param_2);
          if (iVar9 == 0) {
            FUN_004e0344((undefined1 *)local_9c,(byte *)"%%%02x");
            uVar2 = *(uint *)(local_2c + -4);
            pcVar4 = strlen(local_9c);
            FUN_004cfad4((int)local_34,uVar2,0,(uint)local_9c,(uint)pcVar4,0,(uint)pcVar4);
          }
          else {
            local_fd = (undefined1)*param_2;
            std::string::replace_fill((int)local_34,*(uint *)(local_2c + -4),0,1,local_fd);
          }
        }
        local_80 = 0x74;
        local_104 = iVar6 + 0x58;
        local_108 = 0;
        local_3c = (int *)0x0;
        iVar9 = *(int *)(*(int *)(iVar6 + 0x60) + -0xc);
        if (iVar9 == -1 || iVar9 + 1 < 0) {
          local_118 = *(uint *)(*(int *)(iVar6 + 0x60) + -4);
          local_120 = std::string::__getRep(local_44,local_118,local_118);
          local_124 = local_44;
          local_130 = local_120 + 3;
          local_128 = local_118;
          local_12c = *(undefined4 **)(local_104 + 8);
          local_11c = local_130;
          local_3c = local_130;
          memcpy(local_130,local_12c,local_118);
        }
        else {
          local_10c = *(int **)(iVar6 + 0x60);
          local_110 = local_44;
          local_114 = local_10c + -3;
          local_3c = local_10c;
          if (local_114 != &DAT_00513d58) {
            *local_114 = *local_114 + 1;
          }
        }
        local_74 = local_74 + 1;
        local_80 = 0x68;
        uVar2 = local_3c[-1];
        while (uVar2 != 0) {
          pcVar4 = strlen((uint *)"{entry}");
          uVar2 = FUN_004d7cf0((int)local_44,(byte *)"{entry}",uVar2 - 1,(uint)pcVar4);
          if (uVar2 == 0xffffffff) break;
          pcVar4 = strlen((uint *)"{entry}");
          FUN_004cfad4((int)local_44,uVar2,(uint)pcVar4,(uint)local_2c,*(uint *)(local_2c + -4),0,
                       *(uint *)(local_2c + -4));
        }
        pHVar5 = ShellExecuteA((HWND)0x0,&DAT_004f0e54 /* "open" */,(LPCSTR)local_3c,(LPCSTR)0x0,(LPCSTR)0x0,9);
        uVar2 = (uint)((HINSTANCE)0x20 < pHVar5);
        local_74 = local_74 + -1;
        if (local_3c != (int *)0x0) {
          if (local_3c[-3] != -1) {
            local_134 = local_3c + -3;
            if (local_134 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (local_134 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *local_134 = *local_134 + -1;
              iVar9 = *local_134 + 1;
            }
            if (iVar9 != 0) goto LAB_00423825;
          }
          local_138 = local_3c + -3;
          local_13c = local_3c + -3;
          operator_delete();
          local_140 = 0;
          local_144 = local_44;
          local_3c = (int *)0x0;
        }
LAB_00423825:
        local_80 = 0x68;
        local_74 = local_74 + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            local_148 = (int *)(local_2c + -0xc);
            if (local_148 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (local_148 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *local_148 = *local_148 + -1;
              iVar9 = *local_148 + 1;
            }
            if (iVar9 != 0) goto LAB_004238da;
          }
          local_14c = local_2c + -0xc;
          local_150 = local_2c + -0xc;
          operator_delete();
        }
LAB_004238da:
        *in_FS_OFFSET = local_90;
        return uVar2;
      }
    }
    else {
      if (iVar9 == 1) {
        iVar9 = FUN_0044f0f0(*(LPCSTR *)(iVar6 + 0x60),*(LPCSTR *)(iVar6 + 0x70),param_2);
        *in_FS_OFFSET = local_90;
        return (uint)(iVar9 == 0);
      }
      if (iVar9 == 2) {
        local_b0 = FindWindowA((LPCSTR)0x0,*(LPCSTR *)(iVar6 + 0x60));
        if (local_b0 == (HWND)0x0) {
          *in_FS_OFFSET = local_90;
          return 0;
        }
        FUN_0046597c(*(int *)(param_1 + 0x30),param_2,(uint *)0x0);
        lParam = FUN_00464ae0(*(int *)(param_1 + 0x30));
        local_b4 = *(char **)(iVar6 + 0x70);
        wParam = FUN_004e39d0(local_b4);
        SendMessageA(local_b0,0x111,wParam,lParam);
        *in_FS_OFFSET = local_90;
        return 1;
      }
      if (iVar9 == 3) {
        local_b8 = 0;
        local_c0 = local_14;
        local_bc = &DAT_00513d64;
        local_c = &DAT_00513d64;
        local_74 = local_74 + 1;
        local_c4 = iVar6 + 0x68;
        local_80 = 0x2c;
        local_c8 = std::string::string_from_cstr((int)local_24,(uint *)&DAT_004f0e46);
        local_74 = local_74 + 1;
        uVar2 = FUN_004d40d0(local_c4,0,*(uint *)(*(int *)(local_c4 + 8) + -4),
                             *(byte **)(local_c8 + 8),*(uint *)(*(int *)(local_c8 + 8) + -4));
        cVar10 = uVar2 != 0;
        local_74 = local_74 + -1;
        if (local_1c != 0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar8 = (int *)(local_1c + -0xc);
            if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar9 = *piVar8 + 1;
            }
            if (iVar9 != 0) goto LAB_0042338a;
          }
          local_d4 = local_1c + -0xc;
          local_d8 = local_1c + -0xc;
          operator_delete();
          local_dc = 0;
          local_e0 = local_24;
          local_1c = 0;
        }
LAB_0042338a:
        if (cVar10 == '\0') {
          local_80 = 0x20;
          for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
            FUN_004e0344((undefined1 *)local_9c,&DAT_004f0e48 /* "%02X" */);
            uVar2 = *(uint *)(local_c + -4);
            pcVar4 = strlen(local_9c);
            FUN_004cfad4((int)local_14,uVar2,0,(uint)local_9c,(uint)pcVar4,0,(uint)pcVar4);
          }
        }
        else {
          FUN_004cf41c((int)local_14,param_2);
        }
        uVar2 = FUN_00435a1c(iVar6 + 0x58,(int)local_14,0);
        local_74 = local_74 + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            piVar8 = (int *)(local_c + -0xc);
            if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar9 = *piVar8 + 1;
            }
            if (iVar9 != 0) goto LAB_004234a0;
          }
          local_e4 = local_c + -0xc;
          local_e8 = local_c + -0xc;
          operator_delete();
        }
LAB_004234a0:
        *in_FS_OFFSET = local_90;
        return uVar2;
      }
    }
  }
LAB_004238f3:
  iVar7 = iVar7 + 1;
  if (3 < iVar7) goto code_r0x004238fd;
  goto LAB_004230a4;
code_r0x004238fd:
  iVar9 = iVar9 + 1;
  if (3 < iVar9) goto code_r0x00423907;
  goto LAB_004230a2;
code_r0x00423907:
  local_15c = DAT_005140ac;
  local_160 = param_1 + 0x20;
  local_1b0 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
  local_1b1 = 0;
  uVar2 = local_1b0;
  if (DAT_005140ac < local_1b0) {
    uVar2 = DAT_005140ac;
  }
  FUN_004cfad4(local_160,0,uVar2,(uint)&local_1b1,0,0,0);
  if ((param_3 != 0x31a6) || (bVar11 = local_a0 != 1, local_a0 = local_a0 + 1, bVar11)) {
    *in_FS_OFFSET = local_90;
    return 0;
  }
  goto LAB_00423098;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c2c  FUN_00423c2c   (62 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00423c2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + *(int *)(*param_1 + 0x40 + iVar1 * 0x38);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    local_8 = local_8 + 1;
    param_1 = param_1 + 1;
  } while (local_8 < 4);
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c6c  FUN_00423c6c   (424 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00423cac) */
void __cdecl FUN_00423c6c(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int *local_54;
  int local_40;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f1298);
  bVar1 = false;
  local_c = &DAT_00513d64;
  local_40 = 0;
  local_54 = param_1;
  do {
    iVar5 = 0;
    do {
      if (*(int *)(*local_54 + 0x40 + iVar5 * 0x38) != 0) {
        iVar3 = iVar5 * 0x38 + *local_54;
        iVar4 = iVar3 + 0x48;
        uVar2 = FUN_004d40d0(iVar4,0,*(uint *)(*(int *)(iVar3 + 0x50) + -4),(byte *)param_1[10],
                             *(uint *)(param_1[10] + -4));
        if (uVar2 == 0) {
          bVar1 = true;
        }
        else if (*(int *)(local_c + -4) == 0) {
          FUN_004cf384((int)local_14,iVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_40 = local_40 + 1;
    local_54 = local_54 + 1;
  } while (local_40 < 4);
  if (!bVar1) {
    FUN_004cf384((int)(param_1 + 8),(int)local_14);
  }
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar5 = *piVar6 + 1;
      }
      if (iVar5 != 0) goto LAB_00423dfd;
    }
    operator_delete();
  }
LAB_00423dfd:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e14  FUN_00423e14   (849 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00423e14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  BOOL BVar4;
  int iVar5;
  UINT uPosition;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  MENUITEMINFOA local_e8;
  int *local_b0;
  int *local_a0;
  UINT local_98;
  undefined1 local_91;
  int local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74;
  int *local_70;
  uint local_6c;
  int *local_68;
  undefined4 *local_64;
  uint local_60;
  undefined1 *local_5c;
  int *local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f12f0);
  FUN_00423c6c(param_1);
  uPosition = 0;
  local_3c = 0;
  do {
    iVar6 = 0;
    do {
      if (*(int *)(param_1[local_3c] + 0x40 + iVar6 * 0x38) != 0) {
        local_28 = 0x14;
        iVar1 = param_1[local_3c] + iVar6 * 0x38;
        local_40 = iVar1 + 0x48;
        local_c = (int *)0x0;
        iVar5 = *(int *)(*(int *)(iVar1 + 0x50) + -0xc);
        if (iVar5 == -1 || iVar5 + 1 < 0) {
          local_50 = *(uint *)(*(int *)(iVar1 + 0x50) + -4);
          local_58 = std::string::__getRep(local_14,local_50,local_50);
          local_b0 = local_58 + 3;
          local_60 = local_50;
          local_64 = *(undefined4 **)(local_40 + 8);
          local_68 = local_b0;
          local_5c = local_14;
          local_54 = local_b0;
          local_c = local_b0;
          memcpy(local_b0,local_64,local_50);
        }
        else {
          local_a0 = *(int **)(iVar1 + 0x50);
          local_4c = local_a0 + -3;
          local_48 = local_14;
          local_44 = local_a0;
          local_c = local_a0;
          if (local_4c != &DAT_00513d58) {
            *local_4c = *local_4c + 1;
          }
        }
        local_1c = local_1c + 1;
        local_28 = 8;
        local_70 = param_1 + 8;
        uVar2 = FUN_004d40d0((int)local_14,0,local_c[-1],(byte *)param_1[10],
                             *(uint *)(param_1[10] + -4));
        local_6c = (uint)(uVar2 == 0);
        if (local_6c != 0) {
          local_74 = local_c[-1];
          pcVar3 = strlen((uint *)"\tCtrl+Alt+Enter");
          FUN_004cfad4((int)local_14,local_74,0,0x4f0e7c,(uint)pcVar3,0,(uint)pcVar3);
        }
        FUN_004979c4(&local_e8.cbSize,0);
        local_e8.fMask = local_e8.fMask | 0x13;
        local_e8.fType = 0x200;
        local_e8.dwTypeData = (LPSTR)local_c;
        if (local_6c == 0) {
          local_e8.fState = local_e8.fState & 0xfffffff7;
        }
        else {
          local_e8.fState = local_e8.fState | 8;
        }
        if (param_3 == 0) {
          local_e8.fState = local_e8.fState | 3;
        }
        else {
          local_e8.fState = local_e8.fState & 0xfffffffc;
        }
        local_e8.wID = uPosition + 0x3340;
        uVar2 = GetMenuItemCount(*(HMENU *)(param_2 + 4));
        if (uPosition + 2 < uVar2) {
          local_75 = FUN_00497d04(param_2,uPosition,'\x01',&local_e8);
        }
        else {
          local_76 = FUN_00497d34(param_2,uPosition,'\x01',&local_e8);
        }
        uPosition = uPosition + 1;
        local_1c = local_1c + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_7c = local_c + -3;
            if (local_7c == &DAT_00513d58) {
              iVar5 = 1;
            }
            else if (local_7c == &DAT_00513d58) {
              iVar5 = 1;
            }
            else {
              *local_7c = *local_7c + -1;
              iVar5 = *local_7c + 1;
            }
            if (iVar5 != 0) goto LAB_004240e2;
          }
          local_80 = local_c + -3;
          local_84 = local_c + -3;
          operator_delete();
          local_88 = 0;
          local_c = (int *)0x0;
          local_8c = local_14;
        }
LAB_004240e2:
        local_28 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    local_3c = local_3c + 1;
    if (3 < local_3c) {
      iVar6 = GetMenuItemCount(*(HMENU *)(param_2 + 4));
      local_90 = (iVar6 + -2) - uPosition;
      while (0 < local_90) {
        local_98 = uPosition;
        local_90 = local_90 + -1;
        BVar4 = DeleteMenu(*(HMENU *)(param_2 + 4),uPosition,0x400);
        local_91 = BVar4 != 0;
      }
      *in_FS_OFFSET = local_38;
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00424168  FUN_00424168   (1849 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00424168(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  int local_b8;
  undefined4 local_a0;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f13c4);
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_1c);
  Persist::Persist(local_c,(int)local_1c,iVar4,iVar5);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424263;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_00424263:
  local_b8 = 0;
  do {
    iVar4 = *(int *)(param_1 + local_b8 * 4);
    iVar5 = 0;
    do {
      iVar3 = iVar5 * 0x38 + iVar4;
      FUN_004248a4((int)local_2c,iVar4);
      FUN_0044eca8((int)local_c,(int)local_2c);
      FUN_004248a4((int)local_3c,iVar4 + 0x10);
      FUN_004cf384((int)local_2c,(int)local_3c);
      if (local_34 != 0) {
        if (*(int *)(local_34 + -0xc) != -1) {
          piVar1 = (int *)(local_34 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_004243be;
        }
        operator_delete();
        local_34 = 0;
      }
LAB_004243be:
      FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x48);
      FUN_004248a4((int)local_4c,iVar4 + 0x20);
      FUN_004cf384((int)local_2c,(int)local_4c);
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          piVar1 = (int *)(local_44 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_004244bb;
        }
        operator_delete();
        local_44 = 0;
      }
LAB_004244bb:
      FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x58);
      if (*(int *)(*(int *)(iVar4 + 0x38) + -4) != 0) {
        FUN_004248a4((int)local_5c,iVar4 + 0x30);
        FUN_004cf384((int)local_2c,(int)local_5c);
        if (local_54 != 0) {
          if (*(int *)(local_54 + -0xc) != -1) {
            piVar1 = (int *)(local_54 + -0xc);
            if (piVar1 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (piVar1 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1 + 1;
            }
            if (iVar2 != 0) goto LAB_004245c6;
          }
          operator_delete();
          local_54 = 0;
        }
LAB_004245c6:
        FUN_0044ec78((int)local_c,(int)local_2c,iVar3 + 0x68);
      }
      if (local_24 != 0) {
        if (*(int *)(local_24 + -0xc) != -1) {
          piVar1 = (int *)(local_24 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00424676;
        }
        operator_delete();
        local_24 = 0;
      }
LAB_00424676:
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_b8 = local_b8 + 1;
  } while (local_b8 < 4);
  iVar4 = param_1 + 0x10;
  iVar5 = std::string::string_from_cstr((int)local_6c,(uint *)"LookupTestWord");
  FUN_0044ec78((int)local_c,iVar5,iVar4);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar1 = (int *)(local_64 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424783;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_00424783:
  iVar4 = param_1 + 0x20;
  iVar5 = std::string::string_from_cstr((int)local_7c,(uint *)"LookupDefaultLabel");
  FUN_0044ec78((int)local_c,iVar5,iVar4);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar1 = (int *)(local_74 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1 + 1;
      }
      if (iVar4 != 0) goto LAB_00424873;
    }
    operator_delete();
    local_74 = 0;
  }
LAB_00424873:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004248a4  FUN_004248a4   (899 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004248a4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f14c4);
  local_c = 0;
  FUN_004d6234((int)local_14,1);
  puVar5 = local_14;
  local_1c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_1c = std::string::__getRep(local_24,uVar1,uVar1);
    local_1c = local_1c + 3;
    memcpy(local_1c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_1c = *(int **)(param_2 + 8);
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = std::string::append((int)local_24,(int)puVar5);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00424b5d;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00424b5d:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00424c0c;
    }
    operator_delete();
  }
LAB_00424c0c:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c28  FUN_00424c28   (3261 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00424ccb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_00424c28(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int local_180;
  undefined4 local_b0;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f160c);
  std::string::string_from_cstr((int)(param_1 + 4),(uint *)"example");
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  param_1[0xc] = param_2;
  local_10 = operator_new();
  if (local_10 != 0) {
    std::string::string_from_cstr(local_10,(uint *)"LookupWebSearchEnabled");
    std::string::string_from_cstr(local_10 + 0x10,(uint *)"LookupWebSearchLabel");
    std::string::string_from_cstr(local_10 + 0x20,(uint *)"LookupWebSearchScript");
    std::string::string_from_cstr(local_10 + 0x30,(uint *)("LookupTestWord" + 0xe));
    _vector_new_ldtc_((int *)(local_10 + 0x40),0x38,4,1,(undefined*)FUN_004258e8);
  }
  *param_1 = local_10;
  local_14 = operator_new();
  if (local_14 != 0) {
    std::string::string_from_cstr(local_14,(uint *)"LookupDDEEnabled");
    std::string::string_from_cstr(local_14 + 0x10,(uint *)"LookupDDELabel");
    std::string::string_from_cstr(local_14 + 0x20,(uint *)"LookupDDEService");
    std::string::string_from_cstr(local_14 + 0x30,(uint *)"DDETopic");
    _vector_new_ldtc_((int *)(local_14 + 0x40),0x38,4,1,(undefined*)FUN_004258e8);
  }
  param_1[1] = local_14;
  local_18 = operator_new();
  if (local_18 != 0) {
    std::string::string_from_cstr(local_18,(uint *)"LookupMessageEnabled");
    std::string::string_from_cstr(local_18 + 0x10,(uint *)"LookupMessageLabel");
    std::string::string_from_cstr(local_18 + 0x20,(uint *)"LookupMessageWindow");
    std::string::string_from_cstr(local_18 + 0x30,(uint *)"MessageCommand");
    _vector_new_ldtc_((int *)(local_18 + 0x40),0x38,4,1,(undefined*)FUN_004258e8);
  }
  param_1[2] = local_18;
  local_1c = operator_new();
  if (local_1c != 0) {
    std::string::string_from_cstr(local_1c,(uint *)"LookupExecEnabled");
    std::string::string_from_cstr(local_1c + 0x10,(uint *)"LookupExecLabel");
    std::string::string_from_cstr(local_1c + 0x20,(uint *)"LookupExecProgram");
    std::string::string_from_cstr(local_1c + 0x30,(uint *)"ExecEncoding");
    _vector_new_ldtc_((int *)(local_1c + 0x40),0x38,4,1,(undefined*)FUN_004258e8);
  }
  param_1[3] = local_1c;
  iVar11 = 0;
  iVar10 = 0;
  FUN_004649b0((int)local_2c);
  Persist::Persist(local_c,(int)local_2c,iVar10,iVar11);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_00425165;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00425165:
  piVar1 = param_1 + 4;
  std::string::string_from_cstr((int)local_3c,(uint *)"LookupTestWord");
  uVar2 = Persist::QueryValueSized((int)local_c,(int)local_3c,(int)piVar1);
  bVar8 = (uVar2 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_0042526f;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0042526f:
  local_180 = 0;
  do {
    iVar10 = param_1[local_180];
    iVar11 = 0;
    do {
      iVar6 = iVar11 * 0x38 + iVar10;
      puVar7 = (undefined4 *)(iVar6 + 0x40);
      iVar3 = local_180 * 4 + iVar11;
      if ((bVar8) && (iVar3 < 9)) {
        puVar5 = (undefined4 *)(&PTR_PTR_004f0df0)[iVar3];
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      FUN_004248a4((int)local_4c,iVar10 + 0x10);
      uVar4 = Persist::QueryValueSized((int)local_c,(int)local_4c,iVar6 + 0x48);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        FUN_004cf41c(iVar6 + 0x48,(uint *)*puVar5);
      }
      FUN_004248a4((int)local_5c,iVar10 + 0x20);
      FUN_004cf384((int)local_4c,(int)local_5c);
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          piVar1 = (int *)(local_54 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425423;
        }
        operator_delete();
        local_54 = 0;
      }
LAB_00425423:
      uVar4 = Persist::QueryValueSized((int)local_c,(int)local_4c,iVar6 + 0x58);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        FUN_004cf41c(iVar6 + 0x58,(uint *)puVar5[1]);
      }
      FUN_004248a4((int)local_6c,iVar10 + 0x30);
      FUN_004cf384((int)local_4c,(int)local_6c);
      if (local_64 != 0) {
        if (*(int *)(local_64 + -0xc) != -1) {
          piVar1 = (int *)(local_64 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425549;
        }
        operator_delete();
        local_64 = 0;
      }
LAB_00425549:
      uVar4 = Persist::QueryValueSized((int)local_c,(int)local_4c,iVar6 + 0x68);
      if ((char)uVar4 == '\0') {
        if (puVar5 != (undefined4 *)0x0) {
          FUN_004cf41c(iVar6 + 0x68,(uint *)puVar5[2]);
        }
        if (local_180 == 3) {
          FUN_004cf41c(iVar6 + 0x68,(uint *)&DAT_004f10d8);
        }
      }
      FUN_004248a4((int)local_7c,iVar10);
      FUN_004cf384((int)local_4c,(int)local_7c);
      if (local_74 != 0) {
        if (*(int *)(local_74 + -0xc) != -1) {
          piVar1 = (int *)(local_74 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425687;
        }
        operator_delete();
        local_74 = 0;
      }
LAB_00425687:
      *puVar7 = 0;
      if ((((*(int *)(*(int *)(iVar6 + 0x50) + -4) != 0) &&
           (uVar4 = Persist::QueryValue((int)local_c,(int)local_4c,puVar7), (char)uVar4 == '\0')) &&
          (puVar5 != (undefined4 *)0x0)) && (local_180 == 0)) {
        *puVar7 = 1;
      }
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          piVar1 = (int *)(local_44 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425760;
        }
        operator_delete();
        local_44 = 0;
      }
LAB_00425760:
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    local_180 = local_180 + 1;
  } while (local_180 < 4);
  piVar1 = param_1 + 8;
  std::string::string_from_cstr((int)local_8c,(uint *)"LookupDefaultLabel");
  uVar2 = Persist::QueryValueSized((int)local_c,(int)local_8c,(int)piVar1);
  cVar9 = (uVar2 & 0xff) == 0;
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar1 = (int *)(local_84 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_0042588b;
    }
    operator_delete();
    local_84 = 0;
  }
LAB_0042588b:
  if ((cVar9 != '\0') && (bVar8)) {
    FUN_004cf41c((int)(param_1 + 8),*(uint **)PTR_PTR_004f0df0);
  }
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_b0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004258e8  FUN_004258e8   (154 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0042594a) */
/* WARNING: Removing unreachable block (ram,0x00425928) */
/* WARNING: Removing unreachable block (ram,0x0042596c) */
undefined4 * __cdecl FUN_004258e8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f18bc);
  *param_1 = 0;
  param_1[4] = 0;
  param_1[4] = &DAT_00513d64;
  param_1[8] = 0;
  param_1[8] = &DAT_00513d64;
  param_1[0xc] = 0;
  param_1[0xc] = &DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
