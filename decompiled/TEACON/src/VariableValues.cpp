// TEACON.exe — application module "VariableValues"
// 8 functions, 0x0040d97c..0x0040edbc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040d97c  VariableValues::Bind   (74 bytes)   [analysis]
//   binds variable 0..9 to a letter if unbound (0xfe) and, when exclusive, not already used
bool __cdecl VariableValues::Bind(int param_1,char param_2)

{
  int iVar1;
  
  if ((*(char *)&DAT_00434684) == '\0') {
    VariableValues::Clear();
  }
  if (((&DAT_00434688)[param_1] == -2) && (iVar1 = VariableValues::IsLetterBound(param_2), iVar1 == 0)) {
    (&DAT_00434688)[param_1] = param_2;
    return true;
  }
  return param_2 == (&DAT_00434688)[param_1];
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d9c8  VariableValues::Get   (27 bytes)   [analysis]
//   pointer to the binding slot for one variable
undefined1 * __cdecl VariableValues::Get(int param_1)

{
  if ((*(char *)&DAT_00434684) == '\0') {
    VariableValues::Clear();
  }
  return &DAT_00434688 + param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d9e4  VariableValues::IsLetterBound   (45 bytes)   [analysis]
//   true when the exclusive option is on and another variable already holds this letter
undefined4 __cdecl VariableValues::IsLetterBound(char param_1)

{
  char *pcVar1;
  
  if (DAT_0042c930 != 0) {
    for (pcVar1 = &DAT_00434688; pcVar1 < &DAT_00434692; pcVar1 = pcVar1 + 1) {
      if (param_1 == *pcVar1) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da14  VariableValues::Clear   (25 bytes)   [analysis]
//   marks all ten variables unbound (0xfe)
void __stdcall VariableValues::Clear(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00434688;
  do {
    *puVar1 = 0xfe;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  DAT_00434684 = 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da30  VariableValues::Save   (32 bytes)   [analysis]
//   copies the ten bindings into a snapshot
void __cdecl VariableValues::Save(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00434688;
  do {
    param_1 = param_1 + 1;
    *param_1 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da50  VariableValues::Restore   (37 bytes)   [analysis]
//   restores the ten bindings from a snapshot
void __cdecl VariableValues::Restore(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  DAT_00434684 = 1;
  iVar1 = 0;
  puVar2 = &DAT_00434688;
  do {
    param_1 = param_1 + 1;
    *puVar2 = *param_1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ed84  VariableValues::~VariableValues   (53 bytes)   [rtti:dtor destructor]
//   written in code as VariableValues::_dtor
void __cdecl VariableValues::_dtor(char *param_1,byte param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      DAT_00434684 = 0;
    }
    else if (*param_1 == '\x01') {
      VariableValues::Restore(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edbc  FilterWordByCaseMode   (1200 bytes)   [analysis (inferred)]
//   copies a word into a new string under mode 1..4 (all / letters only / letters upper-cased / letters lower-cased)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040eee1) */
int __cdecl FilterWordByCaseMode(int param_1,int param_2,char param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte *local_64;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x42d364);
  if (param_3 == '\0') {
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
      if (piVar4 != &DAT_0042fab4) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_0042fac0;
  for (local_64 = *(byte **)(param_2 + 8);
      (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)) != local_64;
      local_64 = local_64 + 1) {
    if (*local_64 < 0x80) {
      if (param_3 == '\x01') {
        std::string::replace_fill((int)local_14,local_c[-1],0,1,*local_64);
      }
      else if (param_3 == '\x02') {
        iVar3 = FUN_00422574((int)(char)*local_64);
        if (iVar3 != 0) {
          std::string::replace_fill((int)local_14,local_c[-1],0,1,*local_64);
        }
      }
      else if (param_3 == '\x03') {
        iVar3 = FUN_00422574((int)(char)*local_64);
        if (iVar3 != 0) {
          uVar1 = FUN_00424238((int)(char)*local_64);
          std::string::replace_fill((int)local_14,local_c[-1],0,1,(char)uVar1);
        }
      }
      else if ((param_3 == '\x04') && (iVar3 = FUN_00422574((int)(char)*local_64), iVar3 != 0)) {
        uVar1 = FUN_0042428c((int)(char)*local_64);
        std::string::replace_fill((int)local_14,local_c[-1],0,1,(char)uVar1);
      }
    }
    else {
      puVar5 = *(uint **)(&DAT_0042ce84 + (uint)*local_64 * 4);
      if (puVar5 != (uint *)0x0) {
        if ((param_3 == '\x01') || (param_3 == '\x02')) {
          uVar1 = local_c[-1];
          pcVar2 = strlen(puVar5);
          FUN_00417320((int)local_14,uVar1,0,(uint)puVar5,(uint)pcVar2,0,(uint)pcVar2);
        }
        else {
          for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
            if (param_3 == '\x03') {
              uVar1 = FUN_00424238((int)(char)*puVar5);
              std::string::replace_fill((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
            else {
              uVar1 = FUN_0042428c((int)(char)*puVar5);
              std::string::replace_fill((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040f251;
    }
    operator_delete();
  }
LAB_0040f251:
  *in_FS_OFFSET = local_38;
  return param_1;
}

} // namespace tea
