// TSBuild.exe — application module "TSBuildProfile"
// 5 functions, 0x004160b8..0x004171b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004160b8  TSBuildProfile::~TSBuildProfile   (555 bytes)   [rtti:dtor destructor]
//   written in code as TSBuildProfile::_dtor
void __cdecl TSBuildProfile::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476cac);
  if (param_1 == 0) goto LAB_004162d3;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416159;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_00416159:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004161cd;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_004161cd:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416241;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00416241:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004162c3;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004162c3:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004162d3:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004162e4  FUN_004162e4   (1518 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004162e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
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
  
  __InitExceptBlockLDTC(0x476d80);
  FUN_004198b4(local_c,0x48c354,0,0);
  FUN_00416918((int)local_1c,param_2,(uint *)"default.tsm");
  FUN_00459ad4(param_1 + 0x20,(int)local_1c);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004163e8;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_004163e8:
  iVar1 = param_1 + 0x20;
  std::string::string_from_cstr((int)local_2c,(uint *)"BuilderMapping");
  Persist::QueryValueSized((int)local_c,(int)local_2c,iVar1);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004164b6;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_004164b6:
  iVar1 = param_1 + 0x30;
  std::string::string_from_cstr((int)local_3c,(uint *)"BuilderWordList");
  Persist::QueryValueSized((int)local_c,(int)local_3c,iVar1);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416584;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_00416584:
  puVar2 = (undefined4 *)(param_1 + 0x40);
  std::string::string_from_cstr((int)local_4c,(uint *)"BuilderShortest");
  Persist::QueryValue((int)local_c,(int)local_4c,puVar2);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416652;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_00416652:
  puVar2 = (undefined4 *)(param_1 + 0x44);
  std::string::string_from_cstr((int)local_5c,(uint *)"BuilderLongest");
  Persist::QueryValue((int)local_c,(int)local_5c,puVar2);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar3 = (int *)(local_54 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00416720;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_00416720:
  puVar2 = (undefined4 *)(param_1 + 0x48);
  std::string::string_from_cstr((int)local_6c,(uint *)"BuilderFrequency");
  Persist::QueryValue((int)local_c,(int)local_6c,puVar2);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar3 = (int *)(local_64 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004167ee;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_004167ee:
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  std::string::string_from_cstr((int)local_7c,(uint *)"BuilderSort");
  Persist::QueryValue((int)local_c,(int)local_7c,puVar2);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar3 = (int *)(local_74 + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004168ac;
    }
    operator_delete();
    local_74 = 0;
  }
LAB_004168ac:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416918  FUN_00416918   (881 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00416918(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x476e80);
  iVar2 = std::string::string_from_cstr((int)local_14,param_3);
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
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = std::string::append((int)local_24,iVar2);
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
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00416bbf;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00416bbf:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00416c6e;
    }
    operator_delete();
  }
LAB_00416c6e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c8c  FUN_00416c8c   (1319 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00416c8c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
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
  
  __InitExceptBlockLDTC(0x476f50);
  FUN_004198b4(local_c,0x48c354,1,0);
  iVar1 = param_1 + 0x20;
  std::string::string_from_cstr((int)local_1c,(uint *)"BuilderMapping");
  FUN_00419a8c((int)local_c,(int)local_1c,iVar1);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416d97;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_00416d97:
  iVar1 = param_1 + 0x30;
  std::string::string_from_cstr((int)local_2c,(uint *)"BuilderWordList");
  FUN_00419a8c((int)local_c,(int)local_2c,iVar1);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416e65;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00416e65:
  std::string::string_from_cstr((int)local_3c,(uint *)"BuilderShortest");
  FUN_00419abc((int)local_c,(int)local_3c);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00416f33;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_00416f33:
  std::string::string_from_cstr((int)local_4c,(uint *)"BuilderLongest");
  FUN_00419abc((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00417001;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_00417001:
  std::string::string_from_cstr((int)local_5c,(uint *)"BuilderFrequency");
  FUN_00419abc((int)local_c,(int)local_5c);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004170cf;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_004170cf:
  std::string::string_from_cstr((int)local_6c,(uint *)"BuilderSort");
  FUN_00419abc((int)local_c,(int)local_6c);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041718d;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_0041718d:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004171b4  FUN_004171b4   (300 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004171b4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x477010);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -6;
  FUN_0043c86c(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 6;
  param_1[3] = (int)&TSDictionaryBuilderProgressBar::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004770c8;
  *(undefined ***)param_1[2] = &PTR_LAB_004770d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004770e0;
  param_1[6] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
