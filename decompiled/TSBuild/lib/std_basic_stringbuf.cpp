// TSBuild.exe — runtime / library code "std_basic_stringbuf"
// 9 functions, 0x0045c030..0x00461af4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c030  std::basic_stringbuf<char>::basic_stringbuf   (130 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_stringbuf_char::basic_stringbuf
undefined4 * __cdecl std::basic_stringbuf_char::basic_stringbuf(undefined4 *self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486490);
  std::basic_streambuf_char::basic_streambuf(self);
  *self = &std::basic_stringbuf_char::vftable;
  self[9] = 0;
  self[10] = 0;
  self[0xb] = 0;
  FUN_0045c008((int)self,0,0);
  FUN_0045bfec((int)self,0,0,0);
  self[1] = param_2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c0b4  std::basic_stringbuf<char>::~basic_stringbuf   (109 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_stringbuf_char::_dtor
void __cdecl std::basic_stringbuf_char::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4864b4);
  if (self != (undefined4 *)0x0) {
    *self = &std::basic_stringbuf_char::vftable;
    if (self[9] != 0) {
      operator_delete_array();
    }
    std::basic_streambuf_char::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ebd0  std::basic_stringbuf<char>::vf9   (330 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::basic_stringbuf_char::vf9
int __cdecl std::basic_stringbuf_char::vf9(int *self,undefined1 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_c;
  uint n;
  
  if ((*(byte *)(self + 1) & 8) == 0) {
    iVar2 = FUN_0045b17c();
  }
  else {
    iVar2 = FUN_0045de3c((int)self);
    if (iVar2 == 0) {
      iVar2 = operator_new_array();
      FUN_0045c008((int)self,iVar2,iVar2 + 0x80);
      if ((*(byte *)(self + 1) & 4) != 0) {
        FUN_0045bfec((int)self,iVar2,iVar2,iVar2);
      }
      self[9] = iVar2;
    }
    else {
      iVar2 = FUN_0045de3c((int)self);
      n = iVar2 - self[9];
      iVar2 = n + 0x80;
      puVar3 = (undefined4 *)operator_new_array();
      FUN_00459ea8(puVar3,(undefined4 *)self[9],n);
      FUN_0045c008((int)self,puVar3,iVar2 + (int)puVar3);
      FUN_0045c020((int)self,n);
      iVar2 = FUN_0045bef8((int)self);
      iVar4 = FUN_0045de54((int)self);
      iVar5 = FUN_0045de3c((int)self);
      FUN_0045bfec((int)self,puVar3,(iVar2 - iVar4) + (int)puVar3,iVar5 + 1);
      operator_delete_array();
      self[9] = (int)puVar3;
    }
    local_c = FUN_0045b17c();
    bVar1 = FUN_0045bde4((int *)&param_2,&local_c);
    if (bVar1) {
      iVar2 = FUN_0045de24((int *)&param_2);
    }
    else {
      iVar2 = FUN_0045de6c(self,param_2);
    }
    iVar4 = FUN_0045de3c((int)self);
    iVar5 = FUN_0045de48((int)self);
    if (self[0xb] < iVar4 - iVar5) {
      iVar4 = FUN_0045de3c((int)self);
      iVar5 = FUN_0045de48((int)self);
      self[0xb] = iVar4 - iVar5;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ed1c  std::basic_stringbuf<char>::vf10   (238 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::basic_stringbuf_char::vf10
int __cdecl std::basic_stringbuf_char::vf10(int self,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_10;
  char local_9;
  int local_8;
  
  local_8 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&param_2,&local_8);
  if (!bVar1) {
    uVar3 = FUN_0045bef8(self);
    uVar4 = FUN_0045de54(self);
    if (uVar4 < uVar3) {
      local_9 = FUN_0045d91c((undefined1 *)&param_2);
      pcVar7 = &local_9;
      iVar5 = FUN_0045bef8(self);
      bVar1 = FUN_00459d40((char *)(iVar5 + -1),pcVar7);
      if (bVar1) {
        FUN_0045bfa0(self,-1);
        return param_2;
      }
      if ((*(byte *)(self + 4) & 8) != 0) {
        FUN_0045bfa0(self,-1);
        uVar2 = FUN_0045d91c((undefined1 *)&param_2);
        puVar6 = (undefined1 *)FUN_0045bef8(self);
        *puVar6 = uVar2;
        return param_2;
      }
    }
  }
  local_10 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&param_2,&local_10);
  if (bVar1) {
    uVar3 = FUN_0045bef8(self);
    uVar4 = FUN_0045de54(self);
    if (uVar4 < uVar3) {
      FUN_0045bfa0(self,-1);
      iVar5 = FUN_0045de24(&param_2);
      return iVar5;
    }
  }
  iVar5 = FUN_0045b17c();
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ee0c  std::basic_stringbuf<char>::vf7   (417 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::basic_stringbuf_char::vf7
void __cdecl std::basic_stringbuf_char::vf7(int self)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_0045bef8(self);
  if (iVar1 != 0) {
    uVar2 = FUN_0045bef8(self);
    uVar3 = FUN_0045bf04(self);
    if (uVar2 < uVar3) {
      puVar4 = (undefined1 *)FUN_0045bef8(self);
      FUN_0045beec(puVar4);
      return;
    }
  }
  iVar1 = FUN_0045de3c(self);
  if (iVar1 != 0) {
    uVar2 = FUN_0045de3c(self);
    uVar3 = FUN_0045bf04(self);
    if (uVar2 <= uVar3) {
      iVar1 = FUN_0045bf04(self);
      iVar5 = FUN_0045de54(self);
      if (*(int *)(self + 0x2c) <= iVar1 - iVar5) goto LAB_0045eefc;
    }
    iVar1 = FUN_0045bef8(self);
    if (iVar1 == 0) {
      iVar1 = FUN_0045de3c(self);
      iVar5 = FUN_0045de48(self);
      if (iVar1 - iVar5 < *(int *)(self + 0x2c)) {
        iVar1 = FUN_0045de48(self);
        iVar1 = iVar1 + *(int *)(self + 0x2c);
        uVar6 = FUN_0045de48(self);
        uVar7 = FUN_0045de48(self);
        FUN_0045bfec(self,uVar7,uVar6,iVar1);
      }
      else {
        uVar6 = FUN_0045de3c(self);
        uVar7 = FUN_0045de48(self);
        uVar8 = FUN_0045de48(self);
        FUN_0045bfec(self,uVar8,uVar7,uVar6);
      }
      puVar4 = (undefined1 *)FUN_0045bef8(self);
      FUN_0045beec(puVar4);
      return;
    }
  }
LAB_0045eefc:
  iVar1 = FUN_0045de3c(self);
  if (iVar1 == 0) {
LAB_0045efa4:
    FUN_0045b17c();
  }
  else {
    uVar2 = FUN_0045de3c(self);
    uVar3 = FUN_0045bf04(self);
    if (uVar2 <= uVar3) {
      iVar1 = FUN_0045bf04(self);
      iVar5 = FUN_0045de54(self);
      if (*(int *)(self + 0x2c) <= iVar1 - iVar5) goto LAB_0045efa4;
    }
    iVar1 = FUN_0045de3c(self);
    iVar5 = FUN_0045de48(self);
    if (iVar1 - iVar5 < *(int *)(self + 0x2c)) {
      iVar1 = FUN_0045de54(self);
      iVar1 = iVar1 + *(int *)(self + 0x2c);
      uVar6 = FUN_0045bef8(self);
      uVar7 = FUN_0045de54(self);
      FUN_0045bfec(self,uVar7,uVar6,iVar1);
    }
    else {
      uVar6 = FUN_0045de3c(self);
      uVar7 = FUN_0045bef8(self);
      uVar8 = FUN_0045de54(self);
      FUN_0045bfec(self,uVar8,uVar7,uVar6);
    }
    puVar4 = (undefined1 *)FUN_0045bef8(self);
    FUN_0045beec(puVar4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f564  std::basic_stringbuf<char>::vf11   (231 bytes)   [rtti:vtable virtual slot 11]
//   written in code as std::basic_stringbuf_char::vf11
uint __cdecl std::basic_stringbuf_char::vf11(int *self,undefined4 *src,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint n;
  int *piVar6;
  int local_c;
  int local_8;
  
  if ((src == (undefined4 *)0x0) || (param_3 == 0)) {
    n = 0;
  }
  else {
    iVar2 = FUN_0045de60((int)self);
    iVar3 = FUN_0045de3c((int)self);
    if ((iVar2 - iVar3) + 0x80 < (int)param_3) {
      FUN_0045de3c((int)self);
      FUN_0045de48((int)self);
      iVar2 = (**(code **)(*self + 8))();
      if (iVar2 == 0) {
        n = 0;
      }
      else {
        n = param_3;
        puVar4 = (undefined4 *)FUN_0045de3c((int)self);
        FUN_00459ea8(puVar4,src,n);
        FUN_0045c020((int)self,param_3);
        iVar2 = FUN_0045de3c((int)self);
        iVar3 = FUN_0045de48((int)self);
        self[0xb] = iVar2 - iVar3;
        n = param_3;
      }
    }
    else {
      for (n = 0; (int)n < (int)param_3; n = n + 1) {
        local_c = FUN_0045b17c();
        piVar6 = &local_c;
        local_8 = FUN_0045de6c(self,*(undefined1 *)src);
        bVar1 = FUN_0045bde4(&local_8,piVar6);
        if (bVar1) {
          return n;
        }
        src = (undefined4 *)((int)src + 1);
      }
    }
  }
  return n;
}

// ----------------------------------------------------------------------------------------------------
// 0x004601c8  std::basic_stringbuf<char>::vf2   (251 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_stringbuf_char::vf2
int __cdecl std::basic_stringbuf_char::vf2(int self,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint n;
  int iVar4;
  
  if ((*(byte *)(self + 4) & 8) != 0) {
    iVar1 = FUN_0045de3c(self);
    iVar2 = FUN_0045de48(self);
    if (iVar1 - iVar2 < param_3) {
      if (param_2 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)operator_new_array();
      }
      if (param_2 == (undefined4 *)0x0) {
        self = 0;
      }
      else {
        iVar1 = FUN_0045de3c(self);
        if (iVar1 == 0) {
          FUN_0045c008(self,param_2,param_3 + -1 + (int)param_2);
          if ((*(byte *)(self + 4) & 4) != 0) {
            FUN_0045bfec(self,param_2,param_2,param_2);
          }
          *(undefined4 **)(self + 0x24) = param_2;
        }
        else {
          iVar1 = FUN_0045de3c(self);
          n = iVar1 - *(int *)(self + 0x24);
          FUN_00459ea8(param_2,*(undefined4 **)(self + 0x24),n);
          FUN_0045c008(self,param_2,param_3 + -1 + (int)param_2);
          FUN_0045c020(self,n);
          iVar1 = FUN_0045bef8(self);
          iVar2 = FUN_0045de54(self);
          iVar4 = FUN_0045de3c(self);
          FUN_0045bfec(self,param_2,(iVar1 - iVar2) + (int)param_2,iVar4 + 1);
          operator_delete_array();
          *(undefined4 **)(self + 0x24) = param_2;
        }
      }
    }
    else {
      self = 0;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004616e0  std::basic_stringbuf<char>::vf3   (1041 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::basic_stringbuf_char::vf3
int * __cdecl std::basic_stringbuf_char::vf3(int *self,int *param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EDI;
  int local_1c [3];
  int local_10 [3];
  
  if (((param_5 & 4) != 0) && ((param_5 & 8) != 0)) {
    if ((param_4 != 0) && (param_4 != 2)) {
      FUN_0045e370(self,-1);
      return self;
    }
    piVar1 = FUN_0045e370(local_1c,-1);
    (**(code **)(*param_2 + 0xc))();
    uVar2 = FUN_0045e464(local_10,piVar1);
    if ((char)uVar2 != '\0') {
      FUN_0045e370(self,-1);
      return self;
    }
    (**(code **)(*param_2 + 0xc))();
    return self;
  }
  if (((param_5 & 4) != 0) && (iVar3 = FUN_0045bef8((int)param_2), iVar3 != 0)) {
    iVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    if (param_2[0xb] < iVar3 - iVar4) {
      iVar3 = FUN_0045bf04((int)param_2);
      iVar4 = FUN_0045de54((int)param_2);
      param_2[0xb] = iVar3 - iVar4;
    }
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    if (param_2[0xb] < iVar3 - iVar4) {
      iVar3 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      param_2[0xb] = iVar3 - iVar4;
    }
    if (param_4 == 0) {
      unaff_EDI = 0;
    }
    if (param_4 == 1) {
      iVar3 = FUN_0045bef8((int)param_2);
      iVar4 = FUN_0045de54((int)param_2);
      unaff_EDI = iVar3 - iVar4;
    }
    if (param_4 == 2) {
      unaff_EDI = param_2[0xb];
    }
    if (unaff_EDI < 0) {
      FUN_0045e370(self,-1);
      return self;
    }
    iVar3 = FUN_0045de54((int)param_2);
    uVar5 = iVar3 + unaff_EDI + param_3;
    uVar6 = FUN_0045bf04((int)param_2);
    if ((uVar5 <= uVar6) && (-1 < param_3 + unaff_EDI)) {
      uVar2 = FUN_0045bf04((int)param_2);
      iVar3 = FUN_0045de54((int)param_2);
      iVar3 = iVar3 + unaff_EDI + param_3;
      uVar7 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar7,iVar3,uVar2);
      FUN_0045e370(self,unaff_EDI + param_3);
      return self;
    }
    FUN_0045e370(self,-1);
    return self;
  }
  if (((((param_5 & 4) != 0) && (iVar3 = FUN_0045bef8((int)param_2), iVar3 == 0)) &&
      (iVar3 = FUN_0045bf04((int)param_2), iVar3 == 0)) &&
     (iVar3 = FUN_0045de54((int)param_2), iVar3 == 0)) {
    FUN_0045e370(self,0);
    return self;
  }
  if ((((param_5 & 8) == 0) || (iVar3 = FUN_0045de3c((int)param_2), iVar3 == 0)) ||
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      if (((((param_5 & 8) != 0) && (iVar3 = FUN_0045de3c((int)param_2), iVar3 == 0)) &&
          (iVar3 = FUN_0045de60((int)param_2), iVar3 == 0)) &&
         (iVar3 = FUN_0045de48((int)param_2), iVar3 == 0)) {
        FUN_0045e370(self,0);
        return self;
      }
      FUN_0045e370(self,-1);
    }
    else {
      iVar3 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      FUN_0045e370(self,iVar3 - iVar4);
    }
    return self;
  }
  iVar3 = FUN_0045bf04((int)param_2);
  iVar4 = FUN_0045de54((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  if (param_4 == 0) {
    unaff_EDI = 0;
  }
  if (param_4 == 1) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    unaff_EDI = iVar3 - iVar4;
  }
  if (param_4 == 2) {
    unaff_EDI = param_2[0xb];
  }
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar3 - iVar4) {
    iVar3 = FUN_0045de3c((int)param_2);
    iVar4 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar3 - iVar4;
  }
  if (param_3 + unaff_EDI < 0) {
LAB_004619cd:
    FUN_0045e370(self,-1);
    return self;
  }
  iVar3 = FUN_0045de48((int)param_2);
  uVar5 = iVar3 + unaff_EDI + param_3;
  uVar6 = FUN_0045de60((int)param_2);
  if (uVar6 < uVar5) goto LAB_004619cd;
  iVar3 = FUN_0045de3c((int)param_2);
  iVar4 = FUN_0045de48((int)param_2);
  FUN_0045c020((int)param_2,(param_3 + unaff_EDI) - (iVar3 - iVar4));
  iVar3 = FUN_0045de54((int)param_2);
  if (iVar3 != 0) {
    uVar5 = FUN_0045bef8((int)param_2);
    uVar6 = FUN_0045de3c((int)param_2);
    if (uVar5 <= uVar6) {
      uVar2 = FUN_0045de3c((int)param_2);
      uVar7 = FUN_0045bef8((int)param_2);
      uVar8 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar8,uVar7,uVar2);
      goto LAB_00461a70;
    }
  }
  if (((param_2[1] & 8U) != 0) && ((param_2[1] & 4U) == 0)) {
    uVar2 = FUN_0045de3c((int)param_2);
    uVar7 = FUN_0045de3c((int)param_2);
    uVar8 = FUN_0045de48((int)param_2);
    FUN_0045bfec((int)param_2,uVar8,uVar7,uVar2);
  }
LAB_00461a70:
  FUN_0045e370(self,unaff_EDI + param_3);
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461af4  std::basic_stringbuf<char>::vf4   (634 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::basic_stringbuf_char::vf4
int * __cdecl std::basic_stringbuf_char::vf4(int *self,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  byte in_stack_00000018;
  int local_1c [3];
  int local_10 [3];
  
  iVar1 = FUN_0045e3f0((undefined4 *)&GHIDRA_STACK(0x0000000c));
  if (((in_stack_00000018 & 4) != 0) && ((in_stack_00000018 & 8) != 0)) {
    piVar2 = FUN_0045e370(local_1c,-1);
    FUN_0045e414((undefined4 *)&GHIDRA_STACK(0xffffffc4),(undefined4 *)&GHIDRA_STACK(0x0000000c));
    (**(code **)(*param_2 + 0x10))();
    uVar3 = FUN_0045e464(local_10,piVar2);
    if ((char)uVar3 != '\0') {
      FUN_0045e370(self,-1);
      return self;
    }
    FUN_0045e414((undefined4 *)&GHIDRA_STACK(0xffffffc8),(undefined4 *)&GHIDRA_STACK(0x0000000c));
    (**(code **)(*param_2 + 0x10))();
    return self;
  }
  if (((in_stack_00000018 & 4) != 0) && (iVar4 = FUN_0045bef8((int)param_2), iVar4 != 0)) {
    if (iVar1 < 0) {
      FUN_0045e370(self,-1);
      return self;
    }
    iVar4 = FUN_0045de54((int)param_2);
    uVar5 = iVar4 + iVar1;
    uVar6 = FUN_0045bf04((int)param_2);
    if (uVar6 < uVar5) {
      FUN_0045e370(self,-1);
      return self;
    }
    uVar3 = FUN_0045bf04((int)param_2);
    iVar4 = FUN_0045de54((int)param_2);
    iVar4 = iVar4 + iVar1;
    uVar7 = FUN_0045de54((int)param_2);
    FUN_0045bfec((int)param_2,uVar7,iVar4,uVar3);
    FUN_0045e370(self,iVar1);
    return self;
  }
  if ((((in_stack_00000018 & 8) == 0) || (iVar4 = FUN_0045de3c((int)param_2), iVar4 == 0)) ||
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      FUN_0045e370(self,-1);
    }
    else {
      iVar1 = FUN_0045de3c((int)param_2);
      iVar4 = FUN_0045de48((int)param_2);
      FUN_0045e370(self,iVar1 - iVar4);
    }
    return self;
  }
  if (iVar1 < 0) {
LAB_00461c5a:
    FUN_0045e370(self,-1);
    return self;
  }
  iVar4 = FUN_0045de48((int)param_2);
  uVar5 = iVar4 + iVar1;
  uVar6 = FUN_0045de60((int)param_2);
  if (uVar6 < uVar5) goto LAB_00461c5a;
  iVar4 = FUN_0045de3c((int)param_2);
  iVar8 = FUN_0045de48((int)param_2);
  if (param_2[0xb] < iVar4 - iVar8) {
    iVar4 = FUN_0045de3c((int)param_2);
    iVar8 = FUN_0045de48((int)param_2);
    param_2[0xb] = iVar4 - iVar8;
  }
  iVar4 = FUN_0045de3c((int)param_2);
  iVar8 = FUN_0045de48((int)param_2);
  FUN_0045c020((int)param_2,iVar1 - (iVar4 - iVar8));
  iVar4 = FUN_0045de54((int)param_2);
  if (iVar4 != 0) {
    uVar5 = FUN_0045bef8((int)param_2);
    uVar6 = FUN_0045de3c((int)param_2);
    if (uVar5 <= uVar6) {
      uVar3 = FUN_0045de3c((int)param_2);
      uVar7 = FUN_0045bef8((int)param_2);
      uVar9 = FUN_0045de54((int)param_2);
      FUN_0045bfec((int)param_2,uVar9,uVar7,uVar3);
      goto LAB_00461d26;
    }
  }
  if (((param_2[1] & 8U) != 0) && ((param_2[1] & 4U) == 0)) {
    uVar3 = FUN_0045de60((int)param_2);
    uVar7 = FUN_0045de3c((int)param_2);
    uVar9 = FUN_0045de48((int)param_2);
    FUN_0045bfec((int)param_2,uVar9,uVar7,uVar3);
  }
LAB_00461d26:
  FUN_0045e370(self,iVar1);
  return self;
}

} // namespace tea
