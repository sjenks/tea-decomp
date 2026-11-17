// TEACON.exe — application module "Pattern"
// 5 functions, 0x0040dae0..0x0040dc68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040dae0  Pattern::Pattern   (89 bytes)   [analysis]
//   constructor: count=0 and 256 empty 16-byte strings
undefined4 * __cdecl Pattern::Pattern(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42c958);
  *param_1 = 0;
  _vector_new_ldtc_(param_1 + 2,0x10,0x100,1,(undefined*)FUN_0040da88);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040db54  Pattern::~Pattern   (100 bytes)   [rtti:dtor destructor]
//   written in code as Pattern::_dtor
void __cdecl Pattern::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42c97c);
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
// 0x0040dbb8  Pattern::Add   (161 bytes)   [analysis]
//   returns the index of an equal entry or appends (capacity 256)
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
// 0x0040dc5c  Pattern::Clear   (12 bytes)   [analysis]
//   count = 0
void __cdecl Pattern::Clear(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dc68  Pattern::At   (21 bytes)   [analysis]
//   address of slot n (8 + n*16)
int __cdecl Pattern::At(int param_1,byte param_2)

{
  return param_1 + (uint)param_2 * 0x10 + 8;
}

} // namespace tea
