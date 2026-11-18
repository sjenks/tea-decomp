// TSBuild.exe — runtime / library code "std_basic_filebuf"
// 13 functions, 0x0045ac30..0x00463508. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045ac30  std::basic_filebuf<char>::basic_filebuf   (237 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_filebuf<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_filebuf_char::basic_filebuf
undefined4 * __cdecl std::basic_filebuf_char::basic_filebuf(undefined4 *self)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486058);
  std::basic_streambuf_char::basic_streambuf(self);
  *self = &std::basic_filebuf_char::vftable;
  uVar1 = FUN_0045ae74();
  self[9] = uVar1;
  *(undefined1 *)(self + 10) = 0;
  *(undefined1 *)((int)self + 0x29) = 0;
  self[0xb] = 0;
  self[0xc] = 0x200;
  self[0xd] = 0;
  self[0x10] = 0;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  self[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  self[0xf] = puVar2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ae7c  std::basic_filebuf<char>::basic_filebuf_45ae7c   (275 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_filebuf<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_filebuf_char::basic_filebuf_45ae7c
undefined4 * __cdecl std::basic_filebuf_char::basic_filebuf_45ae7c(undefined4 *self,int vbasesBuilt)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4860fc);
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
    FUN_0045ad20(puVar2,0);
  }
  self[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
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
// 0x0045af90  std::basic_filebuf<char>::~basic_filebuf   (129 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_filebuf_char::_dtor
void __cdecl std::basic_filebuf_char::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486150);
  if (self != (int *)0x0) {
    *self = (int)&std::basic_filebuf_char::vftable;
    FUN_0045b014(self);
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
// 0x0045d940  std::basic_filebuf<char>::vf9   (1168 bytes)   [rtti:vtable virtual slot 9]
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
  
  __InitExceptBlockLDTC(0x486964);
  iVar3 = FUN_0045de3c((int)self);
  local_34 = FUN_0045de48((int)self);
  local_34 = iVar3 - local_34;
  iVar3 = FUN_0045ae74();
  if (iVar3 == self[9]) {
    FUN_0045b17c();
    *sehChainHead = sehPrevFrame;
    return;
  }
  iVar3 = FUN_0045de3c((int)self);
  if ((iVar3 == 0) && (iVar3 = FUN_0045bef8((int)self), iVar3 != 0)) {
    iVar3 = FUN_0045de54((int)self);
    iVar3 = iVar3 + self[0xc];
    uVar4 = FUN_0045de54((int)self);
    FUN_0045c008((int)self,uVar4,iVar3);
    iVar3 = FUN_0045bef8((int)self);
    iVar5 = FUN_0045de54((int)self);
    FUN_0045c020((int)self,iVar3 - iVar5);
    FUN_0045bfec((int)self,0,0,0);
    uVar6 = FUN_0045de3c((int)self);
    uVar7 = FUN_0045de60((int)self);
    if (uVar6 < uVar7) {
      local_3c = FUN_0045b17c();
      bVar1 = FUN_0045bde4((int *)&GHIDRA_STACK(0x00000008),&local_3c);
      if (!bVar1) {
        uVar2 = FUN_0045d91c(&GHIDRA_STACK(0x00000008));
        FUN_0045de6c(self,uVar2);
        FUN_0045bfa0((int)self,1);
        *(undefined1 *)((int)self + 0x29) = 1;
        puVar8 = (undefined1 *)FUN_0045de3c((int)self);
        FUN_0045beec(puVar8);
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
    iVar3 = FUN_0045de3c((int)self);
    local_34 = FUN_0045de48((int)self);
    local_34 = iVar3 - local_34;
  }
  iVar3 = FUN_0045de3c((int)self);
  if ((iVar3 == 0) && (iVar3 = FUN_0045bef8((int)self), iVar3 == 0)) {
    FUN_0045c008((int)self,self[0x10],self[0x10] + self[0xc]);
  }
  *(undefined1 *)((int)self + 0x29) = 0;
  if (local_34 != 0) {
    ehContext = 8;
    FUN_0045deb8(&loc2,(int)self);
    ehDtorCount = ehDtorCount + 1;
    piVar9 = (int *)FUN_0045df50(&loc2);
    uVar4 = FUN_0045ddd0(piVar9);
    local_35 = (char)uVar4;
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc2,2);
    if (local_35 == '\0') {
      local_40 = local_34;
      local_44 = 0;
      buffer = (char *)operator_new_array();
      local_48 = (char *)0x0;
      if ((char)self[10] != '\0') {
        iVar3 = FUN_0045b7b8(self,self[9],-self[0xb],1);
        if (iVar3 == -1) {
          FUN_0045b17c();
          *sehChainHead = sehPrevFrame;
          return;
        }
        iVar3 = self[0xe];
        self[0xe] = self[0xf];
        self[0xf] = iVar3;
      }
      FUN_0045dde0((undefined4 *)self[0xe],(undefined4 *)self[0xf]);
      do {
        FUN_0045de3c((int)self);
        FUN_0045de48((int)self);
        ehContext = 0x14;
        FUN_0045deb8(&loc,(int)self);
        ehDtorCount = ehDtorCount + 1;
        piVar9 = (int *)FUN_0045df50(&loc);
        iVar3 = FUN_0045ddf4(piVar9);
        ehDtorCount = ehDtorCount + -1;
        std::locale::_dtor(&loc,2);
        if (iVar3 == 3) break;
        if ((iVar3 == 1) || (iVar5 = FUN_0045de3c((int)self), iVar5 != local_44)) {
          local_40 = local_40 * 2;
          local_4c = (char *)operator_new_array();
          local_50 = (int)local_48 - (int)buffer;
          memcpy((undefined4 *)local_4c,(undefined4 *)buffer,local_50);
          operator_delete_array();
          local_48 = local_4c + local_50;
          buffer = local_4c;
        }
      } while ((iVar3 == 1) || (iVar5 = FUN_0045de3c((int)self), iVar5 != local_44));
      if (iVar3 == 2) {
        operator_delete_array();
        FUN_0045b17c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      if (iVar3 == 3) {
        iVar5 = 1;
        iVar3 = local_34;
        buffer = (char *)FUN_0045de48((int)self);
        bVar1 = FUN_0045df8c(self,self[9],buffer,iVar5,iVar3);
        if (!bVar1) {
          operator_delete_array();
          FUN_0045b17c();
          *sehChainHead = sehPrevFrame;
          return;
        }
      }
      else {
        bVar1 = FUN_0045df8c(self,self[9],buffer,1,(int)local_48 - (int)buffer);
        if (!bVar1) {
          operator_delete_array();
          FUN_0045b17c();
          *sehChainHead = sehPrevFrame;
          return;
        }
      }
      operator_delete_array();
    }
    else {
      if (((char)self[10] != '\0') &&
         (iVar3 = FUN_0045b7b8(self,self[9],-self[0xb],1), iVar3 == -1)) {
        FUN_0045b17c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      iVar5 = 1;
      iVar3 = local_34;
      buffer = (char *)FUN_0045de48((int)self);
      bVar1 = FUN_0045df8c(self,self[9],buffer,iVar5,iVar3);
      if (!bVar1) {
        FUN_0045b17c();
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
  }
  FUN_0045c008((int)self,self[0x10],self[0x10] + self[0xc]);
  FUN_0045bfec((int)self,0,0,0);
  *(undefined1 *)(self + 10) = 0;
  *(undefined1 *)((int)self + 0x29) = 0;
  iVar3 = FUN_0045b7b8(self,self[9],0,1);
  self[0xd] = iVar3;
  local_54 = FUN_0045b17c();
  bVar1 = FUN_0045bde4((int *)&GHIDRA_STACK(0x00000008),&local_54);
  if (bVar1) {
    FUN_0045c008((int)self,0,0);
  }
  else {
    uVar2 = FUN_0045d91c(&GHIDRA_STACK(0x00000008));
    FUN_0045de6c(self,uVar2);
    FUN_0045bfa0((int)self,1);
    *(undefined1 *)((int)self + 0x29) = 1;
  }
  FUN_0045de24((int *)&GHIDRA_STACK(0x00000008));
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dfc0  std::basic_filebuf<char>::vf10   (350 bytes)   [rtti:vtable virtual slot 10]
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
  
  iVar3 = FUN_0045ae74();
  if (iVar3 == *(int *)(self + 0x24)) {
    iVar3 = FUN_0045b17c();
  }
  else {
    iVar3 = FUN_0045bef8(self);
    if ((iVar3 == 0) && (iVar3 = FUN_0045de3c(self), iVar3 != 0)) {
      if (*(char *)(self + 0x28) == '\0') {
        uVar4 = FUN_0045de3c(self);
        uVar5 = FUN_0045de3c(self);
        uVar6 = FUN_0045de48(self);
        FUN_0045bfec(self,uVar6,uVar5,uVar4);
      }
      else {
        uVar4 = FUN_0045de60(self);
        uVar5 = FUN_0045de3c(self);
        uVar6 = FUN_0045de48(self);
        FUN_0045bfec(self,uVar6,uVar5,uVar4);
      }
    }
    local_8 = FUN_0045b17c();
    bVar1 = FUN_0045bde4(&param_2,&local_8);
    if (!bVar1) {
      uVar7 = FUN_0045bef8(self);
      uVar8 = FUN_0045de54(self);
      if (uVar8 < uVar7) {
        local_9 = FUN_0045d91c((undefined1 *)&param_2);
        pcVar10 = &local_9;
        iVar3 = FUN_0045bef8(self);
        bVar1 = FUN_00459d40((char *)(iVar3 + -1),pcVar10);
        if (bVar1) {
          FUN_0045bfa0(self,-1);
          return param_2;
        }
        FUN_0045bfa0(self,-1);
        uVar2 = FUN_0045d91c((undefined1 *)&param_2);
        puVar9 = (undefined1 *)FUN_0045bef8(self);
        *puVar9 = uVar2;
        return param_2;
      }
    }
    local_10 = FUN_0045b17c();
    bVar1 = FUN_0045bde4(&param_2,&local_10);
    if (bVar1) {
      uVar7 = FUN_0045bef8(self);
      uVar8 = FUN_0045de54(self);
      if (uVar8 < uVar7) {
        FUN_0045bfa0(self,-1);
        iVar3 = FUN_0045de24(&param_2);
        return iVar3;
      }
    }
    iVar3 = FUN_0045b17c();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e120  std::basic_filebuf<char>::vf12   (589 bytes)   [rtti:vtable virtual slot 12]
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
  
  uVar2 = FUN_0045bba0((int)self);
  if ((uVar2 & 8) != 0) {
    if ((self[9] == 1) || (self[9] == 2)) {
      local_c = FUN_0045b17c();
      piVar5 = &local_c;
      FUN_0045b17c();
      local_8 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_0045bde4(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*self + 0xc))();
      piStack_a4 = (int *)0x45e1a4;
      iVar3 = FUN_0045b7b8(self,self[9],0,1);
      FUN_0045e370(local_2c,iVar3);
      piStack_a4 = (int *)0x45e1c2;
      iVar3 = FUN_0045b7b8(self,self[9],0,2);
      FUN_0045e370(local_38,iVar3);
      iVar3 = 0;
      lDistanceToMove = FUN_0045e3f0(local_2c);
      piStack_a4 = (int *)0x45e1e9;
      FUN_0045b7b8(self,self[9],lDistanceToMove,iVar3);
      bVar1 = FUN_0045e3fc(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_0045e370(local_50,-1);
        FUN_0045e414((undefined4*)&piStack_a4,local_20);
        (**(code **)(*self + 0x10))();
        uVar6 = FUN_0045e464(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)self + 0x29) != '\0') {
        local_14 = FUN_0045b17c();
        piVar5 = &local_14;
        FUN_0045b17c();
        local_10 = (**(code **)(*self + 0x24))();
        bVar1 = FUN_0045bde4(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_0045bba0((int)self);
  if (((uVar2 & 4) != 0) && (self[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*self + 0xc))();
    piStack_a4 = (int *)0x45e2c0;
    iVar3 = FUN_0045b7b8(self,self[9],0,1);
    FUN_0045e370(local_68,iVar3);
    piStack_a4 = (int *)0x45e2de;
    iVar3 = FUN_0045b7b8(self,self[9],0,2);
    FUN_0045e370(local_74,iVar3);
    iVar3 = 0;
    lDistanceToMove = FUN_0045e3f0(local_68);
    piStack_a4 = (int *)0x45e305;
    FUN_0045b7b8(self,self[9],lDistanceToMove,iVar3);
    bVar1 = FUN_0045e3fc(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_0045e370(local_8c,-1);
      FUN_0045e414((undefined4*)&piStack_a4,local_5c);
      (**(code **)(*self + 0x10))();
      uVar6 = FUN_0045e464(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e4c8  std::basic_filebuf<char>::vf7   (1092 bytes)   [rtti:vtable virtual slot 7]
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
  
  __InitExceptBlockLDTC(0x4869d8);
  FUN_0045e93c((undefined4*)&local_38,0);
  iVar2 = FUN_0045ae74();
  if (iVar2 == self[9]) {
    FUN_0045b17c();
    *sehChainHead = sehPrevFrame;
    return;
  }
  iVar2 = FUN_0045bef8((int)self);
  if ((iVar2 == 0) && (iVar2 = FUN_0045de3c((int)self), iVar2 != 0)) {
    if ((char)self[10] == '\0') {
      uVar3 = FUN_0045de3c((int)self);
      uVar4 = FUN_0045de3c((int)self);
      uVar5 = FUN_0045de48((int)self);
      FUN_0045bfec((int)self,uVar5,uVar4,uVar3);
    }
    else {
      uVar3 = FUN_0045de60((int)self);
      uVar4 = FUN_0045de3c((int)self);
      uVar5 = FUN_0045de48((int)self);
      FUN_0045bfec((int)self,uVar5,uVar4,uVar3);
    }
    FUN_0045c008((int)self,0,0);
  }
  iVar2 = FUN_0045bef8((int)self);
  if (iVar2 != 0) {
    uVar6 = FUN_0045bef8((int)self);
    uVar7 = FUN_0045bf04((int)self);
    if (uVar6 < uVar7) {
      puVar8 = (undefined1 *)FUN_0045bef8((int)self);
      FUN_0045beec(puVar8);
      *sehChainHead = sehPrevFrame;
      return;
    }
  }
  if (((*(char *)((int)self + 0x29) != '\0') && (iVar2 = FUN_0045bef8((int)self), iVar2 != 0))
     || ((*(char *)((int)self + 0x29) != '\0' && (iVar2 = FUN_0045de3c((int)self), iVar2 != 0)
         ))) {
    local_40 = FUN_0045b17c();
    piVar9 = &local_40;
    FUN_0045b17c();
    local_3c = (**(code **)(*self + 0x24))();
    bVar1 = FUN_0045bde4(&local_3c,piVar9);
    if (bVar1) {
      FUN_0045b17c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    uVar3 = FUN_0045de60((int)self);
    uVar4 = FUN_0045de3c((int)self);
    uVar5 = FUN_0045de48((int)self);
    FUN_0045bfec((int)self,uVar5,uVar4,uVar3);
    FUN_0045c008((int)self,0,0);
    *(undefined1 *)((int)self + 0x29) = 0;
  }
  iVar2 = FUN_0045b7b8(self,self[9],0,1);
  self[0xd] = iVar2;
  ehContext = 8;
  FUN_0045deb8(&loc2,(int)self);
  ehDtorCount = ehDtorCount + 1;
  piVar9 = (int *)FUN_0045df50(&loc2);
  uVar3 = FUN_0045ddd0(piVar9);
  local_31 = (char)uVar3;
  ehDtorCount = ehDtorCount + -1;
  std::locale::_dtor(&loc2,2);
  if (local_31 == '\0') {
    local_48 = 0;
    puVar10 = (undefined4 *)operator_new_array();
    pcVar13 = (char *)0x0;
    while (pcVar11 = FUN_0045e94c(self,self[9],pcVar13 + (int)puVar10,1,self[0xc]),
          puVar12 = puVar10, 0 < (int)pcVar11) {
      pcVar13 = pcVar13 + (int)pcVar11;
      FUN_0045dde0((undefined4 *)self[0xe],(undefined4 *)self[0xf]);
      ehContext = 0x14;
      FUN_0045deb8(&loc,(int)self);
      ehDtorCount = ehDtorCount + 1;
      piVar9 = (int *)FUN_0045df50(&loc);
      local_50 = FUN_0045e90c(piVar9);
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
      FUN_0045b17c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    self[0xb] = (int)pcVar13;
    if ((local_50 == 2) || (local_50 == 1)) {
      operator_delete_array();
      FUN_0045b17c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    if (local_50 == 3) {
      memcpy((undefined4 *)self[0x10],puVar12,self[0xb]);
      local_38 = (char *)self[0xb];
    }
    else {
      iVar14 = (int)pcVar11 - (local_48 - (int)puVar12);
      iVar2 = FUN_0045b7b8(self,self[9],-iVar14,1);
      if (iVar2 == -1) {
        FUN_0045b17c();
        *sehChainHead = sehPrevFrame;
        return;
      }
      self[0xb] = self[0xb] - iVar14;
      local_38 = (char *)-self[0x10];
    }
    operator_delete_array();
  }
  else {
    local_38 = FUN_0045e94c(self,self[9],(char *)self[0x10],1,self[0xc]);
    if ((int)local_38 < 1) {
      FUN_0045b17c();
      *sehChainHead = sehPrevFrame;
      return;
    }
    iVar2 = FUN_0045e974((int)self,(char *)self[0x10],local_38 + self[0x10]);
    self[0xb] = iVar2;
  }
  if (self[0xb] == 0) {
    FUN_0045b17c();
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar2 = self[0x10];
    FUN_0045bfec((int)self,iVar2,iVar2,local_38 + iVar2);
    FUN_0045c008((int)self,0,0);
    *(undefined1 *)(self + 10) = 1;
    puVar8 = (undefined1 *)FUN_0045bef8((int)self);
    FUN_0045beec(puVar8);
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045efb0  std::basic_filebuf<char>::vf5   (84 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::basic_filebuf_char::vf5
int __cdecl std::basic_filebuf_char::vf5(int self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0045bef8(self);
  if (iVar1 != 0) {
    iVar1 = FUN_0045bf04(self);
    iVar2 = FUN_0045bef8(self);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_0045de3c(self);
  if ((iVar1 != 0) && (*(char *)(self + 0x28) != '\0')) {
    iVar1 = FUN_0045de60(self);
    iVar2 = FUN_0045de3c(self);
    return iVar1 - iVar2;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f004  std::basic_filebuf<char>::vf11   (368 bytes, 2 ranges)   [rtti:vtable virtual slot 11]
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
    local_c = FUN_0045b17c();
    piVar3 = &local_c;
    FUN_0045b17c();
    local_8 = (**(code **)(*self + 0x24))();
    bVar1 = FUN_0045bde4(&local_8,piVar3);
    if (bVar1) {
      iVar2 = 0;
    }
    else {
      local_10 = FUN_0045de54((int)self);
      local_14 = FUN_0045bef8((int)self);
      local_18 = FUN_0045bf04((int)self);
      iVar2 = FUN_0045de48((int)self);
      local_1c = FUN_0045de3c((int)self);
      local_20 = FUN_0045de60((int)self);
      FUN_0045bfec((int)self,0,0,0);
      FUN_0045c008((int)self,param_2,param_2 + param_3);
      FUN_0045c020((int)self,param_3);
      local_28 = FUN_0045b17c();
      piVar3 = &local_28;
      FUN_0045b17c();
      local_24 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_0045bde4(&local_24,piVar3);
      if (bVar1) {
        iVar2 = 0;
      }
      else {
        FUN_0045bfec((int)self,local_10,local_14,local_18);
        FUN_0045c008((int)self,iVar2,local_20);
        FUN_0045c020((int)self,local_1c - iVar2);
        iVar2 = param_3;
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      local_30 = FUN_0045b17c();
      piVar3 = &local_30;
      local_2c = FUN_0045de6c(self,*param_2);
      bVar1 = FUN_0045bde4(&local_2c,piVar3);
      if (bVar1) {
        return iVar2;
      }
      param_2 = param_2 + 1;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004600cc  std::basic_filebuf<char>::vf2   (242 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_filebuf_char::vf2
int * __cdecl std::basic_filebuf_char::vf2(int *self,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_0045ae74();
    if (iVar2 == self[9]) {
      if (param_2 == 0) {
        self[0xc] = param_3;
      }
      else {
        self[0xc] = param_3 + -1;
        self[0x10] = param_2;
        FUN_0045c008((int)self,0,0);
        FUN_0045bfec((int)self,0,0,0);
        *(undefined1 *)((int)self + 0x29) = 0;
        *(undefined1 *)(self + 10) = 0;
      }
    }
    else {
      local_c = FUN_0045b17c();
      piVar3 = &local_c;
      FUN_0045b17c();
      local_8 = (**(code **)(*self + 0x24))();
      bVar1 = FUN_0045bde4(&local_8,piVar3);
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
        FUN_0045c008((int)self,0,0);
        FUN_0045bfec((int)self,0,0,0);
        *(undefined1 *)(self + 10) = 0;
        *(undefined1 *)((int)self + 0x29) = 0;
      }
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460da4  std::basic_filebuf<char>::vf3   (1576 bytes)   [rtti:vtable virtual slot 3]
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
  
  __InitExceptBlockLDTC(0x48717c);
  local_38 = param_3;
  FUN_0045e370(local_7c,0);
  iVar1 = FUN_0045ae74();
  if (iVar1 == param_2[9]) {
    FUN_0045e370(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else if ((param_3 == -1) && (param_4 == 0)) {
    FUN_0045e370(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else if (param_4 == 1) {
    iVar1 = 0;
    local_3c = 0;
    local_40 = 0;
    if ((char)param_2[10] == '\0') {
      if (*(char *)((int)param_2 + 0x29) != '\0') {
        iVar2 = FUN_0045de48((int)param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_0045de54((int)param_2);
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_0045bef8((int)param_2);
            pcVar4 = (char *)FUN_0045de54((int)param_2);
            iVar1 = FUN_0045e974((int)param_2,pcVar4,pcVar3);
            iVar1 = -iVar1;
            local_3c = FUN_0045de54((int)param_2);
            local_40 = FUN_0045bef8((int)param_2);
          }
        }
        else {
          pcVar3 = (char *)FUN_0045de3c((int)param_2);
          pcVar4 = (char *)FUN_0045de48((int)param_2);
          iVar1 = FUN_0045e974((int)param_2,pcVar4,pcVar3);
          iVar1 = -iVar1;
          local_3c = FUN_0045de48((int)param_2);
          local_40 = FUN_0045de3c((int)param_2);
        }
      }
    }
    else {
      iVar2 = FUN_0045bef8((int)param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_0045de48((int)param_2);
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_0045de60((int)param_2);
          pcVar4 = (char *)FUN_0045de3c((int)param_2);
          iVar1 = FUN_0045e974((int)param_2,pcVar4,pcVar3);
          local_3c = FUN_0045de3c((int)param_2);
          local_40 = FUN_0045de60((int)param_2);
        }
      }
      else {
        iVar1 = FUN_0045de54((int)param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_0045bf04((int)param_2);
          iVar2 = FUN_0045bef8((int)param_2);
          iVar1 = iVar1 - iVar2;
        }
        else {
          pcVar3 = (char *)FUN_0045bf04((int)param_2);
          pcVar4 = (char *)FUN_0045bef8((int)param_2);
          iVar1 = FUN_0045e974((int)param_2,pcVar4,pcVar3);
        }
        local_3c = FUN_0045bef8((int)param_2);
        local_40 = FUN_0045bf04((int)param_2);
      }
    }
    ehContext = 8;
    FUN_0045deb8(&loc3,(int)param_2);
    ehDtorCount = ehDtorCount + 1;
    piVar5 = (int *)FUN_0045df50(&loc3);
    local_44 = FUN_004613cc(piVar5);
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc3,2);
    if ((param_3 == 0) || (0 < local_44)) {
      if (local_44 < 1) {
        iVar2 = FUN_0045b7b8(param_2,param_2[9],0,1);
        FUN_0045e370(local_88,iVar2);
        FUN_004613dc(local_7c,local_88);
        if ((iVar1 != 0) && (iVar2 = FUN_0045de54((int)param_2), iVar2 != 0)) {
          local_48 = param_2[0xc];
          unused = local_3c;
          local_50 = local_3c;
          local_54 = local_40;
          local_60 = (undefined4 *)operator_new_array();
          local_64 = (undefined4 *)((int)local_60 + local_48);
          local_5c = local_60;
          local_58 = local_60;
          do {
            FUN_0045dde0((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf]);
            ehContext = 0x14;
            FUN_0045deb8(&loc2,(int)param_2);
            ehDtorCount = ehDtorCount + 1;
            piVar5 = (int *)FUN_0045df50(&loc2);
            local_68 = FUN_0045ddf4(piVar5);
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
            FUN_0046141c(local_7c,(int)local_60 + ((-(local_40 - local_3c) - iVar1) - (int)local_58)
                        );
          }
          else {
            FUN_0046140c(local_7c,(int)local_60 + ((iVar1 - (local_40 - local_3c)) - (int)local_58))
            ;
          }
          operator_delete_array();
        }
        FUN_0045e414(self,local_7c);
        *sehChainHead = sehPrevFrame;
      }
      else if (param_3 == 0) {
        iVar2 = FUN_0045b7b8(param_2,param_2[9],0,1);
        FUN_0045e370(self,(iVar2 - iVar1 * local_44) / local_44);
        *sehChainHead = sehPrevFrame;
      }
      else if (*(char *)((int)param_2 + 0x29) == '\0') {
        FUN_0045c008((int)param_2,0,0);
        FUN_0045bfec((int)param_2,0,0,0);
        iVar1 = FUN_0045b7b8(param_2,param_2[9],-((iVar1 - local_38) * local_44),1);
        FUN_0045e370(self,iVar1 / local_44);
        *sehChainHead = sehPrevFrame;
      }
      else {
        FUN_0045b17c();
        (**(code **)(*param_2 + 0x24))();
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        iVar1 = FUN_0045b7b8(param_2,param_2[9],local_38 * local_44,1);
        FUN_0045e370(self,iVar1 / local_44);
        *sehChainHead = sehPrevFrame;
      }
    }
    else {
      FUN_0045e370(self,-1);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    ehContext = 0x20;
    FUN_0045deb8(&loc,(int)param_2);
    ehDtorCount = ehDtorCount + 1;
    piVar5 = (int *)FUN_0045df50(&loc);
    local_70 = FUN_004613cc(piVar5);
    ehDtorCount = ehDtorCount + -1;
    std::locale::_dtor(&loc,2);
    if (local_70 < 1) {
      if ((param_4 != 0) || (param_3 != 0)) {
        FUN_0045e370(self,-1);
        *sehChainHead = sehPrevFrame;
        return self;
      }
      FUN_0045e370((int *)&GHIDRA_STACK(0xffffff44),0);
      (**(code **)(*param_2 + 0x10))();
    }
    if (*(char *)((int)param_2 + 0x29) != '\0') {
      FUN_0045b17c();
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
    iVar1 = FUN_0045b7b8(param_2,param_2[9],local_38 * local_70,iVar1);
    FUN_0045e370(local_a0,iVar1);
    FUN_004613dc(local_7c,local_a0);
    FUN_0045c008((int)param_2,0,0);
    FUN_0045bfec((int)param_2,0,0,0);
    FUN_0045e414(self,local_7c);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046142c  std::basic_filebuf<char>::vf4   (488 bytes)   [rtti:vtable virtual slot 4]
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
  
  __InitExceptBlockLDTC(0x4871b8);
  iVar2 = FUN_0045ae74();
  if (iVar2 == param_2[9]) {
    FUN_0045e370(self,-1);
    *sehChainHead = sehPrevFrame;
  }
  else {
    piVar3 = FUN_0045e370(local_44,-1);
    uVar4 = FUN_0045e464((int *)&GHIDRA_STACK(0x0000000c),piVar3);
    if ((char)uVar4 == '\0') {
      ehContext = 8;
      FUN_0045deb8(&loc,(int)param_2);
      ehDtorCount = ehDtorCount + 1;
      piVar3 = (int *)FUN_0045df50(&loc);
      iVar2 = FUN_004613cc(piVar3);
      ehDtorCount = ehDtorCount + -1;
      std::locale::_dtor(&loc,2);
      if (iVar2 < 1) {
        iVar2 = FUN_0045b7b8(param_2,param_2[9],0,2);
        iVar7 = 0;
        lDistanceToMove = FUN_0045e3f0((undefined4 *)&GHIDRA_STACK(0x0000000c));
        iVar7 = FUN_0045b7b8(param_2,param_2[9],lDistanceToMove,iVar7);
        if (iVar7 == -1) {
          FUN_0045e370(self,-1);
          *sehChainHead = sehPrevFrame;
        }
        else {
          FUN_0045c008((int)param_2,0,0);
          FUN_0045bfec((int)param_2,0,0,0);
          FUN_00461614(&local_30,(int)&GHIDRA_STACK(0x0000000c));
          puVar6 = (undefined4 *)FUN_0045dde0((undefined4 *)param_2[0xf],&local_30);
          FUN_0045dde0((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_0045b17c();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_0045bde4(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_0045e3f0((undefined4 *)&GHIDRA_STACK(0x0000000c)), iVar7 < iVar2)) {
            FUN_0045e370(self,-1);
            *sehChainHead = sehPrevFrame;
            return self;
          }
          FUN_0045e414(self,(undefined4 *)&GHIDRA_STACK(0x0000000c));
          *sehChainHead = sehPrevFrame;
        }
      }
      else {
        FUN_0045e3f0((undefined4 *)&GHIDRA_STACK(0x0000000c));
        (**(code **)(*param_2 + 0xc))();
        *sehChainHead = sehPrevFrame;
      }
    }
    else {
      FUN_0045e370(self,-1);
      *sehChainHead = sehPrevFrame;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463508  std::basic_filebuf<char>::vf13   (42 bytes)   [rtti:vtable virtual slot 13; function defined from vtable-slot]
//   written in code as std::basic_filebuf_char::vf13
char std::basic_filebuf_char::vf13(char *self,undefined4 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  char *unaff_EBX;
  char *unaff_EDI;
  
  cVar2 = (char)((uint)param_2 >> 8);
  *self = *self + cVar2;
  cVar1 = (char)self;
  *self = *self + cVar1;
  *self = *self + cVar1;
  *unaff_EDI = *unaff_EDI + cVar2;
  *self = *self + cVar1;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + (char)unaff_EBX;
  *self = *self + cVar1;
  *self = *self + cVar1;
  *self = *self + cVar1;
  *self = *self + cVar1;
  *self = *self + cVar1;
  *unaff_EBX = *unaff_EBX + param_3;
  *self = *self + cVar1;
  *unaff_EBX = *unaff_EBX + param_3;
  *self = *self + cVar1;
  return cVar1 + cVar2;
}

} // namespace tea
