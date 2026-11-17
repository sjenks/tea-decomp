// TEA.exe — application module "LookupPropertiesViewWindows"
// 16 functions, 0x00460e4c..0x00462d9c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00460e4c  LookupPropertiesViewWindows::~LookupPropertiesViewWindows   (866 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::_dtor
void __cdecl LookupPropertiesViewWindows::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x4fae24);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&LookupPropertiesViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004fb1c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004fb1d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fb1e0;
    iVar2 = 0;
    do {
      iVar1 = param_1[iVar2 + 0x19];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = param_1[iVar2 + 0x25];
      if (iVar1 != 0) {
        PVWEnumeration::_dtor((int *)(iVar1 + 0x310),2);
        PVWPushButton::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = param_1[iVar2 + 0x1d];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = param_1[iVar2 + 0x21];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    PVWPushButton::_dtor(param_1 + 0x8c,2);
    PVWEdit::_dtor(param_1 + 0x5c,2);
    PVWPushButton::_dtor(param_1 + 0x2a,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x298;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x298;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xc2,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xc0,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004611b0  LookupPropertiesViewWindows::vf9   (83 bytes)   [rtti:vtable virtual slot 9]
void __cdecl LookupPropertiesViewWindows::vf9(int *param_1,INT_PTR param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1[0x18] + iVar2 * 4) + iVar1 * 0x38;
      if (*(int *)(*(int *)(iVar3 + 0x50) + -4) == 0) {
        *(undefined4 *)(iVar3 + 0x40) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  PropertiesViewWindows::vf9(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461204  LookupPropertiesViewWindows::vf11   (360 bytes)   [rtti:vtable virtual slot 11]
void __cdecl LookupPropertiesViewWindows::vf11(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  PropertiesViewWindows::vf11(param_1);
  iVar3 = 0;
  piVar2 = param_1 + 0x19;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
    }
    piVar1 = (int *)piVar2[0xc];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_004e39d0(*(char **)(*piVar1 + 0x30));
      FUN_0041c1cc((int)(piVar1 + 0xc4));
    }
    piVar1 = (int *)piVar2[4];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_0041b1ec(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_0041b1ec(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  FUN_0046136c((int)param_1);
  FUN_0041b474(param_1 + 0x5c,param_1[0x18] + 0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046136c  FUN_0046136c   (280 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046136c(int param_1)

{
  int iVar1;
  uint uVar2;
  WPARAM WVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_8;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    piVar4 = (int *)(param_1 + 100);
    do {
      if ((iVar5 == 0) && (*piVar4 != 0)) {
        local_8 = (int *)(*piVar4 + 8);
LAB_004613da:
        iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar5 * 4) + iVar6 * 0x38;
        if (*(int *)(iVar1 + 0x40) == 0) {
          WVar3 = 0;
        }
        else {
          uVar2 = FUN_004d40d0(iVar1 + 0x48,0,*(uint *)(*(int *)(iVar1 + 0x50) + -4),
                               *(byte **)(*(int *)(param_1 + 0x60) + 0x28),
                               *(uint *)(*(int *)(*(int *)(param_1 + 0x60) + 0x28) + -4));
          if (uVar2 == 0) {
            WVar3 = 1;
          }
          else {
            WVar3 = 2;
          }
        }
        FUN_004ac750(local_8,WVar3);
      }
      else {
        if ((iVar5 == 1) && (piVar4[4] != 0)) {
          local_8 = (int *)(piVar4[4] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 3) && (piVar4[0xc] != 0)) {
          local_8 = (int *)(piVar4[0xc] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 2) && (piVar4[8] != 0)) {
          local_8 = (int *)(piVar4[8] + 8);
          goto LAB_004613da;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 4);
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00461484  FUN_00461484   (155 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00461484(int param_1,int param_2,uint *param_3,int *param_4)

{
  WPARAM WVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -4);
  if (((*(int *)(param_3[4] - 4) == 0) != (iVar2 == 0)) &&
     (uVar3 = (uint)(iVar2 != 0), uVar3 != *param_3)) {
    *param_3 = uVar3;
    if (*param_3 == 0) {
      WVar1 = 0;
    }
    else {
      WVar1 = 2;
    }
    FUN_004ac750(param_4,WVar1);
  }
  FUN_004cf384((int)(param_3 + 2),param_2);
  iVar2 = FUN_004a76a8(*param_4,0xf0,0,0);
  if (iVar2 == 1) {
    FUN_004cf384(*(int *)(param_1 + 0x60) + 0x20,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461520  LookupPropertiesViewWindows::vf19   (1759 bytes)   [rtti:vtable virtual slot 19]
/* WARNING: Removing unreachable block (ram,0x00461915) */
/* WARNING: Removing unreachable block (ram,0x00461a27) */
/* WARNING: Removing unreachable block (ram,0x004619c7) */
/* WARNING: Removing unreachable block (ram,0x00461a1a) */
/* WARNING: Removing unreachable block (ram,0x00461ad0) */
/* WARNING: Removing unreachable block (ram,0x00461b09) */
/* WARNING: Removing unreachable block (ram,0x00461b17) */
/* WARNING: Removing unreachable block (ram,0x00461b3e) */
/* WARNING: Removing unreachable block (ram,0x00461b28) */
/* WARNING: Removing unreachable block (ram,0x00461b37) */
/* WARNING: Removing unreachable block (ram,0x00461b30) */
/* WARNING: Removing unreachable block (ram,0x00461b43) */
/* WARNING: Removing unreachable block (ram,0x00461b47) */
/* WARNING: Removing unreachable block (ram,0x00461ba1) */
void __cdecl LookupPropertiesViewWindows::vf19(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  char cVar5;
  undefined1 local_1e5 [73];
  int local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  int local_18c;
  undefined4 local_188;
  undefined2 local_178;
  int local_16c;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  uint *local_24;
  
  __InitExceptBlockLDTC(0x4faef4);
  local_18c = 0;
  iVar3 = 4;
  if (0x1504 < param_3) {
    if (param_3 < 0x3391) {
      if (param_3 != 0x3390) {
        if (param_3 != 0x155e) {
          if (param_3 != 0x1568) {
            if (param_3 == 0x15e0) {
              FUN_00423c6c((int *)param_1[0x18]);
              FUN_0046136c((int)param_1);
              FUN_0046524c(param_1[0xe],*param_1,0x31a6,param_1[0x18] + 0x10,0,0);
            }
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 2;
        goto LAB_00461813;
      }
    }
    else {
      if (param_3 != 0x33ae) {
        if (param_3 != 0x33cc) {
          if (param_3 != 0x33ea) goto LAB_00461813;
          local_18c = 1;
        }
        local_18c = local_18c + 1;
      }
      local_18c = local_18c + 1;
    }
    iVar3 = 0;
    goto LAB_00461813;
  }
  if (param_3 == 0x1504) {
    local_18c = 1;
LAB_004615f6:
    local_18c = local_18c + 1;
LAB_004615fc:
    local_18c = local_18c + 1;
  }
  else {
    if (param_3 < 0x14dd) {
      if (param_3 == 0x14dc) {
        FUN_00424168(param_1[0x18]);
      }
      else {
        if (param_3 != 0x1428) {
          if (param_3 != 0x1432) {
            if (param_3 != 0x1478) {
              if (param_3 != 0x1482) goto LAB_00461813;
              local_18c = 1;
            }
            local_190 = (int *)param_1[local_18c + 0x25];
            local_178 = 8;
            FUN_004c279c(local_2c,0x180c,(uint *)"Application File (*.exe)|*.exe|All Files|*.*",0,
                         0x4fa90a,0x4fa938,0,0,0);
            local_16c = local_16c + 1;
            local_178 = 0x20;
            local_194 = FUN_004c2c5c(&local_13c,0,*param_1,(int)local_2c,0,0x4fa93a,0);
            local_16c = local_16c + 6;
            iVar1 = (**(code **)(local_194[3] + 0x14))();
            cVar5 = iVar1 == 1;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
            local_16c = local_16c + -6;
            OWL::TCommonDialog::_dtor(&local_13c,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
            local_16c = local_16c + -2;
            OWL::TWindow::_dtor(local_b4,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
            local_16c = local_16c + -1;
            OWL::TStreamableBase::_dtor(local_bc,0);
            if (cVar5 != '\0') {
              FUN_0041b1ec(local_190 + 99,(LPCSTR)local_24);
              FUN_004cf41c(*local_190 + 0x18,local_24);
            }
            local_16c = local_16c + -1;
            OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
            local_178 = 0;
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 3;
      }
      goto LAB_00461813;
    }
    if (param_3 != 0x14e6) {
      if (param_3 != 0x14f0) {
        if (param_3 != 0x14fa) goto LAB_00461813;
        goto LAB_004615f6;
      }
      goto LAB_004615fc;
    }
  }
  iVar3 = 1;
LAB_00461813:
  if (iVar3 != 4) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    local_198 = FUN_004dd744(param_2,iVar1,(int *)&DAT_00402b6c,(int *)&DAT_00406e80,0);
    if (local_198 != (int *)0x0) {
      iVar1 = FUN_004a76a8(*local_198,0xf0,0,0);
      iVar3 = *(int *)(param_1[0x18] + iVar3 * 4) + local_18c * 0x38;
      *(uint *)(iVar3 + 0x40) = (uint)(iVar1 != 0);
      if (iVar1 == 1) {
        FUN_004cf384(param_1[0x18] + 0x20,iVar3 + 0x48);
        FUN_0046136c((int)param_1);
      }
      else {
        local_19c = param_1[0x18] + 0x20;
        uVar2 = FUN_004d40d0(local_19c,0,*(uint *)(*(int *)(param_1[0x18] + 0x28) + -4),
                             *(byte **)(iVar3 + 0x50),*(uint *)(*(int *)(iVar3 + 0x50) + -4));
        if (uVar2 == 0) {
          uVar2 = *(uint *)(*(int *)(param_1[0x18] + 0x28) + -4);
          local_1e5[0] = 0;
          uVar4 = DAT_005140ac;
          if (uVar2 <= DAT_005140ac) {
            uVar4 = uVar2;
          }
          FUN_004cfad4(param_1[0x18] + 0x20,0,uVar4,(uint)local_1e5,0,0,0);
        }
      }
    }
  }
  *in_FS_OFFSET = local_188;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461c00  LookupPropertiesViewWindows::vf22   (2544 bytes)   [rtti:vtable virtual slot 22]
void __cdecl LookupPropertiesViewWindows::vf22(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint *puVar5;
  undefined4 local_c8;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4faffc);
  iVar3 = 0;
  if (param_3 < 0x3337) {
    if (param_3 == 0x3336) {
      iVar3 = 1;
    }
    else {
      if (param_3 < 0x1555) {
        if (param_3 == 0x1554) {
          iVar3 = 1;
LAB_00461efc:
          iVar3 = iVar3 + 1;
LAB_00461efd:
          iVar3 = iVar3 + 1;
        }
        else {
          if (param_3 < 0x152d) {
            if (param_3 == 0x152c) {
              iVar3 = 1;
LAB_00461e38:
              iVar3 = iVar3 + 1;
LAB_00461e39:
              iVar3 = iVar3 + 1;
            }
            else if (param_3 != 0x150e) {
              if (param_3 != 0x1518) {
                if (param_3 != 0x1522) goto LAB_004625dd;
                goto LAB_00461e38;
              }
              goto LAB_00461e39;
            }
            piVar4 = *(int **)(param_1 + 0x74 + iVar3 * 4);
            FUN_0041b2b0((int)local_24,piVar4 + 99);
            FUN_004cf384(*piVar4 + 0x18,(int)local_24);
            if (local_1c != 0) {
              if (*(int *)(local_1c + -0xc) != -1) {
                piVar4 = (int *)(local_1c + -0xc);
                if (piVar4 == &DAT_00513d58) {
                  iVar3 = 1;
                }
                else if (piVar4 == &DAT_00513d58) {
                  iVar3 = 1;
                }
                else {
                  *piVar4 = *piVar4 + -1;
                  iVar3 = *piVar4 + 1;
                }
                if (iVar3 != 0) goto LAB_004625dd;
              }
              operator_delete();
            }
            goto LAB_004625dd;
          }
          if (param_3 != 0x1536) {
            if (param_3 != 0x1540) {
              if (param_3 != 0x154a) goto LAB_004625dd;
              goto LAB_00461efc;
            }
            goto LAB_00461efd;
          }
        }
        piVar4 = *(int **)(param_1 + 0x74 + iVar3 * 4);
        FUN_0041b2b0((int)local_34,piVar4 + 0x92);
        FUN_004cf384(*piVar4 + 0x28,(int)local_34);
        if (local_2c != 0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar4 = (int *)(local_2c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 < 0x15b9) {
        if (param_3 == 0x15b8) {
          iVar3 = 1;
LAB_00462178:
          piVar4 = *(int **)(param_1 + 0x84 + iVar3 * 4);
          FUN_0041b2b0((int)local_64,piVar4 + 0x92);
          FUN_004cf384(*piVar4 + 0x28,(int)local_64);
          if (local_5c != 0) {
            if (*(int *)(local_5c + -0xc) != -1) {
              piVar4 = (int *)(local_5c + -0xc);
              if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar4 = *piVar4 + -1;
                iVar3 = *piVar4 + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            operator_delete();
          }
        }
        else {
          if (param_3 != 0x1586) {
            if (param_3 != 0x1590) {
              if (param_3 != 0x15ae) goto LAB_004625dd;
              goto LAB_00462178;
            }
            iVar3 = 1;
          }
          piVar4 = *(int **)(param_1 + 0x84 + iVar3 * 4);
          FUN_0041b2b0((int)local_54,piVar4 + 99);
          FUN_004cf384(*piVar4 + 0x18,(int)local_54);
          if (local_4c != 0) {
            if (*(int *)(local_4c + -0xc) != -1) {
              piVar4 = (int *)(local_4c + -0xc);
              if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar4 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar4 = *piVar4 + -1;
                iVar3 = *piVar4 + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            operator_delete();
          }
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x15d6) {
        FUN_0041b2b0((int)local_a4,(int *)(param_1 + 0x170));
        FUN_004cf384(*(int *)(param_1 + 0x60) + 0x10,(int)local_a4);
        if (local_9c != 0) {
          if (*(int *)(local_9c + -0xc) != -1) {
            piVar4 = (int *)(local_9c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 != 0x332c) goto LAB_004625dd;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x94 + iVar3 * 4);
    piVar4 = puVar1 + 2;
    puVar5 = (uint *)*puVar1;
    FUN_0041b2b0((int)local_74,puVar1 + 0x34);
    FUN_00461484(param_1,(int)local_74,puVar5,piVar4);
    if (local_6c != 0) {
      if (*(int *)(local_6c + -0xc) != -1) {
        piVar4 = (int *)(local_6c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_004625dd;
      }
      operator_delete();
    }
    goto LAB_004625dd;
  }
  if (param_3 < 0x33a5) {
    if (param_3 != 0x33a4) {
      if (0x3372 < param_3) {
        if (param_3 != 0x337c) {
          if (param_3 != 0x3386) {
            if (param_3 != 0x339a) goto LAB_004625dd;
            goto LAB_00462332;
          }
          iVar3 = 1;
        }
        puVar1 = *(undefined4 **)(param_1 + 0x84 + iVar3 * 4);
        piVar4 = puVar1 + 2;
        puVar5 = (uint *)*puVar1;
        FUN_0041b2b0((int)local_44,puVar1 + 0x34);
        FUN_00461484(param_1,(int)local_44,puVar5,piVar4);
        if (local_3c != 0) {
          if (*(int *)(local_3c + -0xc) != -1) {
            piVar4 = (int *)(local_3c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar3 = *piVar4 + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x3372) {
        iVar3 = 1;
LAB_00461d72:
        iVar3 = iVar3 + 1;
LAB_00461d73:
        iVar3 = iVar3 + 1;
      }
      else if (param_3 != 0x3354) {
        if (param_3 != 0x335e) {
          if (param_3 != 0x3368) goto LAB_004625dd;
          goto LAB_00461d72;
        }
        goto LAB_00461d73;
      }
      puVar1 = *(undefined4 **)(param_1 + 0x74 + iVar3 * 4);
      piVar4 = puVar1 + 2;
      puVar5 = (uint *)*puVar1;
      FUN_0041b2b0((int)local_14,puVar1 + 0x34);
      FUN_00461484(param_1,(int)local_14,puVar5,piVar4);
      if (local_c != 0) {
        if (*(int *)(local_c + -0xc) != -1) {
          piVar4 = (int *)(local_c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar3 = *piVar4 + 1;
          }
          if (iVar3 != 0) goto LAB_004625dd;
        }
        operator_delete();
      }
      goto LAB_004625dd;
    }
  }
  else {
    if (param_3 < 0x33e1) {
      if (param_3 == 0x33e0) goto LAB_00462403;
      if (param_3 == 0x33b8) goto LAB_00462331;
      if (param_3 != 0x33c2) {
        if (param_3 != 0x33d6) goto LAB_004625dd;
        goto LAB_00462330;
      }
    }
    else {
      if (param_3 == 0x33fe) {
        iVar3 = 1;
LAB_00462330:
        iVar3 = iVar3 + 1;
LAB_00462331:
        iVar3 = iVar3 + 1;
LAB_00462332:
        puVar1 = *(undefined4 **)(param_1 + 100 + iVar3 * 4);
        piVar4 = puVar1 + 2;
        puVar5 = (uint *)*puVar1;
        FUN_0041b2b0((int)local_84,puVar1 + 0x34);
        FUN_00461484(param_1,(int)local_84,puVar5,piVar4);
        if (local_7c != 0) {
          if (*(int *)(local_7c + -0xc) != -1) {
            piVar4 = (int *)(local_7c + -0xc);
            if (piVar4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_00462402;
          }
          operator_delete();
          local_7c = 0;
        }
      }
      else if (param_3 != 0x3408) goto LAB_004625dd;
LAB_00462402:
      iVar3 = iVar3 + 1;
LAB_00462403:
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 1;
  }
  piVar4 = *(int **)(param_1 + 100 + iVar3 * 4);
  FUN_0041b2b0((int)local_94,piVar4 + 99);
  FUN_004cf384(*piVar4 + 0x18,(int)local_94);
  if (local_8c != 0) {
    if (*(int *)(local_8c + -0xc) != -1) {
      piVar4 = (int *)(local_8c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004625dd;
    }
    operator_delete();
  }
LAB_004625dd:
  *in_FS_OFFSET = local_c8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004625f0  LookupPropertiesViewWindows::vf29   (74 bytes)   [rtti:vtable virtual slot 29]
void __cdecl LookupPropertiesViewWindows::vf29(int param_1,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 == 0x14aa) {
    iVar1 = 1;
  }
  else if (param_3 != 0x2bc0) {
    return;
  }
  iVar1 = **(int **)(param_1 + 0x94 + iVar1 * 4);
  std::string::replace_fill(iVar1 + 0x28,0,*(uint *)(*(int *)(iVar1 + 0x30) + -4),1,param_2 + '0');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004629ac  LookupPropertiesViewWindows::URLControls::~URLControls   (112 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::URLControls::_dtor
void __cdecl LookupPropertiesViewWindows::URLControls::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb268);
  if (param_1 != 0) {
    PVWEdit::_dtor((int *)(param_1 + 0x18c),2);
    PVWEdit::_dtor((int *)(param_1 + 0xd0),2);
    PVWCheckBox::_dtor((int *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462a1c  LookupPropertiesViewWindows::DDEControls::~DDEControls   (133 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::DDEControls::_dtor
void __cdecl LookupPropertiesViewWindows::DDEControls::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb270);
  if (param_1 != 0) {
    PVWEdit::_dtor((int *)(param_1 + 0x248),2);
    PVWEdit::_dtor((int *)(param_1 + 0x18c),2);
    PVWEdit::_dtor((int *)(param_1 + 0xd0),2);
    PVWCheckBox::_dtor((int *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462aa4  LookupPropertiesViewWindows::MessageControls::~MessageControls   (133 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::MessageControls::_dtor
void __cdecl LookupPropertiesViewWindows::MessageControls::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb278);
  if (param_1 != 0) {
    PVWEdit::_dtor((int *)(param_1 + 0x248),2);
    PVWEdit::_dtor((int *)(param_1 + 0x18c),2);
    PVWEdit::_dtor((int *)(param_1 + 0xd0),2);
    PVWCheckBox::_dtor((int *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462b2c  LookupPropertiesViewWindows::ProgramControls::~ProgramControls   (153 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::ProgramControls::_dtor
void __cdecl LookupPropertiesViewWindows::ProgramControls::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb280);
  if (param_1 != 0) {
    PVWEnumeration::_dtor((int *)(param_1 + 0x310),2);
    PVWPushButton::_dtor((int *)(param_1 + 0x248),2);
    PVWEdit::_dtor((int *)(param_1 + 0x18c),2);
    PVWEdit::_dtor((int *)(param_1 + 0xd0),2);
    PVWCheckBox::_dtor((int *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462bc8  FUN_00462bc8   (85 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00462bc8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb3c0);
  std::string::string_from_cstr(0x51a840,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  std::string::string_from_cstr(0x51a850,(uint *)("Software\\Crossword Man\\TEA Crossword Helper 2.11" + 8));
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462c20  FUN_00462c20   (290 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00462c20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb3d4);
  if (DAT_0051a858 != 0) {
    if (*(int *)(DAT_0051a858 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0051a858 + -0xc);
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
      if (iVar1 != 0) goto LAB_00462cb3;
    }
    operator_delete();
    DAT_0051a858 = 0;
  }
LAB_00462cb3:
  if (DAT_0051a848 != 0) {
    if (*(int *)(DAT_0051a848 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0051a848 + -0xc);
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
      if (iVar1 != 0) goto LAB_00462d32;
    }
    operator_delete();
    DAT_0051a848 = 0;
  }
LAB_00462d32:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462d44  FUN_00462d44   (87 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00462d82) */
int __cdecl FUN_00462d44(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fb3f4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462d9c  FUN_00462d9c   (665 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00462d9c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4fb734);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  _vector_new_ldtc_((int *)(param_1 + 0x20),0x10,4,1,(undefined*)FUN_00462d44);
  _vector_new_ldtc_((int *)(param_1 + 0x60),0x10,4,1,(undefined*)FUN_00462d44);
  _vector_new_ldtc_((int *)(param_1 + 0xa0),0x10,4,1,(undefined*)FUN_00462d44);
  _vector_new_ldtc_((int *)(param_1 + 0xf0),0x10,4,1,(undefined*)FUN_00462d44);
  puVar2 = FUN_00407734((uint *)("ViewWindowX" + 0xb));
  *(undefined4 **)(param_1 + 0x140) = puVar2;
  iVar3 = operator_new();
  if (iVar3 != 0) {
    FUN_004649b0((int)local_14);
    FUN_00437fc4(iVar3,(int)local_14);
  }
  *(int *)(param_1 + 0x144) = iVar3;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00462fc9;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00462fc9:
  std::string::string_from_cstr(param_1 + 0x148,(uint *)"Nobody");
  std::string::string_from_cstr(param_1 + 0x158,(uint *)"Nobody");
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *in_FS_OFFSET = local_3c;
  return param_1;
}

} // namespace tea
