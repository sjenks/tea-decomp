// TEACON.exe — runtime / library code "std_basic_filebuf"
// 10 functions, 0x00417ffc..0x0041bc28. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417ffc  std::basic_filebuf<char>::~basic_filebuf   (129 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_filebuf_char::_dtor
void __cdecl std::basic_filebuf_char::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42fe98);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&std::basic_filebuf_char::vftable;
    FUN_00418080(param_1);
    operator_delete();
    operator_delete();
    std::basic_streambuf_char::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004192a8  std::basic_filebuf<char>::vf9   (1168 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::basic_filebuf_char::vf9
void __cdecl std::basic_filebuf_char::vf9(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *in_FS_OFFSET;
  int local_54;
  uint local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_35;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4302a0);
  iVar3 = FUN_004197a4((int)param_1);
  local_34 = FUN_004197b0((int)param_1);
  local_34 = iVar3 - local_34;
  iVar3 = FUN_00417ee0();
  if (iVar3 == param_1[9]) {
    FUN_004181e8();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar3 = FUN_004197a4((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_00418cd4((int)param_1), iVar3 != 0)) {
    iVar3 = FUN_004197bc((int)param_1);
    iVar3 = iVar3 + param_1[0xc];
    uVar4 = FUN_004197bc((int)param_1);
    FUN_00418dc4((int)param_1,uVar4,iVar3);
    iVar3 = FUN_00418cd4((int)param_1);
    iVar5 = FUN_004197bc((int)param_1);
    FUN_00418ddc((int)param_1,iVar3 - iVar5);
    FUN_00418da8((int)param_1,0,0,0);
    uVar6 = FUN_004197a4((int)param_1);
    uVar7 = FUN_004197c8((int)param_1);
    if (uVar6 < uVar7) {
      local_3c = FUN_004181e8();
      bVar1 = FUN_00418bc0((int *)&GHIDRA_STACK(0x00000008),&local_3c);
      if (!bVar1) {
        uVar2 = FUN_0041929c(&GHIDRA_STACK(0x00000008));
        FUN_004197d4(param_1,uVar2);
        FUN_00418d7c((int)param_1,1);
        *(undefined1 *)((int)param_1 + 0x29) = 1;
        puVar8 = (undefined1 *)FUN_004197a4((int)param_1);
        FUN_00418cc8(puVar8);
        *in_FS_OFFSET = local_30;
        return;
      }
    }
    iVar3 = FUN_004197a4((int)param_1);
    local_34 = FUN_004197b0((int)param_1);
    local_34 = iVar3 - local_34;
  }
  iVar3 = FUN_004197a4((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_00418cd4((int)param_1), iVar3 == 0)) {
    FUN_00418dc4((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  if (local_34 != 0) {
    local_20 = 8;
    FUN_00419820(&local_8,(int)param_1);
    local_14 = local_14 + 1;
    piVar9 = (int *)FUN_004198b8(&local_8);
    uVar4 = FUN_00419738(piVar9);
    local_35 = (char)uVar4;
    local_14 = local_14 + -1;
    std::locale::_dtor(&local_8,2);
    if (local_35 == '\0') {
      local_40 = local_34;
      local_44 = 0;
      pcVar10 = (char *)operator_new_array();
      local_48 = (char *)0x0;
      if ((char)param_1[10] != '\0') {
        iVar3 = FUN_00418748(param_1,param_1[9],-param_1[0xb],1);
        if (iVar3 == -1) {
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
        iVar3 = param_1[0xe];
        param_1[0xe] = param_1[0xf];
        param_1[0xf] = iVar3;
      }
      FUN_00419748((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      do {
        FUN_004197a4((int)param_1);
        FUN_004197b0((int)param_1);
        local_20 = 0x14;
        FUN_00419820(&local_c,(int)param_1);
        local_14 = local_14 + 1;
        piVar9 = (int *)FUN_004198b8(&local_c);
        iVar3 = FUN_0041975c(piVar9);
        local_14 = local_14 + -1;
        std::locale::_dtor(&local_c,2);
        if (iVar3 == 3) break;
        if ((iVar3 == 1) || (iVar5 = FUN_004197a4((int)param_1), iVar5 != local_44)) {
          local_40 = local_40 * 2;
          local_4c = (char *)operator_new_array();
          local_50 = (int)local_48 - (int)pcVar10;
          memcpy((undefined4 *)local_4c,(undefined4 *)pcVar10,local_50);
          operator_delete_array();
          local_48 = local_4c + local_50;
          pcVar10 = local_4c;
        }
      } while ((iVar3 == 1) || (iVar5 = FUN_004197a4((int)param_1), iVar5 != local_44));
      if (iVar3 == 2) {
        operator_delete_array();
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
      if (iVar3 == 3) {
        iVar5 = 1;
        iVar3 = local_34;
        pcVar10 = (char *)FUN_004197b0((int)param_1);
        bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,iVar5,iVar3);
        if (!bVar1) {
          operator_delete_array();
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      else {
        bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,1,(int)local_48 - (int)pcVar10);
        if (!bVar1) {
          operator_delete_array();
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      operator_delete_array();
    }
    else {
      if (((char)param_1[10] != '\0') &&
         (iVar3 = FUN_00418748(param_1,param_1[9],-param_1[0xb],1), iVar3 == -1)) {
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
      iVar5 = 1;
      iVar3 = local_34;
      pcVar10 = (char *)FUN_004197b0((int)param_1);
      bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,iVar5,iVar3);
      if (!bVar1) {
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
    }
  }
  FUN_00418dc4((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  FUN_00418da8((int)param_1,0,0,0);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  iVar3 = FUN_00418748(param_1,param_1[9],0,1);
  param_1[0xd] = iVar3;
  local_54 = FUN_004181e8();
  bVar1 = FUN_00418bc0((int *)&GHIDRA_STACK(0x00000008),&local_54);
  if (bVar1) {
    FUN_00418dc4((int)param_1,0,0);
  }
  else {
    uVar2 = FUN_0041929c(&GHIDRA_STACK(0x00000008));
    FUN_004197d4(param_1,uVar2);
    FUN_00418d7c((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  FUN_0041978c((int *)&GHIDRA_STACK(0x00000008));
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419928  std::basic_filebuf<char>::vf10   (350 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::basic_filebuf_char::vf10
int __cdecl std::basic_filebuf_char::vf10(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int local_10;
  char local_9;
  int local_8;
  
  iVar3 = FUN_00417ee0();
  if (iVar3 == *(int *)(param_1 + 0x24)) {
    iVar3 = FUN_004181e8();
  }
  else {
    iVar3 = FUN_00418cd4(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_004197a4(param_1), iVar3 != 0)) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar4 = FUN_004197a4(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
      else {
        uVar4 = FUN_004197c8(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
    }
    local_8 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_8);
    if (!bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        local_9 = FUN_0041929c((undefined1 *)&param_2);
        pcVar10 = &local_9;
        iVar3 = FUN_00418cd4(param_1);
        bVar1 = FUN_00416e3c((char *)(iVar3 + -1),pcVar10);
        if (bVar1) {
          FUN_00418d7c(param_1,-1);
          return param_2;
        }
        FUN_00418d7c(param_1,-1);
        uVar2 = FUN_0041929c((undefined1 *)&param_2);
        puVar9 = (undefined1 *)FUN_00418cd4(param_1);
        *puVar9 = uVar2;
        return param_2;
      }
    }
    local_10 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_10);
    if (bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        FUN_00418d7c(param_1,-1);
        iVar3 = FUN_0041978c(&param_2);
        return iVar3;
      }
    }
    iVar3 = FUN_004181e8();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a88  std::basic_filebuf<char>::vf12   (589 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::basic_filebuf_char::vf12
undefined4 __cdecl std::basic_filebuf_char::vf12(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_a4;
  int local_8c [3];
  int local_80 [3];
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_0041897c((int)param_1);
  if ((uVar2 & 8) != 0) {
    if ((param_1[9] == 1) || (param_1[9] == 2)) {
      local_c = FUN_004181e8();
      piVar5 = &local_c;
      FUN_004181e8();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*param_1 + 0xc))();
      piStack_a4 = (int *)0x419b0c;
      iVar3 = FUN_00418748(param_1,param_1[9],0,1);
      FUN_00419cd8(local_2c,iVar3);
      piStack_a4 = (int *)0x419b2a;
      iVar3 = FUN_00418748(param_1,param_1[9],0,2);
      FUN_00419cd8(local_38,iVar3);
      iVar3 = 0;
      LVar4 = FUN_00419d58(local_2c);
      piStack_a4 = (int *)0x419b51;
      FUN_00418748(param_1,param_1[9],LVar4,iVar3);
      bVar1 = FUN_00419d64(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_00419cd8(local_50,-1);
        FUN_00419d7c((undefined4*)&piStack_a4,local_20);
        (**(code **)(*param_1 + 0x10))();
        uVar6 = FUN_00419dcc(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)param_1 + 0x29) != '\0') {
        local_14 = FUN_004181e8();
        piVar5 = &local_14;
        FUN_004181e8();
        local_10 = (**(code **)(*param_1 + 0x24))();
        bVar1 = FUN_00418bc0(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_0041897c((int)param_1);
  if (((uVar2 & 4) != 0) && (param_1[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*param_1 + 0xc))();
    piStack_a4 = (int *)0x419c28;
    iVar3 = FUN_00418748(param_1,param_1[9],0,1);
    FUN_00419cd8(local_68,iVar3);
    piStack_a4 = (int *)0x419c46;
    iVar3 = FUN_00418748(param_1,param_1[9],0,2);
    FUN_00419cd8(local_74,iVar3);
    iVar3 = 0;
    LVar4 = FUN_00419d58(local_68);
    piStack_a4 = (int *)0x419c6d;
    FUN_00418748(param_1,param_1[9],LVar4,iVar3);
    bVar1 = FUN_00419d64(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_00419cd8(local_8c,-1);
      FUN_00419d7c((undefined4*)&piStack_a4,local_5c);
      (**(code **)(*param_1 + 0x10))();
      uVar6 = FUN_00419dcc(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419e30  std::basic_filebuf<char>::vf7   (1092 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::basic_filebuf_char::vf7
/* WARNING: Type propagation algorithm not settling */
void __cdecl std::basic_filebuf_char::vf7(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *in_FS_OFFSET;
  int local_50;
  int local_48;
  int local_40;
  int local_3c;
  char *local_38;
  char local_31;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x430314);
  FUN_0041a2a4((undefined4*)&local_38,0);
  iVar2 = FUN_00417ee0();
  if (iVar2 == param_1[9]) {
    FUN_004181e8();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar2 = FUN_00418cd4((int)param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_004197a4((int)param_1), iVar2 != 0)) {
    if ((char)param_1[10] == '\0') {
      uVar3 = FUN_004197a4((int)param_1);
      uVar4 = FUN_004197a4((int)param_1);
      uVar5 = FUN_004197b0((int)param_1);
      FUN_00418da8((int)param_1,uVar5,uVar4,uVar3);
    }
    else {
      uVar3 = FUN_004197c8((int)param_1);
      uVar4 = FUN_004197a4((int)param_1);
      uVar5 = FUN_004197b0((int)param_1);
      FUN_00418da8((int)param_1,uVar5,uVar4,uVar3);
    }
    FUN_00418dc4((int)param_1,0,0);
  }
  iVar2 = FUN_00418cd4((int)param_1);
  if (iVar2 != 0) {
    uVar6 = FUN_00418cd4((int)param_1);
    uVar7 = FUN_00418ce0((int)param_1);
    if (uVar6 < uVar7) {
      puVar8 = (undefined1 *)FUN_00418cd4((int)param_1);
      FUN_00418cc8(puVar8);
      *in_FS_OFFSET = local_30;
      return;
    }
  }
  if (((*(char *)((int)param_1 + 0x29) != '\0') && (iVar2 = FUN_00418cd4((int)param_1), iVar2 != 0))
     || ((*(char *)((int)param_1 + 0x29) != '\0' && (iVar2 = FUN_004197a4((int)param_1), iVar2 != 0)
         ))) {
    local_40 = FUN_004181e8();
    piVar9 = &local_40;
    FUN_004181e8();
    local_3c = (**(code **)(*param_1 + 0x24))();
    bVar1 = FUN_00418bc0(&local_3c,piVar9);
    if (bVar1) {
      FUN_004181e8();
      *in_FS_OFFSET = local_30;
      return;
    }
    uVar3 = FUN_004197c8((int)param_1);
    uVar4 = FUN_004197a4((int)param_1);
    uVar5 = FUN_004197b0((int)param_1);
    FUN_00418da8((int)param_1,uVar5,uVar4,uVar3);
    FUN_00418dc4((int)param_1,0,0);
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  iVar2 = FUN_00418748(param_1,param_1[9],0,1);
  param_1[0xd] = iVar2;
  local_20 = 8;
  FUN_00419820(&local_8,(int)param_1);
  local_14 = local_14 + 1;
  piVar9 = (int *)FUN_004198b8(&local_8);
  uVar3 = FUN_00419738(piVar9);
  local_31 = (char)uVar3;
  local_14 = local_14 + -1;
  std::locale::_dtor(&local_8,2);
  if (local_31 == '\0') {
    local_48 = 0;
    puVar10 = (undefined4 *)operator_new_array();
    pcVar13 = (char *)0x0;
    while (pcVar11 = FUN_0041a2b4(param_1,param_1[9],pcVar13 + (int)puVar10,1,param_1[0xc]),
          puVar12 = puVar10, 0 < (int)pcVar11) {
      pcVar13 = pcVar13 + (int)pcVar11;
      FUN_00419748((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      local_20 = 0x14;
      FUN_00419820(&local_c,(int)param_1);
      local_14 = local_14 + 1;
      piVar9 = (int *)FUN_004198b8(&local_c);
      local_50 = FUN_0041a274(piVar9);
      local_14 = local_14 + -1;
      std::locale::_dtor(&local_c,2);
      if ((local_50 == 2) || (local_50 == 3)) break;
      if (((char *)param_1[0xc] + param_1[0x10] != (char *)0x0) && ((char *)param_1[0xc] == pcVar11)
         ) {
        puVar12 = (undefined4 *)operator_new_array();
        memcpy(puVar12,puVar10,(uint)pcVar13);
        operator_delete_array();
        local_48 = (local_48 - (int)puVar10) + (int)puVar12;
      }
      if (((char *)param_1[0xc] + param_1[0x10] == (char *)0x0) ||
         (puVar10 = puVar12, (char *)param_1[0xc] != pcVar11)) break;
    }
    if ((int)pcVar13 < 1) {
      FUN_004181e8();
      *in_FS_OFFSET = local_30;
      return;
    }
    param_1[0xb] = (int)pcVar13;
    if ((local_50 == 2) || (local_50 == 1)) {
      operator_delete_array();
      FUN_004181e8();
      *in_FS_OFFSET = local_30;
      return;
    }
    if (local_50 == 3) {
      memcpy((undefined4 *)param_1[0x10],puVar12,param_1[0xb]);
      local_38 = (char *)param_1[0xb];
    }
    else {
      iVar14 = (int)pcVar11 - (local_48 - (int)puVar12);
      iVar2 = FUN_00418748(param_1,param_1[9],-iVar14,1);
      if (iVar2 == -1) {
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
      param_1[0xb] = param_1[0xb] - iVar14;
      local_38 = (char *)-param_1[0x10];
    }
    operator_delete_array();
  }
  else {
    local_38 = FUN_0041a2b4(param_1,param_1[9],(char *)param_1[0x10],1,param_1[0xc]);
    if ((int)local_38 < 1) {
      FUN_004181e8();
      *in_FS_OFFSET = local_30;
      return;
    }
    iVar2 = FUN_0041a2dc((int)param_1,(char *)param_1[0x10],local_38 + param_1[0x10]);
    param_1[0xb] = iVar2;
  }
  if (param_1[0xb] == 0) {
    FUN_004181e8();
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar2 = param_1[0x10];
    FUN_00418da8((int)param_1,iVar2,iVar2,local_38 + iVar2);
    FUN_00418dc4((int)param_1,0,0);
    *(undefined1 *)(param_1 + 10) = 1;
    puVar8 = (undefined1 *)FUN_00418cd4((int)param_1);
    FUN_00418cc8(puVar8);
    *in_FS_OFFSET = local_30;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a3e8  std::basic_filebuf<char>::vf5   (84 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::basic_filebuf_char::vf5
int __cdecl std::basic_filebuf_char::vf5(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00418cd4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00418ce0(param_1);
    iVar2 = FUN_00418cd4(param_1);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_004197a4(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    iVar1 = FUN_004197c8(param_1);
    iVar2 = FUN_004197a4(param_1);
    return iVar1 - iVar2;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a43c  std::basic_filebuf<char>::vf11   (368 bytes, 2 ranges)   [rtti:vtable virtual slot 11]
//   written in code as std::basic_filebuf_char::vf11
int __cdecl std::basic_filebuf_char::vf11(int *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    iVar2 = 0;
  }
  else if (param_1[0xc] < param_3) {
    local_c = FUN_004181e8();
    piVar3 = &local_c;
    FUN_004181e8();
    local_8 = (**(code **)(*param_1 + 0x24))();
    bVar1 = FUN_00418bc0(&local_8,piVar3);
    if (bVar1) {
      iVar2 = 0;
    }
    else {
      local_10 = FUN_004197bc((int)param_1);
      local_14 = FUN_00418cd4((int)param_1);
      local_18 = FUN_00418ce0((int)param_1);
      iVar2 = FUN_004197b0((int)param_1);
      local_1c = FUN_004197a4((int)param_1);
      local_20 = FUN_004197c8((int)param_1);
      FUN_00418da8((int)param_1,0,0,0);
      FUN_00418dc4((int)param_1,param_2,param_2 + param_3);
      FUN_00418ddc((int)param_1,param_3);
      local_28 = FUN_004181e8();
      piVar3 = &local_28;
      FUN_004181e8();
      local_24 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_24,piVar3);
      if (bVar1) {
        iVar2 = 0;
      }
      else {
        FUN_00418da8((int)param_1,local_10,local_14,local_18);
        FUN_00418dc4((int)param_1,iVar2,local_20);
        FUN_00418ddc((int)param_1,local_1c - iVar2);
        iVar2 = param_3;
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      local_30 = FUN_004181e8();
      piVar3 = &local_30;
      local_2c = FUN_004197d4(param_1,*param_2);
      bVar1 = FUN_00418bc0(&local_2c,piVar3);
      if (bVar1) {
        return iVar2;
      }
      param_2 = param_2 + 1;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa6c  std::basic_filebuf<char>::vf2   (242 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_filebuf_char::vf2
int * __cdecl std::basic_filebuf_char::vf2(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_00417ee0();
    if (iVar2 == param_1[9]) {
      if (param_2 == 0) {
        param_1[0xc] = param_3;
      }
      else {
        param_1[0xc] = param_3 + -1;
        param_1[0x10] = param_2;
        FUN_00418dc4((int)param_1,0,0);
        FUN_00418da8((int)param_1,0,0,0);
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    else {
      local_c = FUN_004181e8();
      piVar3 = &local_c;
      FUN_004181e8();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_8,piVar3);
      if (!bVar1) {
        if (param_2 == 0) {
          param_1[0xc] = param_3;
          iVar2 = operator_new_array();
          operator_delete_array();
          param_1[0x10] = iVar2;
        }
        else {
          operator_delete_array();
          param_1[0xc] = param_3 + -1;
          param_1[0x10] = param_2;
        }
        FUN_00418dc4((int)param_1,0,0);
        FUN_00418da8((int)param_1,0,0,0);
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b5a0  std::basic_filebuf<char>::vf3   (1576 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::basic_filebuf_char::vf3
int * __cdecl std::basic_filebuf_char::vf3(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int local_a0 [6];
  int local_88 [3];
  int local_7c [3];
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4306e0);
  local_38 = param_3;
  FUN_00419cd8(local_7c,0);
  iVar1 = FUN_00417ee0();
  if (iVar1 == param_2[9]) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if ((param_3 == -1) && (param_4 == 0)) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if (param_4 == 1) {
    iVar1 = 0;
    local_3c = 0;
    local_40 = 0;
    if ((char)param_2[10] == '\0') {
      if (*(char *)((int)param_2 + 0x29) != '\0') {
        iVar2 = FUN_004197b0((int)param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_004197bc((int)param_2);
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_00418cd4((int)param_2);
            pcVar4 = (char *)FUN_004197bc((int)param_2);
            iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
            iVar1 = -iVar1;
            local_3c = FUN_004197bc((int)param_2);
            local_40 = FUN_00418cd4((int)param_2);
          }
        }
        else {
          pcVar3 = (char *)FUN_004197a4((int)param_2);
          pcVar4 = (char *)FUN_004197b0((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
          iVar1 = -iVar1;
          local_3c = FUN_004197b0((int)param_2);
          local_40 = FUN_004197a4((int)param_2);
        }
      }
    }
    else {
      iVar2 = FUN_00418cd4((int)param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_004197b0((int)param_2);
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_004197c8((int)param_2);
          pcVar4 = (char *)FUN_004197a4((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
          local_3c = FUN_004197a4((int)param_2);
          local_40 = FUN_004197c8((int)param_2);
        }
      }
      else {
        iVar1 = FUN_004197bc((int)param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_00418ce0((int)param_2);
          iVar2 = FUN_00418cd4((int)param_2);
          iVar1 = iVar1 - iVar2;
        }
        else {
          pcVar3 = (char *)FUN_00418ce0((int)param_2);
          pcVar4 = (char *)FUN_00418cd4((int)param_2);
          iVar1 = FUN_0041a2dc((int)param_2,pcVar4,pcVar3);
        }
        local_3c = FUN_00418cd4((int)param_2);
        local_40 = FUN_00418ce0((int)param_2);
      }
    }
    local_24 = 8;
    FUN_00419820(&local_8,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_004198b8(&local_8);
    local_44 = FUN_0041bbc8(piVar5);
    local_18 = local_18 + -1;
    std::locale::_dtor(&local_8,2);
    if ((param_3 == 0) || (0 < local_44)) {
      if (local_44 < 1) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,1);
        FUN_00419cd8(local_88,iVar2);
        FUN_0041bbd8(local_7c,local_88);
        if ((iVar1 != 0) && (iVar2 = FUN_004197bc((int)param_2), iVar2 != 0)) {
          local_48 = param_2[0xc];
          local_4c = local_3c;
          local_50 = local_3c;
          local_54 = local_40;
          local_60 = (undefined4 *)operator_new_array();
          local_64 = (undefined4 *)((int)local_60 + local_48);
          local_5c = local_60;
          local_58 = local_60;
          do {
            FUN_00419748((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf]);
            local_24 = 0x14;
            FUN_00419820(&local_c,(int)param_2);
            local_18 = local_18 + 1;
            piVar5 = (int *)FUN_004198b8(&local_c);
            local_68 = FUN_0041975c(piVar5);
            local_18 = local_18 + -1;
            std::locale::_dtor(&local_c,2);
            if ((local_68 == 2) || (local_68 == 3)) break;
            if ((local_60 == local_64) && (local_50 != local_54)) {
              local_6c = (int)local_60 - (int)local_58;
              local_48 = local_48 * 2;
              local_5c = (undefined4 *)operator_new_array();
              memcpy(local_5c,local_58,local_6c);
              operator_delete_array();
              local_58 = local_5c;
              local_60 = (undefined4 *)((int)local_5c + local_6c);
              local_4c = local_50;
              local_64 = (undefined4 *)((int)local_5c + local_48);
              local_5c = local_60;
            }
          } while (local_50 != local_54);
          if (iVar1 < 1) {
            FUN_0041bc18(local_7c,(int)local_60 + ((-(local_40 - local_3c) - iVar1) - (int)local_58)
                        );
          }
          else {
            FUN_0041bc08(local_7c,(int)local_60 + ((iVar1 - (local_40 - local_3c)) - (int)local_58))
            ;
          }
          operator_delete_array();
        }
        FUN_00419d7c(param_1,local_7c);
        *in_FS_OFFSET = local_34;
      }
      else if (param_3 == 0) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,1);
        FUN_00419cd8(param_1,(iVar2 - iVar1 * local_44) / local_44);
        *in_FS_OFFSET = local_34;
      }
      else if (*(char *)((int)param_2 + 0x29) == '\0') {
        FUN_00418dc4((int)param_2,0,0);
        FUN_00418da8((int)param_2,0,0,0);
        iVar1 = FUN_00418748(param_2,param_2[9],-((iVar1 - local_38) * local_44),1);
        FUN_00419cd8(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
      else {
        FUN_004181e8();
        (**(code **)(*param_2 + 0x24))();
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        iVar1 = FUN_00418748(param_2,param_2[9],local_38 * local_44,1);
        FUN_00419cd8(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
    }
    else {
      FUN_00419cd8(param_1,-1);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    local_24 = 0x20;
    FUN_00419820(&local_10,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_004198b8(&local_10);
    local_70 = FUN_0041bbc8(piVar5);
    local_18 = local_18 + -1;
    std::locale::_dtor(&local_10,2);
    if (local_70 < 1) {
      if ((param_4 != 0) || (param_3 != 0)) {
        FUN_00419cd8(param_1,-1);
        *in_FS_OFFSET = local_34;
        return param_1;
      }
      FUN_00419cd8((int *)&GHIDRA_STACK(0xffffff44),0);
      (**(code **)(*param_2 + 0x10))();
    }
    if (*(char *)((int)param_2 + 0x29) != '\0') {
      FUN_004181e8();
      (**(code **)(*param_2 + 0x24))();
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    if (param_4 == 0) {
      iVar1 = 0;
    }
    else if (param_4 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    iVar1 = FUN_00418748(param_2,param_2[9],local_38 * local_70,iVar1);
    FUN_00419cd8(local_a0,iVar1);
    FUN_0041bbd8(local_7c,local_a0);
    FUN_00418dc4((int)param_2,0,0);
    FUN_00418da8((int)param_2,0,0,0);
    FUN_00419d7c(param_1,local_7c);
    *in_FS_OFFSET = local_34;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bc28  std::basic_filebuf<char>::vf4   (488 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::basic_filebuf_char::vf4
int * __cdecl std::basic_filebuf_char::vf4(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int local_44 [3];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x43071c);
  iVar2 = FUN_00417ee0();
  if (iVar2 == param_2[9]) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar3 = FUN_00419cd8(local_44,-1);
    uVar4 = FUN_00419dcc((int *)&GHIDRA_STACK(0x0000000c),piVar3);
    if ((char)uVar4 == '\0') {
      local_1c = 8;
      FUN_00419820(&local_8,(int)param_2);
      local_10 = local_10 + 1;
      piVar3 = (int *)FUN_004198b8(&local_8);
      iVar2 = FUN_0041bbc8(piVar3);
      local_10 = local_10 + -1;
      std::locale::_dtor(&local_8,2);
      if (iVar2 < 1) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,2);
        iVar7 = 0;
        LVar5 = FUN_00419d58((undefined4 *)&GHIDRA_STACK(0x0000000c));
        iVar7 = FUN_00418748(param_2,param_2[9],LVar5,iVar7);
        if (iVar7 == -1) {
          FUN_00419cd8(param_1,-1);
          *in_FS_OFFSET = local_2c;
        }
        else {
          FUN_00418dc4((int)param_2,0,0);
          FUN_00418da8((int)param_2,0,0,0);
          FUN_0041be10(&local_30,(int)&GHIDRA_STACK(0x0000000c));
          puVar6 = (undefined4 *)FUN_00419748((undefined4 *)param_2[0xf],&local_30);
          FUN_00419748((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_004181e8();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_00418bc0(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_00419d58((undefined4 *)&GHIDRA_STACK(0x0000000c)), iVar7 < iVar2)) {
            FUN_00419cd8(param_1,-1);
            *in_FS_OFFSET = local_2c;
            return param_1;
          }
          FUN_00419d7c(param_1,(undefined4 *)&GHIDRA_STACK(0x0000000c));
          *in_FS_OFFSET = local_2c;
        }
      }
      else {
        FUN_00419d58((undefined4 *)&GHIDRA_STACK(0x0000000c));
        (**(code **)(*param_2 + 0xc))();
        *in_FS_OFFSET = local_2c;
      }
    }
    else {
      FUN_00419cd8(param_1,-1);
      *in_FS_OFFSET = local_2c;
    }
  }
  return param_1;
}

} // namespace tea
