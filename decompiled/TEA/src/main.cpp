// TEA.exe — application module "main"
// 2 functions, 0x0043b544..0x0043b7a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043b544  ExpandQueryMacros   (612 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041130c. replaces unescaped @ and # with the configured expansions; \x pairs are copied verbatim
/* WARNING: Removing unreachable block (ram,0x0043b585) */
int __cdecl ExpandQueryMacros(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f4abc);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -4);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
      if ((cVar2 == '@') && (*(int *)(*(int *)(param_2 + 8) + -4) != 0)) {
        std::string::append((int)local_14,param_2);
      }
      else if ((cVar2 == '#') && (*(int *)(*(int *)(param_2 + 0x18) + -4) != 0)) {
        std::string::append((int)local_14,param_2 + 0x10);
      }
      else {
        if ((cVar2 == '\\') && (iVar4 + 1 < iVar3)) {
          std::string::replace_fill((int)local_14,local_c[-1],0,1,0x5c);
          iVar4 = iVar4 + 1;
          cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
        }
        std::string::replace_fill((int)local_14,local_c[-1],0,1,cVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0043b78d;
    }
    operator_delete();
  }
LAB_0043b78d:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b7a8  LoadPatternOptions   (926 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411570. reads ExpansionAt, ExpansionHash, VariablesExclusive, IgnoreUnusedPunctuation from the registry profile
//   file placement: inferred (address adjacency)
void __cdecl LoadPatternOptions(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f4b78);
  Persist::Persist(local_c,param_2,0,0);
  iVar2 = param_1;
  std::string::string_from_cstr((int)local_1c,(uint *)"ExpansionAt");
  uVar1 = Persist::QueryValueSized((int)local_c,(int)local_1c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
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
      if (iVar2 != 0) goto LAB_0043b893;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_0043b893:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1,(uint *)"[aeiou]");
  }
  iVar2 = param_1 + 0x10;
  std::string::string_from_cstr((int)local_2c,(uint *)"ExpansionHash");
  uVar1 = Persist::QueryValueSized((int)local_c,(int)local_2c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
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
      if (iVar2 != 0) goto LAB_0043b96a;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_0043b96a:
  if (cVar4 != '\0') {
    FUN_004cf41c(param_1 + 0x10,(uint *)"[^aeiou]");
  }
  puVar5 = &DAT_004fcb84;
  std::string::string_from_cstr((int)local_3c,(uint *)"VariablesExclusive");
  uVar1 = Persist::QueryValue((int)local_c,(int)local_3c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
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
      if (iVar2 != 0) goto LAB_0043ba45;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0043ba45:
  if (cVar4 != '\0') {
    DAT_004fcb84 = 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x20);
  std::string::string_from_cstr((int)local_4c,(uint *)"IgnoreUnusedPunctuation");
  uVar1 = Persist::QueryValue((int)local_c,(int)local_4c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
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
      if (iVar2 != 0) goto LAB_0043bb18;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_0043bb18:
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

} // namespace tea
