// TEA.exe — runtime / library code "std_basic_filebuf"
// 13 functions, 0x004d04e0..0x004d8768. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d04e0  std::basic_filebuf<char>::basic_filebuf   (237 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_filebuf<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_filebuf_char::basic_filebuf
undefined4 * __cdecl std::basic_filebuf_char::basic_filebuf(undefined4 *self)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5141e4);
  std::basic_streambuf_char::basic_streambuf(self);
  *self = &std::basic_filebuf_char::vftable;
  uVar1 = FUN_004d0724();
  self[9] = uVar1;
  *(undefined1 *)(self + 10) = 0;
  *(undefined1 *)((int)self + 0x29) = 0;
  self[0xb] = 0;
  self[0xc] = 0x200;
  self[0xd] = 0;
  self[0x10] = 0;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  self[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  self[0xf] = puVar2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d072c  std::basic_filebuf<char>::basic_filebuf_4d072c   (275 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_filebuf<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_filebuf_char::basic_filebuf_4d072c
undefined4 * __cdecl std::basic_filebuf_char::basic_filebuf_4d072c(undefined4 *self,int vbasesBuilt)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514288);
  std::basic_streambuf_char::basic_streambuf(self);
  *self = &std::basic_filebuf_char::vftable;
  self[9] = vbasesBuilt;
  *(undefined1 *)(self + 10) = 0;
  *(undefined1 *)((int)self + 0x29) = 0;
  self[0xb] = 0;
  self[0xc] = 0x200;
  self[0xd] = 0;
  uVar1 = operator_new_array();
  self[0x10] = uVar1;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  self[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  self[0xf] = puVar2;
  if (vbasesBuilt == 0) {
    self[1] = 4;
  }
  else if (vbasesBuilt < 3) {
    self[1] = 8;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d0840  std::basic_filebuf<char>::~basic_filebuf   (129 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_filebuf_char::_dtor
void __cdecl std::basic_filebuf_char::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5142dc);
  if (self != (int *)0x0) {
    *self = (int)&std::basic_filebuf_char::vftable;
    FUN_004d08c4(self);
    operator_delete();
    operator_delete();
    std::basic_streambuf_char::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d2f90  std::basic_filebuf<char>::vf9   (1168 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::basic_filebuf_char::vf9
void __cdecl std::basic_filebuf_char::vf9(int *self)

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
  char *buffer;
  undefined4 *sehChainHead;
  int local_54;
  uint local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_35;
  int local_34;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  int loc2;
  
  __InitExceptBlockLDTC(0x514a84);
  iVar3 = FUN_004d348c((int)self);
  local_34 = FUN_004d3498((int)self);
  local_34 = iVar3 - local_34;
  iVar3 = FUN_004d0724();
  if (iVar3 == self[9]) {
    FUN_004d0a2c();
    *sehChainHead = sehPrevFrame;
    return;
  }
  iVar3 = FUN_004d348c((int)self);
  if ((iVar3 == 0) && (iVar3 = FUN_004d17a8((int)self), iVar3 != 0)) {
    iVar3 = FUN_004d34a4((int)self);
    iVar3 = iVar3 + self[0xc];
    uVar4 = FUN_004d34a4((int)self);
    FUN_004d1898((int)self,uVar4,iVar3);
    iVar3 = FUN_004d17a8((int)self);
    iVar5 = FUN_004d34a4((int)self);
    FUN_004d18b0((int)self,iVar3 - iVar5);
    FUN_004d187c((int)self,0,0,0);
    uVar6 = FUN_004d348c((int)self);
    uVar7 = FUN_004d34b0((int)self);
    if (uVar6 < uVar7) {
      local_3c = FUN_004d0a2c();
      bVar1 = FUN_004d1694((int *)&GHIDRA_STACK(0x00000008),&local_3c);
      if (!bVar1) {
        uVar2 = FUN_004d2f44(&GHIDRA_STACK(0x00000008));
        FUN_004d34bc(self,uVar2);
        FUN_004d1850((int)self,1);
        *(undefined1 *)((int)self + 0x29) = 1;
        puVar8 = (undefined1 *)FUN_004d348c((int)self);
        FUN_004d179c(puVar8);
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
    iVar3 = FUN_004d348c((int)self);
    local_34 = FUN_004d3498((int)self);
    local_34 = iVar3 - local_34;
  }
  iVar3 = FUN_004d348c((int)self);
  if ((iVar3 == 0) && (iVar3 = FUN_004d17a8((int)self), iVar3 == 0)) {
    FUN_004d1898((int)self,self[0x10],self[0x10] + self[0xc]);
  }
  *(undefined1 *)((int)self + 0x29) = 0;
  if (local_34 != 0) {
    ehContext = 8;
    FUN_004d3508(&loc2,(int)self);
    ehDtorCount = ehDtorCount + 1;
    piVar9 = (int *)FUN_004d35a0(&loc2);
    uVar4 = FUN_004d3420(piVar9);
    local_35 = (char)uVar4;
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc2,2);
    if (local_35 == '\0') {
      local_40 = local_34;
      local_44 = 0;
      buffer = (char *)operator_new_array();
      local_48 = (char *)0x0;
      if ((char)self[10] != '\0') {
        iVar3 = FUN_004d1068(self,self[9],-self[0xb],1);
        if (iVar3 == -1) {
          FUN_004d0a2c();
          *sehChainHead = sehPrevFrame;
          return;
        }
        iVar3 = self[0xe];
        self[0xe] = self[0xf];
        self[0xf] = iVar3;
      }
      FUN_004d3430((undefined4 *)self[0xe],(undefined4 *)self[0xf]);
      do {
        FUN_004d348c((int)self);
        FUN_004d3498((int)self);
        ehContext = 0x14;
        FUN_004d3508(&loc,(int)self);
        ehDtorCount = ehDtorCount + 1;
        piVar9 = (int *)FUN_004d35a0(&loc);
        iVar3 = FUN_004d3444(piVar9);
        ehDtorCount = ehDtorCount + -1;
        std::locale::_dtor(&loc,2);
        if (iVar3 == 3) break;
        if ((iVar3 == 1) || (iVar5 = FUN_004d348c((int)self), iVar5 != local_44)) {
          local_40 = local_40 * 2;
          local_4c = (char *)operator_new_array();
          local_50 = (int)local_48 - (int)buffer;
          memcpy((undefined4 *)local_4c,(undefined4 *)buffer,local_50);
          operator_delete_array();
          local_48 = local_4c + local_50;
          buffer = local_4c;
        }
      } while ((iVar3 == 1) || (iVar5 = FUN_004d348c((int)self), iVar5 != local_44));
      if (iVar3 == 2) {
        operator_delete_array();
        FUN_004d0a2c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      if (iVar3 == 3) {
        iVar5 = 1;
        iVar3 = local_34;
        buffer = (char *)FUN_004d3498((int)self);
        bVar1 = FUN_004d35dc(self,self[9],buffer,iVar5,iVar3);
        if (!bVar1) {
          operator_delete_array();
          FUN_004d0a2c();
          *sehChainHead = sehPrevFrame;
          return;
        }
      }
      else {
        bVar1 = FUN_004d35dc(self,self[9],buffer,1,(int)local_48 - (int)buffer);
        if (!bVar1) {
          operator_delete_array();
          FUN_004d0a2c();
          *sehChainHead = sehPrevFrame;
          return;
        }
      }
      operator_delete_array();
    }
    else {
      if (((char)self[10] != '\0') &&
         (iVar3 = FUN_004d1068(self,self[9],-self[0xb],1), iVar3 == -1)) {
        FUN_004d0a2c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      iVar5 = 1;
      iVar3 = local_34;
      buffer = (char *)FUN_004d3498((int)self);
      bVar1 = FUN_004d35dc(self,self[9],buffer,iVar5,iVar3);
      if (!bVar1) {
        FUN_004d0a2c();
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
  }
  FUN_004d1898((int)self,self[0x10],self[0x10] + self[0xc]);
  FUN_004d187c((int)self,0,0,0);
  *(undefined1 *)(self + 10) = 0;
  *(undefined1 *)((int)self + 0x29) = 0;
  iVar3 = FUN_004d1068(self,self[9],0,1);
  self[0xd] = iVar3;
  local_54 = FUN_004d0a2c();
  bVar1 = FUN_004d1694((int *)&GHIDRA_STACK(0x00000008),&local_54);
  if (bVar1) {
    FUN_004d1898((int)self,0,0);
  }
  else {
    uVar2 = FUN_004d2f44(&GHIDRA_STACK(0x00000008));
    FUN_004d34bc(self,uVar2);
    FUN_004d1850((int)self,1);
    *(undefined1 *)((int)self + 0x29) = 1;
  }
  FUN_004d3474((int *)&GHIDRA_STACK(0x00000008));
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3610  std::basic_filebuf<char>::vf10   (350 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::basic_filebuf_char::vf10
int __cdecl std::basic_filebuf_char::vf10(int self,int param_2)

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
  
  iVar3 = FUN_004d0724();
  if (iVar3 == *(int *)(self + 0x24)) {
    iVar3 = FUN_004d0a2c();
  }
  else {
    iVar3 = FUN_004d17a8(self);
    if ((iVar3 == 0) && (iVar3 = FUN_004d348c(self), iVar3 != 0)) {
      if (*(char *)(self + 0x28) == '\0') {
        uVar4 = FUN_004d348c(self);
        uVar5 = FUN_004d348c(self);
        uVar6 = FUN_004d3498(self);
        FUN_004d187c(self,uVar6,uVar5,uVar4);
      }
      else {
        uVar4 = FUN_004d34b0(self);
        uVar5 = FUN_004d348c(self);
        uVar6 = FUN_004d3498(self);
        FUN_004d187c(self,uVar6,uVar5,uVar4);
      }
    }
    local_8 = FUN_004d0a2c();
    bVar1 = FUN_004d1694(&param_2,&local_8);
    if (!bVar1) {
      uVar7 = FUN_004d17a8(self);
      uVar8 = FUN_004d34a4(self);
      if (uVar8 < uVar7) {
        local_9 = FUN_004d2f44((undefined1 *)&param_2);
        pcVar10 = &local_9;
        iVar3 = FUN_004d17a8(self);
        bVar1 = FUN_004cf5f0((char *)(iVar3 + -1),pcVar10);
        if (bVar1) {
          FUN_004d1850(self,-1);
          return param_2;
        }
        FUN_004d1850(self,-1);
        uVar2 = FUN_004d2f44((undefined1 *)&param_2);
        puVar9 = (undefined1 *)FUN_004d17a8(self);
        *puVar9 = uVar2;
        return param_2;
      }
    }
    local_10 = FUN_004d0a2c();
    bVar1 = FUN_004d1694(&param_2,&local_10);
    if (bVar1) {
      uVar7 = FUN_004d17a8(self);
      uVar8 = FUN_004d34a4(self);
      if (uVar8 < uVar7) {
        FUN_004d1850(self,-1);
        iVar3 = FUN_004d3474(&param_2);
        return iVar3;
      }
    }
    iVar3 = FUN_004d0a2c();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3770  std::basic_filebuf<char>::vf12   (589 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::basic_filebuf_char::vf12
undefined4 __cdecl std::basic_filebuf_char::vf12(int *self)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LONG lDistanceToMove;
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
  
  uVar2 = FUN_004d1450((int)self);
  if ((uVar2 & 8) != 0) {
    if ((self[9] == 1) || (self[9] == 2)) {
      local_c = FUN_004d0a2c();
      piVar5 = &local_c;
      FUN_004d0a2c();
      local_8 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_004d1694(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*self + 0xc))();
      piStack_a4 = (int *)0x4d37f4;
      iVar3 = FUN_004d1068(self,self[9],0,1);
      FUN_004d39c0(local_2c,iVar3);
      piStack_a4 = (int *)0x4d3812;
      iVar3 = FUN_004d1068(self,self[9],0,2);
      FUN_004d39c0(local_38,iVar3);
      iVar3 = 0;
      lDistanceToMove = FUN_004d3a40(local_2c);
      piStack_a4 = (int *)0x4d3839;
      FUN_004d1068(self,self[9],lDistanceToMove,iVar3);
      bVar1 = FUN_004d3a4c(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_004d39c0(local_50,-1);
        FUN_004d3a64((undefined4*)&piStack_a4,local_20);
        (**(code **)(*self + 0x10))();
        uVar6 = FUN_004d3ab4(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)self + 0x29) != '\0') {
        local_14 = FUN_004d0a2c();
        piVar5 = &local_14;
        FUN_004d0a2c();
        local_10 = (**(code **)(*self + 0x24))();
        bVar1 = FUN_004d1694(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_004d1450((int)self);
  if (((uVar2 & 4) != 0) && (self[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*self + 0xc))();
    piStack_a4 = (int *)0x4d3910;
    iVar3 = FUN_004d1068(self,self[9],0,1);
    FUN_004d39c0(local_68,iVar3);
    piStack_a4 = (int *)0x4d392e;
    iVar3 = FUN_004d1068(self,self[9],0,2);
    FUN_004d39c0(local_74,iVar3);
    iVar3 = 0;
    lDistanceToMove = FUN_004d3a40(local_68);
    piStack_a4 = (int *)0x4d3955;
    FUN_004d1068(self,self[9],lDistanceToMove,iVar3);
    bVar1 = FUN_004d3a4c(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_004d39c0(local_8c,-1);
      FUN_004d3a64((undefined4*)&piStack_a4,local_5c);
      (**(code **)(*self + 0x10))();
      uVar6 = FUN_004d3ab4(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d3b18  std::basic_filebuf<char>::vf7   (1092 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::basic_filebuf_char::vf7
/* WARNING: Type propagation algorithm not settling */
void __cdecl std::basic_filebuf_char::vf7(int *self)

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
  undefined4 *sehChainHead;
  int local_50;
  int local_48;
  int local_40;
  int local_3c;
  char *local_38;
  char local_31;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  int loc2;
  
  __InitExceptBlockLDTC(0x514af8);
  FUN_004d3f8c((undefined4*)&local_38,0);
  iVar2 = FUN_004d0724();
  if (iVar2 == self[9]) {
    FUN_004d0a2c();
    *sehChainHead = sehPrevFrame;
    return;
  }
  iVar2 = FUN_004d17a8((int)self);
  if ((iVar2 == 0) && (iVar2 = FUN_004d348c((int)self), iVar2 != 0)) {
    if ((char)self[10] == '\0') {
      uVar3 = FUN_004d348c((int)self);
      uVar4 = FUN_004d348c((int)self);
      uVar5 = FUN_004d3498((int)self);
      FUN_004d187c((int)self,uVar5,uVar4,uVar3);
    }
    else {
      uVar3 = FUN_004d34b0((int)self);
      uVar4 = FUN_004d348c((int)self);
      uVar5 = FUN_004d3498((int)self);
      FUN_004d187c((int)self,uVar5,uVar4,uVar3);
    }
    FUN_004d1898((int)self,0,0);
  }
  iVar2 = FUN_004d17a8((int)self);
  if (iVar2 != 0) {
    uVar6 = FUN_004d17a8((int)self);
    uVar7 = FUN_004d17b4((int)self);
    if (uVar6 < uVar7) {
      puVar8 = (undefined1 *)FUN_004d17a8((int)self);
      FUN_004d179c(puVar8);
      *sehChainHead = sehPrevFrame;
      return;
    }
  }
  if (((*(char *)((int)self + 0x29) != '\0') && (iVar2 = FUN_004d17a8((int)self), iVar2 != 0))
     || ((*(char *)((int)self + 0x29) != '\0' && (iVar2 = FUN_004d348c((int)self), iVar2 != 0)
         ))) {
    local_40 = FUN_004d0a2c();
    piVar9 = &local_40;
    FUN_004d0a2c();
    local_3c = (**(code **)(*self + 0x24))();
    bVar1 = FUN_004d1694(&local_3c,piVar9);
    if (bVar1) {
      FUN_004d0a2c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    uVar3 = FUN_004d34b0((int)self);
    uVar4 = FUN_004d348c((int)self);
    uVar5 = FUN_004d3498((int)self);
    FUN_004d187c((int)self,uVar5,uVar4,uVar3);
    FUN_004d1898((int)self,0,0);
    *(undefined1 *)((int)self + 0x29) = 0;
  }
  iVar2 = FUN_004d1068(self,self[9],0,1);
  self[0xd] = iVar2;
  ehContext = 8;
  FUN_004d3508(&loc2,(int)self);
  ehDtorCount = ehDtorCount + 1;
  piVar9 = (int *)FUN_004d35a0(&loc2);
  uVar3 = FUN_004d3420(piVar9);
  local_31 = (char)uVar3;
  ehDtorCount = ehDtorCount + -1;
  std::locale::_dtor(&loc2,2);
  if (local_31 == '\0') {
    local_48 = 0;
    puVar10 = (undefined4 *)operator_new_array();
    pcVar13 = (char *)0x0;
    while (pcVar11 = FUN_004d3f9c(self,self[9],pcVar13 + (int)puVar10,1,self[0xc]),
          puVar12 = puVar10, 0 < (int)pcVar11) {
      pcVar13 = pcVar13 + (int)pcVar11;
      FUN_004d3430((undefined4 *)self[0xe],(undefined4 *)self[0xf]);
      ehContext = 0x14;
      FUN_004d3508(&loc,(int)self);
      ehDtorCount = ehDtorCount + 1;
      piVar9 = (int *)FUN_004d35a0(&loc);
      local_50 = FUN_004d3f5c(piVar9);
      ehDtorCount = ehDtorCount + -1;
      std::locale::_dtor(&loc,2);
      if ((local_50 == 2) || (local_50 == 3)) break;
      if (((char *)self[0xc] + self[0x10] != (char *)0x0) && ((char *)self[0xc] == pcVar11)
         ) {
        puVar12 = (undefined4 *)operator_new_array();
        memcpy(puVar12,puVar10,(uint)pcVar13);
        operator_delete_array();
        local_48 = (local_48 - (int)puVar10) + (int)puVar12;
      }
      if (((char *)self[0xc] + self[0x10] == (char *)0x0) ||
         (puVar10 = puVar12, (char *)self[0xc] != pcVar11)) break;
    }
    if ((int)pcVar13 < 1) {
      FUN_004d0a2c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    self[0xb] = (int)pcVar13;
    if ((local_50 == 2) || (local_50 == 1)) {
      operator_delete_array();
      FUN_004d0a2c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    if (local_50 == 3) {
      memcpy((undefined4 *)self[0x10],puVar12,self[0xb]);
      local_38 = (char *)self[0xb];
    }
    else {
      iVar14 = (int)pcVar11 - (local_48 - (int)puVar12);
      iVar2 = FUN_004d1068(self,self[9],-iVar14,1);
      if (iVar2 == -1) {
        FUN_004d0a2c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      self[0xb] = self[0xb] - iVar14;
      local_38 = (char *)-self[0x10];
    }
    operator_delete_array();
  }
  else {
    local_38 = FUN_004d3f9c(self,self[9],(char *)self[0x10],1,self[0xc]);
    if ((int)local_38 < 1) {
      FUN_004d0a2c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    iVar2 = FUN_004d3fc4((int)self,(char *)self[0x10],local_38 + self[0x10]);
    self[0xb] = iVar2;
  }
  if (self[0xb] == 0) {
    FUN_004d0a2c();
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar2 = self[0x10];
    FUN_004d187c((int)self,iVar2,iVar2,local_38 + iVar2);
    FUN_004d1898((int)self,0,0);
    *(undefined1 *)(self + 10) = 1;
    puVar8 = (undefined1 *)FUN_004d17a8((int)self);
    FUN_004d179c(puVar8);
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4324  std::basic_filebuf<char>::vf5   (84 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::basic_filebuf_char::vf5
int __cdecl std::basic_filebuf_char::vf5(int self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d17a8(self);
  if (iVar1 != 0) {
    iVar1 = FUN_004d17b4(self);
    iVar2 = FUN_004d17a8(self);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_004d348c(self);
  if ((iVar1 != 0) && (*(char *)(self + 0x28) != '\0')) {
    iVar1 = FUN_004d34b0(self);
    iVar2 = FUN_004d348c(self);
    return iVar1 - iVar2;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4378  std::basic_filebuf<char>::vf11   (368 bytes, 2 ranges)   [rtti:vtable virtual slot 11]
//   written in code as std::basic_filebuf_char::vf11
int __cdecl std::basic_filebuf_char::vf11(int *self,undefined1 *param_2,int param_3)

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
  else if (self[0xc] < param_3) {
    local_c = FUN_004d0a2c();
    piVar3 = &local_c;
    FUN_004d0a2c();
    local_8 = (**(code **)(*self + 0x24))();
    bVar1 = FUN_004d1694(&local_8,piVar3);
    if (bVar1) {
      iVar2 = 0;
    }
    else {
      local_10 = FUN_004d34a4((int)self);
      local_14 = FUN_004d17a8((int)self);
      local_18 = FUN_004d17b4((int)self);
      iVar2 = FUN_004d3498((int)self);
      local_1c = FUN_004d348c((int)self);
      local_20 = FUN_004d34b0((int)self);
      FUN_004d187c((int)self,0,0,0);
      FUN_004d1898((int)self,param_2,param_2 + param_3);
      FUN_004d18b0((int)self,param_3);
      local_28 = FUN_004d0a2c();
      piVar3 = &local_28;
      FUN_004d0a2c();
      local_24 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_004d1694(&local_24,piVar3);
      if (bVar1) {
        iVar2 = 0;
      }
      else {
        FUN_004d187c((int)self,local_10,local_14,local_18);
        FUN_004d1898((int)self,iVar2,local_20);
        FUN_004d18b0((int)self,local_1c - iVar2);
        iVar2 = param_3;
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      local_30 = FUN_004d0a2c();
      piVar3 = &local_30;
      local_2c = FUN_004d34bc(self,*param_2);
      bVar1 = FUN_004d1694(&local_2c,piVar3);
      if (bVar1) {
        return iVar2;
      }
      param_2 = param_2 + 1;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5640  std::basic_filebuf<char>::vf2   (242 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_filebuf_char::vf2
int * __cdecl std::basic_filebuf_char::vf2(int *self,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_004d0724();
    if (iVar2 == self[9]) {
      if (param_2 == 0) {
        self[0xc] = param_3;
      }
      else {
        self[0xc] = param_3 + -1;
        self[0x10] = param_2;
        FUN_004d1898((int)self,0,0);
        FUN_004d187c((int)self,0,0,0);
        *(undefined1 *)((int)self + 0x29) = 0;
        *(undefined1 *)(self + 10) = 0;
      }
    }
    else {
      local_c = FUN_004d0a2c();
      piVar3 = &local_c;
      FUN_004d0a2c();
      local_8 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_004d1694(&local_8,piVar3);
      if (!bVar1) {
        if (param_2 == 0) {
          self[0xc] = param_3;
          iVar2 = operator_new_array();
          operator_delete_array();
          self[0x10] = iVar2;
        }
        else {
          operator_delete_array();
          self[0xc] = param_3 + -1;
          self[0x10] = param_2;
        }
        FUN_004d1898((int)self,0,0);
        FUN_004d187c((int)self,0,0,0);
        *(undefined1 *)(self + 10) = 0;
        *(undefined1 *)((int)self + 0x29) = 0;
      }
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d641c  std::basic_filebuf<char>::vf3   (1576 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::basic_filebuf_char::vf3
int * __cdecl std::basic_filebuf_char::vf3(int *self,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *sehChainHead;
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
  int unused;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  int loc2;
  int loc3;
  
  __InitExceptBlockLDTC(0x51540c);
  local_38 = param_3;
  FUN_004d39c0(local_7c,0);
  iVar1 = FUN_004d0724();
  if (iVar1 == param_2[9]) {
    FUN_004d39c0(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else if ((param_3 == -1) && (param_4 == 0)) {
    FUN_004d39c0(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else if (param_4 == 1) {
    iVar1 = 0;
    local_3c = 0;
    local_40 = 0;
    if ((char)param_2[10] == '\0') {
      if (*(char *)((int)param_2 + 0x29) != '\0') {
        iVar2 = FUN_004d3498((int)param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_004d34a4((int)param_2);
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_004d17a8((int)param_2);
            pcVar4 = (char *)FUN_004d34a4((int)param_2);
            iVar1 = FUN_004d3fc4((int)param_2,pcVar4,pcVar3);
            iVar1 = -iVar1;
            local_3c = FUN_004d34a4((int)param_2);
            local_40 = FUN_004d17a8((int)param_2);
          }
        }
        else {
          pcVar3 = (char *)FUN_004d348c((int)param_2);
          pcVar4 = (char *)FUN_004d3498((int)param_2);
          iVar1 = FUN_004d3fc4((int)param_2,pcVar4,pcVar3);
          iVar1 = -iVar1;
          local_3c = FUN_004d3498((int)param_2);
          local_40 = FUN_004d348c((int)param_2);
        }
      }
    }
    else {
      iVar2 = FUN_004d17a8((int)param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_004d3498((int)param_2);
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_004d34b0((int)param_2);
          pcVar4 = (char *)FUN_004d348c((int)param_2);
          iVar1 = FUN_004d3fc4((int)param_2,pcVar4,pcVar3);
          local_3c = FUN_004d348c((int)param_2);
          local_40 = FUN_004d34b0((int)param_2);
        }
      }
      else {
        iVar1 = FUN_004d34a4((int)param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_004d17b4((int)param_2);
          iVar2 = FUN_004d17a8((int)param_2);
          iVar1 = iVar1 - iVar2;
        }
        else {
          pcVar3 = (char *)FUN_004d17b4((int)param_2);
          pcVar4 = (char *)FUN_004d17a8((int)param_2);
          iVar1 = FUN_004d3fc4((int)param_2,pcVar4,pcVar3);
        }
        local_3c = FUN_004d17a8((int)param_2);
        local_40 = FUN_004d17b4((int)param_2);
      }
    }
    ehContext = 8;
    FUN_004d3508(&loc3,(int)param_2);
    ehDtorCount = ehDtorCount + 1;
    piVar5 = (int *)FUN_004d35a0(&loc3);
    local_44 = FUN_004d6a44(piVar5);
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc3,2);
    if ((param_3 == 0) || (0 < local_44)) {
      if (local_44 < 1) {
        iVar2 = FUN_004d1068(param_2,param_2[9],0,1);
        FUN_004d39c0(local_88,iVar2);
        FUN_004d6a54(local_7c,local_88);
        if ((iVar1 != 0) && (iVar2 = FUN_004d34a4((int)param_2), iVar2 != 0)) {
          local_48 = param_2[0xc];
          unused = local_3c;
          local_50 = local_3c;
          local_54 = local_40;
          local_60 = (undefined4 *)operator_new_array();
          local_64 = (undefined4 *)((int)local_60 + local_48);
          local_5c = local_60;
          local_58 = local_60;
          do {
            FUN_004d3430((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf]);
            ehContext = 0x14;
            FUN_004d3508(&loc2,(int)param_2);
            ehDtorCount = ehDtorCount + 1;
            piVar5 = (int *)FUN_004d35a0(&loc2);
            local_68 = FUN_004d3444(piVar5);
            ehDtorCount = ehDtorCount + -1;
            std::locale::_dtor(&loc2,2);
            if ((local_68 == 2) || (local_68 == 3)) break;
            if ((local_60 == local_64) && (local_50 != local_54)) {
              local_6c = (int)local_60 - (int)local_58;
              local_48 = local_48 * 2;
              local_5c = (undefined4 *)operator_new_array();
              memcpy(local_5c,local_58,local_6c);
              operator_delete_array();
              local_58 = local_5c;
              local_60 = (undefined4 *)((int)local_5c + local_6c);
              unused = local_50;
              local_64 = (undefined4 *)((int)local_5c + local_48);
              local_5c = local_60;
            }
          } while (local_50 != local_54);
          if (iVar1 < 1) {
            FUN_004d6a94(local_7c,(int)local_60 + ((-(local_40 - local_3c) - iVar1) - (int)local_58)
                        );
          }
          else {
            FUN_004d6a84(local_7c,(int)local_60 + ((iVar1 - (local_40 - local_3c)) - (int)local_58))
            ;
          }
          operator_delete_array();
        }
        FUN_004d3a64(self,local_7c);
        *sehChainHead = sehPrevFrame;
      }
      else if (param_3 == 0) {
        iVar2 = FUN_004d1068(param_2,param_2[9],0,1);
        FUN_004d39c0(self,(iVar2 - iVar1 * local_44) / local_44);
        *sehChainHead = sehPrevFrame;
      }
      else if (*(char *)((int)param_2 + 0x29) == '\0') {
        FUN_004d1898((int)param_2,0,0);
        FUN_004d187c((int)param_2,0,0,0);
        iVar1 = FUN_004d1068(param_2,param_2[9],-((iVar1 - local_38) * local_44),1);
        FUN_004d39c0(self,iVar1 / local_44);
        *sehChainHead = sehPrevFrame;
      }
      else {
        FUN_004d0a2c();
        (**(code **)(*param_2 + 0x24))();
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        iVar1 = FUN_004d1068(param_2,param_2[9],local_38 * local_44,1);
        FUN_004d39c0(self,iVar1 / local_44);
        *sehChainHead = sehPrevFrame;
      }
    }
    else {
      FUN_004d39c0(self,-1);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    ehContext = 0x20;
    FUN_004d3508(&loc,(int)param_2);
    ehDtorCount = ehDtorCount + 1;
    piVar5 = (int *)FUN_004d35a0(&loc);
    local_70 = FUN_004d6a44(piVar5);
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc,2);
    if (local_70 < 1) {
      if ((param_4 != 0) || (param_3 != 0)) {
        FUN_004d39c0(self,-1);
        *sehChainHead = sehPrevFrame;
        return self;
      }
      FUN_004d39c0((int *)&GHIDRA_STACK(0xffffff44),0);
      (**(code **)(*param_2 + 0x10))();
    }
    if (*(char *)((int)param_2 + 0x29) != '\0') {
      FUN_004d0a2c();
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
    iVar1 = FUN_004d1068(param_2,param_2[9],local_38 * local_70,iVar1);
    FUN_004d39c0(local_a0,iVar1);
    FUN_004d6a54(local_7c,local_a0);
    FUN_004d1898((int)param_2,0,0);
    FUN_004d187c((int)param_2,0,0,0);
    FUN_004d3a64(self,local_7c);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6aa4  std::basic_filebuf<char>::vf4   (488 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::basic_filebuf_char::vf4
int * __cdecl std::basic_filebuf_char::vf4(int *self,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG lDistanceToMove;
  undefined4 *puVar6;
  undefined4 *sehChainHead;
  int iVar7;
  int local_44 [3];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  
  __InitExceptBlockLDTC(0x515448);
  iVar2 = FUN_004d0724();
  if (iVar2 == param_2[9]) {
    FUN_004d39c0(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else {
    piVar3 = FUN_004d39c0(local_44,-1);
    uVar4 = FUN_004d3ab4((int *)&GHIDRA_STACK(0x0000000c),piVar3);
    if ((char)uVar4 == '\0') {
      ehContext = 8;
      FUN_004d3508(&loc,(int)param_2);
      ehDtorCount = ehDtorCount + 1;
      piVar3 = (int *)FUN_004d35a0(&loc);
      iVar2 = FUN_004d6a44(piVar3);
      ehDtorCount = ehDtorCount + -1;
      std::locale::_dtor(&loc,2);
      if (iVar2 < 1) {
        iVar2 = FUN_004d1068(param_2,param_2[9],0,2);
        iVar7 = 0;
        lDistanceToMove = FUN_004d3a40((undefined4 *)&GHIDRA_STACK(0x0000000c));
        iVar7 = FUN_004d1068(param_2,param_2[9],lDistanceToMove,iVar7);
        if (iVar7 == -1) {
          FUN_004d39c0(self,-1);
          *sehChainHead = sehPrevFrame;
        }
        else {
          FUN_004d1898((int)param_2,0,0);
          FUN_004d187c((int)param_2,0,0,0);
          FUN_004d6c8c(&local_30,(int)&GHIDRA_STACK(0x0000000c));
          puVar6 = (undefined4 *)FUN_004d3430((undefined4 *)param_2[0xf],&local_30);
          FUN_004d3430((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_004d0a2c();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_004d1694(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_004d3a40((undefined4 *)&GHIDRA_STACK(0x0000000c)), iVar7 < iVar2)) {
            FUN_004d39c0(self,-1);
            *sehChainHead = sehPrevFrame;
            return self;
          }
          FUN_004d3a64(self,(undefined4 *)&GHIDRA_STACK(0x0000000c));
          *sehChainHead = sehPrevFrame;
        }
      }
      else {
        FUN_004d3a40((undefined4 *)&GHIDRA_STACK(0x0000000c));
        (**(code **)(*param_2 + 0xc))();
        *sehChainHead = sehPrevFrame;
      }
    }
    else {
      FUN_004d39c0(self,-1);
      *sehChainHead = sehPrevFrame;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8768  std::basic_filebuf<char>::vf13   (47 bytes)   [rtti:vtable virtual slot 13; function defined from vtable-slot]
//   written in code as std::basic_filebuf_char::vf13
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004d88ef) overlaps instruction at (ram,0x004d88ee)
    */
/* WARNING: Removing unreachable block (ram,0x004d887a) */
void std::basic_filebuf_char::vf13(byte *self,byte *param_2,undefined4 param_3,char *param_4,byte *param_5, char *param_6,byte *param_7)

{
  char *pcVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte bVar7;
  short sVar8;
  undefined4 *puVar9;
  char cVar10;
  byte bVar11;
  int *piVar12;
  byte *pbVar13;
  undefined3 uVar14;
  byte bVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar19;
  undefined2 uVar18;
  char cVar20;
  byte bVar21;
  char *unaff_EBX;
  ushort uVar22;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_DS;
  int sehChainHead;
  bool bVar23;
  bool bVar24;
  char *pcStackY_d;
  undefined1 uStackY_9;
  undefined3 uVar25;
  undefined1 in_stack_fffffffb;
  uint dtorFlags;
  
  dtorFlags = 0x3000000;
  bVar19 = (byte)((uint)param_2 >> 8);
  *self = *self + bVar19;
  cVar10 = (char)self;
  *self = *self + cVar10;
  *self = *self + cVar10;
  *unaff_EDI = *unaff_EDI + bVar19;
  *self = *self + cVar10;
  cVar20 = (char)unaff_EBX;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + cVar20;
  *self = *self + cVar10;
  *self = *self + cVar10;
  *self = *self + cVar10;
  *self = *self + cVar10;
  *self = *self + cVar10;
  bVar15 = (byte)param_3;
  *unaff_EBX = *unaff_EBX + bVar15;
  *self = *self + cVar10;
  *unaff_EBX = *unaff_EBX + bVar15;
  *self = *self + cVar10;
  *self = *self + cVar20;
  bVar11 = *unaff_EBP;
  pcVar16 = (char *)CONCAT31((int3)((uint)param_3 >> 8),bVar15 & bVar11);
  *(byte **)self = self + *(int *)self;
  unaff_EBX[0x74] = unaff_EBX[0x74] + bVar19;
  bVar7 = param_2[sehChainHead];
  bVar21 = (byte)((uint)unaff_EBX >> 8);
  uVar18 = SUB42(param_2,0);
  out(*unaff_ESI,uVar18);
  if (bVar21 == bVar7) {
    if (SBORROW1(bVar21,bVar7)) {
code_r0x004d8817:
      cVar10 = (char)self;
      *unaff_EBX = *unaff_EBX + cVar10;
      *self = *self + cVar10;
      self[0x10004d83] = self[0x10004d83] + (char)((uint)pcVar16 >> 8);
      *self = *self + cVar10;
      *unaff_EBX = *unaff_EBX + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar10;
      *self = *self + cVar20;
      *self = *self + cVar10;
      *unaff_EBX = *unaff_EBX + cVar10;
      *self = *self + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(unaff_ESI[1],uVar18);
    puVar2 = (ushort *)(unaff_EDI + (int)unaff_EBX * 2 + 0x62);
    sVar8 = ((short)(unaff_ESI + 1) + 1U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
    if (-1 < (char)(bVar21 - bVar7)) goto code_r0x004d8817;
    pcVar5 = unaff_EDI + 4;
    uVar6 = in(uVar18);
    *(undefined4 *)unaff_EDI = uVar6;
    (*(byte * *)&uStackY_9) = (byte *)0x3e7261;
    piVar12 = (int *)CONCAT22((short)((uint)self >> 0x10),
                              CONCAT11((char)((uint)self >> 8) + (bVar15 & bVar11),cVar10));
    LOCK();
    pcVar17 = *(char **)unaff_EBP;
    *(char **)unaff_EBP = pcVar16;
    UNLOCK();
    *(char *)piVar12 = (char)*piVar12 + cVar10;
    *(char *)piVar12 = (char)*piVar12 + cVar10;
    pbVar13 = (byte *)((int)piVar12 + *piVar12);
    bVar11 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    pcStackY_d = (char *)0x3000000;
    *pbVar13 = *pbVar13 + bVar19;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pcVar5 = *pcVar5 + bVar19;
    *pbVar13 = *pbVar13 + bVar11;
    cVar10 = (char)((uint)pbVar13 >> 8);
    *pbVar13 = *pbVar13 + cVar10;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    uVar14 = (undefined3)((uint)pbVar13 >> 8);
    bVar11 = bVar11 | *pbVar13;
    pbVar13 = (byte *)CONCAT31(uVar14,bVar11);
    *pbVar13 = *pbVar13 + bVar11;
    bVar11 = bVar11 | *pbVar13;
    self = (byte *)CONCAT31(uVar14,bVar11);
    *self = *self + bVar11;
    pcVar16 = pcVar17;
    if (*self == 0) goto code_r0x004d8817;
    unaff_EBP = unaff_EBP + -1;
    uVar22 = (ushort)unaff_EBP;
    *pcVar17 = *pcVar17 + bVar11;
    pcVar1 = (char *)((int)self * 2 + 0x73);
    *pcVar1 = *pcVar1 + cVar10;
    if (*pcVar1 == '\0') {
      unaff_EBX[0x74] = unaff_EBX[0x74] + bVar19;
      bVar24 = bVar21 == param_2[sehChainHead];
      if (SBORROW1(bVar21,param_2[sehChainHead])) {
        *self = *self | bVar11;
        *self = *self + bVar11;
        *self = *self + bVar11;
        *self = *self + bVar11;
        iVar3 = CONCAT13(in_stack_fffffffb,0x3e72) + -0x4c;
        uVar25 = (undefined3)iVar3;
        (*(byte * *)&uStackY_9) = (byte *)CONCAT31(uVar25,0x61);
        in_stack_fffffffb = (undefined1)((uint)iVar3 >> 0x18);
        param_7 = self;
        param_4 = unaff_EBX;
        goto code_r0x004d88ba;
      }
      goto code_r0x004d886b;
    }
    bVar11 = *param_2;
    pbVar13 = unaff_ESI + 1;
    out(*unaff_ESI,uVar18);
    if (bVar21 == bVar11) {
      if (!SBORROW1(bVar21,bVar11)) {
        out(*pbVar13,uVar18);
        puVar2 = (ushort *)(&GHIDRA_STACK(0x00000057) + (int)pcVar5);
        sVar8 = ((short)pbVar13 + 1U & 3) - (*puVar2 & 3);
        *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
        goto code_r0x004d8817;
      }
      goto code_r0x004d887b;
    }
    if (bVar11 <= bVar21) {
      (**(code **)(self + 0x24448390))();
      goto code_r0x004d88f1;
    }
    pbVar13 = (byte *)(pcVar17 + 0x6e);
    *pbVar13 = *pbVar13 & (byte)((uint)pcVar17 >> 8);
    if (*pbVar13 != 0) goto code_r0x004d88f1;
  }
  else {
    if (bVar7 <= bVar21) {
      *self = *self + bVar21;
      *self = *self + cVar10;
      self = self + *(int *)self;
      *self = *self + (char)self;
      *self = *self + (char)param_2;
      goto code_r0x004d8817;
    }
    *self = *self + cVar10;
    *self = *self + cVar10;
    *self = *self + cVar10;
    *param_2 = *param_2 + cVar10;
    *self = *self + cVar10;
    *param_2 = *param_2 + cVar10;
    *self = *self + cVar10;
    self[0x1004d8a] = self[0x1004d8a] + cVar10;
    pcVar17 = (char *)((int)self * 2 + 0x3a647473);
    *pcVar17 = *pcVar17 + (char)param_2;
    bVar24 = bVar19 == self[0x61];
    pcStackY_d = pcVar16;
    (*(byte * *)&uStackY_9) = self;
code_r0x004d886b:
    uVar22 = (ushort)unaff_EBP;
    pbVar13 = (byte *)((longlong)*(int *)(param_2 + 0x3c) * 0x736e6f63);
    bVar23 = (longlong)(int)pbVar13 != (longlong)*(int *)(param_2 + 0x3c) * 0x736e6f63;
    if (!bVar24) {
      uVar22 = 0;
code_r0x004d887b:
      out(*pbVar13,uVar18);
      pcStackY_d = (char *)0x2c726100;
      uVar25 = (undefined3)((uint)(*(byte * *)&uStackY_9) >> 8);
      (*(byte * *)&uStackY_9) = (byte *)CONCAT31(uVar25,0x73);
      if ((char)self == 'c') goto LAB_004d88f8;
      bVar23 = bVar21 < *param_2;
    }
    puVar2 = (ushort *)(self + 0x61);
    sVar8 = (uVar22 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
    if (bVar23) {
LAB_004d88f8:
      uVar25 = (undefined3)((uint)(*(byte * *)&uStackY_9) >> 8);
      std::basic_istream_char::_dtor((undefined4 *)(CONCAT13(in_stack_fffffffb,uVar25) + -0xc),0x3000000);
      return;
    }
    self = param_7;
    param_2 = param_5;
    unaff_EBX = param_4;
    if (0 < sVar8) {
      halt_baddata();
    }
  }
  pbVar13 = (*(byte * *)&uStackY_9);
  if ((char)self == 's') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar11 = *param_2;
  uVar25 = (undefined3)((uint)(*(byte * *)&uStackY_9) >> 8);
  puVar9 = (undefined4 *)CONCAT13(in_stack_fffffffb,uVar25);
  uVar18 = SUB42(param_5,0);
  uVar4 = in(uVar18);
  *(undefined1 *)CONCAT13(uStackY_9,GH_PIECE(pcStackY_d, 1, undefined3)) = uVar4;
  uVar4 = in(uVar18);
  ((undefined1 *)CONCAT13(uStackY_9,GH_PIECE(pcStackY_d, 1, undefined3)))[1] = uVar4;
  out(*puVar9,uVar18);
  puVar2 = (ushort *)(param_6 + 0x74);
  *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
  unaff_ESI = (byte *)(puVar9 + 2);
  out(puVar9[1],uVar18);
  (*(byte * *)&uStackY_9) = pbVar13;
  if ((byte)((uint)unaff_EBX >> 8) < bVar11) {
code_r0x004d88f1:
    uVar25 = (undefined3)((uint)(*(byte * *)&uStackY_9) >> 8);
    std::basic_ostream_char::_dtor((undefined4 *)CONCAT13(in_stack_fffffffb,uVar25),dtorFlags);
    return;
  }
  puVar2 = (ushort *)(param_7 + 0x61);
  *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
  pcVar17 = param_6;
code_r0x004d88ba:
  bVar11 = (byte)((uint)param_4 >> 8);
  *unaff_ESI = *unaff_ESI & bVar11;
  *unaff_ESI = *unaff_ESI & bVar11;
  cVar10 = (char)param_7;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *(undefined2 *)((int)param_7 * 3) = in_DS;
  *param_7 = *param_7 + (char)pcVar17;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  param_4[-0x4bfbdbbc] = param_4[-0x4bfbdbbc] + cVar10;
  uVar25 = (undefined3)((uint)(*(byte * *)&uStackY_9) >> 8);
  std::basic_ofstream_char::_dtor((undefined4 *)CONCAT13(in_stack_fffffffb,uVar25),0x3000000);
  return;
}

} // namespace tea
