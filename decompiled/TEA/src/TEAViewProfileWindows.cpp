// TEA.exe — application module "TEAViewProfileWindows"
// 2 functions, 0x00439ea0..0x0043a064. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00439ea0  TEAViewProfileWindows::~TEAViewProfileWindows   (449 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewProfileWindows::_dtor
void __cdecl TEAViewProfileWindows::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f46a4);
  if (param_1 == 0) goto LAB_0043a051;
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x1e8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1e8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1e8) + -0xc);
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
      if (iVar1 != 0) goto LAB_00439f4e;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
LAB_00439f4e:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
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
      if (iVar1 != 0) goto LAB_00439fc2;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00439fc2:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_0043a041;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0043a041:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0043a051:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a064  FUN_0043a064   (5323 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0043a064(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined **local_3c0;
  undefined4 local_190;
  undefined1 local_16c [8];
  int local_164;
  undefined1 local_15c [8];
  int local_154;
  undefined1 local_14c [8];
  int local_144;
  undefined1 local_13c [8];
  int local_134;
  undefined1 local_12c [8];
  int local_124;
  undefined1 local_11c [8];
  int local_114;
  undefined1 local_10c [8];
  int local_104;
  undefined1 local_fc [8];
  int local_f4;
  undefined1 local_ec [8];
  int local_e4;
  undefined1 local_dc [8];
  int local_d4;
  undefined1 local_cc [8];
  int local_c4;
  undefined1 local_bc [8];
  int local_b4;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  int local_94;
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
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f4858);
  Persist::Persist(local_c,param_1 + 0x1e0,1,0);
  switch(param_2) {
  case 0:
    break;
  case 1:
    std::string::string_from_cstr((int)local_5c,(uint *)"ViewShowAnnotations");
    FUN_0044eca8((int)local_c,(int)local_5c);
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        piVar3 = (int *)(local_54 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043a4d7;
      }
      operator_delete();
      local_54 = 0;
    }
LAB_0043a4d7:
    std::string::string_from_cstr((int)local_6c,(uint *)"ViewShowBalances");
    FUN_0044eca8((int)local_c,(int)local_6c);
    if (local_64 != 0) {
      if (*(int *)(local_64 + -0xc) != -1) {
        piVar3 = (int *)(local_64 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043a5a8;
      }
      operator_delete();
      local_64 = 0;
    }
LAB_0043a5a8:
    std::string::string_from_cstr((int)local_7c,(uint *)"ViewDoubleClick");
    FUN_0044eca8((int)local_c,(int)local_7c);
    if (local_74 != 0) {
      if (*(int *)(local_74 + -0xc) != -1) {
        piVar3 = (int *)(local_74 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043a679;
      }
      operator_delete();
      local_74 = 0;
    }
LAB_0043a679:
    uVar4 = 0;
    local_3c0 = &PTR_s_OutputLower_004f3d78;
    do {
      std::string::string_from_cstr((int)local_8c,(uint *)*local_3c0);
      FUN_0044eca8((int)local_c,(int)local_8c);
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar3 = (int *)(local_84 + -0xc);
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
          if (iVar2 != 0) goto LAB_0043a771;
        }
        operator_delete();
        local_84 = 0;
      }
LAB_0043a771:
      uVar4 = uVar4 + 1;
      local_3c0 = local_3c0 + 1;
    } while (uVar4 < 4);
    goto switchD_0043a0b5_default;
  case 2:
    std::string::string_from_cstr((int)local_9c,(uint *)"ViewSorting");
    FUN_0044eca8((int)local_c,(int)local_9c);
    if (local_94 != 0) {
      if (*(int *)(local_94 + -0xc) != -1) {
        piVar3 = (int *)(local_94 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043a87a;
      }
      operator_delete();
      local_94 = 0;
    }
LAB_0043a87a:
    std::string::string_from_cstr((int)local_ac,(uint *)"ViewSortingAscending");
    FUN_0044eca8((int)local_c,(int)local_ac);
    if (local_a4 != 0) {
      if (*(int *)(local_a4 + -0xc) != -1) {
        piVar3 = (int *)(local_a4 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043a966;
      }
      operator_delete();
      local_a4 = 0;
    }
LAB_0043a966:
    std::string::string_from_cstr((int)local_bc,(uint *)"ViewLengthGrouping");
    FUN_0044eca8((int)local_c,(int)local_bc);
    if (local_b4 != 0) {
      if (*(int *)(local_b4 + -0xc) != -1) {
        piVar3 = (int *)(local_b4 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043aa52;
      }
      operator_delete();
      local_b4 = 0;
    }
LAB_0043aa52:
    std::string::string_from_cstr((int)local_cc,(uint *)"ViewLengthGroupingSense");
    FUN_0044eca8((int)local_c,(int)local_cc);
    if (local_c4 != 0) {
      if (*(int *)(local_c4 + -0xc) != -1) {
        piVar3 = (int *)(local_c4 + -0xc);
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
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      local_c4 = 0;
    }
    goto switchD_0043a0b5_default;
  case 3:
    std::string::string_from_cstr((int)local_dc,(uint *)"ViewMultipleDictionaries");
    FUN_0044eca8((int)local_c,(int)local_dc);
    if (local_d4 != 0) {
      if (*(int *)(local_d4 + -0xc) != -1) {
        piVar3 = (int *)(local_d4 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043ac2c;
      }
      operator_delete();
      local_d4 = 0;
    }
LAB_0043ac2c:
    puVar1 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x28));
    std::string::string_from_cstr((int)local_ec,puVar1);
    puVar5 = local_ec;
    std::string::string_from_cstr((int)local_fc,(uint *)"ViewDefinitionDictionary");
    FUN_0044ec78((int)local_c,(int)local_fc,(int)puVar5);
    if (local_f4 != 0) {
      if (*(int *)(local_f4 + -0xc) != -1) {
        piVar3 = (int *)(local_f4 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043ad3c;
      }
      operator_delete();
      local_f4 = 0;
    }
LAB_0043ad3c:
    if (local_e4 != 0) {
      if (*(int *)(local_e4 + -0xc) != -1) {
        piVar3 = (int *)(local_e4 + -0xc);
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
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      local_e4 = 0;
    }
    goto switchD_0043a0b5_default;
  case 4:
    iVar2 = param_1 + 0x30;
    std::string::string_from_cstr((int)local_10c,(uint *)"FontPattern");
    FUN_0044eccc((int)local_c,(int)local_10c,iVar2);
    if (local_104 != 0) {
      if (*(int *)(local_104 + -0xc) != -1) {
        piVar3 = (int *)(local_104 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043aef2;
      }
      operator_delete();
      local_104 = 0;
    }
LAB_0043aef2:
    iVar2 = param_1 + 0x70;
    std::string::string_from_cstr((int)local_11c,(uint *)"FontOutput");
    FUN_0044eccc((int)local_c,(int)local_11c,iVar2);
    if (local_114 != 0) {
      if (*(int *)(local_114 + -0xc) != -1) {
        piVar3 = (int *)(local_114 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043aff7;
      }
      operator_delete();
      local_114 = 0;
    }
LAB_0043aff7:
    iVar2 = param_1 + 0xb0;
    std::string::string_from_cstr((int)local_12c,(uint *)"FontOutputAnnotation");
    FUN_0044eccc((int)local_c,(int)local_12c,iVar2);
    if (local_124 != 0) {
      if (*(int *)(local_124 + -0xc) != -1) {
        piVar3 = (int *)(local_124 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043b0ff;
      }
      operator_delete();
      local_124 = 0;
    }
LAB_0043b0ff:
    iVar2 = param_1 + 0xf0;
    std::string::string_from_cstr((int)local_13c,(uint *)"FontPrinting");
    FUN_0044eccc((int)local_c,(int)local_13c,iVar2);
    if (local_134 != 0) {
      if (*(int *)(local_134 + -0xc) != -1) {
        piVar3 = (int *)(local_134 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043b207;
      }
      operator_delete();
      local_134 = 0;
    }
LAB_0043b207:
    iVar2 = param_1 + 0x2c;
    std::string::string_from_cstr((int)local_14c,(uint *)"DefinitionBackgroundColor");
    FUN_0044eda8((int)local_c,(int)local_14c,iVar2);
    if (local_144 != 0) {
      if (*(int *)(local_144 + -0xc) != -1) {
        piVar3 = (int *)(local_144 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043b30c;
      }
      operator_delete();
      local_144 = 0;
    }
LAB_0043b30c:
    iVar2 = param_1 + 0x130;
    std::string::string_from_cstr((int)local_15c,(uint *)"DefinitionDefaultFont");
    FUN_0044eccc((int)local_c,(int)local_15c,iVar2);
    if (local_154 != 0) {
      if (*(int *)(local_154 + -0xc) != -1) {
        piVar3 = (int *)(local_154 + -0xc);
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
        if (iVar2 != 0) goto LAB_0043b414;
      }
      operator_delete();
      local_154 = 0;
    }
LAB_0043b414:
    iVar2 = param_1 + 0x170;
    std::string::string_from_cstr((int)local_16c,(uint *)"DefinitionHighlightFont");
    FUN_0044eccc((int)local_c,(int)local_16c,iVar2);
    if (local_164 != 0) {
      if (*(int *)(local_164 + -0xc) != -1) {
        piVar3 = (int *)(local_164 + -0xc);
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
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      local_164 = 0;
    }
  default:
    goto switchD_0043a0b5_default;
  }
  iVar2 = param_1;
  std::string::string_from_cstr((int)local_1c,(uint *)"ExpansionAt");
  FUN_0044ec78((int)local_c,(int)local_1c,iVar2);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043a195;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_0043a195:
  iVar2 = param_1 + 0x10;
  std::string::string_from_cstr((int)local_2c,(uint *)"ExpansionHash");
  FUN_0044ec78((int)local_c,(int)local_2c,iVar2);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043a263;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_0043a263:
  std::string::string_from_cstr((int)local_3c,(uint *)"VariablesExclusive");
  FUN_0044eca8((int)local_c,(int)local_3c);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
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
      if (iVar2 != 0) goto LAB_0043a333;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0043a333:
  std::string::string_from_cstr((int)local_4c,(uint *)"IgnoreUnusedPunctuation");
  FUN_0044eca8((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
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
      if (iVar2 != 0) goto switchD_0043a0b5_default;
    }
    operator_delete();
    local_44 = 0;
  }
switchD_0043a0b5_default:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_190;
  return;
}

} // namespace tea
