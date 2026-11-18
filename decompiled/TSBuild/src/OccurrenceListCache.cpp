// TSBuild.exe — application module "OccurrenceListCache"
// 88 functions, 0x00405ff4..0x00414a7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00405ff4  OccurrenceListCache::~OccurrenceListCache   (316 bytes)   [rtti:dtor destructor]
//   written in code as OccurrenceListCache::_dtor
void __cdecl OccurrenceListCache::_dtor(int self,byte dtorFlags)

{
  int vec;
  undefined4 *sehChainHead;
  undefined1 erased [8];
  int erased2;
  int erased3;
  uint i;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int local_c;
  
  __InitExceptBlockLDTC(0x475418);
  local_c = 1;
  if (self != 0) {
    ehContext = 8;
    for (i = 0; i < (uint)((*(int *)(self + 8) - *(int *)(self + 4)) / 0x38);
        i = i + 1) {
      erased3 = *(int *)(self + 4) + i * 0x38;
      ehContext = 8;
      erased2 = *(int *)(*(int *)(erased3 + 0x24) + 8);
      while( true ) {
        if (*(int *)(erased3 + 0x24) == erased2) break;
        vec = *(int *)(erased2 + 0x20);
        if (vec != 0) {
          std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
          operator_delete();
          ehContext = 8;
          operator_delete();
        }
        __rwstd::__rb_tree::iterator::increment((int)erased);
      }
    }
    local_c = local_c + -1;
    std::_Destroy_range_WordMap(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406154  __rwstd::__rb_tree::iterator::increment   (99 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aec0 (99 bytes; the code occurs several times, e.g. one template instance per type). ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061b8  std::_Destroy_range_ptr   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  std::_Destroy_range_WordMap   (176 bytes)   [analysis]
//   destroys the word maps in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_WordMap(undefined4 vec,int first,int last)

{
  int iVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int tree;
  
  __InitExceptBlockLDTC(0x475454);
  iVar2 = first;
  while (tree = iVar2, tree != last) {
    iVar2 = tree + 0x38;
    if (tree != 0) {
      ehContext = 0x14;
      ehDtorCount = ehDtorCount + -2;
      if (*(int *)(tree + 0x24) != 0) {
        unused = *(undefined4 *)(tree + 0x24);
        WordMap::erase_range(result,tree,firstLo,firstHi,
                     *(int *)(*(int *)(tree + 0x24) + 8));
        iVar1 = *(int *)(tree + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(tree + 0x18);
        *(int *)(tree + 0x18) = iVar1;
        __rwstd::__rb_tree::__deallocate_buffers(tree);
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004062a0  WordMap::erase_range   (258 bytes)   [analysis]
//   __rb_tree::erase(first, last)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode)

{
  undefined4 itLo;
  undefined4 itHi;
  int itNode;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int lastNode;
  undefined4 next [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 ret [4];
  
  ret[2] = *(undefined4 *)(tree + 0x24);
  itNode = *(int *)(tree + 0x24);
  local_1c = *(int *)(itNode + 8);
  if (((local_1c == firstNode) && (local_2c = itNode, itNode == lastNode)) &&
     (*(int *)(tree + 0x28) != 0)) {
    WordMap::__erase(tree,*(int *)(itNode + 4));
    itNode = *(int *)(tree + 0x24);
    *(int *)(itNode + 8) = itNode;
    *(undefined4 *)(itNode + 4) = 0;
    *(int *)(itNode + 0xc) = itNode;
    *(undefined4 *)(tree + 0x28) = 0;
    local_44[2] = *(undefined4 *)(tree + 0x24);
    puVar4 = local_44;
    puVar5 = ret;
    for (itNode = 4; itNode != 0; itNode = itNode + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (itNode = firstNode, itHi = firstHi, itLo = firstLo, firstNode != lastNode) {
      __rwstd::__rb_tree::iterator::increment((int)&firstLo);
      WordMap::erase(next,tree,itLo,itHi,itNode);
      puVar4 = next;
      puVar5 = ret;
      for (itNode = 4; itNode != 0; itNode = itNode + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *result = ret[0];
  result[1] = ret[1];
  result[2] = ret[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004063a4  WordMap::__erase   (262 bytes)   [analysis]
//   returns a subtree's nodes to the free list, releasing each key string
//   file placement: inferred (address adjacency)
void __cdecl WordMap::__erase(int tree,int node)

{
  int iVar1;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x475490);
  do {
    if (node == 0) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    WordMap::__erase(tree,*(int *)(node + 0xc));
    iVar1 = *(int *)(node + 8);
    *(undefined4 *)(node + 0xc) = *(undefined4 *)(tree + 0x18);
    if ((node != -0x10) && (*(int *)(node + 0x18) != 0)) {
      if (*(int *)(*(int *)(node + 0x18) + -0xc) != -1) {
        strRep = (int *)(*(int *)(node + 0x18) + -0xc);
        if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep = *strRep + -1;
          prevRefs = *strRep + 1;
        }
        if (prevRefs != 0) goto LAB_00406483;
      }
      operator_delete();
      *(undefined4 *)(node + 0x18) = 0;
    }
LAB_00406483:
    *(int *)(tree + 0x18) = node;
    node = iVar1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004064dc  WordMap::erase   (2455 bytes, 2 ranges)   [analysis]
//   __rb_tree::erase(iterator) (red-black delete)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *node;
  undefined4 *sehChainHead;
  undefined4 it;
  undefined4 itHi2;
  int itNode2;
  int unused;
  int unused2;
  int *strRep;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *unused3;
  int *unused4;
  int *local_4c;
  int local_48;
  int *unused5;
  int *local_40;
  int *local_3c;
  char local_35;
  int *dest;
  int local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4754cc);
  it = itLo;
  itHi2 = itHi;
  itNode2 = itNode;
  local_30 = *(int *)(tree + 0x24);
  if (local_30 != itNode) {
    __rwstd::__rb_tree::iterator::increment((int)&it);
  }
  __rwstd::__rb_tree::__set_node_406e78((undefined4*)&dest,itNode);
  local_35 = '\0';
  local_3c = dest + 2;
  piVar2 = dest;
  if (*local_3c == 0) {
    local_40 = dest + 3;
    if (*local_40 == 0) {
      node = (int *)dest[1];
      unused5 = dest;
      local_48 = dest[1];
      if (*(int *)(tree + 0x24) == local_48) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(tree + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == dest) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      node = (int *)dest[3];
    }
  }
  else {
    local_4c = dest + 3;
    if (*local_4c == 0) {
      node = (int *)dest[2];
    }
    else {
      for (piVar2 = (int *)dest[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      node = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != dest)) {
    *(int **)(dest[2] + 4) = piVar2;
    piVar2[2] = dest[2];
    if (piVar2 == (int *)dest[3]) {
      if (node != (int *)0x0) {
        node[1] = (int)piVar2;
      }
    }
    else {
      if (node != (int *)0x0) {
        node[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = node;
      piVar2[3] = dest[3];
      *(int **)(dest[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
      *(int **)(*(int *)(tree + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(dest[1] + 8) == dest) {
      *(int **)(dest[1] + 8) = piVar2;
    }
    else {
      *(int **)(dest[1] + 0xc) = piVar2;
    }
    piVar2[1] = dest[1];
    if (node == (int *)0x0) {
      node = piVar2;
    }
    unused4 = dest;
    local_58 = *piVar2;
    *piVar2 = *dest;
    *dest = local_58;
    local_8c = dest;
    unused3 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      node[1] = piVar2[1];
      if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
        *(int **)(*(int *)(tree + 0x24) + 4) = node;
      }
      else if (*(int **)(dest[1] + 8) == dest) {
        *(int **)(dest[1] + 8) = node;
      }
      else {
        *(int **)(dest[1] + 0xc) = node;
      }
      if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
        local_5c = dest + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(tree + 0x24) + 8) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__minimum((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
        local_60 = dest + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__maximum((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((node != *(int **)(tree + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((node == *(int **)(*(int *)(tree + 0x24) + 4)) || (*node != 1))
            goto LAB_00406d2e;
            if (node != *(int **)(node[1] + 8)) break;
            piVar2 = *(int **)(node[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *node = 0;
              node = (int *)node[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)node[1] = 0;
                iVar3 = node[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                  *(int *)(*(int *)(tree + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(node[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *node = 0;
                node = (int *)node[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(node[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)node[1];
                    *(undefined4 *)node[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = node[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_00406d2e;
                }
                *piVar2 = 0;
                node = (int *)node[1];
              }
            }
          }
          piVar2 = *(int **)(node[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *node = 0;
          node = (int *)node[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)node[1] = 0;
          iVar3 = node[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
            *(int *)(*(int *)(tree + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(node[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *node = 0;
        node = (int *)node[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      node = (int *)node[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(node[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)node[1];
      *(undefined4 *)node[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = node[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_00406d2e:
    *node = 1;
  }
  local_8c[3] = *(int *)(tree + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    ehContext = 0x14;
    ehDtorCount = ehDtorCount + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        strRep = (int *)(local_8c[6] + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar3 = *strRep + 1;
        }
        if (iVar3 != 0) goto LAB_00406e38;
      }
      unused2 = local_8c[6] + -0xc;
      unused = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_00406e38:
  *(int **)(tree + 0x18) = local_8c;
  *(int *)(tree + 0x28) = *(int *)(tree + 0x28) + -1;
  *result = it;
  result[1] = itHi2;
  result[2] = itNode2;
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406e78  __rwstd::__rb_tree::__set_node_406e78   (13 bytes)   [analysis]
//   stores a node pointer
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__set_node_406e78(undefined4 *dest,undefined4 node)

{
  *dest = node;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406e88  __rwstd::__rb_tree::__minimum   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042ae80 (29 bytes; the code occurs several times, e.g. one template instance per type). leftmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__minimum(int node)

{
  for (; *(int *)(node + 8) != 0; node = *(int *)(node + 8)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406ea8  __rwstd::__rb_tree::__maximum   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aea0 (29 bytes; the code occurs several times, e.g. one template instance per type). rightmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__maximum(int node)

{
  for (; *(int *)(node + 0xc) != 0; node = *(int *)(node + 0xc)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406ec8  __rwstd::__rb_tree::__deallocate_buffers   (63 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042af24 (63 bytes; the code occurs several times, e.g. one template instance per type). frees every node buffer of a tree
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__deallocate_buffers(int tree)

{
  while (*(undefined4 **)(tree + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(tree + 0x10) = **(undefined4 **)(tree + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406f08  WriteTsdDictionary   (27608 bytes, 2 ranges)   [analysis]
//   builds the .tsd dictionary: calibration pass, letter statistics, Huffman code, per-length word streams, definition output passes ("Calibrating dictionary - ", "Definition output pass ")
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040a86d) */
/* WARNING: Removing unreachable block (ram,0x004082db) */
/* WARNING: Removing unreachable block (ram,0x004075e2) */
/* WARNING: Removing unreachable block (ram,0x0040960c) */
/* WARNING: Removing unreachable block (ram,0x0040c495) */
/* WARNING: Removing unreachable block (ram,0x0040c0ae) */
/* WARNING: Removing unreachable block (ram,0x0040a707) */
/* WARNING: Removing unreachable block (ram,0x00408b42) */
/* WARNING: Removing unreachable block (ram,0x00408c46) */
/* WARNING: Removing unreachable block (ram,0x00408be6) */
/* WARNING: Removing unreachable block (ram,0x00408c39) */
/* WARNING: Removing unreachable block (ram,0x00408cef) */
/* WARNING: Removing unreachable block (ram,0x00408d19) */
/* WARNING: Removing unreachable block (ram,0x00408d27) */
/* WARNING: Removing unreachable block (ram,0x00408d6a) */
/* WARNING: Removing unreachable block (ram,0x00408d43) */
/* WARNING: Removing unreachable block (ram,0x00408d63) */
/* WARNING: Removing unreachable block (ram,0x00408d50) */
/* WARNING: Removing unreachable block (ram,0x00408d6f) */
/* WARNING: Removing unreachable block (ram,0x00408d73) */
/* WARNING: Removing unreachable block (ram,0x00408dcd) */
/* WARNING: Removing unreachable block (ram,0x0040729d) */
/* WARNING: Removing unreachable block (ram,0x00407077) */
/* WARNING: Removing unreachable block (ram,0x00407036) */
/* WARNING: Removing unreachable block (ram,0x0040725c) */
/* WARNING: Removing unreachable block (ram,0x0040a0d6) */
/* WARNING: Removing unreachable block (ram,0x0040a117) */
/* WARNING: Removing unreachable block (ram,0x0040c8c7) */
/* WARNING: Removing unreachable block (ram,0x0040a766) */
/* WARNING: Removing unreachable block (ram,0x0040cccf) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffff514 : 0x0040c8d5 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __stdcall WriteTsdDictionary(int *self,int wordLists,LPCSTR fileName,uint *description,int shortest,int longest, int progressTotal,int options)

{
  byte *pbVar1;
  DWORD DVar2;
  byte *pbVar3;
  uint *unused;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int *tree;
  undefined4 *puVar12;
  undefined4 *sehChainHead;
  bool bVar13;
  byte bVar14;
  longdouble in_ST0;
  undefined1 auStackY_5da60 [1032];
  undefined4 uStackY_5d658;
  byte *pbStackY_5d648;
  byte *pbStackY_5d638;
  undefined4 uStackY_5d630;
  undefined4 uStackY_5d62c;
  int iStackY_5d628;
  undefined4 uStackY_5d620;
  undefined4 uStackY_5d61c;
  int iStackY_5d618;
  int iStackY_5d608;
  undefined4 uStackY_5d600;
  undefined4 uStackY_5d5fc;
  int iStackY_5d5f8;
  int iStackY_5d5e8;
  int iStackY_5d5d8;
  undefined4 uStackY_5d5d0;
  undefined4 uStackY_5d5cc;
  int iStackY_5d5c8;
  undefined4 auStackY_5d5c0 [3];
  undefined4 uStackY_5d5b4;
  undefined4 uStackY_5d5b0;
  int iStackY_5d5ac;
  undefined4 uStackY_5d5a4;
  undefined4 uStackY_5d5a0;
  int iStackY_5d59c;
  int iStackY_5d58c;
  undefined4 uStackY_5d584;
  undefined4 uStackY_5d580;
  int iStackY_5d57c;
  undefined4 uStackY_5d56c;
  undefined4 auStackY_5d564 [4];
  undefined4 uStackY_5d554;
  undefined4 uStackY_5d550;
  int iStackY_5d54c;
  undefined4 auStackY_5d544 [6];
  int iStackY_5d52c;
  undefined4 uStackY_5d524;
  undefined4 uStackY_5d520;
  int iStackY_5d51c;
  undefined *puStackY_5d50c;
  int iStackY_5d4fc;
  int iStackY_5d4ec;
  undefined4 uStackY_5d4e4;
  undefined4 uStackY_5d4e0;
  int iStackY_5d4dc;
  undefined4 uStackY_5d4d4;
  undefined4 uStackY_5d4d0;
  int iStackY_5d4cc;
  int iStackY_5d4bc;
  int iStackY_5d4ac;
  int iStackY_5d49c;
  undefined4 uStackY_5d494;
  undefined4 uStackY_5d490;
  int iStackY_5d48c;
  undefined4 auStackY_5d484 [6];
  undefined4 uStackY_5d46c;
  undefined4 uStackY_5d45c;
  undefined4 uStackY_5d44c;
  undefined4 auStackY_5d444 [2];
  int iStackY_5d43c;
  int *piStackY_5d424;
  int *piStackY_5d414;
  undefined4 auStackY_5d40c [4];
  undefined4 uStackY_5d3fc;
  undefined4 uStackY_5d3f8;
  int iStackY_5d3f4;
  undefined4 uStackY_5d3ec;
  undefined4 uStackY_5d3e8;
  undefined4 *puStackY_5d3e4;
  undefined4 uStackY_5d3dc;
  undefined4 uStackY_5d3d8;
  undefined4 *puStackY_5d3d4;
  undefined4 *puStackY_5d3c4;
  undefined4 uStackY_5d3bc;
  undefined4 uStackY_5d3b8;
  undefined4 *puStackY_5d3b4;
  undefined4 uStackY_5d3ac;
  undefined4 uStackY_5d3a8;
  int iStackY_5d3a4;
  undefined4 *puStackY_5d394;
  undefined4 auStackY_5d38c [2];
  undefined4 *puStackY_5d384;
  undefined4 uStackY_5d374;
  int *piStackY_5d364;
  int *piStackY_5d354;
  undefined1 auStackY_5d34c [248];
  undefined4 uStackY_5d254;
  int *piStackY_5d244;
  int *piStackY_5d234;
  undefined1 auStackY_5d22c [248];
  undefined4 uStackY_5d134;
  undefined4 uStackY_5d124;
  undefined4 uStackY_5d114;
  undefined4 uStackY_5d104;
  undefined4 uStackY_5d0f4;
  undefined4 uStackY_5d0e4;
  undefined4 uStackY_5d0d4;
  undefined *puStackY_5d0c4;
  undefined4 uStackY_5d0b4;
  undefined4 uStackY_5d0a4;
  undefined4 uStackY_5d094;
  undefined4 auStackY_5d08c [6];
  undefined4 uStackY_5d074;
  undefined4 uStackY_5d064;
  undefined4 uStackY_5d054;
  int aiStackY_5d04c [65548];
  undefined1 auStackY_1d01c [8];
  int iStackY_1d014;
  int iStackY_1d004;
  int iStackY_1cff4;
  undefined *puStackY_1cfe4;
  int aiStackY_1cfdc [258];
  undefined4 uStackY_1cbd4;
  undefined4 uStackY_1cbc4;
  undefined4 uStackY_1cbb4;
  undefined4 uStackY_1ca84;
  undefined4 auStackY_1ca7c [2];
  int iStackY_1ca74;
  int *piStackY_1ca5c;
  int *piStackY_1ca4c;
  undefined4 uStackY_1ca3c;
  undefined4 auStackY_1ca34 [2];
  int iStackY_1ca2c;
  int *piStackY_1ca14;
  int *piStackY_1ca04;
  undefined4 auStackY_1c9fc [6];
  int iStackY_1c9e4;
  undefined4 auStackY_1c9dc [2];
  int iStackY_1c9d4;
  undefined *puStackY_1c9c4;
  undefined4 uStackY_1c9a4;
  undefined4 uStackY_1c994;
  undefined4 uStackY_1c984;
  undefined4 auStackY_1c97c [4];
  undefined4 uStackY_1c96c;
  undefined4 uStackY_1c968;
  int iStackY_1c964;
  uint *puStackY_1c954;
  uint *puStackY_1c944;
  uint *puStackY_1c934;
  uint *puStackY_1c924;
  char acStackY_1c91c [2048];
  uint auStackY_1c11c [514];
  undefined4 uStackY_1b914;
  undefined4 uStackY_1b904;
  undefined4 uStackY_1b8f4;
  byte abStackY_1b8ec [65552];
  byte buffer [404];
  DWORD buffer2 [101];
  DWORD buffer3 [101];
  uint buffer4 [100];
  DWORD aDStackY_b290 [101];
  DWORD DStackY_b0fc;
  byte buffer5 [8];
  DWORD unused2;
  byte buffer6 [999];
  undefined1 unused3;
  undefined4 result [6];
  undefined4 unused4;
  undefined4 result2 [6];
  undefined4 unused5;
  uint local_acc4 [101];
  uint newStr [9245];
  undefined4 uStackY_1abc;
  int *tree5;
  undefined ***firstLo;
  undefined4 firstHi;
  undefined4 firstHi2;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  uint uVar20;
  byte local_d60 [256];
  uint *unused6;
  uint *local_c5c;
  uint *local_c58;
  int *local_c54;
  uint *unused7;
  uint *local_c4c;
  uint *unused8;
  byte *local_c44;
  int *local_c40;
  uint *local_c3c;
  DWORD *local_c38;
  DWORD *local_c34;
  int unused9;
  int unused10;
  undefined1 *unused11;
  undefined4 unused12;
  undefined *unused13;
  undefined *unused14;
  int *strRep;
  undefined4 *unused15;
  int *unused16;
  DWORD *unused17;
  int *unused18;
  undefined4 *unused19;
  int *unused20;
  DWORD *unused21;
  int *unused22;
  int buffer7;
  int *local_bf0;
  undefined1 *unused23;
  undefined4 unused24;
  byte *unused25;
  byte *unused26;
  byte *strRep2;
  undefined4 unused27;
  int vec;
  byte local_bcd;
  byte *local_bcc;
  byte *local_bc8;
  byte *local_bc4;
  byte *unused28;
  undefined4 *src;
  uint unused29;
  undefined1 *unused30;
  int *newRep;
  byte *unused31;
  uint local_ba8;
  byte *local_ba4;
  undefined1 *unused32;
  byte *unused33;
  undefined4 unused34;
  int local_b94;
  int unused35;
  int unused36;
  int local_b88;
  uint code_;
  int *unused37;
  int *unused38;
  int value;
  int unused39;
  int unused40;
  int local_b6c;
  int unused41;
  int *unused42;
  int *unused43;
  uint local_b5c;
  int value2;
  uint local_b54;
  int str;
  undefined4 *local_b4c;
  uint unused44;
  uint local_b44;
  uint local_b40;
  undefined4 unused45;
  undefined4 unused46;
  int *local_b34;
  int i;
  DWORD buffer8;
  DWORD *local_b28;
  DWORD *unused47;
  DWORD *unused48;
  undefined4 value3;
  uint local_b18;
  uint buffer9;
  uint *local_b10;
  DWORD *unused49;
  DWORD *unused50;
  DWORD value4;
  int local_b00;
  int unused51;
  int local_af8;
  int unused52;
  undefined4 unused53;
  undefined4 unused54;
  int unused55;
  int local_ae4;
  uint unused56;
  undefined1 *unused57;
  undefined4 unused58;
  undefined *unused59;
  undefined *unused60;
  int *strRep3;
  undefined4 unused61;
  uint local_ac4;
  uint buffer10;
  uint *local_abc;
  int vec2;
  int unused62;
  char unused63;
  char local_aad;
  byte *j;
  undefined1 *unused64;
  undefined *unused65;
  undefined4 unused66;
  uint unused67;
  int unused68;
  int unused69;
  int tree2;
  DWORD local_a8c;
  uint local_a88;
  undefined4 value5;
  int n2;
  undefined4 *first;
  undefined4 *last;
  int unused70;
  int unused71;
  int unused72;
  undefined4 *unused73;
  int str2;
  int unused74;
  int unused75;
  undefined4 unused76;
  undefined4 unused77;
  int local_a50;
  int local_a4c;
  int local_a48;
  undefined4 *unused78;
  undefined4 *unused79;
  int firstNode;
  int unused80;
  int unused81;
  undefined1 *unused82;
  undefined4 unused83;
  int *unused84;
  int *unused85;
  int *strRep4;
  undefined1 *unused86;
  undefined4 unused87;
  int *unused88;
  int *unused89;
  int *strRep5;
  uint unused90;
  uint unused91;
  uint local_a00;
  byte buffer11;
  uint unused92;
  int unused93;
  uint unused94;
  undefined1 *unused95;
  undefined4 unused96;
  int *unused97;
  int *unused98;
  int *strRep6;
  int *unused99;
  int *unused100;
  uint unused101;
  undefined1 *unused102;
  int *newRep2;
  int *unused103;
  uint len2;
  int *strRep7;
  undefined1 *unused104;
  int *unused105;
  undefined4 unused106;
  undefined4 local_9ac;
  undefined4 *unused107;
  undefined4 *unused108;
  int unused109;
  undefined4 *unused110;
  int *strRep8;
  uint local_994;
  undefined1 s;
  uint local_98c;
  undefined1 *unused111;
  undefined4 unused112;
  int *unused113;
  int *unused114;
  int *strRep9;
  int *unused115;
  int *unused116;
  uint unused117;
  undefined1 *unused118;
  int *newRep3;
  int *unused119;
  uint len3;
  int *strRep10;
  undefined1 *unused120;
  int *unused121;
  undefined4 unused122;
  uint *msgText;
  uint local_93c;
  undefined1 *unused123;
  undefined4 unused124;
  int *unused125;
  int *unused126;
  int *strRep11;
  int *unused127;
  int *unused128;
  uint unused129;
  undefined1 *unused130;
  int *newRep4;
  int *unused131;
  uint len4;
  int *strRep12;
  undefined1 *unused132;
  int *unused133;
  undefined4 unused134;
  uint *msgText2;
  uint local_8ec;
  int *strRep13;
  int local_8e4;
  uint local_8e0;
  undefined1 *unused135;
  undefined4 unused136;
  undefined *unused137;
  undefined *unused138;
  int *strRep14;
  undefined1 *unused139;
  undefined4 unused140;
  int unused141;
  int unused142;
  int *strRep15;
  undefined4 *dest;
  undefined4 *src2;
  uint unused143;
  int unused144;
  int *newRep5;
  int *newData;
  uint local_894;
  int *strRep16;
  int unused145;
  int unused146;
  undefined4 unused147;
  int unused148;
  undefined1 *local_87c;
  undefined1 *unused149;
  undefined4 unused150;
  int unused151;
  int unused152;
  int *strRep17;
  undefined4 *dest2;
  undefined4 *src3;
  uint unused153;
  int unused154;
  int *newRep6;
  int *newData2;
  uint local_84c;
  int *strRep18;
  int unused155;
  int unused156;
  undefined4 unused157;
  int unused158;
  undefined1 *local_834;
  byte unused159;
  byte local_82d;
  uint local_82c;
  int local_828;
  undefined1 *unused160;
  undefined *unused161;
  undefined4 unused162;
  byte *local_818;
  byte *local_814;
  byte *local_810;
  undefined4 unused163;
  undefined4 unused164;
  undefined4 unused165;
  undefined4 unused166;
  uint local_7fc;
  uint unused167;
  undefined1 *unused168;
  undefined4 unused169;
  int unused170;
  int unused171;
  int *strRep19;
  undefined1 *unused172;
  undefined4 unused173;
  int unused174;
  int unused175;
  int *strRep20;
  undefined1 *other;
  char *len;
  uint pos;
  char ch;
  DWORD tickCount;
  int unused176;
  int unused177;
  undefined1 *unused178;
  undefined4 unused179;
  undefined *unused180;
  undefined *unused181;
  int *strRep21;
  undefined4 *unused182;
  undefined4 *unused183;
  int firstNode2;
  undefined4 *local_788;
  undefined4 unused184;
  undefined4 local_780;
  undefined4 local_77c;
  int local_778;
  byte buffer12;
  ushort local_772;
  undefined1 *unused185;
  undefined4 unused186;
  byte *unused187;
  byte *unused188;
  byte *strRep22;
  undefined1 *unused189;
  undefined4 unused190;
  byte *unused191;
  byte *unused192;
  byte *strRep23;
  int local_748;
  byte *k;
  int *local_740;
  int str3;
  int local_738;
  int unused193;
  int unused194;
  undefined1 *unused195;
  undefined *unused196;
  undefined4 unused197;
  uint local_720;
  uint *local_71c;
  int local_718;
  int unused198;
  int local_710;
  int m;
  int local_708;
  int local_704;
  int local_700;
  bool local_6f9;
  undefined1 *unused199;
  undefined4 unused200;
  byte *unused201;
  byte *unused202;
  byte *strRep24;
  undefined1 *unused203;
  undefined4 unused204;
  int *unused205;
  int *unused206;
  int *strRep25;
  undefined1 *unused207;
  undefined4 unused208;
  byte *unused209;
  byte *unused210;
  byte *strRep26;
  uint local_6bc;
  undefined1 s2;
  uint local_6b4;
  uint unused211;
  uint *local_660;
  uint *unused212;
  int local_658;
  undefined4 unused213;
  uint local_650;
  int vec3;
  undefined1 *unused214;
  undefined4 unused215;
  int *unused216;
  int *unused217;
  int *strRep27;
  int *unused218;
  int *unused219;
  uint unused220;
  undefined1 *unused221;
  int *newRep7;
  int *unused222;
  uint len5;
  int *strRep28;
  undefined1 *unused223;
  int *unused224;
  undefined4 unused225;
  undefined4 local_608;
  undefined4 *unused226;
  undefined4 *local_600;
  undefined1 *unused227;
  undefined4 unused228;
  int *unused229;
  int *unused230;
  int *strRep29;
  int *unused231;
  int *unused232;
  uint unused233;
  undefined1 *unused234;
  int *newRep8;
  int *unused235;
  uint len6;
  int *strRep30;
  undefined1 *unused236;
  int *unused237;
  undefined4 unused238;
  undefined4 local_5bc;
  int unused239;
  byte unused240;
  byte *local_5a8;
  undefined1 *unused241;
  undefined *unused242;
  undefined4 unused243;
  uint unused244;
  int local_594;
  uint local_590;
  undefined1 *unused245;
  undefined4 unused246;
  int unused247;
  int unused248;
  int *strRep31;
  undefined1 *unused249;
  undefined4 unused250;
  uint *unused251;
  uint *unused252;
  uint *strRep32;
  undefined1 *unused253;
  undefined4 unused254;
  uint *unused255;
  uint *unused256;
  uint *strRep33;
  int unused257;
  uint *unused258;
  uint *unused259;
  uint unused260;
  undefined1 *unused261;
  int *newRep9;
  uint *unused262;
  uint len7;
  uint *strRep34;
  undefined1 *unused263;
  uint *unused264;
  undefined4 unused265;
  uint *unused266;
  uint *local_51c;
  uint unused267;
  undefined1 *unused268;
  int *newRep10;
  uint *unused269;
  uint len8;
  uint *strRep35;
  undefined1 *unused270;
  uint *local_4fc;
  undefined4 unused271;
  undefined1 *value6;
  int local_4e8;
  int *tree3;
  int local_4e0;
  uint *local_4dc;
  byte *local_4d8;
  uint local_4d4;
  uint local_4d0;
  undefined1 *unused272;
  undefined4 unused273;
  int unused274;
  int unused275;
  int *strRep36;
  undefined1 *unused276;
  undefined4 unused277;
  int unused278;
  int unused279;
  int *strRep37;
  undefined1 *other2;
  DWORD local_498;
  int unused280;
  int unused281;
  undefined1 *unused282;
  undefined4 unused283;
  undefined *unused284;
  undefined *unused285;
  int *strRep38;
  undefined1 *unused286;
  undefined *unused287;
  undefined4 unused288;
  DWORD local_46c;
  int local_468;
  uint n3;
  uint local_460;
  uint value11;
  short buffer13;
  ushort buffer14;
  undefined4 value7;
  undefined4 *unused289;
  undefined4 *unused290;
  int firstNode3;
  undefined4 *local_444;
  undefined4 unused291;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 *unused292;
  undefined4 *unused293;
  int firstNode4;
  undefined4 *local_428;
  undefined4 unused294;
  int n4;
  double local_41c;
  int *writer;
  uint range;
  uint total;
  double local_408;
  double local_400;
  int i2;
  int local_3f4;
  undefined4 sehPrevFrame;
  undefined2 local_3e0;
  int ehDtorCount;
  undefined1 str4 [8];
  byte *bytes;
  undefined1 key [8];
  undefined *local_3b4;
  undefined4 *unused295;
  undefined4 vec4;
  int *first2;
  int *local_3a0;
  int *local_390;
  undefined4 vec5;
  DWORD *first3;
  DWORD *local_380;
  DWORD *local_370;
  undefined4 vec9;
  int *first4;
  int last2;
  undefined4 unused296;
  undefined4 vec6;
  undefined4 *first5;
  undefined4 *last5;
  undefined4 *local_330;
  undefined1 value8 [8];
  int *str14;
  undefined4 unused297;
  undefined1 str5 [8];
  int *str15;
  undefined1 str6 [8];
  int *str16;
  undefined **outOfRange [2];
  undefined1 newStr2 [8];
  int *unused298;
  undefined **lengthError [2];
  undefined1 newStr3 [8];
  int *unused299;
  undefined1 local_2c0 [8];
  int *str17;
  int local_2b0;
  undefined1 local_2ac [8];
  int str18;
  int local_29c;
  undefined1 local_298 [8];
  int str19;
  undefined1 str7 [8];
  undefined *local_280;
  undefined4 vec7;
  int first6;
  int local_270;
  int local_260;
  undefined4 vec8;
  int first7;
  int local_250;
  int local_240;
  undefined1 mapping [8];
  int str20;
  undefined1 str8 [8];
  int str21;
  int tree4 [4];
  undefined4 unused300;
  undefined4 *local_200;
  undefined4 *local_1fc;
  undefined4 unused301;
  undefined4 *local_1f4;
  uint local_1f0;
  undefined1 unused302;
  undefined4 unused303;
  undefined4 unused304;
  undefined1 str9 [8];
  byte *local_1d8;
  undefined1 value9 [8];
  int *str22;
  undefined4 unused305;
  undefined4 *vectorInt;
  undefined1 value10 [8];
  int *str23;
  undefined4 unused306;
  undefined1 str10 [8];
  byte *local_16c;
  undefined1 key2 [8];
  int *str24;
  undefined1 out [8];
  byte *local_14c;
  undefined1 newStr4 [8];
  uint *local_13c;
  uint unused307;
  undefined1 newStr5 [8];
  uint *local_124;
  uint local_11c;
  undefined1 str11 [8];
  int str25;
  undefined1 mapping2 [8];
  int str26;
  undefined1 str12 [8];
  int str27;
  int local_e4 [4];
  undefined4 unused308;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 unused309;
  undefined4 *local_c0;
  undefined4 unused310;
  undefined1 unused311;
  undefined4 unused312;
  undefined4 unused313;
  int local_ac [4];
  undefined4 unused314;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 unused315;
  undefined4 *local_88;
  undefined4 unused316;
  undefined1 unused317;
  undefined1 str13 [8];
  undefined *local_6c;
  undefined4 vec10;
  int first8;
  int last3;
  undefined4 unused318;
  undefined4 occurrenceListCache;
  int local_40;
  int local_3c;
  undefined4 unused319;
  undefined4 vec11;
  int first9;
  int last4;
  undefined4 unused320;
  int local_8;
  
  bVar14 = 0;
  iVar7 = 0x5d;
  do {
    local_8 = iVar7;
    iVar7 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4758f0);
  local_400 = 1.0;
  local_408 = 1.0;
  writer = (int *)0x0;
  if (shortest < 1) {
    shortest = 1;
  }
  if (100 < longest) {
    longest = 100;
  }
  if (longest < shortest) {
    longest = shortest;
  }
  if (progressTotal == 0) {
    local_41c = 0.0;
  }
  else {
    local_41c = 100.0 / (double)progressTotal;
  }
  n4 = (longest - shortest) + 1;
  first9 = 0;
  last4 = 0;
  unused320 = 0;
  local_3e0 = 0x2c;
  local_88 = (undefined4 *)0x0;
  unused316 = 0;
  unused317 = 1;
  local_ac[0] = 1;
  unused314 = 0;
  unused5 = 0;
  unused315 = 0;
  local_90 = (undefined4 *)0x0;
  local_94 = (undefined4 *)0x0;
  unused294 = 0;
  WordListMap::AllocateNode(local_ac);
  local_428 = local_90;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  *local_90 = 0;
  local_90[1] = 0;
  local_90[2] = local_90;
  local_90[3] = local_90;
  local_ac[0] = 0x2a;
  local_3e0 = 0x20;
  ehDtorCount = ehDtorCount + 2;
  local_90 = local_90 + 10;
  local_88 = local_428;
  std::vector_WordMap::vector(&vec11,n4,(int)local_ac);
  ehDtorCount = ehDtorCount + -2;
  if (local_88 != (undefined4 *)0x0) {
    unused293 = local_88;
    firstNode4 = local_88[2];
    tree5 = local_ac;
    WordMap2::erase_range(result2,(int)tree5,firstLo,firstHi,firstNode4);
    unused292 = local_88;
    local_88[3] = local_94;
    local_94 = local_88;
    __rwstd::__rb_tree::__deallocate_buffers_40fdb4((int)local_ac);
  }
  ehDtorCount = ehDtorCount + 1;
  local_40 = 0;
  local_3c = 0;
  unused319 = 0;
  local_3e0 = 0x8c;
  local_c0 = (undefined4 *)0x0;
  unused310 = 0;
  unused311 = 0;
  unused312 = local_43c;
  unused313 = local_438;
  local_e4[0] = 1;
  unused308 = 0;
  unused4 = 0;
  unused309 = 0;
  local_c8 = (undefined4 *)0x0;
  local_cc = (undefined4 *)0x0;
  unused291 = 0;
  WordListMap::AllocateNode_410330(local_e4);
  local_444 = local_c8;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  *local_c8 = 0;
  local_c8[1] = 0;
  local_c8[2] = local_c8;
  local_c8[3] = local_c8;
  local_e4[0] = 0x2a;
  local_3e0 = 0x80;
  ehDtorCount = ehDtorCount + 2;
  local_c8 = local_c8 + 10;
  local_c0 = local_444;
  std::vector_WordMap2::vector(&occurrenceListCache,100,(int)local_e4);
  ehDtorCount = ehDtorCount + -2;
  if (local_c0 != (undefined4 *)0x0) {
    unused290 = local_c0;
    firstNode3 = local_c0[2];
    tree5 = local_e4;
    WordMap::erase_range(result,(int)tree5,firstLo,firstHi,firstNode3);
    unused289 = local_c0;
    local_c0[3] = local_cc;
    local_cc = local_c0;
    __rwstd::__rb_tree::__deallocate_buffers((int)local_e4);
  }
  ehDtorCount = ehDtorCount + 2;
  local_3e0 = 0xb0;
  first8 = 0;
  last3 = 0;
  unused318 = 0;
  value7 = 0;
  std::vector_int::vector(&vec10,100000,&value7);
  ehDtorCount = ehDtorCount + 1;
  local_3e0 = 0x50;
  strncpy((undefined4 *)buffer6,description,(char *)0x3e7);
  unused3 = 0;
  local_c40 = &DAT_0048b950;
  local_c3c = (uint *)&g_huffmanCodeLengths;
  local_c38 = &g_huffmanCodes;
  iVar7 = 0;
  local_c34 = &DAT_0048bf54;
  do {
    *local_c34 = 0;
    *local_c38 = 0;
    *(undefined1 *)local_c3c = 0;
    *local_c40 = 0;
    iVar7 = iVar7 + 1;
    local_c40 = local_c40 + 1;
    local_c3c = (uint *)((int)local_c3c + 1);
    local_c38 = local_c38 + 1;
    local_c34 = local_c34 + 1;
  } while (iVar7 < 0x100);
  buffer14 = 0;
  local_3e0 = 0x50;
  iVar7 = 0;
  local_c44 = buffer;
  local_c34 = buffer2;
  local_c38 = buffer3;
  local_c3c = buffer4;
  local_c40 = (int *)(aDStackY_b290 + 1);
  do {
    *local_c40 = 0;
    *local_c3c = 0;
    *local_c38 = 0;
    *local_c34 = 0;
    local_c44[0] = 0;
    local_c44[1] = 0;
    local_c44[2] = 0;
    local_c44[3] = 0;
    iVar7 = iVar7 + 1;
    local_c44 = local_c44 + 4;
    local_c34 = local_c34 + 1;
    local_c38 = local_c38 + 1;
    local_c3c = local_c3c + 1;
    local_c40 = local_c40 + 1;
  } while (iVar7 < 0x65);
  (**(code **)(*self + 8))();
  value11 = 0;
  local_460 = 0;
  n3 = 0;
  local_468 = 0;
  local_46c = 0;
  unused288 = 0;
  unused286 = str13;
  unused287 = &g_emptyStringData;
  local_6c = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  local_3e0 = 0x50;
LAB_004090cb:
  iVar7 = (**(code **)(*self + 4))();
  if (iVar7 != 1) {
    if (iVar7 == 0) {
      (**(code **)(*self + 0x10))();
      uVar10 = 0;
      ehDtorCount = ehDtorCount + -1;
      if (local_6c != (undefined *)0x0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          strRep38 = (int *)(local_6c + -0xc);
          if (strRep38 == &g_nullStringRep) {
            iVar7 = 1;
          }
          else if (strRep38 == &g_nullStringRep) {
            iVar7 = 1;
          }
          else {
            *strRep38 = *strRep38 + -1;
            iVar7 = *strRep38 + 1;
          }
          if (iVar7 != 0) goto LAB_004076c3;
        }
        unused285 = local_6c + -0xc;
        unused284 = local_6c + -0xc;
        uVar10 = 0;
        operator_delete();
        unused283 = 0;
        local_6c = (undefined *)0x0;
        unused282 = str13;
        uStackY_1b8f4 = 0;
      }
LAB_004076c3:
      local_3e0 = 0x50;
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_ptr(&vec10,first8,last3);
      unused281 = first8;
      operator_delete();
      ehDtorCount = ehDtorCount + -2;
      OccurrenceListCache::_dtor((int)&occurrenceListCache,2);
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_WordMap2(&vec11,first9,last4);
      unused280 = first9;
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return uVar10;
    }
    uVar10 = value11 & 0x8000007f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffff80) + 1;
    }
    if ((uVar10 != 0) || (local_498 = GetTickCount(), local_498 - local_46c < 0x3e9))
    goto LAB_004079c6;
    local_3e0 = 0x104;
    std::string::string_from_cstr((int)str12,(uint *)"Calibrating dictionary - ");
    ehDtorCount = ehDtorCount + 1;
    local_3e0 = 0x11c;
    ParseMappingLine((int)mapping2,(char *)abStackY_1b8ec);
    other2 = mapping2;
    ehDtorCount = ehDtorCount + 1;
    std::string::append((int)str12,(int)other2);
    ehDtorCount = ehDtorCount + -1;
    if (str26 != 0) {
      if (*(int *)(str26 + -0xc) != -1) {
        strRep37 = (int *)(str26 + -0xc);
        if (strRep37 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else if (strRep37 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else {
          *strRep37 = *strRep37 + -1;
          iVar7 = *strRep37 + 1;
        }
        if (iVar7 != 0) goto LAB_004078b6;
      }
      unused279 = str26 + -0xc;
      unused278 = str26 + -0xc;
      operator_delete();
      unused277 = 0;
      unused276 = mapping2;
      str26 = 0;
      uStackY_1b904 = 0;
    }
LAB_004078b6:
    local_3e0 = 0x110;
    std::string::replace_fill((int)str12,*(uint *)(str27 + -4),0,1,10);
    (**(code **)(*self + 0xc))();
    local_46c = local_498;
    ehDtorCount = ehDtorCount + -1;
    if (str27 != 0) {
      if (*(int *)(str27 + -0xc) != -1) {
        strRep36 = (int *)(str27 + -0xc);
        if (strRep36 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else if (strRep36 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else {
          *strRep36 = *strRep36 + -1;
          iVar7 = *strRep36 + 1;
        }
        if (iVar7 != 0) goto LAB_004079c6;
      }
      unused275 = str27 + -0xc;
      unused274 = str27 + -0xc;
      operator_delete();
      unused273 = 0;
      unused272 = str12;
      str27 = 0;
      uStackY_1b914 = 0;
    }
LAB_004079c6:
    local_4d0 = n3;
    local_3e0 = 0x50;
    local_4d4 = 0xffffffff;
    std::string::assign_cstr((int)str13,(uint *)&DAT_00475208);
    pbVar3 = abStackY_1b8ec;
    do {
      local_3e0 = 0x50;
      pbVar8 = pbVar3;
      while( true ) {
        pbVar1 = (byte *)thunk_FUN_00467a3c((char *)pbVar8,&DAT_00475204);
        local_4d8 = pbVar1;
        if (((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x5c)) ||
           (local_4d8 = pbVar1 + 1, pbVar1[1] == 0)) break;
        pbVar8 = pbVar1 + 2;
      }
      if (((local_4d8 == (byte *)0x0) || (*local_4d8 == 0)) ||
         (0x7f6 < (int)local_4d8 - (int)pbVar8)) goto LAB_004090c5;
      local_4dc = auStackY_1c11c;
      local_3e0 = 0x50;
      local_4e0 = 0;
      for (; pbVar3 < local_4d8; pbVar3 = pbVar3 + 1) {
        bVar5 = *pbVar3;
        if ((bVar5 == 0x5c) && (pbVar3 + 1 < local_4d8)) {
          pbVar3 = pbVar3 + 1;
          bVar5 = *pbVar3;
        }
        else if (bVar5 == 0x2b) {
          pbVar3 = pbVar3 + 1;
          if ((pbVar3 < local_4d8) && (*pbVar3 != 0x2b)) {
            *(byte *)local_4dc = 10;
            local_4dc = (uint *)((int)local_4dc + 1);
          }
          goto joined_r0x00407ad5;
        }
        *(byte *)local_4dc = bVar5;
        local_4dc = (uint *)((int)local_4dc + 1);
        if (*(char *)(wordLists + (uint)bVar5) != '\0') {
          acStackY_1c91c[local_4e0] = *(char *)(wordLists + (uint)bVar5);
          local_4e0 = local_4e0 + 1;
        }
      }
LAB_00407b3d:
      acStackY_1c91c[local_4e0] = '\n';
      if ((shortest <= local_4e0) && (local_4e0 <= longest)) {
        n3 = n3 + 1;
        for (; (auStackY_1c11c < local_4dc && (*(byte *)((int)local_4dc + -1) == 0x20));
            local_4dc = (uint *)((int)local_4dc + -1)) {
        }
        *(byte *)local_4dc = 0;
        for (local_4dc = auStackY_1c11c; (char)*local_4dc == ' ';
            local_4dc = (uint *)((int)local_4dc + 1)) {
        }
        local_4e8 = local_4e0 - shortest;
        tree3 = (int *)(local_4e8 * 0x38 + first9);
        local_3e0 = 0x140;
        unused = local_4dc;
        iVar9 = std::string::string_from_cstr((int)str11,local_4dc);
        ehDtorCount = ehDtorCount + 1;
        unused271 = 0;
        local_124 = (uint *)0x0;
        local_3e0 = 0x14c;
        iVar7 = *(int *)(*(int *)(iVar9 + 8) + -0xc);
        if (iVar7 == -1 || iVar7 + 1 < 0) {
          len8 = *(uint *)(*(int *)(iVar9 + 8) + -4);
          newRep10 = std::string::__getRep(newStr5,len8,len8);
          unused268 = newStr5;
          puStackY_1c934 = (uint *)(newRep10 + 3);
          unused267 = len8;
          local_51c = *(uint **)(iVar9 + 8);
          unused266 = puStackY_1c934;
          unused269 = puStackY_1c934;
          local_124 = puStackY_1c934;
          unused = local_51c;
          memcpy(puStackY_1c934,local_51c,len8);
        }
        else {
          local_4fc = *(uint **)(iVar9 + 8);
          local_124 = local_4fc;
          unused270 = newStr5;
          puStackY_1c924 = local_4fc;
          strRep35 = local_4fc + -3;
          if (strRep35 != &g_nullStringRep) {
            *strRep35 = *strRep35 + 1;
          }
        }
        local_11c = value11;
        ehDtorCount = ehDtorCount + 4;
        unused265 = 0;
        local_13c = (uint *)0x0;
        local_3e0 = 0x164;
        if (local_124[-3] == 0xffffffff || (int)(local_124[-3] + 1) < 0) {
          len7 = local_124[-1];
          newRep9 = std::string::__getRep(newStr4,len7,len7);
          unused261 = newStr4;
          puStackY_1c954 = (uint *)(newRep9 + 3);
          unused260 = len7;
          unused259 = local_124;
          unused258 = puStackY_1c954;
          unused262 = puStackY_1c954;
          local_13c = puStackY_1c954;
          unused = local_124;
          memcpy(puStackY_1c954,local_124,len7);
        }
        else {
          unused264 = local_124;
          local_13c = local_124;
          unused263 = newStr4;
          puStackY_1c944 = local_124;
          strRep34 = local_124 + -3;
          if (strRep34 != &g_nullStringRep) {
            *strRep34 = *strRep34 + 1;
          }
        }
        value6 = newStr4;
        local_3e0 = 0x140;
        unused307 = local_11c;
        ehDtorCount = ehDtorCount + 2;
        iStackY_1c964 = tree3[9];
        unused257 = iStackY_1c964;
        WordMap::insert_hint(auStackY_1c97c,tree3,uStackY_1c96c,uStackY_1c968,iStackY_1c964,unused,
                     (int)value6);
        ehDtorCount = ehDtorCount + -2;
        if (local_13c != (uint *)0x0) {
          if (local_13c[-3] != 0xffffffff) {
            strRep33 = local_13c + -3;
            if (strRep33 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep33 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *strRep33 = *strRep33 - 1;
              iVar7 = *strRep33 + 1;
            }
            if (iVar7 != 0) goto LAB_00407fc1;
          }
          unused256 = local_13c + -3;
          unused255 = local_13c + -3;
          operator_delete();
          unused254 = 0;
          local_13c = (uint *)0x0;
          unused253 = newStr4;
          uStackY_1c984 = 0;
        }
LAB_00407fc1:
        local_3e0 = 0x50;
        ehDtorCount = ehDtorCount + -2;
        if (local_124 != (uint *)0x0) {
          if (local_124[-3] != 0xffffffff) {
            strRep32 = local_124 + -3;
            if (strRep32 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep32 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *strRep32 = *strRep32 - 1;
              iVar7 = *strRep32 + 1;
            }
            if (iVar7 != 0) goto LAB_0040808e;
          }
          unused252 = local_124 + -3;
          unused251 = local_124 + -3;
          operator_delete();
          unused250 = 0;
          local_124 = (uint *)0x0;
          unused249 = newStr5;
          uStackY_1c994 = 0;
        }
LAB_0040808e:
        ehDtorCount = ehDtorCount + -1;
        if (str25 != 0) {
          if (*(int *)(str25 + -0xc) != -1) {
            strRep31 = (int *)(str25 + -0xc);
            if (strRep31 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep31 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *strRep31 = *strRep31 + -1;
              iVar7 = *strRep31 + 1;
            }
            if (iVar7 != 0) goto LAB_00408152;
          }
          unused248 = str25 + -0xc;
          unused247 = str25 + -0xc;
          operator_delete();
          unused246 = 0;
          unused245 = str11;
          str25 = 0;
          uStackY_1c9a4 = 0;
        }
LAB_00408152:
        local_590 = local_4e0 + 1;
        firstLo = (undefined ***)0x408188;
        std::string::replace((int)str13,*(uint *)(local_6c + -4),0,(uint)acStackY_1c91c,local_590,0,
                     local_590);
        for (unused = local_4dc; (byte)*unused != 0; unused = (uint *)((int)unused + 1)) {
          (&DAT_0048b950)[(byte)*unused] = (&DAT_0048b950)[(byte)*unused] + 1;
        }
        DAT_0048b950 = DAT_0048b950 + 1;
      }
      if (*local_4d8 == 0x3b) {
        local_4d4 = n3;
      }
      if (*local_4d8 == 0x7c) goto code_r0x004081d0;
      pbVar3 = local_4d8 + 1;
    } while( true );
  }
  std::vector_MatchEngine_ptr::resize((int)&vec10,value11);
  iVar7 = BuildHuffmanCodes();
  iVar9 = 0;
  local_6f9 = iVar7 == 1;
  local_c44 = (byte *)aiStackY_1cfdc;
  local_3e0 = 0x50;
  do {
    local_c44[0] = 0;
    local_c44[1] = 0;
    local_c44[2] = 0;
    local_c44[3] = 0;
    iVar9 = iVar9 + 1;
    local_c44 = (byte *)((int)local_c44 + 4);
  } while (iVar9 < 0x100);
  local_c44 = (byte *)&DAT_0048b950;
  iVar7 = 0;
  do {
    if (*(char *)(wordLists + iVar7) != '\0') {
      aiStackY_1cfdc[*(byte *)(wordLists + iVar7)] =
           aiStackY_1cfdc[*(byte *)(wordLists + iVar7)] + *(int *)local_c44;
    }
    iVar7 = iVar7 + 1;
    local_c44 = (byte *)((int)local_c44 + 4);
  } while (iVar7 < 0x100);
  DAT_0048bd50 = 0;
  local_c44 = (byte *)aiStackY_1cfdc;
  local_c34 = (DWORD *)&DAT_0048bd54;
  uVar10 = 0;
  do {
    if (((*(char *)(wordLists + uVar10) == '\0') || (uVar10 != *(byte *)(wordLists + uVar10))) ||
       (*(int *)local_c44 == 0)) {
      *(short *)local_c34 = -1;
    }
    else {
      *(short *)local_c34 = DAT_0048bd50;
      DAT_0048bd50 = DAT_0048bd50 + 1;
    }
    uVar10 = uVar10 + 1;
    local_c34 = (DWORD *)((int)local_c34 + 2);
    local_c44 = (byte *)((int)local_c44 + 4);
  } while ((int)uVar10 < 0x100);
  local_c34 = (DWORD *)aiStackY_1cfdc;
  DAT_0048bd52 = DAT_0048bd50;
  uVar10 = 0;
  local_c44 = (byte *)&DAT_0048bd54;
  do {
    if (((*(char *)(wordLists + uVar10) != '\0') && (uVar10 == *(byte *)(wordLists + uVar10))) &&
       (*local_c34 == 0)) {
      *(short *)local_c44 = DAT_0048bd52;
      DAT_0048bd52 = DAT_0048bd52 + 1;
    }
    uVar10 = uVar10 + 1;
    local_c44 = (byte *)((int)local_c44 + 2);
    local_c34 = local_c34 + 1;
  } while ((int)uVar10 < 0x100);
  local_c44 = (byte *)&DAT_0048bd54;
  uVar10 = 0;
  do {
    if ((*(char *)(wordLists + uVar10) != '\0') && (uVar10 != *(byte *)(wordLists + uVar10))) {
      *(undefined2 *)local_c44 = (&DAT_0048bd54)[*(byte *)(wordLists + uVar10)];
    }
    uVar10 = uVar10 + 1;
    local_c44 = (byte *)((int)local_c44 + 2);
  } while ((int)uVar10 < 0x100);
  local_c34 = (DWORD *)&DAT_0048bd54;
  local_c44 = local_d60;
  iVar7 = 0;
  do {
    *local_c44 = 0;
    local_700 = (int)(short)*local_c34;
    if (-1 < local_700) {
      local_704 = -1;
      local_3e0 = 0x50;
      local_708 = -1;
      local_3f4 = 0;
      do {
        if (((short)(&DAT_0048bd54)[local_3f4] == local_700) &&
           (local_708 < (&DAT_0048b950)[local_3f4])) {
          local_704 = local_3f4;
          local_708 = (&DAT_0048b950)[local_3f4];
        }
        local_3f4 = local_3f4 + 1;
      } while (local_3f4 < 0x100);
      *local_c44 = (byte)local_704;
    }
    local_c34 = (DWORD *)((int)local_c34 + 2);
    local_c44 = local_c44 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  local_c34 = local_acc4;
  g_writeFailed = 1;
  iVar7 = 0;
  do {
    local_3f4 = 0;
    unused8 = local_c34;
    do {
      local_c34[local_3f4] = 0;
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  iVar7 = 0;
  local_c34 = local_acc4;
  do {
    local_3f4 = 0;
    local_c4c = local_c34;
    do {
      uVar10 = operator_new_array();
      local_c4c[local_3f4] = uVar10;
      if (local_c4c[local_3f4] == 0) {
        (**(code **)(*self + 0x10))();
        local_3e0 = 0x50;
        goto LAB_0040d937;
      }
      local_3e0 = 0x50;
      unused7 = local_c4c;
      for (m = 0; m < DAT_0048bd50; m = m + 1) {
        *(undefined4 *)(local_c4c[local_3f4] + m * 4) = 0;
      }
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  if (local_6f9 == false) {
    (**(code **)(*self + 0xc))();
  }
  else {
    (**(code **)(*self + 0xc))();
  }
  for (local_710 = first9; local_3e0 = 0x50, local_710 != last4; local_710 = local_710 + 0x38)
  {
    unused198 = local_710;
    local_718 = ((shortest * 0x38 + local_710) - first9) / 0x38;
    iVar7 = local_718;
    if ((*(int *)(local_710 + 0x28) != 0) && ((int)(uint)buffer14 < local_718 + 1)) {
      buffer14 = (short)local_718 + 1;
    }
    local_71c = local_acc4 + local_718 * 0x65;
    local_720 = 0;
    unused197 = 0;
    unused196 = &g_emptyStringData;
    local_1d8 = &g_emptyStringData;
    unused195 = str9;
    puStackY_1cfe4 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    local_3e0 = 0x308;
    iStackY_1d004 = *(int *)(local_710 + 0x24);
    unused194 = iStackY_1d004;
    iStackY_1d014 = *(int *)(*(int *)(local_710 + 0x24) + 8);
    unused193 = iStackY_1d014;
    iStackY_1cff4 = iStackY_1d004;
    local_718 = iVar7;
    while (iStackY_1d014 != iStackY_1cff4) {
      local_468 = local_468 + 1;
      iVar7 = (**(code **)(*self + 4))();
      if (iVar7 == 0) {
        (**(code **)(*self + 0x10))();
        ehDtorCount = ehDtorCount + -1;
        if (local_1d8 != (byte *)0x0) {
          if (*(int *)(local_1d8 + -0xc) != -1) {
            strRep23 = local_1d8 + -0xc;
            if (strRep23 == (byte *)&g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep23 == (byte *)&g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *(int *)strRep23 = *(int *)strRep23 + -1;
              iVar7 = *(int *)strRep23 + 1;
            }
            if (iVar7 != 0) goto LAB_00409776;
          }
          unused192 = local_1d8 + -0xc;
          unused191 = local_1d8 + -0xc;
          operator_delete();
          unused190 = 0;
          unused189 = str9;
          local_1d8 = (byte *)0x0;
          uStackY_5d054 = 0;
        }
LAB_00409776:
        local_3e0 = 0x50;
        goto LAB_0040d937;
      }
      str3 = iStackY_1d014 + 0x10;
      local_3e0 = 0x308;
      local_738 = str3;
      uVar10 = std::string::compare(str3,0,*(uint *)(*(int *)(iStackY_1d014 + 0x18) + -4),local_1d8,
                            *(uint *)(local_1d8 + -4));
      if (uVar10 != 0) {
        std::string::operator_assign((int)str9,local_738);
        local_740 = aiStackY_5d04c;
        for (k = *(byte **)(local_738 + 8); *k != 0; k = k + 1) {
          local_748 = (int)(short)(&DAT_0048bd54)[*k];
          local_3e0 = 0x308;
          if (-1 < local_748) {
            *local_740 = local_748;
            local_740 = local_740 + 1;
          }
        }
        iVar7 = 0;
        local_c54 = aiStackY_5d04c;
        if (0 < local_718) {
          do {
            unused = local_71c + iVar7;
            iVar7 = iVar7 + 1;
            tree = (int *)(*unused + *local_c54 * 4);
            *tree = *tree + 1;
            (&DAT_0048bf54)[*local_c54] = (&DAT_0048bf54)[*local_c54] + 1;
            local_c54 = local_c54 + 1;
          } while (iVar7 < local_718);
        }
        local_720 = local_720 + 1;
      }
      __rwstd::__rb_tree::iterator::increment_411e60((int)auStackY_1d01c);
    }
    buffer4[local_718] = local_720;
    ehDtorCount = ehDtorCount + -1;
    if (local_1d8 != (byte *)0x0) {
      if (*(int *)(local_1d8 + -0xc) != -1) {
        strRep22 = local_1d8 + -0xc;
        if (strRep22 == (byte *)&g_nullStringRep) {
          iVar7 = 1;
        }
        else if (strRep22 == (byte *)&g_nullStringRep) {
          iVar7 = 1;
        }
        else {
          *(int *)strRep22 = *(int *)strRep22 + -1;
          iVar7 = *(int *)strRep22 + 1;
        }
        if (iVar7 != 0) goto LAB_004099fe;
      }
      unused188 = local_1d8 + -0xc;
      unused187 = local_1d8 + -0xc;
      operator_delete();
      unused186 = 0;
      local_1d8 = (byte *)0x0;
      unused185 = str9;
      uStackY_5d064 = 0;
    }
LAB_004099fe:
  }
  (**(code **)(*self + 0xc))();
  if (0 < DAT_0048bd50) {
    local_400 = 0.0;
    local_c34 = &DAT_0048bf54;
    for (iVar7 = 0; iVar7 < DAT_0048bd50; iVar7 = iVar7 + 1) {
      local_400 = (double)*local_c34 + local_400;
      local_c34 = local_c34 + 1;
    }
    local_400 = local_400 / (double)(int)DAT_0048bd50;
    local_c34 = &DAT_0048bf54;
    for (iVar7 = 0; iVar7 < DAT_0048bd50; iVar7 = iVar7 + 1) {
      local_408 = ((double)*local_c34 / local_400) * local_408;
      local_c34 = local_c34 + 1;
    }
    FUN_0046e1f4(local_408,SUB84((double)(1.0 / (float)(int)DAT_0048bd50),0),
                 (uint)((ulonglong)(double)(1.0 / (float)(int)DAT_0048bd50) >> 0x20));
    local_408 = local_400 * (double)in_ST0;
    local_400 = local_400 * 1.4142135623730951;
  }
  writer = fopen(fileName,&DAT_00475319);
  if (writer == (int *)0x0) {
    (**(code **)(*self + 0x10))();
    local_3e0 = 0x50;
  }
  else {
    g_writeFailed = 0;
    uVar10 = FUN_00469c98(&DAT_0047520a /* "    \{}" */,1,4,writer);
    if ((uVar10 != 4) || (uVar10 = FUN_00469c98((byte *)&buffer14,2,1,writer), uVar10 != 1)) {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98(buffer5,4,3,writer);
    if (uVar10 != 3) {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98((byte *)buffer3,4,(uint)buffer14,writer);
    if (((uVar10 != buffer14) ||
        (uVar10 = FUN_00469c98((byte *)buffer2,4,(uint)buffer14,writer), uVar10 != buffer14)
        ) || (uVar10 = FUN_00469c98(buffer,4,(uint)buffer14,writer), uVar10 != buffer14)) {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98((byte *)(aDStackY_b290 + 1),4,(uint)buffer14,writer);
    if ((uVar10 != buffer14) ||
       (uVar10 = FUN_00469c98((byte *)buffer4,4,(uint)buffer14,writer), uVar10 != buffer14))
    {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98(buffer6,1,1000,writer);
    if (uVar10 != 1000) {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98((byte *)&DAT_0048bd50,2,1,writer);
    if (uVar10 != 1) {
      g_writeFailed = 1;
    }
    uVar10 = FUN_00469c98((byte *)&DAT_0048bd52,2,1,writer);
    if (uVar10 != 1) {
      g_writeFailed = 1;
    }
    iVar7 = 0;
    do {
      uVar10 = FUN_00469c98((byte *)(wordLists + iVar7),1,1,writer);
      if (uVar10 != 1) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98(&g_huffmanCodeLengths + iVar7,1,1,writer);
      if (uVar10 != 1) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98((byte *)(&DAT_0048bd54 + iVar7),2,1,writer);
      if (uVar10 != 1) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98((byte *)(&g_huffmanCodes + iVar7),4,1,writer);
      if (uVar10 != 1) {
        g_writeFailed = 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    buffer13 = 0;
    local_772 = 1;
    local_3e0 = 0x50;
    if (1 < buffer14) {
      do {
        buffer13 = buffer13 + local_772;
        local_772 = local_772 + 1;
      } while (local_772 < buffer14);
    }
    uVar10 = FUN_00469c98((byte *)&buffer13,2,1,writer);
    if (uVar10 != 1) {
      g_writeFailed = 1;
    }
    local_c34 = newStr;
    for (iVar7 = 1; iVar7 < (int)(uint)buffer14; iVar7 = iVar7 + 1) {
      local_3f4 = 0;
      local_c5c = local_c34;
      if (0 < iVar7) {
        do {
          total = 0;
          range = 0;
          for (i2 = 0; i2 < DAT_0048bd50; i2 = i2 + 1) {
            if (*(int *)(local_c5c[local_3f4] + i2 * 4) != 0) {
              total = total + *(int *)(local_c5c[local_3f4] + i2 * 4);
              range = range + 1;
            }
          }
          local_c58 = local_c5c;
          for (i2 = 0; i2 < DAT_0048bd50; i2 = i2 + 1) {
            firstHi2 = ScaleFrequency(*(uint *)(local_c58[local_3f4] + i2 * 4),total,
                                  range);
            buffer12 = (byte)firstHi2;
            local_3e0 = 0x50;
            uVar10 = FUN_00469c98(&buffer12,1,1,writer);
            if (uVar10 != 1) {
              g_writeFailed = 1;
            }
          }
          local_3f4 = local_3f4 + 1;
        } while (local_3f4 < iVar7);
      }
      local_c34 = local_c34 + 0x65;
    }
    local_778 = 1;
    do {
      DVar2 = FUN_00469b44(writer);
      (&DStackY_b0fc)[local_778] = DVar2;
      (**(code **)(*self + 8))();
      local_3e0 = 0x338;
      local_1f4 = (undefined4 *)0x0;
      local_1f0 = 0;
      unused302 = 0;
      unused303 = local_780;
      unused304 = local_77c;
      tree4[0] = 1;
      unused300 = 0;
      uStackY_5d074 = 0;
      unused301 = 0;
      local_1fc = (undefined4 *)0x0;
      local_200 = (undefined4 *)0x0;
      unused184 = 0;
      WordListMap::AllocateNode_411ec4(tree4);
      local_788 = local_1fc;
      local_1fc = local_1fc + 10;
      local_788[1] = 0;
      local_788[2] = 0;
      local_788[3] = 0;
      *local_788 = 0;
      local_1f4 = local_788;
      local_788[1] = 0;
      local_788[2] = local_788;
      local_788[3] = local_788;
      tree4[0] = 0x2a;
      ehDtorCount = ehDtorCount + 2;
      local_3e0 = 0x350;
LAB_0040beef:
      firstHi2 = 0x40bf14;
      iVar7 = (**(code **)(*self + 4))();
      if ((iVar7 != 1) && (g_writeFailed == 0)) {
        if (iVar7 == 0) {
          (**(code **)(*self + 0x10))();
          uVar10 = 0;
          uVar20 = 0;
          ehDtorCount = ehDtorCount + -2;
          if (local_1f4 != (undefined4 *)0x0) {
            unused183 = local_1f4;
            firstNode2 = local_1f4[2];
            WordMap3::erase_range(auStackY_5d08c,(int)tree4,tree5,firstLo,firstNode2
                        );
            unused182 = local_1f4;
            local_1f4[3] = local_200;
            local_200 = local_1f4;
            uVar10 = uVar20;
            __rwstd::__rb_tree::__deallocate_buffers_41221c((int)tree4);
          }
          local_3e0 = 0x350;
          ehDtorCount = ehDtorCount + -1;
          if (local_6c != (undefined *)0x0) {
            if (*(int *)(local_6c + -0xc) != -1) {
              strRep21 = (int *)(local_6c + -0xc);
              if (strRep21 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else if (strRep21 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else {
                *strRep21 = *strRep21 + -1;
                iVar7 = *strRep21 + 1;
              }
              if (iVar7 != 0) goto LAB_0040a30c;
            }
            unused181 = local_6c + -0xc;
            unused180 = local_6c + -0xc;
            operator_delete();
            unused179 = 0;
            local_6c = (undefined *)0x0;
            unused178 = str13;
            uStackY_5d094 = 0;
          }
LAB_0040a30c:
          ehDtorCount = ehDtorCount + -1;
          std::_Destroy_range_ptr(&vec10,first8,last3);
          unused177 = first8;
          operator_delete();
          ehDtorCount = ehDtorCount + -2;
          OccurrenceListCache::_dtor((int)&occurrenceListCache,2);
          ehDtorCount = ehDtorCount + -1;
          std::_Destroy_range_WordMap2(&vec11,first9,last4);
          unused176 = first9;
          operator_delete();
          *sehChainHead = sehPrevFrame;
          return uVar10;
        }
        uVar10 = local_460 & 0x8000007f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffff80) + 1;
        }
        if (uVar10 == 0) {
          tickCount = GetTickCount();
          local_3e0 = 0x350;
          if (1000 < tickCount - local_46c) {
            local_3e0 = 0x38c;
            std::string::string_from_cstr((int)str8,(uint *)"Definition output pass ");
            ehDtorCount = ehDtorCount + 1;
            local_3e0 = 0x398;
            ch = (char)local_778 + '0';
            std::string::replace_fill((int)str8,*(uint *)(str21 + -4),0,1,ch);
            pos = *(uint *)(str21 + -4);
            len = strlen((uint *)("Calibrating dictionary - " + 0x16));
            firstLo = (undefined ***)0x40a470;
            std::string::replace((int)str8,pos,0,0x475247,(uint)len,0,(uint)len);
            local_3e0 = 0x3a4;
            ParseMappingLine((int)mapping,(char *)abStackY_1b8ec);
            other = mapping;
            ehDtorCount = ehDtorCount + 1;
            std::string::append((int)str8,(int)other);
            ehDtorCount = ehDtorCount + -1;
            if (str20 != 0) {
              if (*(int *)(str20 + -0xc) != -1) {
                strRep20 = (int *)(str20 + -0xc);
                if (strRep20 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else if (strRep20 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else {
                  *strRep20 = *strRep20 + -1;
                  iVar7 = *strRep20 + 1;
                }
                if (iVar7 != 0) goto LAB_0040a578;
              }
              unused175 = str20 + -0xc;
              unused174 = str20 + -0xc;
              operator_delete();
              unused173 = 0;
              unused172 = mapping;
              str20 = 0;
              uStackY_5d0a4 = 0;
            }
LAB_0040a578:
            local_3e0 = 0x398;
            std::string::replace_fill((int)str8,*(uint *)(str21 + -4),0,1,10);
            (**(code **)(*self + 0xc))();
            local_46c = tickCount;
            ehDtorCount = ehDtorCount + -1;
            if (str21 != 0) {
              if (*(int *)(str21 + -0xc) != -1) {
                strRep19 = (int *)(str21 + -0xc);
                if (strRep19 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else if (strRep19 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else {
                  *strRep19 = *strRep19 + -1;
                  iVar7 = *strRep19 + 1;
                }
                if (iVar7 != 0) goto LAB_0040a682;
              }
              unused171 = str21 + -0xc;
              unused170 = str21 + -0xc;
              operator_delete();
              unused169 = 0;
              str21 = 0;
              unused168 = str8;
              uStackY_5d0b4 = 0;
            }
LAB_0040a682:
            local_3e0 = 0x350;
          }
        }
        unused167 = local_460;
        if (*(int *)(local_460 * 4 + first8) == local_778) {
          local_7fc = (uint)(local_778 == 2);
          first7 = 0;
          local_250 = 0;
          local_240 = 0;
          unused166 = 0x40;
          unused165 = 1;
          vec8 = 0x40;
          first6 = 0;
          local_270 = 0;
          local_260 = 0;
          unused164 = 0x40;
          unused163 = 1;
          vec7 = 0x40;
          ehDtorCount = ehDtorCount + 2;
          local_814 = abStackY_1b8ec;
          do {
            local_818 = local_814;
            local_3e0 = 0x3e0;
            while( true ) {
              pbVar3 = (byte *)thunk_FUN_00467a3c((char *)local_814,&DAT_00475204);
              local_810 = pbVar3;
              if (((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x5c)) ||
                 (local_810 = pbVar3 + 1, pbVar3[1] == 0)) break;
              local_814 = pbVar3 + 2;
            }
            if ((local_810 == (byte *)0x0) || (*local_810 == 0)) goto LAB_0040be6b;
            if (local_7fc != 0) {
              unused162 = 0;
              unused161 = &g_emptyStringData;
              local_280 = &g_emptyStringData;
              unused160 = str7;
              puStackY_5d0c4 = &g_emptyStringData;
              ehDtorCount = ehDtorCount + 1;
              local_3e0 = 0x41c;
              local_828 = 0;
              local_82c = 0xffffffff;
              local_814 = local_818;
              if (local_818 < local_810) {
                do {
                  pbVar3 = local_814;
                  local_814 = local_814 + 1;
                  local_82d = *pbVar3;
                  if (local_82d == 0x2b) {
                    if (local_828 == 0) {
                      local_82c = *(uint *)(local_280 + -4);
                    }
                    local_828 = local_828 + 1;
                  }
                  else if (local_828 != 1) {
                    if ((local_82d == 0x5c) && (local_814 < local_810)) {
                      local_82d = *local_814;
                      local_814 = pbVar3 + 2;
                    }
                    unused159 = local_82d;
                    std::string::replace_fill((int)str7,*(uint *)(local_280 + -4),0,1,local_82d);
                  }
                } while (local_814 < local_810);
              }
              if (local_828 == 0) {
                local_82c = *(uint *)(local_280 + -4);
              }
              if (*(int *)(local_280 + -4) != 0) {
                local_3e0 = 0x428;
                std::string::substr((int)local_298,(int)str7,0,local_82c);
                ehDtorCount = ehDtorCount + 1;
                local_834 = local_298;
                if (local_250 == local_240) {
                  std::vector_string::insert_aux((int)&vec8,local_250,(int)local_298);
                }
                else {
                  unused158 = local_250;
                  local_29c = local_250;
                  if (local_250 != 0) {
                    local_3e0 = 0x434;
                    unused157 = 0;
                    *(undefined4 *)(local_250 + 8) = 0;
                    if (*(int *)(str19 + -0xc) == -1 || *(int *)(str19 + -0xc) + 1 < 0) {
                      local_84c = *(uint *)(str19 + -4);
                      newRep6 = std::string::__getRep(local_250,local_84c,local_84c);
                      newData2 = newRep6 + 3;
                      *(int **)(local_29c + 8) = newData2;
                      unused154 = local_29c;
                      uStackY_5d0e4 = *(undefined4 *)(local_29c + 8);
                      unused153 = local_84c;
                      src3 = *(undefined4 **)(local_834 + 8);
                      dest2 = *(undefined4 **)(local_29c + 8);
                      memcpy(dest2,src3,local_84c);
                    }
                    else {
                      unused156 = str19;
                      *(int *)(local_250 + 8) = str19;
                      unused155 = local_250;
                      uStackY_5d0d4 = *(undefined4 *)(local_250 + 8);
                      strRep18 = (int *)(*(int *)(local_250 + 8) + -0xc);
                      if (strRep18 != &g_nullStringRep) {
                        *strRep18 = *strRep18 + 1;
                      }
                    }
                    local_3e0 = 0x428;
                  }
                  local_250 = local_250 + 0x10;
                }
                ehDtorCount = ehDtorCount + -1;
                if (str19 != 0) {
                  if (*(int *)(str19 + -0xc) != -1) {
                    strRep17 = (int *)(str19 + -0xc);
                    if (strRep17 == &g_nullStringRep) {
                      iVar7 = 1;
                    }
                    else if (strRep17 == &g_nullStringRep) {
                      iVar7 = 1;
                    }
                    else {
                      *strRep17 = *strRep17 + -1;
                      iVar7 = *strRep17 + 1;
                    }
                    if (iVar7 != 0) goto LAB_0040ac25;
                  }
                  unused152 = str19 + -0xc;
                  unused151 = str19 + -0xc;
                  operator_delete();
                  unused150 = 0;
                  unused149 = local_298;
                  str19 = 0;
                  uStackY_5d0f4 = 0;
                }
LAB_0040ac25:
                local_3e0 = 0x458;
                std::string::substr((int)local_2ac,(int)str7,local_82c,(*(uint *)&g_stringNpos));
                ehDtorCount = ehDtorCount + 1;
                local_87c = local_2ac;
                if (local_270 == local_260) {
                  std::vector_string::insert_aux((int)&vec7,local_270,(int)local_2ac);
                }
                else {
                  unused148 = local_270;
                  local_2b0 = local_270;
                  if (local_270 != 0) {
                    local_3e0 = 0x464;
                    unused147 = 0;
                    *(undefined4 *)(local_270 + 8) = 0;
                    if (*(int *)(str18 + -0xc) == -1 || *(int *)(str18 + -0xc) + 1 < 0) {
                      local_894 = *(uint *)(str18 + -4);
                      newRep5 = std::string::__getRep(local_270,local_894,local_894);
                      newData = newRep5 + 3;
                      *(int **)(local_2b0 + 8) = newData;
                      unused144 = local_2b0;
                      uStackY_5d114 = *(undefined4 *)(local_2b0 + 8);
                      unused143 = local_894;
                      src2 = *(undefined4 **)(local_87c + 8);
                      dest = *(undefined4 **)(local_2b0 + 8);
                      memcpy(dest,src2,local_894);
                    }
                    else {
                      unused146 = str18;
                      *(int *)(local_270 + 8) = str18;
                      unused145 = local_270;
                      uStackY_5d104 = *(undefined4 *)(local_270 + 8);
                      strRep16 = (int *)(*(int *)(local_270 + 8) + -0xc);
                      if (strRep16 != &g_nullStringRep) {
                        *strRep16 = *strRep16 + 1;
                      }
                    }
                    local_3e0 = 0x458;
                  }
                  local_270 = local_270 + 0x10;
                }
                ehDtorCount = ehDtorCount + -1;
                if (str18 != 0) {
                  if (*(int *)(str18 + -0xc) != -1) {
                    strRep15 = (int *)(str18 + -0xc);
                    if (strRep15 == &g_nullStringRep) {
                      iVar7 = 1;
                    }
                    else if (strRep15 == &g_nullStringRep) {
                      iVar7 = 1;
                    }
                    else {
                      *strRep15 = *strRep15 + -1;
                      iVar7 = *strRep15 + 1;
                    }
                    if (iVar7 != 0) goto LAB_0040aed1;
                  }
                  unused142 = str18 + -0xc;
                  unused141 = str18 + -0xc;
                  operator_delete();
                  unused140 = 0;
                  str18 = 0;
                  unused139 = local_2ac;
                  uStackY_5d124 = 0;
                }
LAB_0040aed1:
                local_3e0 = 0x41c;
              }
              ehDtorCount = ehDtorCount + -1;
              if (local_280 != (undefined *)0x0) {
                if (*(int *)(local_280 + -0xc) != -1) {
                  strRep14 = (int *)(local_280 + -0xc);
                  if (strRep14 == &g_nullStringRep) {
                    iVar7 = 1;
                  }
                  else if (strRep14 == &g_nullStringRep) {
                    iVar7 = 1;
                  }
                  else {
                    *strRep14 = *strRep14 + -1;
                    iVar7 = *strRep14 + 1;
                  }
                  if (iVar7 != 0) goto LAB_0040afa7;
                }
                unused138 = local_280 + -0xc;
                unused137 = local_280 + -0xc;
                operator_delete();
                unused136 = 0;
                unused135 = str7;
                local_280 = (undefined *)0x0;
                uStackY_5d134 = 0;
              }
            }
LAB_0040afa7:
            if (*local_810 == 0x3b) {
              local_7fc = 0;
            }
            else if (*local_810 == 0x7c) goto code_r0x0040afce;
            local_814 = local_810 + 1;
          } while( true );
        }
        goto LAB_0040bee9;
      }
      local_460 = 0;
      ehDtorCount = ehDtorCount + -2;
      if (local_1f4 != (undefined4 *)0x0) {
        unused79 = local_1f4;
        firstNode = local_1f4[2];
        tree5 = tree4;
        WordMap3::erase_range(auStackY_5d484,(int)tree5,firstLo,firstHi2,firstNode);
        unused78 = local_1f4;
        local_1f4[3] = local_200;
        local_200 = local_1f4;
        __rwstd::__rb_tree::__deallocate_buffers_41221c((int)tree4);
      }
      local_3e0 = 0x50;
      local_778 = local_778 + 1;
    } while (local_778 < 3);
    unused2 = FUN_00469b44(writer);
    ReverseHuffmanCodes();
    local_a48 = first9;
    while ((local_a48 != last4 && (g_writeFailed == 0))) {
      local_a4c = local_a48;
      local_a50 = ((shortest * 0x38 + local_a48) - first9) / 0x38;
      if ((int)(uint)buffer14 <= local_a50) break;
      n3 = buffer4[local_a50];
      if (0 < (int)n3) {
        first5 = (undefined4 *)0x0;
        last5 = (undefined4 *)0x0;
        local_330 = (undefined4 *)0x0;
        unused77 = 0x40;
        unused76 = 1;
        vec6 = 0x40;
        ehDtorCount = ehDtorCount + 1;
        local_3e0 = 0x5a8;
        std::vector_16::reserve((int)&vec6,n3);
        iStackY_5d49c = *(int *)(*(int *)(local_a4c + 0x24) + 8);
        iStackY_5d48c = iStackY_5d49c;
        unused75 = iStackY_5d49c;
LAB_0040c29d:
        iStackY_5d4bc = *(int *)(local_a4c + 0x24);
        iStackY_5d4ac = iStackY_5d4bc;
        unused74 = iStackY_5d4bc;
        if (iStackY_5d4bc != iStackY_5d48c) {
          str2 = iStackY_5d48c + 0x10;
          local_3e0 = 0x5a8;
          if (last5 == local_330) {
            std::vector_16::insert_aux((int)&vec6,last5,&uStackY_5d494);
          }
          else {
            unused73 = last5;
            unused295 = last5;
            if (last5 != (undefined4 *)0x0) {
              *last5 = uStackY_5d494;
              last5[1] = uStackY_5d490;
              last5[2] = iStackY_5d48c;
              local_3e0 = 0x5b4;
            }
            last5 = last5 + 4;
          }
          do {
            uStackY_5d4d4 = uStackY_5d494;
            uStackY_5d4d0 = uStackY_5d490;
            iStackY_5d4cc = iStackY_5d48c;
            __rwstd::__rb_tree::iterator::increment_411e60((int)&uStackY_5d494);
            uStackY_5d4e4 = uStackY_5d4d4;
            uStackY_5d4e0 = uStackY_5d4d0;
            iStackY_5d4dc = iStackY_5d4cc;
            iStackY_5d4fc = *(int *)(local_a4c + 0x24);
            iStackY_5d4ec = iStackY_5d4fc;
            unused72 = iStackY_5d4fc;
            if (iStackY_5d4fc == iStackY_5d48c) break;
            unused71 = iStackY_5d48c + 0x10;
            unused70 = str2;
            uVar10 = std::string::compare(str2,0,*(uint *)(*(int *)(str2 + 8) + -4),
                                  *(byte **)(iStackY_5d48c + 0x18),
                                  *(uint *)(*(int *)(iStackY_5d48c + 0x18) + -4));
          } while (uVar10 == 0);
          goto LAB_0040c29d;
        }
        if (options == 0) {
          last = last5;
          first = first5;
          if (first5 != last5) {
            std::__introsort_loop(first5,last5,0,(undefined*)DefinitionRecordLess);
            std::__final_insertion_sort(first,last,(undefined*)DefinitionRecordLess);
          }
        }
        local_3e0 = 0x5cc;
        n2 = (int)last5 - (int)first5;
        if (n2 < 0) {
          n2 = n2 + 0xf;
        }
        n2 = n2 >> 4;
        first4 = (int *)0x0;
        last2 = 0;
        unused296 = 0;
        value5 = 0;
        std::vector_int::vector(&vec9,n2,&value5);
        ehDtorCount = ehDtorCount + 1;
        local_a88 = 0;
        while( true ) {
          iVar7 = (int)last5 - (int)first5;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0xf;
          }
          if ((uint)(iVar7 >> 4) <= local_a88) break;
          local_a8c = 0;
          if (local_a50 <= (local_3c - local_40) / 0x38) {
            unused69 = local_a50 + -1;
            tree2 = (local_a50 + -1) * 0x38 + local_40;
            if (*(int *)(tree2 + 0x28) != 0) {
              unused67 = local_a88;
              unused68 = first5[local_a88 * 4 + 2] + 0x10;
              unused66 = 0;
              unused65 = &g_emptyStringData;
              local_3b4 = &g_emptyStringData;
              unused64 = key;
              puStackY_5d50c = &g_emptyStringData;
              ehDtorCount = ehDtorCount + 1;
              local_3e0 = 0x5fc;
              for (j = *(byte **)(first5[local_a88 * 4 + 2] + 0x18); *j != 0;
                  j = j + 1) {
                local_aad = *(char *)(wordLists + (uint)*j);
                if ((local_aad != '\0') && (*(int *)(local_3b4 + -4) < local_a50)) {
                  unused63 = local_aad;
                  std::string::replace_fill((int)key,*(uint *)(local_3b4 + -4),0,1,local_aad);
                }
              }
              local_3e0 = 0x5fc;
              iStackY_5d52c = *(int *)(tree2 + 0x24);
              unused62 = iStackY_5d52c;
              WordMap2::lower_bound(auStackY_5d544,tree2,(int)key);
              puVar6 = auStackY_5d544;
              puVar12 = &uStackY_5d524;
              for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar12 = *puVar6;
                puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
              }
              if (iStackY_5d51c != iStackY_5d52c) {
                vec2 = *(int *)(iStackY_5d51c + 0x20);
                if (vec2 == 0) {
                  local_a8c = 0x7fffffff;
                }
                else {
                  local_a8c = FUN_00469b44(writer);
                  local_abc = *(uint **)(vec2 + 4);
                  while ((local_abc < *(uint **)(vec2 + 8) && (g_writeFailed == 0))) {
                    uVar10 = *local_abc;
                    local_abc = local_abc + 1;
                    iVar7 = last3 - first8;
                    if (iVar7 < 0) {
                      iVar7 = iVar7 + 3;
                    }
                    buffer10 = uVar10;
                    if (((int)uVar10 < iVar7 >> 2) &&
                       (buffer10 = *(uint *)(uVar10 * 4 + first8), local_ac4 = uVar10,
                       2 < (int)buffer10)) {
                      if (*(uint **)(vec2 + 8) == local_abc) {
                        buffer10 = buffer10 | 0x80000000;
                      }
                      uVar10 = FUN_00469c98((byte *)&buffer10,4,1,writer);
                      if (uVar10 != 1) {
                        g_writeFailed = 1;
                      }
                    }
                  }
                }
                if (vec2 != 0) {
                  std::_Destroy_range_ptr(vec2,*(int *)(vec2 + 4),*(int *)(vec2 + 8));
                  unused61 = *(undefined4 *)(vec2 + 4);
                  operator_delete();
                  operator_delete();
                }
                uStackY_5d554 = uStackY_5d524;
                uStackY_5d550 = uStackY_5d520;
                iStackY_5d54c = iStackY_5d51c;
                WordMap::erase(auStackY_5d564,tree2,uStackY_5d524,uStackY_5d520,iStackY_5d51c);
              }
              if (local_3b4 != (undefined *)0x0) {
                if (*(int *)(local_3b4 + -0xc) != -1) {
                  strRep3 = (int *)(local_3b4 + -0xc);
                  if (strRep3 == &g_nullStringRep) {
                    iVar7 = 1;
                  }
                  else if (strRep3 == &g_nullStringRep) {
                    iVar7 = 1;
                  }
                  else {
                    *strRep3 = *strRep3 + -1;
                    iVar7 = *strRep3 + 1;
                  }
                  if (iVar7 != 0) goto LAB_0040c810;
                }
                unused60 = local_3b4 + -0xc;
                unused59 = local_3b4 + -0xc;
                operator_delete();
                unused58 = 0;
                local_3b4 = (undefined *)0x0;
                unused57 = key;
                uStackY_5d56c = 0;
              }
            }
          }
LAB_0040c810:
          unused56 = local_a88;
          first4[local_a88] = local_a8c;
          local_a88 = local_a88 + 1;
        }
        unused55 = local_a50 + -1;
        local_ae4 = (local_a50 + -1) * 0x38 + local_40;
        first3 = (DWORD *)0x0;
        local_380 = (DWORD *)0x0;
        local_370 = (DWORD *)0x0;
        unused54 = 0x100;
        unused53 = 1;
        vec5 = 0x100;
        ehDtorCount = ehDtorCount + 1;
        local_3e0 = 0x5a8;
        iStackY_5d57c = *(int *)(*(int *)(local_ae4 + 0x24) + 8);
        unused52 = iStackY_5d57c;
        while (iStackY_5d58c = *(int *)(local_ae4 + 0x24), local_af8 = iStackY_5d58c,
              iStackY_5d58c != iStackY_5d57c) {
          unused51 = iStackY_5d57c + 0x10;
          local_3e0 = 0x5a8;
          local_b00 = *(int *)(iStackY_5d57c + 0x20);
          if (local_b00 == 0) {
            value3 = 0x7fffffff;
            if (local_380 == local_370) {
              std::vector_ptr::insert_aux_411c88((int)&vec5,local_380,&value3);
            }
            else {
              unused48 = local_380;
              unused47 = local_380;
              *local_380 = 0x7fffffff;
              local_380 = local_380 + 1;
            }
          }
          else {
            value4 = FUN_00469b44(writer);
            if (local_380 == local_370) {
              std::vector_ptr::insert_aux_411c88((int)&vec5,local_380,&value4);
            }
            else {
              unused50 = local_380;
              unused49 = local_380;
              *local_380 = value4;
              local_380 = local_380 + 1;
            }
            local_b10 = *(uint **)(local_b00 + 4);
            while ((local_b10 < *(uint **)(local_b00 + 8) && (g_writeFailed == 0))) {
              uVar10 = *local_b10;
              local_b10 = local_b10 + 1;
              local_3e0 = 0x5a8;
              iVar7 = last3 - first8;
              if (iVar7 < 0) {
                iVar7 = iVar7 + 3;
              }
              buffer9 = uVar10;
              if (((int)uVar10 < iVar7 >> 2) &&
                 (buffer9 = *(uint *)(uVar10 * 4 + first8), local_b18 = uVar10,
                 2 < (int)buffer9)) {
                if (*(uint **)(local_b00 + 8) == local_b10) {
                  buffer9 = buffer9 | 0x80000000;
                }
                uVar10 = FUN_00469c98((byte *)&buffer9,4,1,writer);
                if (uVar10 != 1) {
                  g_writeFailed = 1;
                }
              }
            }
          }
          uStackY_5d5a4 = uStackY_5d584;
          uStackY_5d5a0 = uStackY_5d580;
          iStackY_5d59c = iStackY_5d57c;
          __rwstd::__rb_tree::iterator::increment((int)&uStackY_5d584);
          uStackY_5d5b4 = uStackY_5d5a4;
          uStackY_5d5b0 = uStackY_5d5a0;
          iStackY_5d5ac = iStackY_5d59c;
        }
        iVar7 = (int)local_380 - (int)first3;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        if (iVar7 >> 2 != 0) {
          DVar2 = FUN_00469b44(writer);
          buffer3[local_a50] = DVar2;
          local_b28 = first3;
          while ((local_b28 < local_380 && (g_writeFailed == 0))) {
            buffer8 = *local_b28;
            local_3e0 = 0x5a8;
            uVar10 = FUN_00469c98((byte *)&buffer8,4,1,writer);
            if (uVar10 != 1) {
              g_writeFailed = 1;
            }
            local_b28 = local_b28 + 1;
          }
        }
        DVar2 = FUN_00469b44(writer);
        aDStackY_b290[local_a50 + 1] = DVar2;
        for (i = local_a50; (1 < i && (aDStackY_b290[i] == 0));
            i = i + -1) {
          aDStackY_b290[i] = aDStackY_b290[local_a50 + 1];
        }
        BitWriter::BitWriter(auStackY_5d5c0,writer);
        local_b34 = first4;
        first2 = (int *)0x0;
        local_3a0 = (int *)0x0;
        local_390 = (int *)0x0;
        unused46 = 0x100;
        unused45 = 1;
        vec4 = 0x100;
        ehDtorCount = ehDtorCount + 1;
        local_3e0 = 0x5a8;
        local_468 = 0;
        local_b40 = 0;
        local_b44 = 0;
        while( true ) {
          iVar7 = (int)last5 - (int)first5;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0xf;
          }
          if ((uint)(iVar7 >> 4) <= local_b44) break;
          unused44 = local_b44;
          local_b4c = first5 + local_b44 * 4;
          uStackY_5d5d0 = *local_b4c;
          uStackY_5d5cc = local_b4c[1];
          iStackY_5d5c8 = local_b4c[2];
          local_3e0 = 0x5a8;
          iVar7 = (**(code **)(*self + 4))();
          if (iVar7 == 0) {
            (**(code **)(*self + 0x10))();
            g_writeFailed = 1;
            ehDtorCount = ehDtorCount + -1;
            std::_Destroy_range_ptr(&vec4,(int)first2,(int)local_3a0);
            unused22 = first2;
            operator_delete();
            local_3e0 = 0x5a8;
            ehDtorCount = ehDtorCount + -1;
            std::_Destroy_range_ptr(&vec5,(int)first3,(int)local_380);
            unused21 = first3;
            operator_delete();
            ehDtorCount = ehDtorCount + -1;
            std::_Destroy_range_ptr(&vec9,(int)first4,last2);
            unused20 = first4;
            operator_delete();
            ehDtorCount = ehDtorCount + -1;
            std::_Destroy_range_16_414a7c(&vec6,(int)first5,(int)last5);
            unused19 = first5;
            operator_delete();
            local_3e0 = 0x50;
            goto LAB_0040d937;
          }
          str = iStackY_5d5c8 + 0x10;
          do {
            local_b54 = *(uint *)(iStackY_5d5c8 + 0x20);
            local_3e0 = 0x5a8;
            value2 = 0;
            iVar7 = last3 - first8;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            if ((local_b54 < (uint)(iVar7 >> 2)) &&
               (value2 = *(int *)(local_b54 * 4 + first8), local_b5c = local_b54, 2 < value2
               )) {
              if (local_3a0 == local_390) {
                std::vector_ptr::insert_aux_411c88((int)&vec4,local_3a0,&value2);
              }
              else {
                unused43 = local_3a0;
                unused42 = local_3a0;
                *local_3a0 = value2;
                local_3a0 = local_3a0 + 1;
              }
            }
            iStackY_5d5e8 = *(int *)(local_a4c + 0x24);
            iStackY_5d5d8 = iStackY_5d5e8;
            unused41 = iStackY_5d5e8;
            local_b6c = __rwstd::__rb_tree::iterator::increment_411e60((int)&uStackY_5d5d0);
            if (*(int *)(local_b6c + 8) == iStackY_5d5e8) break;
            unused40 = iStackY_5d5c8 + 0x10;
            unused39 = str;
            uVar10 = std::string::compare(str,0,*(uint *)(*(int *)(str + 8) + -4),
                                  *(byte **)(iStackY_5d5c8 + 0x18),
                                  *(uint *)(*(int *)(iStackY_5d5c8 + 0x18) + -4));
          } while (uVar10 == 0);
          value = *local_b34;
          local_b34 = local_b34 + 1;
          if (value != 0) {
            if (local_3a0 == local_390) {
              std::vector_ptr::insert_aux_411c88((int)&vec4,local_3a0,&value);
            }
            else {
              unused38 = local_3a0;
              unused37 = local_3a0;
              *local_3a0 = value;
              local_3a0 = local_3a0 + 1;
            }
          }
          code_ = 0;
          iVar7 = (int)local_3a0 - (int)first2;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          if (local_b40 < (uint)(iVar7 >> 2)) {
            code_ = 1;
            iVar7 = (int)local_3a0 - (int)first2;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            local_b40 = iVar7 >> 2;
            local_b88 = local_b40 - 1;
            first2[local_b88] = first2[local_b88] | 0x80000000;
          }
          BitWriter::WriteBytes(auStackY_5d5c0,*(byte **)(str + 8),
                       *(int *)(*(int *)(str + 8) + -4) + 1);
          BitWriter::WriteBits(auStackY_5d5c0,1,code_);
          local_468 = local_468 + 1;
          local_b44 = local_b44 + 1;
        }
        BitWriter::AlignToWord(auStackY_5d5c0);
        iStackY_5d5f8 = *(int *)(*(int *)(local_ae4 + 0x24) + 8);
        unused36 = iStackY_5d5f8;
        while( true ) {
          iStackY_5d608 = *(int *)(local_ae4 + 0x24);
          unused35 = iStackY_5d608;
          if (iStackY_5d608 == iStackY_5d5f8) break;
          local_3e0 = 0x65c;
          local_b94 = iStackY_5d5f8 + 0x10;
          unused34 = 0;
          bytes = (byte *)0x0;
          iVar7 = *(int *)(*(int *)(iStackY_5d5f8 + 0x18) + -0xc);
          if (iVar7 == -1 || iVar7 + 1 < 0) {
            local_ba8 = *(uint *)(*(int *)(iStackY_5d5f8 + 0x18) + -4);
            newRep = std::string::__getRep(str4,local_ba8,local_ba8);
            unused30 = str4;
            pbStackY_5d648 = (byte *)(newRep + 3);
            unused29 = local_ba8;
            src = *(undefined4 **)(local_b94 + 8);
            unused28 = pbStackY_5d648;
            unused31 = pbStackY_5d648;
            bytes = pbStackY_5d648;
            memcpy((undefined4 *)pbStackY_5d648,src,local_ba8);
          }
          else {
            pbStackY_5d638 = *(byte **)(iStackY_5d5f8 + 0x18);
            unused33 = pbStackY_5d638;
            bytes = pbStackY_5d638;
            unused32 = str4;
            local_ba4 = pbStackY_5d638 + -0xc;
            if (local_ba4 != (byte *)&g_nullStringRep) {
              *(int *)local_ba4 = *(int *)local_ba4 + 1;
            }
          }
          ehDtorCount = ehDtorCount + 1;
          local_3e0 = 0x650;
          if (1 < *(int *)(bytes + -0xc) + 1) {
            std::string::__unshare((int)str4);
          }
          local_bc8 = bytes + -0xc;
          if (local_bc8 != (byte *)&g_nullStringRep) {
            local_bc8[0] = 0xff;
            local_bc8[1] = 0xff;
            local_bc8[2] = 0xff;
            local_bc8[3] = 0xff;
          }
          local_bc4 = bytes;
          while( true ) {
            if (1 < *(int *)(bytes + -0xc) + 1) {
              std::string::__unshare((int)str4);
            }
            local_bcc = bytes + -0xc;
            if (local_bcc != (byte *)&g_nullStringRep) {
              local_bcc[0] = 0xff;
              local_bcc[1] = 0xff;
              local_bcc[2] = 0xff;
              local_bcc[3] = 0xff;
            }
            if (bytes + *(int *)(bytes + -4) <= local_bc4) break;
            local_bcd = *local_bc4;
            local_3e0 = 0x650;
            local_bcd = local_d60[*local_bc4];
            *local_bc4 = local_bcd;
            local_bc4 = local_bc4 + 1;
          }
          BitWriter::WriteBytes(auStackY_5d5c0,bytes,*(int *)(bytes + -4) + 1);
          vec = *(int *)(iStackY_5d5f8 + 0x20);
          if (vec != 0) {
            std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
            unused27 = *(undefined4 *)(vec + 4);
            operator_delete();
            operator_delete();
          }
          *(undefined4 *)(iStackY_5d5f8 + 0x20) = 0;
          ehDtorCount = ehDtorCount + -1;
          if (bytes != (byte *)0x0) {
            if (*(int *)(bytes + -0xc) != -1) {
              strRep2 = bytes + -0xc;
              if (strRep2 == (byte *)&g_nullStringRep) {
                iVar7 = 1;
              }
              else if (strRep2 == (byte *)&g_nullStringRep) {
                iVar7 = 1;
              }
              else {
                *(int *)strRep2 = *(int *)strRep2 + -1;
                iVar7 = *(int *)strRep2 + 1;
              }
              if (iVar7 != 0) goto LAB_0040d520;
            }
            unused26 = bytes + -0xc;
            unused25 = bytes + -0xc;
            operator_delete();
            unused24 = 0;
            unused23 = str4;
            bytes = (byte *)0x0;
            uStackY_5d658 = 0;
          }
LAB_0040d520:
          local_3e0 = 0x5a8;
          uStackY_5d620 = uStackY_5d600;
          uStackY_5d61c = uStackY_5d5fc;
          iStackY_5d618 = iStackY_5d5f8;
          __rwstd::__rb_tree::iterator::increment((int)&uStackY_5d600);
          uStackY_5d630 = uStackY_5d620;
          uStackY_5d62c = uStackY_5d61c;
          iStackY_5d628 = iStackY_5d618;
        }
        BitWriter::AlignToWord(auStackY_5d5c0);
        BitWriter::Flush(auStackY_5d5c0);
        iVar7 = (int)local_3a0 - (int)first2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        if (iVar7 >> 2 != 0) {
          DVar2 = FUN_00469b44(writer);
          buffer2[local_a50] = DVar2;
          iVar7 = (int)local_3a0 - (int)first2;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          *(int *)(buffer + local_a50 * 4) = iVar7 >> 2;
          local_bf0 = first2;
          local_3e0 = 0x5a8;
          while ((local_bf0 != local_3a0 && (g_writeFailed == 0))) {
            buffer7 = *local_bf0;
            local_3e0 = 0x5a8;
            uVar10 = FUN_00469c98((byte *)&buffer7,4,1,writer);
            if (uVar10 != 1) {
              g_writeFailed = 1;
            }
            local_bf0 = local_bf0 + 1;
          }
        }
        sprintf(auStackY_5da60,&DAT_0047537f);
        (**(code **)(*self + 0xc))();
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_ptr(&vec4,(int)first2,(int)local_3a0);
        unused18 = first2;
        operator_delete();
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_ptr(&vec5,(int)first3,(int)local_380);
        unused17 = first3;
        operator_delete();
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_ptr(&vec9,(int)first4,last2);
        unused16 = first4;
        operator_delete();
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_16_414a7c(&vec6,(int)first5,(int)last5);
        unused15 = first5;
        operator_delete();
      }
      local_a48 = local_a48 + 0x38;
    }
    local_3e0 = 0x50;
    if (g_writeFailed == 0) {
      FUN_0046a364(writer);
      uVar10 = FUN_00469c98(&DAT_00476b74,1,4,writer);
      if ((uVar10 != 4) || (uVar10 = FUN_00469c98((byte *)&buffer14,2,1,writer), uVar10 != 1)) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98(buffer5,4,3,writer);
      if (uVar10 != 3) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98((byte *)buffer3,4,(uint)buffer14,writer);
      if (((uVar10 != buffer14) ||
          (uVar10 = FUN_00469c98((byte *)buffer2,4,(uint)buffer14,writer),
          uVar10 != buffer14)) ||
         (uVar10 = FUN_00469c98(buffer,4,(uint)buffer14,writer), uVar10 != buffer14)) {
        g_writeFailed = 1;
      }
      uVar10 = FUN_00469c98((byte *)(aDStackY_b290 + 1),4,(uint)buffer14,writer);
      if (uVar10 != buffer14) {
        g_writeFailed = 1;
      }
    }
    if (g_writeFailed != 0) {
      (**(code **)(*self + 0x10))();
    }
  }
LAB_0040d937:
  if (writer != (int *)0x0) {
    FUN_00469508(writer);
  }
  iVar7 = 0;
  local_c34 = local_acc4;
  do {
    local_3f4 = 0;
    unused6 = local_c34;
    do {
      operator_delete_array();
      local_3f4 = local_3f4 + 1;
    } while (local_3f4 < 0x65);
    iVar7 = iVar7 + 1;
    local_c34 = local_c34 + 0x65;
  } while (iVar7 < 0x65);
  bVar13 = g_writeFailed == 0;
  uVar10 = (uint)bVar13;
  ehDtorCount = ehDtorCount + -1;
  if (local_6c != (undefined *)0x0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      strRep = (int *)(local_6c + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar7 = *strRep + 1;
      }
      if (iVar7 != 0) goto LAB_0040da63;
    }
    unused14 = local_6c + -0xc;
    unused13 = local_6c + -0xc;
    uVar10 = (uint)bVar13;
    operator_delete();
    unused12 = 0;
    local_6c = (undefined *)0x0;
    unused11 = str13;
  }
LAB_0040da63:
  local_3e0 = 0x50;
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_ptr(&vec10,first8,last3);
  unused10 = first8;
  operator_delete();
  ehDtorCount = ehDtorCount + -2;
  OccurrenceListCache::_dtor((int)&occurrenceListCache,2);
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_WordMap2(&vec11,first9,last4);
  unused9 = first9;
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return uVar10;
joined_r0x00407ad5:
  if (local_4d8 <= pbVar3) goto LAB_00407b3d;
  bVar5 = *pbVar3;
  if (bVar5 == 0x5c) {
    pbVar3 = pbVar3 + 1;
    bVar5 = *pbVar3;
  }
  else if (bVar5 == 0x2b) goto LAB_00407b3d;
  *(byte *)local_4dc = bVar5;
  local_4dc = (uint *)((int)local_4dc + 1);
  pbVar3 = pbVar3 + 1;
  goto joined_r0x00407ad5;
code_r0x004081d0:
  if (local_4d0 == n3) goto LAB_004090c5;
  local_594 = (local_4d0 != local_4d4) + 1;
  local_3e0 = 0x50;
  iVar7 = last3 - first8;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  if ((uint)(iVar7 >> 2) < value11 + 1) {
    std::vector_MatchEngine_ptr::resize((int)&vec10,value11 + 1);
  }
  unused244 = value11;
  *(int *)(value11 * 4 + first8) = local_594;
  if (local_594 != 2) goto LAB_004090c5;
  local_3e0 = 0x1ac;
  ParseDefinitionLine((int)out,(uint *)(local_4d8 + 1));
  unused243 = 0;
  unused242 = &g_emptyStringData;
  str24 = (int *)&g_emptyStringData;
  unused241 = key2;
  puStackY_1c9c4 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  local_3e0 = 0x1a0;
  local_5a8 = local_14c;
  while (*local_5a8 != 0) {
    bVar5 = *(byte *)(wordLists + (uint)*local_5a8);
    local_5a8 = local_5a8 + 1;
    local_3e0 = 0x1a0;
    if (bVar5 != 0) {
      if ((&DAT_0048b950)[bVar5] == 0) {
        (&DAT_0048b950)[bVar5] = 1;
      }
      unused240 = bVar5;
      std::string::replace_fill((int)key2,str24[-1],0,1,bVar5);
    }
    if (((bVar5 == 0) || (*local_5a8 == 0)) && (str24[-1] != 0)) {
      local_3e0 = 0x1d0;
      std::string::string_from_cstr((int)str10,(uint *)&DAT_0047524b);
      ehDtorCount = ehDtorCount + 1;
      local_3e0 = 0x1dc;
      std::string::insert((int)str10,1,(int)key2);
      if (((uint)str24[-1] <= (uint)((local_3c - local_40) / 0x38)) &&
         (iVar7 = FUN_00462af8((int)str13,local_16c,0,*(int *)(local_16c + -4)), iVar7 == -1)) {
        tree = (int *)((str24[-1] + -1) * 0x38 + local_40);
        iStackY_1c9e4 = tree[9];
        unused239 = iStackY_1c9e4;
        WordMap2::lower_bound(auStackY_1c9fc,(int)tree,(int)key2);
        puVar6 = auStackY_1c9fc;
        puVar12 = auStackY_1c9dc;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar6;
          puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        if (iStackY_1c9d4 == iStackY_1c9e4) {
          if (progressTotal == 0) {
            local_5bc = 0;
            unused238 = 0;
            str23 = (int *)0x0;
            if (str24[-3] == -1 || str24[-3] + 1 < 0) {
              len6 = str24[-1];
              newRep8 = std::string::__getRep(value10,len6,len6);
              unused234 = value10;
              piStackY_1ca14 = newRep8 + 3;
              unused233 = len6;
              unused232 = str24;
              unused231 = piStackY_1ca14;
              unused235 = piStackY_1ca14;
              str23 = piStackY_1ca14;
              memcpy(piStackY_1ca14,str24,len6);
            }
            else {
              unused236 = value10;
              unused237 = str24;
              str23 = str24;
              piStackY_1ca04 = str24;
              strRep30 = str24 + -3;
              if (strRep30 != &g_nullStringRep) {
                *strRep30 = *strRep30 + 1;
              }
            }
            unused306 = local_5bc;
            WordMap2::insert_unique(auStackY_1ca34,tree,(int)value10);
            puVar6 = (undefined4 *)(iStackY_1ca2c + 0x20);
            if (str23 != (int *)0x0) {
              if (str23[-3] != -1) {
                strRep29 = str23 + -3;
                if (strRep29 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else if (strRep29 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else {
                  *strRep29 = *strRep29 + -1;
                  iVar7 = *strRep29 + 1;
                }
                if (iVar7 != 0) goto LAB_004086cc;
              }
              unused230 = str23 + -3;
              unused229 = str23 + -3;
              operator_delete();
              unused228 = 0;
              unused227 = value10;
              str23 = (int *)0x0;
              uStackY_1ca3c = 0;
            }
LAB_004086cc:
            *puVar6 = 0;
          }
          else {
            vectorInt = (undefined4 *)operator_new();
            if (vectorInt != (undefined4 *)0x0) {
              vectorInt[1] = 0;
              vectorInt[2] = 0;
              unused226 = vectorInt + 4;
              vectorInt[6] = 0;
              std::vector_int::vector(vectorInt,1,&value11);
            }
            local_608 = 0;
            unused225 = 0;
            str22 = (int *)0x0;
            local_600 = vectorInt;
            if (str24[-3] == -1 || str24[-3] + 1 < 0) {
              len5 = str24[-1];
              newRep7 = std::string::__getRep(value9,len5,len5);
              unused221 = value9;
              piStackY_1ca5c = newRep7 + 3;
              unused220 = len5;
              unused219 = str24;
              unused218 = piStackY_1ca5c;
              unused222 = piStackY_1ca5c;
              str22 = piStackY_1ca5c;
              memcpy(piStackY_1ca5c,str24,len5);
            }
            else {
              unused223 = value9;
              unused224 = str24;
              str22 = str24;
              piStackY_1ca4c = str24;
              strRep28 = str24 + -3;
              if (strRep28 != &g_nullStringRep) {
                *strRep28 = *strRep28 + 1;
              }
            }
            unused305 = local_608;
            WordMap2::insert_unique(auStackY_1ca7c,tree,(int)value9);
            puVar6 = (undefined4 *)(iStackY_1ca74 + 0x20);
            if (str22 != (int *)0x0) {
              if (str22[-3] != -1) {
                strRep27 = str22 + -3;
                if (strRep27 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else if (strRep27 == &g_nullStringRep) {
                  iVar7 = 1;
                }
                else {
                  *strRep27 = *strRep27 + -1;
                  iVar7 = *strRep27 + 1;
                }
                if (iVar7 != 0) goto LAB_0040899e;
              }
              unused217 = str22 + -3;
              unused216 = str22 + -3;
              operator_delete();
              unused215 = 0;
              unused214 = value9;
              str22 = (int *)0x0;
              uStackY_1ca84 = 0;
            }
LAB_0040899e:
            *puVar6 = local_600;
          }
        }
        else {
          vec3 = *(int *)(iStackY_1c9d4 + 0x20);
          if (vec3 != 0) {
            iVar7 = *(int *)(vec3 + 8) - *(int *)(vec3 + 4);
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            local_650 = iVar7 >> 2;
            if ((local_650 < 0x65) || ((double)local_650 * local_41c <= (double)(int)value11)) {
              if ((local_650 == 0) ||
                 (local_658 = local_650 - 1,
                 *(uint *)(*(int *)(vec3 + 4) + local_658 * 4) != value11)) {
                if (*(int *)(vec3 + 8) == *(int *)(vec3 + 0x18)) {
                  std::vector_ptr::insert_aux_411c88(vec3,*(undefined4 **)(vec3 + 8),&value11);
                }
                else {
                  local_660 = *(uint **)(vec3 + 8);
                  *local_660 = value11;
                  *(int *)(vec3 + 8) = *(int *)(vec3 + 8) + 4;
                  unused212 = local_660;
                }
              }
            }
            else {
              if (vec3 != 0) {
                std::_Destroy_range_ptr(vec3,*(int *)(vec3 + 4),*(int *)(vec3 + 8));
                unused213 = *(undefined4 *)(vec3 + 4);
                operator_delete();
                operator_delete();
              }
              *(undefined4 *)(iStackY_1c9d4 + 0x20) = 0;
            }
          }
        }
      }
      unused211 = (*(uint *)&g_stringNpos);
      local_6b4 = str24[-1];
      s2 = 0;
      local_6bc = local_6b4;
      if ((*(uint *)&g_stringNpos) < local_6b4) {
        local_6bc = (*(uint *)&g_stringNpos);
      }
      firstLo = (undefined ***)0x408e41;
      std::string::replace((int)key2,0,local_6bc,(uint)&s2,0,0,0);
      ehDtorCount = ehDtorCount + -1;
      if (local_16c != (byte *)0x0) {
        if (*(int *)(local_16c + -0xc) != -1) {
          strRep26 = local_16c + -0xc;
          if (strRep26 == (byte *)&g_nullStringRep) {
            iVar7 = 1;
          }
          else if (strRep26 == (byte *)&g_nullStringRep) {
            iVar7 = 1;
          }
          else {
            *(int *)strRep26 = *(int *)strRep26 + -1;
            iVar7 = *(int *)strRep26 + 1;
          }
          if (iVar7 != 0) goto LAB_00408f08;
        }
        unused210 = local_16c + -0xc;
        unused209 = local_16c + -0xc;
        operator_delete();
        unused208 = 0;
        local_16c = (byte *)0x0;
        unused207 = str10;
        uStackY_1cbb4 = 0;
      }
LAB_00408f08:
      local_3e0 = 0x1a0;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (str24 != (int *)0x0) {
    if (str24[-3] != -1) {
      strRep25 = str24 + -3;
      if (strRep25 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep25 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *strRep25 = *strRep25 + -1;
        iVar7 = *strRep25 + 1;
      }
      if (iVar7 != 0) goto LAB_00408fe7;
    }
    unused206 = str24 + -3;
    unused205 = str24 + -3;
    operator_delete();
    unused204 = 0;
    str24 = (int *)0x0;
    unused203 = key2;
    uStackY_1cbc4 = 0;
  }
LAB_00408fe7:
  local_3e0 = 0x1a0;
  ehDtorCount = ehDtorCount + -1;
  if (local_14c != (byte *)0x0) {
    if (*(int *)(local_14c + -0xc) != -1) {
      strRep24 = local_14c + -0xc;
      if (strRep24 == (byte *)&g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep24 == (byte *)&g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *(int *)strRep24 = *(int *)strRep24 + -1;
        iVar7 = *(int *)strRep24 + 1;
      }
      if (iVar7 != 0) goto LAB_004090b1;
    }
    unused202 = local_14c + -0xc;
    unused201 = local_14c + -0xc;
    operator_delete();
    unused200 = 0;
    unused199 = out;
    local_14c = (byte *)0x0;
    uStackY_1cbd4 = 0;
  }
LAB_004090b1:
  local_3e0 = 0x50;
LAB_004090c5:
  value11 = value11 + 1;
  goto LAB_004090cb;
code_r0x0040afce:
  local_3e0 = 0x494;
  std::string::string_from_cstr((int)local_2c0,(uint *)(local_810 + 1));
  ehDtorCount = ehDtorCount + 1;
  local_3e0 = 0x4a0;
  local_8e0 = str17[-1];
  if (local_8e0 != 0) {
    local_8e4 = local_8e0 - 1;
    if (1 < str17[-3] + 1) {
      std::string::__unshare((int)local_2c0);
    }
    strRep13 = str17 + -3;
    if (strRep13 != &g_nullStringRep) {
      *strRep13 = -1;
    }
    if (*(char *)((int)str17 + local_8e4) == '\n') {
      local_8ec = local_8e0 - 1;
      local_8e0 = local_8ec;
      if ((*(uint *)&g_stringNpos) - 0xe < local_8ec) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar10 = 1;
        copyCtor = &LAB_00402064;
        firstHi2 = 0;
        local_3e0 = 0x4b8;
        uStackY_1abc = 0x40b0e5;
        msgText2 = (uint *)__rwstd::except_msg_string::format(auStackY_5d22c,
                                         PTR_s_invalid_string_size_parameter_in_00488a54);
        std::string::string_from_cstr((int)str6,msgText2);
        lengthError[0] = &std::exception::vftable;
        ehDtorCount = ehDtorCount + 2;
        lengthError[0] = &std::logic_error::vftable;
        unused134 = 0;
        unused299 = (int *)0x0;
        local_3e0 = 0x4c4;
        if (str16[-3] == -1 || str16[-3] + 1 < 0) {
          len4 = str16[-1];
          newRep4 = std::string::__getRep(newStr3,len4,len4);
          unused130 = newStr3;
          piStackY_5d244 = newRep4 + 3;
          unused129 = len4;
          unused128 = str16;
          unused127 = piStackY_5d244;
          unused131 = piStackY_5d244;
          unused299 = piStackY_5d244;
          memcpy(piStackY_5d244,str16,len4);
        }
        else {
          unused133 = str16;
          unused299 = str16;
          unused132 = newStr3;
          piStackY_5d234 = str16;
          strRep12 = str16 + -3;
          if (strRep12 != &g_nullStringRep) {
            *strRep12 = *strRep12 + 1;
          }
        }
        local_3e0 = 0x4b8;
        lengthError[0] = &std::length_error::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str16 != (int *)0x0) {
          if (str16[-3] != -1) {
            strRep11 = str16 + -3;
            if (strRep11 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else if (strRep11 == &g_nullStringRep) {
              iVar7 = 1;
            }
            else {
              *strRep11 = *strRep11 + -1;
              iVar7 = *strRep11 + 1;
            }
            if (iVar7 != 0) goto LAB_0040b32f;
          }
          unused126 = str16 + -3;
          unused125 = str16 + -3;
          operator_delete();
          unused124 = 0;
          unused123 = str6;
          str16 = (int *)0x0;
          uStackY_5d254 = 0;
        }
LAB_0040b32f:
        local_3e0 = 0x4ac;
        firstLo = lengthError;
        tree5 = (int *)&DAT_00402008;
        _ThrowExceptionLDTC((uint *)&DAT_00402008,(undefined4*)firstLo,firstHi2,copyCtor,uVar10,throwFlags,throwFile,
                     throwLine);
      }
      if (local_8ec < (uint)str17[-1]) {
        local_93c = str17[-1] - local_8ec;
        if ((uint)str17[-1] < local_8ec) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar10 = 1;
          copyCtor = &LAB_004021bc;
          firstHi2 = 0;
          local_3e0 = 0x4e8;
          uStackY_1abc = 0x40b3ce;
          msgText = (uint *)__rwstd::except_msg_string::format(auStackY_5d34c,
                                           PTR_s_string_index_out_of_range_in_fun_00488a60);
          std::string::string_from_cstr((int)str5,msgText);
          outOfRange[0] = &std::exception::vftable;
          ehDtorCount = ehDtorCount + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused122 = 0;
          unused298 = (int *)0x0;
          local_3e0 = 0x4f4;
          if (str15[-3] == -1 || str15[-3] + 1 < 0) {
            len3 = str15[-1];
            newRep3 = std::string::__getRep(newStr2,len3,len3);
            unused118 = newStr2;
            piStackY_5d364 = newRep3 + 3;
            unused117 = len3;
            unused116 = str15;
            unused115 = piStackY_5d364;
            unused119 = piStackY_5d364;
            unused298 = piStackY_5d364;
            memcpy(piStackY_5d364,str15,len3);
          }
          else {
            unused121 = str15;
            unused298 = str15;
            unused120 = newStr2;
            piStackY_5d354 = str15;
            strRep10 = str15 + -3;
            if (strRep10 != &g_nullStringRep) {
              *strRep10 = *strRep10 + 1;
            }
          }
          local_3e0 = 0x4e8;
          outOfRange[0] = &std::out_of_range::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str15 != (int *)0x0) {
            if (str15[-3] != -1) {
              strRep9 = str15 + -3;
              if (strRep9 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else if (strRep9 == &g_nullStringRep) {
                iVar7 = 1;
              }
              else {
                *strRep9 = *strRep9 + -1;
                iVar7 = *strRep9 + 1;
              }
              if (iVar7 != 0) goto LAB_0040b618;
            }
            unused114 = str15 + -3;
            unused113 = str15 + -3;
            operator_delete();
            unused112 = 0;
            unused111 = str5;
            str15 = (int *)0x0;
            uStackY_5d374 = 0;
          }
LAB_0040b618:
          local_3e0 = 0x4ac;
          tree5 = (int *)&DAT_00402160;
          _ThrowExceptionLDTC((uint *)&DAT_00402160,(undefined4*)outOfRange,firstHi2,copyCtor,uVar10,throwFlags,throwFile,throwLine);
        }
        local_98c = str17[-1] - local_8ec;
        s = 0;
        local_994 = local_98c;
        if (local_93c < local_98c) {
          local_994 = local_93c;
        }
        firstLo = (undefined ***)0x40b697;
        std::string::replace((int)local_2c0,local_8ec,local_994,(uint)&s,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_2c0,str17[-1],0,local_8ec - str17[-1],0);
      }
      strRep8 = str17 + -3;
      if (strRep8 != &g_nullStringRep) {
        *strRep8 = 0;
      }
    }
  }
  if (local_778 == 1) {
    WordMap3::lower_bound(auStackY_5d38c,(int)tree4,(int)local_2c0);
    local_3e0 = 0x4a0;
    unused110 = local_1f4;
    puStackY_5d394 = local_1f4;
    if (local_1f4 != puStackY_5d384) {
      unused93 = puStackY_5d384[8];
      unused94 = local_460;
      *(undefined4 *)(local_460 * 4 + first8) = *(undefined4 *)(puStackY_5d384[8] * 4 + first8);
      puStackY_5d384[8] = local_460;
      ehDtorCount = ehDtorCount + -1;
      if (str17 != (int *)0x0) {
        if (str17[-3] != -1) {
          strRep4 = str17 + -3;
          if (strRep4 == &g_nullStringRep) {
            iVar7 = 1;
          }
          else if (strRep4 == &g_nullStringRep) {
            iVar7 = 1;
          }
          else {
            *strRep4 = *strRep4 + -1;
            iVar7 = *strRep4 + 1;
          }
          if (iVar7 != 0) goto LAB_0040be6b;
        }
        unused85 = str17 + -3;
        unused84 = str17 + -3;
        operator_delete();
        unused83 = 0;
        str17 = (int *)0x0;
        unused82 = local_2c0;
        uStackY_5d46c = 0;
      }
      goto LAB_0040be6b;
    }
    if (0xff < local_1f0) {
      unused109 = local_1f4[2];
      iStackY_5d3a4 = local_1f4[2];
      unused108 = (undefined4 *)local_1f4[2];
      puStackY_5d3b4 = (undefined4 *)local_1f4[2];
      while( true ) {
        unused107 = local_1f4;
        puStackY_5d3c4 = local_1f4;
        if (local_1f4 == puStackY_5d3b4) break;
        if ((int)puStackY_5d3b4[8] < *(int *)(iStackY_5d3a4 + 0x20)) {
          puVar6 = &uStackY_5d3bc;
          puVar12 = &uStackY_5d3ac;
          for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = *puVar6;
            puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
          }
        }
        uStackY_5d3dc = uStackY_5d3bc;
        uStackY_5d3d8 = uStackY_5d3b8;
        puStackY_5d3d4 = puStackY_5d3b4;
        __rwstd::__rb_tree::iterator::increment_41288c((int)&uStackY_5d3bc);
        uStackY_5d3ec = uStackY_5d3dc;
        uStackY_5d3e8 = uStackY_5d3d8;
        puStackY_5d3e4 = puStackY_5d3d4;
      }
      uStackY_5d3fc = uStackY_5d3ac;
      uStackY_5d3f8 = uStackY_5d3a8;
      iStackY_5d3f4 = iStackY_5d3a4;
      WordMap3::erase(auStackY_5d40c,(int)tree4,uStackY_5d3ac,uStackY_5d3a8,iStackY_5d3a4);
    }
    local_9ac = 0;
    unused106 = 0;
    str14 = (int *)0x0;
    local_3e0 = 0x530;
    if (str17[-3] == -1 || str17[-3] + 1 < 0) {
      len2 = str17[-1];
      newRep2 = std::string::__getRep(value8,len2,len2);
      unused102 = value8;
      piStackY_5d424 = newRep2 + 3;
      unused101 = len2;
      unused100 = str17;
      unused99 = piStackY_5d424;
      unused103 = piStackY_5d424;
      str14 = piStackY_5d424;
      memcpy(piStackY_5d424,str17,len2);
    }
    else {
      unused105 = str17;
      str14 = str17;
      unused104 = value8;
      piStackY_5d414 = str17;
      strRep7 = str17 + -3;
      if (strRep7 != &g_nullStringRep) {
        *strRep7 = *strRep7 + 1;
      }
    }
    local_3e0 = 0x524;
    unused297 = local_9ac;
    ehDtorCount = ehDtorCount + 2;
    WordMap3::insert_unique(auStackY_5d444,tree4,(int)value8);
    unused = (uint *)(iStackY_5d43c + 0x20);
    ehDtorCount = ehDtorCount + -2;
    if (str14 != (int *)0x0) {
      if (str14[-3] != -1) {
        strRep6 = str14 + -3;
        if (strRep6 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else if (strRep6 == &g_nullStringRep) {
          iVar7 = 1;
        }
        else {
          *strRep6 = *strRep6 + -1;
          iVar7 = *strRep6 + 1;
        }
        if (iVar7 != 0) goto LAB_0040baeb;
      }
      unused98 = str14 + -3;
      unused97 = str14 + -3;
      operator_delete();
      unused96 = 0;
      unused95 = value8;
      str14 = (int *)0x0;
      uStackY_5d44c = 0;
    }
LAB_0040baeb:
    local_3e0 = 0x518;
    *unused = local_460;
  }
  DVar2 = FUN_00469b44(writer);
  unused92 = local_460;
  *(DWORD *)(local_460 * 4 + first8) = DVar2;
  iVar7 = local_250 - first7;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xf;
  }
  if (0xff < (uint)(iVar7 >> 4)) {
    std::vector_string::resize((int)&vec8,0xff);
    std::vector_string::resize((int)&vec7,0xff);
  }
  iVar7 = local_250 - first7;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xf;
  }
  buffer11 = (byte)(iVar7 >> 4);
  local_3e0 = 0x4a0;
  uVar10 = FUN_00469c98(&buffer11,1,1,writer);
  if (uVar10 != 1) {
    g_writeFailed = 1;
  }
  local_a00 = 0;
  while( true ) {
    iVar7 = local_250 - first7;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xf;
    }
    if ((uint)(iVar7 >> 4) <= local_a00) break;
    unused91 = local_a00;
    uVar10 = WriteDefinitionRecord(writer,local_a00 * 0x10 + first7);
    if (uVar10 == 0) {
LAB_0040bd31:
      g_writeFailed = 1;
    }
    else {
      unused90 = local_a00;
      uVar10 = WriteDefinitionRecord(writer,local_a00 * 0x10 + first6);
      if (uVar10 == 0) goto LAB_0040bd31;
    }
    local_a00 = local_a00 + 1;
  }
  uVar10 = WriteDefinitionRecord(writer,(int)local_2c0);
  if (uVar10 == 0) {
    g_writeFailed = 1;
  }
  ehDtorCount = ehDtorCount + -1;
  if (str17 != (int *)0x0) {
    if (str17[-3] != -1) {
      strRep5 = str17 + -3;
      if (strRep5 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep5 == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *strRep5 = *strRep5 + -1;
        iVar7 = *strRep5 + 1;
      }
      if (iVar7 != 0) goto LAB_0040be4b;
    }
    unused89 = str17 + -3;
    unused88 = str17 + -3;
    operator_delete();
    unused87 = 0;
    str17 = (int *)0x0;
    unused86 = local_2c0;
    uStackY_5d45c = 0;
  }
LAB_0040be4b:
  local_3e0 = 0x4a0;
LAB_0040be6b:
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_string(&vec7,first6,local_270);
  unused81 = first6;
  operator_delete();
  local_3e0 = 0x3e0;
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_string(&vec8,first7,local_250);
  unused80 = first7;
  operator_delete();
  local_3e0 = 0x350;
LAB_0040bee9:
  local_460 = local_460 + 1;
  goto LAB_0040beef;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea08  std::vector_WordMap::vector   (249 bytes, 2 ranges)   [analysis]
//   vector of n copies of a word map
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040ea31) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0040ea39 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::vector_WordMap::vector(undefined4 *self,int n,int value)

{
  int *storage;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x476030);
  *self = 0x12;
  storage = (int *)operator_new();
  if (storage == (int *)0x0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  self[1] = storage;
  std::uninitialized_fill_n_WordMap(storage,n,value);
  self[2] = self[1] + n * 0x38;
  self[6] = self[2];
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ebc0  std::uninitialized_fill_n_WordMap   (434 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x004487c0. copy-constructs n word maps
//   file placement: inferred (address adjacency)
void __cdecl std::uninitialized_fill_n_WordMap(int *dest,int n,int value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476080);
  piVar2 = dest;
  while (dest = piVar2, iVar1 = n + -1, n != 0) {
    piVar2 = dest + 0xe;
    n = iVar1;
    if (dest != (int *)0x0) {
      dest[4] = 0;
      dest[9] = 0;
      dest[10] = *(int *)(value + 0x28);
      *(undefined1 *)(dest + 0xb) = 1;
      *dest = 1;
      dest[8] = 0;
      dest[7] = 0;
      dest[6] = 0;
      puVar3 = (undefined4 *)dest[6];
      if (dest[6] == 0) {
        if (dest[7] == dest[8]) {
          WordListMap::AllocateNode(dest);
          puVar3 = (undefined4 *)dest[7];
          dest[7] = dest[7] + 0x28;
        }
        else {
          puVar3 = (undefined4 *)dest[7];
          dest[7] = dest[7] + 0x28;
        }
      }
      else {
        dest[6] = *(int *)(dest[6] + 0xc);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      dest[9] = (int)puVar3;
      *dest = 0x2a;
      *(undefined4 *)dest[9] = 0;
      puVar3 = WordMap::__copy(dest,*(undefined4 **)(*(int *)(value + 0x24) + 4),
                            (undefined4 *)dest[9]);
      *(undefined4 **)(dest[9] + 4) = puVar3;
      if (*(int *)(dest[9] + 4) == 0) {
        iVar1 = dest[9];
        *(int *)(iVar1 + 8) = iVar1;
        *(int *)(iVar1 + 0xc) = iVar1;
      }
      else {
        uVar4 = __rwstd::__rb_tree::__minimum_40eff4(*(int *)(dest[9] + 4));
        *(undefined4 *)(dest[9] + 8) = uVar4;
        uVar4 = __rwstd::__rb_tree::__maximum_40f014(*(int *)(dest[9] + 4));
        *(undefined4 *)(dest[9] + 0xc) = uVar4;
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edb8  WordMap::__copy   (105 bytes)   [analysis]
//   copies a subtree under a parent node
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::__copy(int *tree,undefined4 *src,undefined4 *parent)

{
  undefined4 *node;
  undefined4 *right;
  undefined4 *top;
  
  top = src;
  for (; src != (undefined4 *)0x0; src = (undefined4 *)src[2]) {
    node = WordMap::__get_node(tree,(int)(src + 4));
    if (src == top) {
      top = node;
    }
    parent[2] = node;
    node[1] = parent;
    *node = *src;
    right = WordMap::__copy(tree,(undefined4 *)src[3],node);
    node[3] = right;
    parent = node;
  }
  parent[2] = 0;
  return top;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee24  WordMap::__get_node   (381 bytes, 2 ranges)   [analysis]
//   takes a node from the free list and copy-constructs the value
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::__get_node(int *tree,int value)

{
  int refs;
  uint len;
  undefined4 *node;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4760f4);
  node = (undefined4 *)tree[6];
  if (node == (undefined4 *)0x0) {
    if (tree[7] == tree[8]) {
      WordListMap::AllocateNode(tree);
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
    else {
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
  }
  else {
    tree[6] = *(int *)(tree[6] + 0xc);
  }
  node[1] = 0;
  node[2] = 0;
  node[3] = 0;
  *node = 0;
  if (node + 4 != (undefined4 *)0x0) {
    node[6] = 0;
    refs = *(int *)(*(int *)(value + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(value + 8) + -4);
      rep = std::string::__getRep(node + 4,len,len);
      node[6] = rep + 3;
      memcpy((undefined4 *)node[6],*(undefined4 **)(value + 8),len);
    }
    else {
      node[6] = *(undefined4 *)(value + 8);
      rep = (int *)(node[6] + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    node[8] = *(undefined4 *)(value + 0x10);
  }
  *sehChainHead = sehPrevFrame;
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eff4  __rwstd::__rb_tree::__minimum_40eff4   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042ae80 (29 bytes; the code occurs several times, e.g. one template instance per type). leftmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__minimum_40eff4(int node)

{
  for (; *(int *)(node + 8) != 0; node = *(int *)(node + 8)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f014  __rwstd::__rb_tree::__maximum_40f014   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aea0 (29 bytes; the code occurs several times, e.g. one template instance per type). rightmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__maximum_40f014(int node)

{
  for (; *(int *)(node + 0xc) != 0; node = *(int *)(node + 0xc)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f034  std::_Destroy_range   (22 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00448c34 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of trivially destructible objects (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range(int first,int last)

{
  for (; last != first; first = first + 0x38) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f04c  WordListMap::AllocateNode   (297 bytes, 2 ranges)   [notes (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00448c4c (297 bytes; the code occurs several times, e.g. one template instance per type). node slab allocator for the duplicate-suppression map per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl WordListMap::AllocateNode(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x476178);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    badAlloc2 = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc2,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f198  WordMap2::erase_range   (258 bytes)   [analysis (position-matched TEA.exe)]
//   same masked bytes as TEA.exe 0x00448d98 (258 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. __rb_tree::erase(first, last)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode)

{
  undefined4 itLo;
  undefined4 itHi;
  int itNode;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int lastNode;
  undefined4 next [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 ret [4];
  
  ret[2] = *(undefined4 *)(tree + 0x24);
  itNode = *(int *)(tree + 0x24);
  local_1c = *(int *)(itNode + 8);
  if (((local_1c == firstNode) && (local_2c = itNode, itNode == lastNode)) &&
     (*(int *)(tree + 0x28) != 0)) {
    WordMap2::__erase(tree,*(int *)(itNode + 4));
    itNode = *(int *)(tree + 0x24);
    *(int *)(itNode + 8) = itNode;
    *(undefined4 *)(itNode + 4) = 0;
    *(int *)(itNode + 0xc) = itNode;
    *(undefined4 *)(tree + 0x28) = 0;
    local_44[2] = *(undefined4 *)(tree + 0x24);
    puVar4 = local_44;
    puVar5 = ret;
    for (itNode = 4; itNode != 0; itNode = itNode + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (itNode = firstNode, itHi = firstHi, itLo = firstLo, firstNode != lastNode) {
      __rwstd::__rb_tree::iterator::increment_40fd50((int)&firstLo);
      WordMap2::erase(next,tree,itLo,itHi,itNode);
      puVar4 = next;
      puVar5 = ret;
      for (itNode = 4; itNode != 0; itNode = itNode + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *result = ret[0];
  result[1] = ret[1];
  result[2] = ret[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f29c  WordMap2::__erase   (262 bytes)   [analysis (position-matched TEA.exe)]
//   same masked bytes as TEA.exe 0x00448e9c (262 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. returns a subtree's nodes to the free list, releasing each key string
//   file placement: inferred (address adjacency)
void __cdecl WordMap2::__erase(int tree,int node)

{
  int left;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4761b4);
  do {
    if (node == 0) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    WordMap2::__erase(tree,*(int *)(node + 0xc));
    left = *(int *)(node + 8);
    *(undefined4 *)(node + 0xc) = *(undefined4 *)(tree + 0x18);
    if ((node != -0x10) && (*(int *)(node + 0x18) != 0)) {
      if (*(int *)(*(int *)(node + 0x18) + -0xc) != -1) {
        strRep = (int *)(*(int *)(node + 0x18) + -0xc);
        if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep = *strRep + -1;
          prevRefs = *strRep + 1;
        }
        if (prevRefs != 0) goto LAB_0040f37b;
      }
      operator_delete();
      *(undefined4 *)(node + 0x18) = 0;
    }
LAB_0040f37b:
    *(int *)(tree + 0x18) = node;
    node = left;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f3a4  WordMap2::erase   (2455 bytes, 2 ranges)   [analysis]
//   __rb_tree::erase(iterator) (red-black delete)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *node;
  undefined4 *sehChainHead;
  undefined4 it;
  undefined4 itHi2;
  int itNode2;
  int unused;
  int unused2;
  int *strRep;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *unused3;
  int *unused4;
  int *local_4c;
  int local_48;
  int *unused5;
  int *local_40;
  int *local_3c;
  char local_35;
  int *dest;
  int local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4761f0);
  it = itLo;
  itHi2 = itHi;
  itNode2 = itNode;
  local_30 = *(int *)(tree + 0x24);
  if (local_30 != itNode) {
    __rwstd::__rb_tree::iterator::increment_40fd50((int)&it);
  }
  __rwstd::__rb_tree::__set_node_40fd40((undefined4*)&dest,itNode);
  local_35 = '\0';
  local_3c = dest + 2;
  piVar2 = dest;
  if (*local_3c == 0) {
    local_40 = dest + 3;
    if (*local_40 == 0) {
      node = (int *)dest[1];
      unused5 = dest;
      local_48 = dest[1];
      if (*(int *)(tree + 0x24) == local_48) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(tree + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == dest) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      node = (int *)dest[3];
    }
  }
  else {
    local_4c = dest + 3;
    if (*local_4c == 0) {
      node = (int *)dest[2];
    }
    else {
      for (piVar2 = (int *)dest[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      node = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != dest)) {
    *(int **)(dest[2] + 4) = piVar2;
    piVar2[2] = dest[2];
    if (piVar2 == (int *)dest[3]) {
      if (node != (int *)0x0) {
        node[1] = (int)piVar2;
      }
    }
    else {
      if (node != (int *)0x0) {
        node[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = node;
      piVar2[3] = dest[3];
      *(int **)(dest[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
      *(int **)(*(int *)(tree + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(dest[1] + 8) == dest) {
      *(int **)(dest[1] + 8) = piVar2;
    }
    else {
      *(int **)(dest[1] + 0xc) = piVar2;
    }
    piVar2[1] = dest[1];
    if (node == (int *)0x0) {
      node = piVar2;
    }
    unused4 = dest;
    local_58 = *piVar2;
    *piVar2 = *dest;
    *dest = local_58;
    local_8c = dest;
    unused3 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      node[1] = piVar2[1];
      if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
        *(int **)(*(int *)(tree + 0x24) + 4) = node;
      }
      else if (*(int **)(dest[1] + 8) == dest) {
        *(int **)(dest[1] + 8) = node;
      }
      else {
        *(int **)(dest[1] + 0xc) = node;
      }
      if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
        local_5c = dest + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(tree + 0x24) + 8) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__minimum_40eff4((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
        local_60 = dest + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__maximum_40f014((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((node != *(int **)(tree + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((node == *(int **)(*(int *)(tree + 0x24) + 4)) || (*node != 1))
            goto LAB_0040fbf6;
            if (node != *(int **)(node[1] + 8)) break;
            piVar2 = *(int **)(node[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *node = 0;
              node = (int *)node[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)node[1] = 0;
                iVar3 = node[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                  *(int *)(*(int *)(tree + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(node[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *node = 0;
                node = (int *)node[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(node[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)node[1];
                    *(undefined4 *)node[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = node[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_0040fbf6;
                }
                *piVar2 = 0;
                node = (int *)node[1];
              }
            }
          }
          piVar2 = *(int **)(node[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *node = 0;
          node = (int *)node[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)node[1] = 0;
          iVar3 = node[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
            *(int *)(*(int *)(tree + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(node[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *node = 0;
        node = (int *)node[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      node = (int *)node[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(node[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)node[1];
      *(undefined4 *)node[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = node[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_0040fbf6:
    *node = 1;
  }
  local_8c[3] = *(int *)(tree + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    ehContext = 0x14;
    ehDtorCount = ehDtorCount + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        strRep = (int *)(local_8c[6] + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar3 = *strRep + 1;
        }
        if (iVar3 != 0) goto LAB_0040fd00;
      }
      unused2 = local_8c[6] + -0xc;
      unused = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_0040fd00:
  *(int **)(tree + 0x18) = local_8c;
  *(int *)(tree + 0x28) = *(int *)(tree + 0x28) + -1;
  *result = it;
  result[1] = itHi2;
  result[2] = itNode2;
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fd40  __rwstd::__rb_tree::__set_node_40fd40   (13 bytes)   [analysis]
//   stores a node pointer
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__set_node_40fd40(undefined4 *dest,undefined4 node)

{
  *dest = node;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fd50  __rwstd::__rb_tree::iterator::increment_40fd50   (99 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aec0 (99 bytes; the code occurs several times, e.g. one template instance per type). ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment_40fd50(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fdb4  __rwstd::__rb_tree::__deallocate_buffers_40fdb4   (63 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042af24 (63 bytes; the code occurs several times, e.g. one template instance per type). frees every node buffer of a tree
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__deallocate_buffers_40fdb4(int tree)

{
  while (*(undefined4 **)(tree + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(tree + 0x10) = **(undefined4 **)(tree + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fdf4  std::vector_WordMap2::vector   (249 bytes, 2 ranges)   [analysis]
//   vector of n copies of a word map
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040fe1d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0040fe25 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::vector_WordMap2::vector(undefined4 *self,int n,int value)

{
  int *storage;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x47624c);
  *self = 0x12;
  storage = (int *)operator_new();
  if (storage == (int *)0x0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  self[1] = storage;
  std::uninitialized_fill_n_WordMap2(storage,n,value);
  self[2] = self[1] + n * 0x38;
  self[6] = self[2];
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ff14  std::uninitialized_fill_n_WordMap2   (454 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x00449b14. copy-constructs n word maps
//   file placement: inferred (address adjacency)
void __cdecl std::uninitialized_fill_n_WordMap2(int *dest,int n,int value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47629c);
  piVar2 = dest;
  while (dest = piVar2, iVar1 = n + -1, n != 0) {
    piVar2 = dest + 0xe;
    n = iVar1;
    if (dest != (int *)0x0) {
      dest[4] = 0;
      dest[9] = 0;
      dest[10] = *(int *)(value + 0x28);
      *(undefined1 *)(dest + 0xb) = 0;
      dest[0xc] = *(int *)(value + 0x30);
      dest[0xd] = *(int *)(value + 0x34);
      *dest = 1;
      dest[8] = 0;
      dest[7] = 0;
      dest[6] = 0;
      puVar3 = (undefined4 *)dest[6];
      if (dest[6] == 0) {
        if (dest[7] == dest[8]) {
          WordListMap::AllocateNode_410330(dest);
          puVar3 = (undefined4 *)dest[7];
          dest[7] = dest[7] + 0x28;
        }
        else {
          puVar3 = (undefined4 *)dest[7];
          dest[7] = dest[7] + 0x28;
        }
      }
      else {
        dest[6] = *(int *)(dest[6] + 0xc);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      dest[9] = (int)puVar3;
      *dest = 0x2a;
      *(undefined4 *)dest[9] = 0;
      puVar3 = WordMap2::__copy(dest,*(undefined4 **)(*(int *)(value + 0x24) + 4),
                            (undefined4 *)dest[9]);
      *(undefined4 **)(dest[9] + 4) = puVar3;
      if (*(int *)(dest[9] + 4) == 0) {
        *(int *)(dest[9] + 8) = dest[9];
        *(int *)(dest[9] + 0xc) = dest[9];
      }
      else {
        uVar4 = __rwstd::__rb_tree::__minimum(*(int *)(dest[9] + 4));
        *(undefined4 *)(dest[9] + 8) = uVar4;
        uVar4 = __rwstd::__rb_tree::__maximum(*(int *)(dest[9] + 4));
        *(undefined4 *)(dest[9] + 0xc) = uVar4;
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410104  WordMap2::__copy   (105 bytes)   [analysis (position-matched TEA.exe)]
//   same masked bytes as TEA.exe 0x00449d04 (105 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. copies a subtree under a parent node
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::__copy(int *tree,undefined4 *src,undefined4 *parent)

{
  undefined4 *node;
  undefined4 *right;
  undefined4 *top;
  
  top = src;
  for (; src != (undefined4 *)0x0; src = (undefined4 *)src[2]) {
    node = WordMap2::__get_node(tree,(int)(src + 4));
    if (src == top) {
      top = node;
    }
    parent[2] = node;
    node[1] = parent;
    *node = *src;
    right = WordMap2::__copy(tree,(undefined4 *)src[3],node);
    node[3] = right;
    parent = node;
  }
  parent[2] = 0;
  return top;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410170  WordMap2::__get_node   (381 bytes, 2 ranges)   [analysis (position-matched TEA.exe)]
//   same masked bytes as TEA.exe 0x00449d70 (381 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. takes a node from the free list (or a new buffer) and copy-constructs the value
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::__get_node(int *tree,int value)

{
  int refs;
  uint len;
  undefined4 *node;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476310);
  node = (undefined4 *)tree[6];
  if (node == (undefined4 *)0x0) {
    if (tree[7] == tree[8]) {
      WordListMap::AllocateNode_410330(tree);
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
    else {
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
  }
  else {
    tree[6] = *(int *)(tree[6] + 0xc);
  }
  node[1] = 0;
  node[2] = 0;
  node[3] = 0;
  *node = 0;
  if (node + 4 != (undefined4 *)0x0) {
    node[6] = 0;
    refs = *(int *)(*(int *)(value + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(value + 8) + -4);
      rep = std::string::__getRep(node + 4,len,len);
      node[6] = rep + 3;
      memcpy((undefined4 *)node[6],*(undefined4 **)(value + 8),len);
    }
    else {
      node[6] = *(undefined4 *)(value + 8);
      rep = (int *)(node[6] + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    node[8] = *(undefined4 *)(value + 0x10);
  }
  *sehChainHead = sehPrevFrame;
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410318  std::_Destroy_range_410318   (22 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00448c34 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of trivially destructible objects (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_410318(int first,int last)

{
  for (; last != first; first = first + 0x38) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410330  WordListMap::AllocateNode_410330   (297 bytes, 2 ranges)   [notes (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00448c4c (297 bytes; the code occurs several times, e.g. one template instance per type). node slab allocator for the duplicate-suppression map per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl WordListMap::AllocateNode_410330(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x476394);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    badAlloc2 = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc2,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041047c  std::vector_int::vector   (234 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044a07c. vector of n copies of a value
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004104a5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004104ad */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::vector_int::vector(undefined4 *self,int n,undefined4 *value)

{
  undefined4 *first;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4763f0);
  *self = 0x100;
  first = (undefined4 *)operator_new();
  if (first == (undefined4 *)0x0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  self[1] = first;
  std::fill_n_ptr(first,n,value);
  self[2] = self[1] + n * 4;
  self[6] = self[2];
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041058c  std::fill_n_ptr   (85 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004147d0. fill n pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_ptr(undefined4 *first,int n,undefined4 *value)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476430);
  while (n != 0) {
    *first = *value;
    n = n + -1;
    first = first + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410608  std::_Destroy_range_ptr_410608   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_410608(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410620  std::_Destroy_range_WordMap2   (176 bytes)   [analysis]
//   destroys the word maps in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_WordMap2(undefined4 vec,int first,int last)

{
  int iVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int tree;
  
  __InitExceptBlockLDTC(0x476454);
  iVar2 = first;
  while (tree = iVar2, tree != last) {
    iVar2 = tree + 0x38;
    if (tree != 0) {
      ehContext = 0x14;
      ehDtorCount = ehDtorCount + -2;
      if (*(int *)(tree + 0x24) != 0) {
        unused = *(undefined4 *)(tree + 0x24);
        WordMap2::erase_range(result,tree,firstLo,firstHi,
                     *(int *)(*(int *)(tree + 0x24) + 8));
        iVar1 = *(int *)(tree + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(tree + 0x18);
        *(int *)(tree + 0x18) = iVar1;
        __rwstd::__rb_tree::__deallocate_buffers_40fdb4(tree);
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004106d0  WordMap::insert_hint   (1017 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044a23c. insert with a position hint (collation order, then exact string order)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::insert_hint(undefined4 *result,int *tree,undefined4 hintLo,undefined4 hintHi,int hintNode, undefined4 unused,int value)

{
  int value2;
  uint uVar2;
  bool bVar3;
  undefined4 result2;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 result3;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 result4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 unused2;
  undefined4 unused3;
  int parent;
  int local_8c;
  int unused4;
  int local_6c;
  int unused5;
  int *local_54;
  int local_50;
  int str;
  int local_48;
  int unused6;
  int local_40;
  int str2;
  int unused7;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int str3;
  int local_24;
  int value3;
  int unused8;
  int local_18;
  int str4;
  int local_10;
  int unused9;
  int unused10;
  
  value2 = value;
  local_6c = *(int *)(tree[9] + 8);
  unused5 = local_6c;
  unused10 = local_6c;
  if (local_6c == hintNode) {
    if (tree[10] != 0) {
      unused9 = hintNode;
      local_10 = hintNode + 0x10;
      str4 = value;
      local_18 = CollationCompare(*(byte **)(value + 8),*(int *)(*(int *)(value + 8) + -4),
                              *(byte **)(hintNode + 0x18),*(int *)(*(int *)(hintNode + 0x18) + -4));
      if (local_18 == 0) {
        uVar2 = std::string::compare(str4,0,*(uint *)(*(int *)(str4 + 8) + -4),
                             *(byte **)(local_10 + 8),*(uint *)(*(int *)(local_10 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_18 < 0;
      }
      if (bVar3) {
        WordMap::__insert((int)result,tree,hintNode,hintNode,value2);
        return result;
      }
    }
    WordMap::insert_unique(&result2,tree,value2);
    *result = result2;
    result[1] = local_e8;
    result[2] = local_e4;
  }
  else {
    local_8c = tree[9];
    unused4 = local_8c;
    unused8 = local_8c;
    if (local_8c == hintNode) {
      value3 = value;
      local_24 = *(int *)(tree[9] + 0xc);
      str3 = local_24 + 0x10;
      local_2c = CollationCompare(*(byte **)(local_24 + 0x18),*(int *)(*(int *)(local_24 + 0x18) + -4),
                              *(byte **)(value + 8),*(int *)(*(int *)(value + 8) + -4));
      if (local_2c == 0) {
        uVar2 = std::string::compare(str3,0,*(uint *)(*(int *)(str3 + 8) + -4),
                             *(byte **)(value3 + 8),*(uint *)(*(int *)(value3 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_2c < 0;
      }
      if (bVar3) {
        WordMap::__insert((int)result,tree,0,*(int *)(tree[9] + 0xc),value2);
      }
      else {
        WordMap::insert_unique(&result3,tree,value2);
        *result = result3;
        result[1] = local_d0;
        result[2] = local_cc;
      }
    }
    else {
      local_30 = (undefined4 *)__rwstd::__rb_tree::iterator::decrement((int)&hintLo);
      unused2 = *local_30;
      unused3 = local_30[1];
      parent = local_30[2];
      local_34 = value2;
      str2 = parent + 0x10;
      unused7 = parent;
      local_40 = CollationCompare(*(byte **)(parent + 0x18),*(int *)(*(int *)(parent + 0x18) + -4),
                              *(byte **)(value2 + 8),*(int *)(*(int *)(value2 + 8) + -4));
      if (local_40 == 0) {
        uVar2 = std::string::compare(str2,0,*(uint *)(*(int *)(str2 + 8) + -4),
                             *(byte **)(local_34 + 8),*(uint *)(*(int *)(local_34 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_40 < 0;
      }
      if (bVar3) {
        unused6 = hintNode;
        local_48 = hintNode + 0x10;
        str = value2;
        local_50 = CollationCompare(*(byte **)(value2 + 8),*(int *)(*(int *)(value2 + 8) + -4),
                                *(byte **)(hintNode + 0x18),*(int *)(*(int *)(hintNode + 0x18) + -4));
        if (local_50 == 0) {
          uVar2 = std::string::compare(str,0,*(uint *)(*(int *)(str + 8) + -4),
                               *(byte **)(local_48 + 8),*(uint *)(*(int *)(local_48 + 8) + -4));
          if ((int)uVar2 < 0) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = local_50 < 0;
        }
        if (bVar3) {
          local_54 = (int *)(parent + 0xc);
          if (*local_54 == 0) {
            WordMap::__insert((int)result,tree,0,parent,value2);
            return result;
          }
          WordMap::__insert((int)result,tree,hintNode,hintNode,value2);
          return result;
        }
      }
      WordMap::insert_unique(&result4,tree,value2);
      *result = result4;
      result[1] = local_b8;
      result[2] = local_b4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410acc  WordMap::__insert   (839 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044a638. links a new node under the parent and rebalances (red-black insert)
//   file placement: inferred (address adjacency)
int __cdecl WordMap::__insert(int result,int *tree,int forceLeft,int parent,int value)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *node;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  node = WordMap::__get_node(tree,value);
  tree[10] = tree[10] + 1;
  if ((parent != tree[9]) && (forceLeft == 0)) {
    iVar4 = CollationCompare(*(byte **)(value + 8),*(int *)(*(int *)(value + 8) + -4),
                         *(byte **)(parent + 0x18),*(int *)(*(int *)(parent + 0x18) + -4));
    if (iVar4 == 0) {
      uVar5 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),
                           *(byte **)(parent + 0x18),*(uint *)(*(int *)(parent + 0x18) + -4));
      if ((int)uVar5 < 0) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      bVar7 = iVar4 < 0;
    }
    if (!bVar7) {
      *(undefined4 **)(parent + 0xc) = node;
      if (parent == *(int *)(tree[9] + 0xc)) {
        *(undefined4 **)(tree[9] + 0xc) = node;
      }
      goto LAB_00410bc6;
    }
  }
  *(undefined4 **)(parent + 8) = node;
  if (parent == tree[9]) {
    *(undefined4 **)(tree[9] + 4) = node;
    *(undefined4 **)(tree[9] + 0xc) = node;
  }
  else if (parent == *(int *)(tree[9] + 8)) {
    *(undefined4 **)(tree[9] + 8) = node;
  }
LAB_00410bc6:
  node[1] = parent;
  puVar6 = node;
  while ((puVar6 != *(undefined4 **)(tree[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar4 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar4 + 8) == puVar6[1]) {
      piVar1 = *(int **)(iVar4 + 0xc);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[3]) {
          iVar4 = puVar2[3];
          puVar2[3] = *(undefined4 *)(iVar4 + 8);
          if (*(int *)(iVar4 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          *(undefined4 **)(iVar4 + 8) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[2];
        puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        *(undefined4 **)(iVar4 + 0xc) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
        puVar2 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar2[2]) {
          iVar4 = puVar2[2];
          puVar2[2] = *(undefined4 *)(iVar4 + 0xc);
          if (*(int *)(iVar4 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar4 + 0xc) + 4) = puVar2;
          }
          *(undefined4 *)(iVar4 + 4) = puVar2[1];
          if (puVar2 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar4;
          }
          else if (puVar2 == *(undefined4 **)(puVar2[1] + 0xc)) {
            *(int *)(puVar2[1] + 0xc) = iVar4;
          }
          else {
            *(int *)(puVar2[1] + 8) = iVar4;
          }
          *(undefined4 **)(iVar4 + 0xc) = puVar2;
          puVar2[1] = iVar4;
          puVar6 = puVar2;
        }
        puVar2 = (undefined4 *)puVar6[1];
        *puVar2 = 1;
        puVar2 = (undefined4 *)puVar2[1];
        *puVar2 = 0;
        iVar4 = puVar2[3];
        puVar2[3] = *(undefined4 *)(iVar4 + 8);
        if (*(int *)(iVar4 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar4 + 8) + 4) = puVar2;
        }
        *(undefined4 *)(iVar4 + 4) = puVar2[1];
        if (puVar2 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar4;
        }
        else if (puVar2 == *(undefined4 **)(puVar2[1] + 8)) {
          *(int *)(puVar2[1] + 8) = iVar4;
        }
        else {
          *(int *)(puVar2[1] + 0xc) = iVar4;
        }
        *(undefined4 **)(iVar4 + 8) = puVar2;
        puVar2[1] = iVar4;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar1 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(tree[9] + 4) = 1;
  *(undefined4 **)(result + 8) = node;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410e14  WordMap::insert_unique   (742 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044a980. insert unless an equal key exists (collation order, then exact string order)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap::insert_unique(undefined4 *result,int *tree,int value)

{
  uint uVar1;
  int node;
  int str;
  bool goLeft;
  undefined4 result2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 result3;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 it;
  undefined4 local_54;
  int parent2;
  undefined4 result4;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int unused;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int unused2;
  int parent;
  
  parent = tree[9];
  node = *(int *)(parent + 4);
  goLeft = true;
  while (node != 0) {
    unused2 = node;
    parent = node;
    local_10 = CollationCompare(*(byte **)(value + 8),*(int *)(*(int *)(value + 8) + -4),
                            *(byte **)(node + 0x18),*(int *)(*(int *)(node + 0x18) + -4));
    if (local_10 == 0) {
      uVar1 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),*(byte **)(node + 0x18),
                           *(uint *)(*(int *)(node + 0x18) + -4));
      if ((int)uVar1 < 0) {
        goLeft = true;
      }
      else {
        goLeft = false;
      }
    }
    else {
      goLeft = local_10 < 0;
    }
    if (goLeft) {
      node = *(int *)(node + 8);
    }
    else {
      node = *(int *)(node + 0xc);
    }
  }
  if ((char)tree[0xb] == '\0') {
    parent2 = parent;
    if (goLeft) {
      local_60 = *(int *)(tree[9] + 8);
      if (local_60 == parent) {
        local_12 = 1;
        WordMap::__insert((int)&result3,tree,0,parent,value);
        *result = result3;
        result[1] = local_8c;
        result[2] = local_88;
        *(undefined1 *)(result + 4) = local_12;
        return result;
      }
      __rwstd::__rb_tree::iterator::decrement((int)&it);
    }
    node = parent2;
    unused = parent2;
    str = parent2 + 0x10;
    local_1c = CollationCompare(*(byte **)(parent2 + 0x18),*(int *)(*(int *)(parent2 + 0x18) + -4),
                            *(byte **)(value + 8),*(int *)(*(int *)(value + 8) + -4));
    if (local_1c == 0) {
      uVar1 = std::string::compare(str,0,*(uint *)(*(int *)(node + 0x18) + -4),*(byte **)(value + 8),
                           *(uint *)(*(int *)(value + 8) + -4));
      if ((int)uVar1 < 0) {
        goLeft = true;
      }
      else {
        goLeft = false;
      }
    }
    else {
      goLeft = local_1c < 0;
    }
    if (goLeft) {
      local_1d = 1;
      WordMap::__insert((int)&result2,tree,0,parent,value);
      *result = result2;
      result[1] = local_b4;
      result[2] = local_b0;
      *(undefined1 *)(result + 4) = local_1d;
    }
    else {
      *result = it;
      result[1] = local_54;
      result[2] = parent2;
      *(undefined1 *)(result + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    WordMap::__insert((int)&result4,tree,0,parent,value);
    *result = result4;
    result[1] = local_44;
    result[2] = local_40;
    *(undefined1 *)(result + 4) = local_11;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004110fc  __rwstd::__rb_tree::iterator::decrement   (107 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042e9d8 (107 bytes; the code occurs several times, e.g. one template instance per type). --iterator (in-order predecessor)
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::iterator::decrement(int it)

{
  int *node;
  int parent;
  
  node = *(int **)(it + 8);
  if ((*node == 0) && (node == *(int **)(node[1] + 4))) {
    *(int *)(it + 8) = node[3];
  }
  else if (*(int *)(*(int *)(it + 8) + 8) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 8);
        parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    *(int *)(it + 8) = parent;
  }
  else {
    for (parent = *(int *)(*(int *)(it + 8) + 8); *(int *)(parent + 0xc) != 0;
        parent = *(int *)(parent + 0xc)) {
    }
    *(int *)(it + 8) = parent;
  }
  return it;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411168  std::vector_MatchEngine_ptr::resize   (157 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414468. resize(n) with null pointers
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::resize(int vec,uint n)

{
  undefined4 *end;
  undefined4 *newEnd;
  int size;
  undefined4 *cut;
  int removed;
  undefined4 nullValue;
  
  size = *(int *)(vec + 8) - *(int *)(vec + 4);
  if (size < 0) {
    size = size + 3;
  }
  if ((uint)(size >> 2) < n) {
    nullValue = 0;
    size = (int)*(undefined4 **)(vec + 8) - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    std::vector_MatchEngine_ptr::insert_fill(vec,*(undefined4 **)(vec + 8),n - (size >> 2),&nullValue);
  }
  else {
    end = *(undefined4 **)(vec + 8);
    size = (int)end - *(int *)(vec + 4);
    if (size < 0) {
      size = size + 3;
    }
    if (n < (uint)(size >> 2)) {
      cut = (undefined4 *)(n * 4 + *(int *)(vec + 4));
      newEnd = std::copy_ptr_411574(end,end,cut);
      size = *(int *)(vec + 8);
      removed = (int)end - (int)cut;
      if (removed < 0) {
        removed = removed + 3;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (removed >> 2) * -4;
      std::_Destroy_range_ptr(vec,(int)newEnd,size);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411208  std::vector_MatchEngine_ptr::insert_fill   (646 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414508. inserts n copies of a value at a position, growing the storage when needed
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_MatchEngine_ptr::insert_fill(int vec,undefined4 *first,uint n,undefined4 *value)

{
  undefined4 *storage;
  int count;
  uint *growBy;
  undefined4 *sehChainHead;
  uint size;
  int newCapacity;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4764b0);
  if (n == 0) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    storage = *(undefined4 **)(vec + 8);
    count = *(int *)(vec + 0x18) - (int)storage;
    if (count < 0) {
      count = count + 3;
    }
    if ((uint)(count >> 2) < n) {
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      size = count >> 2;
      if (n < size) {
        growBy = &size;
      }
      else {
        growBy = &n;
      }
      newCapacity = size + *growBy;
      storage = (undefined4 *)operator_new();
      if (storage == (undefined4 *)0x0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_ptr(*(undefined4 **)(vec + 4),first,storage);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::fill_n_ptr(storage + (count >> 2),n,value);
      count = (int)first - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::copy_ptr(first,*(undefined4 **)(vec + 8),storage + (count >> 2) + n);
      ehContext = 0;
      count = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (count < 0) {
        count = count + 3;
      }
      std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
      operator_delete();
      *(undefined4 **)(vec + 0x18) = storage + newCapacity;
      *(undefined4 **)(vec + 8) = storage + (count >> 2) + n;
      *(undefined4 **)(vec + 4) = storage;
    }
    else {
      count = (int)storage - (int)first;
      if (count < 0) {
        count = count + 3;
      }
      if (n < (uint)(count >> 2)) {
        std::copy_ptr(storage + -n,storage,storage);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 4;
        std::copy_backward_ptr(first,storage + -n,storage);
        std::fill_ptr(first,first + n,value);
      }
      else {
        count = (int)storage - (int)first;
        if (count < 0) {
          count = count + 3;
        }
        count = n - (count >> 2);
        std::fill_n_ptr(storage,count,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + count * 4;
        std::copy_ptr(first,storage,first + n);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - count) * 4;
        std::fill_ptr(first,storage,value);
      }
    }
    *sehChainHead = sehPrevFrame;
  }
  return sehPrevFrame;
}

// ----------------------------------------------------------------------------------------------------
// 0x004114b0  std::copy_ptr   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4764f0);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411530  std::copy_backward_ptr   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411554  std::fill_ptr   (31 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004147b0. fill a range of pointers with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_ptr(undefined4 *first,undefined4 *last,undefined4 *value)

{
  for (; last != first; first = first + 1) {
    *first = *value;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411574  std::copy_ptr_411574   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_411574(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411598  WordMap2::lower_bound   (251 bytes)   [analysis]
//   first node whose key is not less than the string
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::lower_bound(undefined4 *result,int tree,int key)

{
  uint uVar1;
  int node;
  undefined4 *puVar3;
  undefined4 newStr [2];
  undefined4 unused;
  int unused2;
  undefined4 newStr2 [2];
  int unused3;
  undefined4 unused4;
  int unused5;
  int local_10;
  int unused6;
  int candidate;
  
  candidate = *(int *)(tree + 0x24);
  node = *(int *)(*(int *)(tree + 0x24) + 4);
  while (node != 0) {
    unused6 = node;
    uVar1 = std::string::compare(node + 0x10,0,*(uint *)(*(int *)(node + 0x18) + -4),
                         *(byte **)(key + 8),*(uint *)(*(int *)(key + 8) + -4));
    if ((int)uVar1 < 0) {
      node = *(int *)(node + 0xc);
    }
    else {
      candidate = node;
      node = *(int *)(node + 8);
    }
  }
  unused3 = candidate;
  local_10 = *(int *)(tree + 0x24);
  unused2 = local_10;
  if (local_10 != candidate) {
    unused5 = candidate;
    uVar1 = std::string::compare(key,0,*(uint *)(*(int *)(key + 8) + -4),*(byte **)(candidate + 0x18),
                         *(uint *)(*(int *)(candidate + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = newStr2;
      goto LAB_00411673;
    }
  }
  puVar3 = newStr;
  unused4 = *(undefined4 *)(tree + 0x24);
  unused = *(undefined4 *)(tree + 0x24);
LAB_00411673:
  *result = *puVar3;
  result[1] = puVar3[1];
  result[2] = puVar3[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411694  WordMap2::insert_unique   (621 bytes, 2 ranges)   [analysis]
//   insert unless an equal key exists
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap2::insert_unique(undefined4 *result,int *tree,int value)

{
  uint uVar1;
  int node;
  bool goLeft;
  undefined4 result2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 result3;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 it;
  undefined4 local_54;
  int parent2;
  undefined4 result4;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int str;
  int unused;
  undefined1 local_12;
  undefined1 local_11;
  int unused2;
  int unused3;
  int parent;
  
  parent = tree[9];
  node = *(int *)(parent + 4);
  goLeft = true;
  while (node != 0) {
    unused2 = value;
    unused3 = node;
    parent = node;
    uVar1 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),*(byte **)(node + 0x18),
                         *(uint *)(*(int *)(node + 0x18) + -4));
    goLeft = (int)uVar1 < 0;
    if (goLeft) {
      node = *(int *)(node + 8);
    }
    else {
      node = *(int *)(node + 0xc);
    }
  }
  if ((char)tree[0xb] == '\0') {
    parent2 = parent;
    if (goLeft) {
      local_60 = *(int *)(tree[9] + 8);
      if (local_60 == parent) {
        local_12 = 1;
        WordMap2::__insert((int)&result3,tree,0,parent,value);
        *result = result3;
        result[1] = local_8c;
        result[2] = local_88;
        *(undefined1 *)(result + 4) = local_12;
        return result;
      }
      __rwstd::__rb_tree::iterator::decrement_411c1c((int)&it);
    }
    unused = parent2;
    str = parent2 + 0x10;
    uVar1 = std::string::compare(str,0,*(uint *)(*(int *)(parent2 + 0x18) + -4),
                         *(byte **)(value + 8),*(uint *)(*(int *)(value + 8) + -4));
    if ((int)uVar1 < 0) {
      local_1d = 1;
      WordMap2::__insert((int)&result2,tree,0,parent,value);
      *result = result2;
      result[1] = local_b4;
      result[2] = local_b0;
      *(undefined1 *)(result + 4) = local_1d;
    }
    else {
      *result = it;
      result[1] = local_54;
      result[2] = parent2;
      *(undefined1 *)(result + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    WordMap2::__insert((int)&result4,tree,0,parent,value);
    *result = result4;
    result[1] = local_44;
    result[2] = local_40;
    *(undefined1 *)(result + 4) = local_11;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411904  WordMap2::__insert   (790 bytes)   [analysis]
//   links a new node under the parent and rebalances
//   file placement: inferred (address adjacency)
int __cdecl WordMap2::__insert(int result,int *tree,int forceLeft,int parent,int value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *node;
  uint uVar5;
  undefined4 *puVar6;
  
  node = WordMap2::__get_node(tree,value);
  tree[10] = tree[10] + 1;
  if (((parent == tree[9]) || (forceLeft != 0)) ||
     (uVar5 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),
                           *(byte **)(parent + 0x18),*(uint *)(*(int *)(parent + 0x18) + -4)),
     (int)uVar5 < 0)) {
    *(undefined4 **)(parent + 8) = node;
    if (parent == tree[9]) {
      *(undefined4 **)(tree[9] + 4) = node;
      *(undefined4 **)(tree[9] + 0xc) = node;
    }
    else if (parent == *(int *)(tree[9] + 8)) {
      *(undefined4 **)(tree[9] + 8) = node;
    }
  }
  else {
    *(undefined4 **)(parent + 0xc) = node;
    if (parent == *(int *)(tree[9] + 0xc)) {
      *(undefined4 **)(tree[9] + 0xc) = node;
    }
  }
  node[1] = parent;
  puVar6 = node;
  while ((puVar6 != *(undefined4 **)(tree[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(tree[9] + 4) = 1;
  *(undefined4 **)(result + 8) = node;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c1c  __rwstd::__rb_tree::iterator::decrement_411c1c   (107 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042e9d8 (107 bytes; the code occurs several times, e.g. one template instance per type). --iterator (in-order predecessor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::decrement_411c1c(int it)

{
  int *node;
  int parent;
  
  node = *(int **)(it + 8);
  if ((*node == 0) && (node == *(int **)(node[1] + 4))) {
    *(int *)(it + 8) = node[3];
  }
  else if (*(int *)(*(int *)(it + 8) + 8) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 8);
        parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    *(int *)(it + 8) = parent;
  }
  else {
    for (parent = *(int *)(*(int *)(it + 8) + 8); *(int *)(parent + 0xc) != 0;
        parent = *(int *)(parent + 0xc)) {
    }
    *(int *)(it + 8) = parent;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c88  std::vector_ptr::insert_aux_411c88   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_411c88(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x476534);
  storage = *(undefined4 **)(vec + 8);
  if (storage == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 3;
    }
    if (newCapacity >> 2 == 0) {
      newCapacity = 0x100;
    }
    else {
      newCapacity = (newCapacity >> 2) * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
    }
    std::copy_ptr(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411e60  __rwstd::__rb_tree::iterator::increment_411e60   (99 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aec0 (99 bytes; the code occurs several times, e.g. one template instance per type). ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::iterator::increment_411e60(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return it;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ec4  WordListMap::AllocateNode_411ec4   (297 bytes, 2 ranges)   [notes (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00448c4c (297 bytes; the code occurs several times, e.g. one template instance per type). node slab allocator for the duplicate-suppression map per your notes. Entry checked; body not read
//   file placement: inferred (address adjacency)
void __cdecl WordListMap::AllocateNode_411ec4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x476594);
  piVar1 = (int *)operator_new();
  if (piVar1 == (int *)0x0) {
    badAlloc2 = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc2,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = operator_new();
  if (iVar2 == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412010  WordMap3::erase_range   (258 bytes)   [analysis]
//   __rb_tree::erase(first, last)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap3::erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode)

{
  undefined4 itLo;
  undefined4 itHi;
  int itNode;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int lastNode;
  undefined4 next [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 ret [4];
  
  ret[2] = *(undefined4 *)(tree + 0x24);
  itNode = *(int *)(tree + 0x24);
  local_1c = *(int *)(itNode + 8);
  if (((local_1c == firstNode) && (local_2c = itNode, itNode == lastNode)) &&
     (*(int *)(tree + 0x28) != 0)) {
    WordMap3::__erase(tree,*(int *)(itNode + 4));
    itNode = *(int *)(tree + 0x24);
    *(int *)(itNode + 8) = itNode;
    *(undefined4 *)(itNode + 4) = 0;
    *(int *)(itNode + 0xc) = itNode;
    *(undefined4 *)(tree + 0x28) = 0;
    local_44[2] = *(undefined4 *)(tree + 0x24);
    puVar4 = local_44;
    puVar5 = ret;
    for (itNode = 4; itNode != 0; itNode = itNode + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (itNode = firstNode, itHi = firstHi, itLo = firstLo, firstNode != lastNode) {
      __rwstd::__rb_tree::iterator::increment_41288c((int)&firstLo);
      WordMap3::erase(next,tree,itLo,itHi,itNode);
      puVar4 = next;
      puVar5 = ret;
      for (itNode = 4; itNode != 0; itNode = itNode + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *result = ret[0];
  result[1] = ret[1];
  result[2] = ret[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412114  WordMap3::__erase   (262 bytes)   [analysis]
//   returns a subtree's nodes to the free list
//   file placement: inferred (address adjacency)
void __cdecl WordMap3::__erase(int tree,int node)

{
  int iVar1;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4765d0);
  do {
    if (node == 0) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    WordMap3::__erase(tree,*(int *)(node + 0xc));
    iVar1 = *(int *)(node + 8);
    *(undefined4 *)(node + 0xc) = *(undefined4 *)(tree + 0x18);
    if ((node != -0x10) && (*(int *)(node + 0x18) != 0)) {
      if (*(int *)(*(int *)(node + 0x18) + -0xc) != -1) {
        strRep = (int *)(*(int *)(node + 0x18) + -0xc);
        if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep = *strRep + -1;
          prevRefs = *strRep + 1;
        }
        if (prevRefs != 0) goto LAB_004121f3;
      }
      operator_delete();
      *(undefined4 *)(node + 0x18) = 0;
    }
LAB_004121f3:
    *(int *)(tree + 0x18) = node;
    node = iVar1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041221c  __rwstd::__rb_tree::__deallocate_buffers_41221c   (63 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042af24 (63 bytes; the code occurs several times, e.g. one template instance per type). frees every node buffer of a tree
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__deallocate_buffers_41221c(int tree)

{
  while (*(undefined4 **)(tree + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(tree + 0x10) = **(undefined4 **)(tree + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041225c  std::vector_string::insert_aux   (893 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004048f4. std::vector<std::string> insert at a position, growing the storage (doubling, at least 64) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_string::insert_aux(int vec,int pos,int value)

{
  uint len;
  int refs;
  int newCapacity;
  int storage;
  int slot;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  int end;
  
  __InitExceptBlockLDTC(0x47664c);
  newCapacity = *(int *)(vec + 8);
  if (newCapacity == *(int *)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 0xf;
    }
    if (newCapacity >> 4 == 0) {
      newCapacity = 0x40;
    }
    else {
      newCapacity = (newCapacity >> 4) * 2;
    }
    storage = operator_new();
    if (storage == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(vec + 4),pos,storage);
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    slot = (slot >> 4) * 0x10 + storage;
    if (slot != 0) {
      *(undefined4 *)(slot + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(slot,len,len);
        *(int **)(slot + 8) = rep + 3;
        memcpy(*(undefined4 **)(slot + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(slot + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(slot + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::uninitialized_copy_string(pos,*(int *)(vec + 8),(slot >> 4) * 0x10 + storage + 0x10);
    slot = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::_Destroy_range_string(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(int *)(vec + 0x18) = newCapacity * 0x10 + storage;
    *(int *)(vec + 8) = (slot >> 4) * 0x10 + storage + 0x10;
    *(int *)(vec + 4) = storage;
  }
  else {
    end = newCapacity;
    if (newCapacity != 0) {
      *(undefined4 *)(newCapacity + 8) = 0;
      storage = *(int *)(*(int *)(newCapacity + -8) + -0xc);
      if (storage == -1 || storage + 1 < 0) {
        len = *(uint *)(*(int *)(newCapacity + -8) + -4);
        rep = std::string::__getRep(newCapacity,len,len);
        *(int **)(end + 8) = rep + 3;
        memcpy(*(undefined4 **)(end + 8),*(undefined4 **)(newCapacity + -8),len);
      }
      else {
        *(undefined4 *)(newCapacity + 8) = *(undefined4 *)(newCapacity + -8);
        rep = (int *)(*(int *)(newCapacity + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    std::copy_backward_string(pos,*(int *)(vec + 8) + -0x10,*(int *)(vec + 8));
    std::string::operator_assign(pos,value);
    *(int *)(vec + 8) = *(int *)(vec + 8) + 0x10;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004125fc  std::copy_backward_string   (46 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00404d2c. copy_backward over std::string objects (16 bytes each)
//   file placement: inferred (address adjacency)
int __cdecl std::copy_backward_string(int first,int last,int destEnd)

{
  while (last != first) {
    last = last + -0x10;
    destEnd = destEnd + -0x10;
    std::string::operator_assign(destEnd,last);
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041262c  std::uninitialized_copy_string   (293 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00404d5c. copy-constructs std::string objects from [first, last) into raw storage
//   file placement: inferred (address adjacency)
int __cdecl std::uninitialized_copy_string(int first,int last,int dest)

{
  int refs;
  uint len;
  int src;
  int dst;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4766e4);
  while (dst = dest, src = first, src != last) {
    dest = dst + 0x10;
    first = src + 0x10;
    if (dst != 0) {
      *(undefined4 *)(dst + 8) = 0;
      refs = *(int *)(*(int *)(src + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(src + 8) + -4);
        rep = std::string::__getRep(dst,len,len);
        *(int **)(dst + 8) = rep + 3;
        memcpy(*(undefined4 **)(dst + 8),*(undefined4 **)(src + 8),len);
      }
      else {
        *(undefined4 *)(dst + 8) = *(undefined4 *)(src + 8);
        rep = (int *)(*(int *)(dst + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412778  std::_Destroy_range_16   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404ea8 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16(int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412790  WordMap3::lower_bound   (251 bytes)   [analysis]
//   first node whose key is not less than the string
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap3::lower_bound(undefined4 *result,int tree,int key)

{
  uint uVar1;
  int node;
  undefined4 *puVar3;
  undefined4 newStr [2];
  undefined4 unused;
  int unused2;
  undefined4 newStr2 [2];
  int unused3;
  undefined4 unused4;
  int unused5;
  int local_10;
  int unused6;
  int candidate;
  
  candidate = *(int *)(tree + 0x24);
  node = *(int *)(*(int *)(tree + 0x24) + 4);
  while (node != 0) {
    unused6 = node;
    uVar1 = std::string::compare(node + 0x10,0,*(uint *)(*(int *)(node + 0x18) + -4),
                         *(byte **)(key + 8),*(uint *)(*(int *)(key + 8) + -4));
    if ((int)uVar1 < 0) {
      node = *(int *)(node + 0xc);
    }
    else {
      candidate = node;
      node = *(int *)(node + 8);
    }
  }
  unused3 = candidate;
  local_10 = *(int *)(tree + 0x24);
  unused2 = local_10;
  if (local_10 != candidate) {
    unused5 = candidate;
    uVar1 = std::string::compare(key,0,*(uint *)(*(int *)(key + 8) + -4),*(byte **)(candidate + 0x18),
                         *(uint *)(*(int *)(candidate + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = newStr2;
      goto LAB_0041286b;
    }
  }
  puVar3 = newStr;
  unused4 = *(undefined4 *)(tree + 0x24);
  unused = *(undefined4 *)(tree + 0x24);
LAB_0041286b:
  *result = *puVar3;
  result[1] = puVar3[1];
  result[2] = puVar3[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041288c  __rwstd::__rb_tree::iterator::increment_41288c   (99 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aec0 (99 bytes; the code occurs several times, e.g. one template instance per type). ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment_41288c(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004128f0  WordMap3::erase   (2455 bytes, 2 ranges)   [analysis]
//   __rb_tree::erase(iterator)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap3::erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *node;
  undefined4 *sehChainHead;
  undefined4 it;
  undefined4 itHi2;
  int itNode2;
  int unused;
  int unused2;
  int *strRep;
  int *local_90;
  int *local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *unused3;
  int *unused4;
  int *local_4c;
  int local_48;
  int *unused5;
  int *local_40;
  int *local_3c;
  char local_35;
  int *dest;
  int local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *local_8;
  
  __InitExceptBlockLDTC(0x47672c);
  it = itLo;
  itHi2 = itHi;
  itNode2 = itNode;
  local_30 = *(int *)(tree + 0x24);
  if (local_30 != itNode) {
    __rwstd::__rb_tree::iterator::increment_41288c((int)&it);
  }
  __rwstd::__rb_tree::__set_node_41328c((undefined4*)&dest,itNode);
  local_35 = '\0';
  local_3c = dest + 2;
  piVar2 = dest;
  if (*local_3c == 0) {
    local_40 = dest + 3;
    if (*local_40 == 0) {
      node = (int *)dest[1];
      unused5 = dest;
      local_48 = dest[1];
      if (*(int *)(tree + 0x24) == local_48) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        *(undefined4 *)(*(int *)(tree + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_48 + 8) == dest) {
        *(undefined4 *)(local_48 + 8) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 8) = local_48;
        }
      }
      else {
        *(undefined4 *)(local_48 + 0xc) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = local_48;
        }
      }
      local_35 = '\x01';
    }
    else {
      node = (int *)dest[3];
    }
  }
  else {
    local_4c = dest + 3;
    if (*local_4c == 0) {
      node = (int *)dest[2];
    }
    else {
      for (piVar2 = (int *)dest[3]; piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      }
      node = (int *)piVar2[3];
    }
  }
  if ((local_35 == '\0') && (piVar2 != dest)) {
    *(int **)(dest[2] + 4) = piVar2;
    piVar2[2] = dest[2];
    if (piVar2 == (int *)dest[3]) {
      if (node != (int *)0x0) {
        node[1] = (int)piVar2;
      }
    }
    else {
      if (node != (int *)0x0) {
        node[1] = piVar2[1];
      }
      *(int **)(piVar2[1] + 8) = node;
      piVar2[3] = dest[3];
      *(int **)(dest[3] + 4) = piVar2;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
      *(int **)(*(int *)(tree + 0x24) + 4) = piVar2;
    }
    else if (*(int **)(dest[1] + 8) == dest) {
      *(int **)(dest[1] + 8) = piVar2;
    }
    else {
      *(int **)(dest[1] + 0xc) = piVar2;
    }
    piVar2[1] = dest[1];
    if (node == (int *)0x0) {
      node = piVar2;
    }
    unused4 = dest;
    local_58 = *piVar2;
    *piVar2 = *dest;
    *dest = local_58;
    local_8c = dest;
    unused3 = piVar2;
  }
  else {
    local_8c = piVar2;
    if (local_35 == '\0') {
      node[1] = piVar2[1];
      if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
        *(int **)(*(int *)(tree + 0x24) + 4) = node;
      }
      else if (*(int **)(dest[1] + 8) == dest) {
        *(int **)(dest[1] + 8) = node;
      }
      else {
        *(int **)(dest[1] + 0xc) = node;
      }
      if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
        local_5c = dest + 3;
        if (*local_5c == 0) {
          *(int *)(*(int *)(tree + 0x24) + 8) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__minimum_41329c((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 8) = uVar1;
        }
      }
      if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
        local_60 = dest + 2;
        if (*local_60 == 0) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = dest[1];
        }
        else {
          uVar1 = __rwstd::__rb_tree::__maximum_4132bc((int)node);
          *(undefined4 *)(*(int *)(tree + 0x24) + 0xc) = uVar1;
        }
      }
    }
  }
  if ((node != *(int **)(tree + 0x24)) && (*local_8c != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((node == *(int **)(*(int *)(tree + 0x24) + 4)) || (*node != 1))
            goto LAB_00413142;
            if (node != *(int **)(node[1] + 8)) break;
            piVar2 = *(int **)(node[1] + 0xc);
            if (piVar2 == (int *)0x0) {
              *node = 0;
              node = (int *)node[1];
            }
            else {
              if (*piVar2 == 0) {
                *piVar2 = 1;
                *(undefined4 *)node[1] = 0;
                iVar3 = node[1];
                local_64 = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_64 + 8);
                if (*(int *)(local_64 + 8) != 0) {
                  *(int *)(*(int *)(local_64 + 8) + 4) = iVar3;
                }
                *(undefined4 *)(local_64 + 4) = *(undefined4 *)(iVar3 + 4);
                if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                  *(int *)(*(int *)(tree + 0x24) + 4) = local_64;
                }
                else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                  *(int *)(*(int *)(iVar3 + 4) + 8) = local_64;
                }
                else {
                  *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_64;
                }
                *(int *)(local_64 + 8) = iVar3;
                *(int *)(iVar3 + 4) = local_64;
                piVar2 = *(int **)(node[1] + 0xc);
              }
              if (piVar2 == (int *)0x0) {
                *node = 0;
                node = (int *)node[1];
              }
              else {
                if (((piVar2[2] != 0) && (*(int *)piVar2[2] != 1)) ||
                   ((piVar2[3] != 0 && (*(int *)piVar2[3] != 1)))) {
                  if ((piVar2[3] == 0) || (*(int *)piVar2[3] == 1)) {
                    if (piVar2[2] != 0) {
                      *(undefined4 *)piVar2[2] = 1;
                    }
                    *piVar2 = 0;
                    local_68 = piVar2[2];
                    piVar2[2] = *(int *)(local_68 + 0xc);
                    local_6c = (int *)(local_68 + 0xc);
                    if (*local_6c != 0) {
                      *(int **)(*(int *)(local_68 + 0xc) + 4) = piVar2;
                    }
                    *(int *)(local_68 + 4) = piVar2[1];
                    if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_68;
                    }
                    else if (piVar2 == *(int **)(piVar2[1] + 0xc)) {
                      *(int *)(piVar2[1] + 0xc) = local_68;
                    }
                    else {
                      *(int *)(piVar2[1] + 8) = local_68;
                    }
                    *(int **)(local_68 + 0xc) = piVar2;
                    piVar2[1] = local_68;
                    piVar2 = *(int **)(node[1] + 0xc);
                  }
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = *(int *)node[1];
                    *(undefined4 *)node[1] = 1;
                    if (piVar2[3] != 0) {
                      *(undefined4 *)piVar2[3] = 1;
                    }
                    iVar3 = node[1];
                    local_70 = *(int *)(iVar3 + 0xc);
                    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_70 + 8);
                    if (*(int *)(local_70 + 8) != 0) {
                      *(int *)(*(int *)(local_70 + 8) + 4) = iVar3;
                    }
                    *(undefined4 *)(local_70 + 4) = *(undefined4 *)(iVar3 + 4);
                    if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = local_70;
                    }
                    else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 8)) {
                      *(int *)(*(int *)(iVar3 + 4) + 8) = local_70;
                    }
                    else {
                      *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_70;
                    }
                    *(int *)(local_70 + 8) = iVar3;
                    *(int *)(iVar3 + 4) = local_70;
                  }
                  goto LAB_00413142;
                }
                *piVar2 = 0;
                node = (int *)node[1];
              }
            }
          }
          piVar2 = *(int **)(node[1] + 8);
          if (piVar2 != (int *)0x0) break;
          *node = 0;
          node = (int *)node[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = 1;
          *(undefined4 *)node[1] = 0;
          iVar3 = node[1];
          local_74 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_74 + 0xc);
          local_78 = (int *)(local_74 + 0xc);
          if (*local_78 != 0) {
            *(int *)(*(int *)(local_74 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(local_74 + 4) = *(undefined4 *)(iVar3 + 4);
          if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
            *(int *)(*(int *)(tree + 0x24) + 4) = local_74;
          }
          else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_74;
          }
          else {
            *(int *)(*(int *)(iVar3 + 4) + 8) = local_74;
          }
          *(int *)(local_74 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = local_74;
          piVar2 = *(int **)(node[1] + 8);
        }
        if (piVar2 != (int *)0x0) break;
        *node = 0;
        node = (int *)node[1];
      }
      if (((piVar2[3] != 0) && (*(int *)piVar2[3] != 1)) ||
         ((piVar2[2] != 0 && (*(int *)piVar2[2] != 1)))) break;
      *piVar2 = 0;
      node = (int *)node[1];
    }
    if ((piVar2[2] == 0) || (*(int *)piVar2[2] == 1)) {
      local_7c = piVar2 + 3;
      if (*local_7c != 0) {
        *(undefined4 *)piVar2[3] = 1;
      }
      *piVar2 = 0;
      local_80 = piVar2[3];
      piVar2[3] = *(int *)(local_80 + 8);
      local_84 = (int *)(local_80 + 8);
      if (*local_84 != 0) {
        *(int **)(*(int *)(local_80 + 8) + 4) = piVar2;
      }
      *(int *)(local_80 + 4) = piVar2[1];
      if (piVar2 == *(int **)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_80;
      }
      else if (piVar2 == *(int **)(piVar2[1] + 8)) {
        *(int *)(piVar2[1] + 8) = local_80;
      }
      else {
        *(int *)(piVar2[1] + 0xc) = local_80;
      }
      *(int **)(local_80 + 8) = piVar2;
      piVar2[1] = local_80;
      piVar2 = *(int **)(node[1] + 8);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *(int *)node[1];
      *(undefined4 *)node[1] = 1;
      if (piVar2[2] != 0) {
        *(undefined4 *)piVar2[2] = 1;
      }
      iVar3 = node[1];
      local_88 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_88 + 0xc);
      if (*(int *)(local_88 + 0xc) != 0) {
        *(int *)(*(int *)(local_88 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(local_88 + 4) = *(undefined4 *)(iVar3 + 4);
      if (iVar3 == *(int *)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = local_88;
      }
      else if (iVar3 == *(int *)(*(int *)(iVar3 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar3 + 4) + 0xc) = local_88;
      }
      else {
        *(int *)(*(int *)(iVar3 + 4) + 8) = local_88;
      }
      *(int *)(local_88 + 0xc) = iVar3;
      *(int *)(iVar3 + 4) = local_88;
    }
LAB_00413142:
    *node = 1;
  }
  local_8c[3] = *(int *)(tree + 0x18);
  local_90 = local_8c + 4;
  if (local_90 != (int *)0x0) {
    ehContext = 0x14;
    ehDtorCount = ehDtorCount + -2;
    if (local_8c[6] != 0) {
      if (*(int *)(local_8c[6] + -0xc) != -1) {
        strRep = (int *)(local_8c[6] + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar3 = *strRep + 1;
        }
        if (iVar3 != 0) goto LAB_0041324c;
      }
      unused2 = local_8c[6] + -0xc;
      unused = local_8c[6] + -0xc;
      local_8 = local_90;
      operator_delete();
      local_8[2] = 0;
    }
  }
LAB_0041324c:
  *(int **)(tree + 0x18) = local_8c;
  *(int *)(tree + 0x28) = *(int *)(tree + 0x28) + -1;
  *result = it;
  result[1] = itHi2;
  result[2] = itNode2;
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041328c  __rwstd::__rb_tree::__set_node_41328c   (13 bytes)   [analysis]
//   stores a node pointer
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__set_node_41328c(undefined4 *dest,undefined4 node)

{
  *dest = node;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041329c  __rwstd::__rb_tree::__minimum_41329c   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042ae80 (29 bytes; the code occurs several times, e.g. one template instance per type). leftmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__minimum_41329c(int node)

{
  for (; *(int *)(node + 8) != 0; node = *(int *)(node + 8)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132bc  __rwstd::__rb_tree::__maximum_4132bc   (29 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042aea0 (29 bytes; the code occurs several times, e.g. one template instance per type). rightmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__maximum_4132bc(int node)

{
  for (; *(int *)(node + 0xc) != 0; node = *(int *)(node + 0xc)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x004132dc  WordMap3::insert_unique   (621 bytes, 2 ranges)   [analysis]
//   insert unless an equal key exists
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap3::insert_unique(undefined4 *result,int *tree,int value)

{
  uint uVar1;
  int node;
  bool goLeft;
  undefined4 result2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 result3;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 it;
  undefined4 local_54;
  int parent2;
  undefined4 result4;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int str;
  int unused;
  undefined1 local_12;
  undefined1 local_11;
  int unused2;
  int unused3;
  int parent;
  
  parent = tree[9];
  node = *(int *)(parent + 4);
  goLeft = true;
  while (node != 0) {
    unused2 = value;
    unused3 = node;
    parent = node;
    uVar1 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),*(byte **)(node + 0x18),
                         *(uint *)(*(int *)(node + 0x18) + -4));
    goLeft = (int)uVar1 < 0;
    if (goLeft) {
      node = *(int *)(node + 8);
    }
    else {
      node = *(int *)(node + 0xc);
    }
  }
  if ((char)tree[0xb] == '\0') {
    parent2 = parent;
    if (goLeft) {
      local_60 = *(int *)(tree[9] + 8);
      if (local_60 == parent) {
        local_12 = 1;
        WordMap3::__insert((int)&result3,tree,0,parent,value);
        *result = result3;
        result[1] = local_8c;
        result[2] = local_88;
        *(undefined1 *)(result + 4) = local_12;
        return result;
      }
      __rwstd::__rb_tree::iterator::decrement_413a0c((int)&it);
    }
    unused = parent2;
    str = parent2 + 0x10;
    uVar1 = std::string::compare(str,0,*(uint *)(*(int *)(parent2 + 0x18) + -4),
                         *(byte **)(value + 8),*(uint *)(*(int *)(value + 8) + -4));
    if ((int)uVar1 < 0) {
      local_1d = 1;
      WordMap3::__insert((int)&result2,tree,0,parent,value);
      *result = result2;
      result[1] = local_b4;
      result[2] = local_b0;
      *(undefined1 *)(result + 4) = local_1d;
    }
    else {
      *result = it;
      result[1] = local_54;
      result[2] = parent2;
      *(undefined1 *)(result + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    WordMap3::__insert((int)&result4,tree,0,parent,value);
    *result = result4;
    result[1] = local_44;
    result[2] = local_40;
    *(undefined1 *)(result + 4) = local_11;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041354c  WordMap3::__insert   (790 bytes)   [analysis]
//   links a new node under the parent and rebalances
//   file placement: inferred (address adjacency)
int __cdecl WordMap3::__insert(int result,int *tree,int forceLeft,int parent,int value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *node;
  uint uVar5;
  undefined4 *puVar6;
  
  node = WordMap3::__get_node(tree,value);
  tree[10] = tree[10] + 1;
  if (((parent == tree[9]) || (forceLeft != 0)) ||
     (uVar5 = std::string::compare(value,0,*(uint *)(*(int *)(value + 8) + -4),
                           *(byte **)(parent + 0x18),*(uint *)(*(int *)(parent + 0x18) + -4)),
     (int)uVar5 < 0)) {
    *(undefined4 **)(parent + 8) = node;
    if (parent == tree[9]) {
      *(undefined4 **)(tree[9] + 4) = node;
      *(undefined4 **)(tree[9] + 0xc) = node;
    }
    else if (parent == *(int *)(tree[9] + 8)) {
      *(undefined4 **)(tree[9] + 8) = node;
    }
  }
  else {
    *(undefined4 **)(parent + 0xc) = node;
    if (parent == *(int *)(tree[9] + 0xc)) {
      *(undefined4 **)(tree[9] + 0xc) = node;
    }
  }
  node[1] = parent;
  puVar6 = node;
  while ((puVar6 != *(undefined4 **)(tree[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(tree[9] + 4) = 1;
  *(undefined4 **)(result + 8) = node;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413864  WordMap3::__get_node   (381 bytes, 2 ranges)   [analysis]
//   takes a node from the free list and copy-constructs the value
//   file placement: inferred (address adjacency)
undefined4 * __cdecl WordMap3::__get_node(int *tree,int value)

{
  int refs;
  uint len;
  undefined4 *node;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476788);
  node = (undefined4 *)tree[6];
  if (node == (undefined4 *)0x0) {
    if (tree[7] == tree[8]) {
      WordListMap::AllocateNode_411ec4(tree);
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
    else {
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x28;
    }
  }
  else {
    tree[6] = *(int *)(tree[6] + 0xc);
  }
  node[1] = 0;
  node[2] = 0;
  node[3] = 0;
  *node = 0;
  if (node + 4 != (undefined4 *)0x0) {
    node[6] = 0;
    refs = *(int *)(*(int *)(value + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(value + 8) + -4);
      rep = std::string::__getRep(node + 4,len,len);
      node[6] = rep + 3;
      memcpy((undefined4 *)node[6],*(undefined4 **)(value + 8),len);
    }
    else {
      node[6] = *(undefined4 *)(value + 8);
      rep = (int *)(node[6] + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    node[8] = *(undefined4 *)(value + 0x10);
  }
  *sehChainHead = sehPrevFrame;
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413a0c  __rwstd::__rb_tree::iterator::decrement_413a0c   (107 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0042e9d8 (107 bytes; the code occurs several times, e.g. one template instance per type). --iterator (in-order predecessor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::decrement_413a0c(int it)

{
  int *node;
  int parent;
  
  node = *(int **)(it + 8);
  if ((*node == 0) && (node == *(int **)(node[1] + 4))) {
    *(int *)(it + 8) = node[3];
  }
  else if (*(int *)(*(int *)(it + 8) + 8) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 8);
        parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    *(int *)(it + 8) = parent;
  }
  else {
    for (parent = *(int *)(*(int *)(it + 8) + 8); *(int *)(parent + 0xc) != 0;
        parent = *(int *)(parent + 0xc)) {
    }
    *(int *)(it + 8) = parent;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413a78  std::vector_string::resize   (352 bytes)   [analysis]
//   resize(n) of a vector of strings
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00413adf) */
void __cdecl std::vector_string::resize(int vec,uint n)

{
  int first;
  int last;
  int iVar3;
  int *strRep;
  int dest;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 value [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4767dc);
  iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  if ((uint)(iVar3 >> 4) < n) {
    local_c = &g_emptyStringData;
    iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    std::vector_string::insert_fill(vec,*(int *)(vec + 8),n - (iVar3 >> 4),(int)value);
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        strRep = (int *)(local_c + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar3 = *strRep + 1;
        }
        if (iVar3 != 0) goto LAB_00413bc8;
      }
      operator_delete();
    }
  }
  else {
    iVar3 = *(int *)(vec + 8);
    last = iVar3 - *(int *)(vec + 4);
    if (last < 0) {
      last = last + 0xf;
    }
    if (n < (uint)(last >> 4)) {
      dest = n * 0x10 + *(int *)(vec + 4);
      first = std::copy_string(iVar3,iVar3,dest);
      last = *(int *)(vec + 8);
      iVar3 = iVar3 - dest;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (iVar3 >> 4) * -0x10;
      std::_Destroy_range_string(vec,first,last);
    }
  }
LAB_00413bc8:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413bd8  std::vector_string::insert_fill   (646 bytes, 2 ranges)   [analysis]
//   inserts n copies of a string at a position
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_string::insert_fill(int vec,int pos,uint n,int value)

{
  int iVar1;
  int n2;
  uint *puVar3;
  undefined4 *sehChainHead;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x476838);
  if (n == 0) {
    *sehChainHead = local_2c;
  }
  else {
    iVar1 = *(int *)(vec + 8);
    n2 = *(int *)(vec + 0x18) - iVar1;
    if (n2 < 0) {
      n2 = n2 + 0xf;
    }
    if ((uint)(n2 >> 4) < n) {
      iVar1 = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      local_3c = iVar1 >> 4;
      if (n < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &n;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = operator_new();
      if (iVar1 == 0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
      }
      ehContext = 0x14;
      std::uninitialized_copy_string(*(int *)(vec + 4),pos,iVar1);
      n2 = pos - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::uninitialized_fill_n_string((n2 >> 4) * 0x10 + iVar1,n,value);
      n2 = pos - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::uninitialized_copy_string(pos,*(int *)(vec + 8),((n2 >> 4) + n) * 0x10 + iVar1);
      ehContext = 0;
      n2 = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::_Destroy_range_string(vec,*(int *)(vec + 4),*(int *)(vec + 8));
      operator_delete();
      *(int *)(vec + 0x18) = local_38 * 0x10 + iVar1;
      *(uint *)(vec + 8) = (n2 >> 4) * 0x10 + iVar1 + n * 0x10;
      *(int *)(vec + 4) = iVar1;
    }
    else {
      n2 = iVar1 - pos;
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      if (n < (uint)(n2 >> 4)) {
        std::uninitialized_copy_string(iVar1 + n * -0x10,iVar1,iVar1);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 0x10;
        std::copy_backward_string(pos,iVar1 + n * -0x10,iVar1);
        std::fill_string(pos,n * 0x10 + pos,value);
      }
      else {
        n2 = iVar1 - pos;
        if (n2 < 0) {
          n2 = n2 + 0xf;
        }
        n2 = n - (n2 >> 4);
        std::uninitialized_fill_n_string(iVar1,n2,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n2 * 0x10;
        std::uninitialized_copy_string(pos,iVar1,n * 0x10 + pos);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - n2) * 0x10;
        std::fill_string(pos,iVar1,value);
      }
    }
    *sehChainHead = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413e80  std::fill_string   (43 bytes)   [analysis]
//   assigns a string to every element of a range
//   file placement: inferred (address adjacency)
void __cdecl std::fill_string(int first,int last,int value)

{
  for (; last != first; first = first + 0x10) {
    std::string::operator_assign(first,value);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413eac  std::uninitialized_fill_n_string   (279 bytes, 2 ranges)   [analysis]
//   copy-constructs n strings
//   file placement: inferred (address adjacency)
void __cdecl std::uninitialized_fill_n_string(int dest,int n,int value)

{
  int iVar1;
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476888);
  iVar1 = dest;
  while (dest = iVar1, refs = n + -1, n != 0) {
    iVar1 = dest + 0x10;
    n = refs;
    if (dest != 0) {
      *(undefined4 *)(dest + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(dest,len,len);
        *(int **)(dest + 8) = rep + 3;
        memcpy(*(undefined4 **)(dest + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(dest + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(dest + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413fec  std::copy_string   (50 bytes)   [analysis]
//   copy over a range of strings
//   file placement: inferred (address adjacency)
int __cdecl std::copy_string(int first,int last,int dest)

{
  for (; last != first; first = first + 0x10) {
    std::string::operator_assign(dest,first);
    dest = dest + 0x10;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414020  std::_Destroy_range_string   (182 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040483c. destroys the std::string objects in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_string(undefined4 vec,int first,int last)

{
  int str;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4768c0);
joined_r0x00414039:
  do {
    str = first;
    if (str == last) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    first = str + 0x10;
  } while ((str == 0) || (*(int *)(str + 8) == 0));
  if (*(int *)(*(int *)(str + 8) + -0xc) != -1) goto code_r0x0041405c;
  goto LAB_00414089;
code_r0x0041405c:
  strRep = (int *)(*(int *)(str + 8) + -0xc);
  if (strRep == &g_nullStringRep) {
    prevRefs = 1;
  }
  else if (strRep == &g_nullStringRep) {
    prevRefs = 1;
  }
  else {
    *strRep = *strRep + -1;
    prevRefs = *strRep + 1;
  }
  if (prevRefs == 0) {
LAB_00414089:
    operator_delete();
    *(undefined4 *)(str + 8) = 0;
  }
  goto joined_r0x00414039;
}

// ----------------------------------------------------------------------------------------------------
// 0x004140d8  std::vector_16::reserve   (788 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044caa8. reserve(n) for a vector of 16-byte elements (throws length_error past max_size)
//   file placement: inferred (address adjacency)
void __cdecl std::vector_16::reserve(int vec,uint n)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined4 *dest;
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  undefined1 str [8];
  int *str2;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x476930);
  if (n < 0x10000000) goto LAB_004142cd;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00402064;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00488a54);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  lengthError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x20;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = len;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep = str2 + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x14;
  lengthError[0] = &std::length_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004142b6;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_004142b6:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_00402008,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
LAB_004142cd:
  iVar2 = *(int *)(vec + 0x18) - *(int *)(vec + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) < n) {
    dest = (undefined4 *)operator_new();
    if (dest == (undefined4 *)0x0) {
      ehContext = 0x44;
      badAlloc = &std::bad_alloc::vftable;
      ehDtorCount = ehDtorCount + 2;
      _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
    }
    ehContext = 0x50;
    std::uninitialized_copy_16(*(undefined4 **)(vec + 4),*(undefined4 **)(vec + 8),dest);
    ehContext = 0;
    iVar2 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    std::_Destroy_range_16_414a7c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 8) = dest + (iVar2 >> 4) * 4;
    *(undefined4 **)(vec + 4) = dest;
    *(undefined4 **)(vec + 0x18) = dest + n * 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414410  std::uninitialized_copy_16   (126 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044cde0. copies 16-byte elements into raw storage
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::uninitialized_copy_16(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *src;
  undefined4 *dst;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4769bc);
  while (dst = dest, src = first, last != src) {
    first = src + 4;
    dest = dst + 4;
    if (dst != (undefined4 *)0x0) {
      *dst = *src;
      dst[1] = src[1];
      dst[2] = src[2];
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x004144b8  std::_Destroy_range_16_4144b8   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404ea8 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16_4144b8(int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004144d0  std::vector_16::insert_aux   (518 bytes, 2 ranges)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044cea0. insert at a position into a vector of 16-byte elements, growing the storage (doubling, at least 64)
//   file placement: inferred (address adjacency)
void __cdecl std::vector_16::insert_aux(int vec,undefined4 *pos,undefined4 *value)

{
  undefined4 *dest;
  int newCapacity;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined4 *end;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x476a38);
  end = *(undefined4 **)(vec + 8);
  if (end == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 0xf;
    }
    if (newCapacity >> 4 == 0) {
      newCapacity = 0x40;
    }
    else {
      newCapacity = (newCapacity >> 4) * 2;
    }
    dest = (undefined4 *)operator_new();
    if (dest == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
    }
    std::uninitialized_copy_16(*(undefined4 **)(vec + 4),pos,dest);
    iVar3 = (int)pos - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    puVar4 = dest + (iVar3 >> 4) * 4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *value;
      puVar4[1] = value[1];
      puVar4[2] = value[2];
    }
    iVar3 = (int)pos - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    std::uninitialized_copy_16(pos,*(undefined4 **)(vec + 8),dest + (iVar3 >> 4) * 4 + 4);
    iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    std::_Destroy_range_16_414a7c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = dest + newCapacity * 4;
    *(undefined4 **)(vec + 8) = dest + (iVar3 >> 4) * 4 + 4;
    *(undefined4 **)(vec + 4) = dest;
  }
  else {
    if (end != (undefined4 *)0x0) {
      *end = end[-4];
      end[1] = end[-3];
      end[2] = end[-2];
    }
    std::copy_backward_16(pos,*(undefined4 **)(vec + 8) + -4,*(undefined4 **)(vec + 8));
    for (newCapacity = 4; newCapacity != 0; newCapacity = newCapacity + -1) {
      *pos = *value;
      value = value + (uint)bVar5 * -2 + 1;
      pos = pos + (uint)bVar5 * -2 + 1;
    }
    *(int *)(vec + 8) = *(int *)(vec + 8) + 0x10;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004146f8  std::copy_backward_16   (47 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d0c8. copy_backward over 16-byte elements
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_16(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (last != first) {
    destEnd = destEnd + -4;
    last = last + -4;
    puVar2 = last;
    puVar3 = destEnd;
    for (i = 4; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414728  std::__final_insertion_sort   (92 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d0f8. last step of std::sort: insertion sort of the first 16, unguarded for the rest
//   file placement: inferred (address adjacency)
void __cdecl std::__final_insertion_sort(undefined4 *first,undefined4 *last,undefined *less)

{
  int iVar1;
  
  iVar1 = (int)last - (int)first;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    std::__insertion_sort(first,last,less);
  }
  else {
    std::__insertion_sort(first,first + 0x40,less);
    std::__unguarded_insertion_sort(first + 0x40,last);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414784  std::__insertion_sort   (156 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d154. insertion sort of [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::__insertion_sort(undefined4 *first,undefined4 *last,undefined *less)

{
  undefined4 *last2;
  undefined4 *puVar2;
  char cVar3;
  int i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 local_18;
  undefined4 unused;
  undefined4 unused2;
  undefined *unused3;
  
  bVar7 = 0;
  puVar2 = first;
  if (first != last) {
    while (last2 = puVar2 + 4, last2 != last) {
      unused3 = less;
      local_18 = *last2;
      unused = puVar2[5];
      unused2 = puVar2[6];
      cVar3 = (*(code *)less)();
      if (cVar3 == '\0') {
        std::__unguarded_linear_insert(last2);
        puVar2 = last2;
      }
      else {
        std::copy_backward_16(first,last2,puVar2 + 8);
        puVar5 = &local_18;
        puVar6 = first;
        for (i = 4; puVar2 = last2, i != 0; i = i + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414820  std::__unguarded_linear_insert   (72 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d1f0. moves one element left until in order
//   file placement: inferred (address adjacency)
void __cdecl std::__unguarded_linear_insert(undefined4 *last)

{
  char cVar1;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  code *in_stack_00000018;
  
  bVar6 = 0;
  while( true ) {
    puVar4 = last + -4;
    cVar1 = (*in_stack_00000018)();
    if (cVar1 == '\0') break;
    puVar3 = puVar4;
    puVar5 = last;
    for (i = 4; last = puVar4, i != 0; i = i + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  puVar4 = (undefined4 *)&GHIDRA_STACK(0x00000008);
  for (i = 4; i != 0; i = i + -1) {
    *last = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    last = last + (uint)bVar6 * -2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414868  std::__unguarded_insertion_sort   (63 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d238. unguarded insertion sort of [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::__unguarded_insertion_sort(undefined4 *first,undefined4 *last)

{
  for (; last != first; first = first + 4) {
    std::__unguarded_linear_insert(first);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004148a8  std::__introsort_loop   (320 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d278. quicksort with median-of-three pivots until ranges are 16 elements or fewer
//   file placement: inferred (address adjacency)
void __cdecl std::__introsort_loop(undefined4 *first,undefined4 *last,undefined4 depthLimit,undefined *less)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    iVar4 = (int)last - (int)first;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    if (iVar4 >> 4 < 0x11) break;
    cVar1 = (*(code *)less)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)less)();
      if (cVar1 == '\0') {
        (*(code *)less)();
      }
    }
    else {
      cVar1 = (*(code *)less)();
      if (cVar1 == '\0') {
        (*(code *)less)();
      }
    }
    puVar2 = std::__unguarded_partition(first,last);
    iVar4 = (int)puVar2 - (int)first;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    iVar3 = (int)last - (int)puVar2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar4 >> 4 < iVar3 >> 4) {
      std::__introsort_loop(first,puVar2,0,less);
      first = puVar2;
    }
    else {
      std::__introsort_loop(puVar2,last,0,less);
      last = puVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004149e8  std::__unguarded_partition   (148 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x0044d3b8. partitions [first, last) around the pivot
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::__unguarded_partition(undefined4 *first,undefined4 *last)

{
  char cVar1;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  code *in_stack_0000001c;
  undefined4 local_1c;
  undefined4 unused;
  undefined4 unused2;
  undefined4 *unused3;
  undefined4 *unused4;
  
  bVar5 = 0;
  while( true ) {
    while (cVar1 = (*in_stack_0000001c)(), cVar1 != '\0') {
      first = first + 4;
    }
    do {
      last = last + -4;
      cVar1 = (*in_stack_0000001c)();
    } while (cVar1 != '\0');
    if (last <= first) break;
    unused4 = last;
    unused3 = first;
    local_1c = *first;
    unused = first[1];
    unused2 = first[2];
    puVar3 = last;
    puVar4 = first;
    for (i = 4; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    puVar3 = &local_1c;
    puVar4 = last;
    for (i = 4; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    first = first + 4;
  }
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a7c  std::_Destroy_range_16_414a7c   (22 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0044d44c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16_414a7c(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

} // namespace tea
