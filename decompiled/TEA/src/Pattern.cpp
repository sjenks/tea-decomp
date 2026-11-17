// TEA.exe — application module "Pattern"
// 6 functions, 0x00434b30..0x00434cd0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00434b30  Pattern::Pattern   (89 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dae0. constructor: count=0 and 256 empty 16-byte strings
undefined4 * __cdecl Pattern::Pattern(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f311c);
  *param_1 = 0;
  _vector_new_ldtc_(param_1 + 2,0x10,0x100,1,(undefined*)FUN_00434ad8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ba4  Pattern::~Pattern   (100 bytes)   [rtti:dtor destructor]
//   written in code as Pattern::_dtor
void __cdecl Pattern::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f3140);
  if (param_1 != 0) {
    _vector_delete_ldtc_(param_1 + 8,0x10,0x100,1,(undefined*)std::string::_dtor);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434c08  Pattern::Add   (161 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dbb8. returns the index of an equal entry or appends (capacity 256)
int __cdecl Pattern::Add(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  do {
    if (*param_1 <= local_8) {
      if (*param_1 < 0x100) {
        std::string::assign((int)(param_1 + *param_1 * 4 + 2),param_2);
        iVar3 = *param_1;
        *param_1 = *param_1 + 1;
      }
      else {
        iVar3 = -1;
      }
      return iVar3;
    }
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    if (uVar1 == *(uint *)(param_1[local_8 * 4 + 4] + -4)) {
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(char *)(*(int *)(param_2 + 8) + uVar2) !=
              *(char *)(param_1[local_8 * 4 + 4] + uVar2)) break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      if (uVar1 <= uVar2) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cac  FUN_00434cac   (12 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00434cac(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cb8  FUN_00434cb8   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00434cb8(int param_1,byte param_2)

{
  return param_1 + (uint)param_2 * 0x10 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cd0  FUN_00434cd0   (988 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00434cd0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f318c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xbc);
    param_1[0xbc] = (int)(param_1 + 0xb9);
    param_1[0xbd] = (int)(param_1 + 0xba);
    param_1[1] = (int)(param_1 + 0xb9);
    param_1[2] = (int)(param_1 + 0xba);
    param_1[0xb8] = 0;
    param_1[0xbb] = 0;
    param_1[0xb9] = (int)&OWL::TEventHandler::vftable;
    param_1[0xba] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xbc,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x280;
  FUN_00413cf4(param_1,1,0x4f3154,param_3,param_4,(uint *)0xfaa,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x280;
  param_1[3] = (int)&GridAboutBoxViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f3310;
  *(undefined ***)param_1[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f3328;
  FUN_0041af38(param_1 + 0x18,0,param_1,0x2b98,0);
  iVar3 = 1;
  std::string::string_from_cstr((int)local_14,(uint *)"http://www.crosswordman.com/tea.html");
  FUN_0041d588(param_1 + 0x48,0,param_1,0x7526,(int)local_14,iVar3);
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
      if (iVar3 != 0) goto LAB_00434ef6;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00434ef6:
  iVar3 = 1;
  std::string::string_from_cstr((int)local_24,(uint *)"mailto:support@crosswordman.com\?Subject=TEA Support Request");
  FUN_0041d588(param_1 + 0x7e,0,param_1,0x7527,(int)local_24,iVar3);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
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
      if (iVar3 != 0) goto LAB_00434fb2;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_00434fb2:
  param_1[0xb6] = 0;
  iVar3 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar2 = std::string::__getRep(param_1 + 0xb4,uVar1,uVar1);
    param_1[0xb6] = (int)(piVar2 + 3);
    memcpy((undefined4 *)param_1[0xb6],*(undefined4 **)(param_5 + 8),uVar1);
  }
  else {
    param_1[0xb6] = *(int *)(param_5 + 8);
    piVar2 = (int *)(param_1[0xb6] + -0xc);
    if (piVar2 != &DAT_00513d58) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

} // namespace tea
