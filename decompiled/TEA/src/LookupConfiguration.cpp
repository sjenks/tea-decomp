// TEA.exe — application module "LookupConfiguration"
// 4 functions, 0x00425984..0x004263ec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00425984  LookupConfiguration::LookupEntry::~LookupEntry   (472 bytes)   [rtti:dtor destructor]
//   written in code as LookupConfiguration::LookupEntry::_dtor
void __cdecl LookupConfiguration::LookupEntry::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f18f4);
  if (param_1 == 0) goto LAB_00425b4c;
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x30) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425a2b;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_00425a2b:
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x20) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425ab2;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
LAB_00425ab2:
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + -0xc);
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
      if (iVar2 != 0) goto LAB_00425b3c;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_00425b3c:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00425b4c:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425bb8  LookupConfiguration::~LookupConfiguration   (1087 bytes)   [rtti:dtor destructor]
//   written in code as LookupConfiguration::_dtor
void __cdecl LookupConfiguration::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_30;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f1838);
  if (param_1 == 0) goto LAB_00425fe7;
  local_30 = 0;
  do {
    iVar3 = *(int *)(param_1 + local_30 * 4);
    if (iVar3 != 0) {
      _vector_delete_ldtc_(iVar3 + 0x40,0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::_dtor);
      if (*(int *)(iVar3 + 0x38) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x38) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x38) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425cae;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
LAB_00425cae:
      if (*(int *)(iVar3 + 0x28) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x28) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x28) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425d38;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
LAB_00425d38:
      if (*(int *)(iVar3 + 0x18) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x18) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x18) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425dc2;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
LAB_00425dc2:
      if (*(int *)(iVar3 + 8) != 0) {
        if (*(int *)(*(int *)(iVar3 + 8) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 8) + -0xc);
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
          if (iVar2 != 0) goto LAB_00425e5f;
        }
        operator_delete();
        *(undefined4 *)(iVar3 + 8) = 0;
      }
LAB_00425e5f:
      operator_delete();
    }
    local_30 = local_30 + 1;
  } while (local_30 < 4);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar3 != 0) goto LAB_00425f1f;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00425f1f:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
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
      if (iVar3 != 0) goto LAB_00425fd7;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00425fd7:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00425fe7:
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042612c  LookupConfiguration::LookupStyleEntries::~LookupStyleEntries   (652 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as LookupConfiguration::LookupStyleEntries::_dtor
void __cdecl LookupConfiguration::LookupStyleEntries::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f1920);
  if (param_1 == 0) goto LAB_004263a7;
  _vector_delete_ldtc_(param_1 + 0x40,0x38,4,1,(undefined*)LookupConfiguration::LookupEntry::_dtor);
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
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
      if (iVar2 != 0) goto LAB_004261ec;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_004261ec:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar2 != 0) goto LAB_00426273;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00426273:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
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
      if (iVar2 != 0) goto LAB_00426316;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00426316:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar2 != 0) goto LAB_0042639a;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0042639a:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004263a7:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004263ec  FUN_004263ec   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004263ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004e3c04();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_004e3c04();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

} // namespace tea
