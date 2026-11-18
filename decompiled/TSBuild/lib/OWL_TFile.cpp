// TSBuild.exe — runtime / library code "OWL_TFile"
// 33 functions, 0x00420bc8..0x0044aeac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420bc8  OWL::TFile::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
undefined4 __cdecl OWL::TFile::vf1(int self)

{
  return *(undefined4 *)(self + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00420bd4  OWL::TFile::vf4   (26 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TFile::vf4(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420bf0  OWL::TFile::vf5   (18 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TFile::vf5(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c04  OWL::TFile::vf6   (18 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TFile::vf6(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c18  OWL::TFile::vf7   (23 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TFile::vf7(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c30  OWL::TFile::vf8   (18 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TFile::vf8(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c44  OWL::TFile::vf9   (18 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TFile::vf9(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c58  OWL::TFile::vf10   (29 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TFile::vf10(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c78  OWL::TFile::vf11   (26 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TFile::vf11(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c94  OWL::TFile::vf12   (26 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TFile::vf12(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420cb0  OWL::TFile::vf13   (26 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TFile::vf13(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420ccc  OWL::TFile::vf17   (32 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TFile::vf17(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x50))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420cec  OWL::TFile::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TFile::vf18(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420d0c  OWL::TFile::vf25   (40 bytes)   [rtti:vtable virtual slot 25]
undefined4 __cdecl OWL::TFile::vf25(int *self,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*self + 0x30))();
  if (iVar1 == -1) {
    return 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420d34  OWL::TFile::vf32   (33 bytes)   [rtti:vtable virtual slot 32]
void __cdecl OWL::TFile::vf32(int *self,uint *param_2)

{
  char *len;
  undefined4 extraout_EDX;
  uint *puVar2;
  
  puVar2 = param_2;
  len = strlen(param_2);
  (**(code **)(*self + 0x34))(*self,extraout_EDX,puVar2,self,param_2,len);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a410  OWL::TFile::~TFile   (132 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFile::_dtor
void __cdecl OWL::TFile::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482068);
  if (self != (int *)0x0) {
    *self = (int)&OWL::TFile::vftable;
    if ((char)self[2] != '\0') {
      (**(code **)(*self + 0xc))();
    }
    if ((self[1] != 0) && ((undefined4 *)self[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)self[1])();
    }
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a4dc  OWL::TFile::vf2   (199 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TFile::vf2(int self,uint *s,undefined4 param_3)

{
  char cVar1;
  undefined4 *diskFileHandle;
  undefined4 *sehChainHead;
  bool bVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4820a8);
  if (*(int *)(self + 4) == 0) {
    diskFileHandle = (undefined4 *)operator_new();
    if (diskFileHandle != (undefined4 *)0x0) {
      OWL::TDiskFileHandle::TDiskFileHandle(diskFileHandle,s,param_3);
    }
    *(undefined4 **)(self + 4) = diskFileHandle;
    cVar1 = (**(code **)(**(int **)(self + 4) + 0x10))();
    if (cVar1 == '\0') {
      if (*(undefined4 **)(self + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(self + 4))();
      }
      *(undefined4 *)(self + 4) = 0;
    }
    *(undefined1 *)(self + 8) = 1;
    bVar3 = *(int *)(self + 4) != 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    bVar3 = false;
    *sehChainHead = sehPrevFrame;
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a5a4  OWL::TFile::vf3   (145 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TFile::vf3(int self)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  uVar1 = __InitExceptBlockLDTC(0x4820f0);
  if (((*(int *)(self + 4) != 0) && (*(char *)(self + 8) != '\0')) &&
     (uVar1 = (**(code **)(**(int **)(self + 4) + 0x18))(), (char)uVar1 == '\0')) {
    *sehChainHead = sehPrevFrame;
    return 0;
  }
  if ((*(int *)(self + 4) != 0) && (*(undefined4 **)(self + 4) != (undefined4 *)0x0)) {
    uVar1 = (**(code **)**(undefined4 **)(self + 4))();
  }
  *(undefined4 *)(self + 4) = 0;
  *(undefined1 *)(self + 8) = 0;
  *sehChainHead = sehPrevFrame;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a638  OWL::TFile::vf14   (18 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TFile::vf14(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a64c  OWL::TFile::vf15   (26 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TFile::vf15(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a668  OWL::TFile::vf16   (26 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TFile::vf16(int self)

{
  (**(code **)(**(int **)(self + 4) + 0x4c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad60  OWL::TFile::vf19   (28 bytes)   [rtti:vtable virtual slot 19]
uint __cdecl OWL::TFile::vf19(int *self)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  
  uVar1 = (**(code **)(*self + 0x30))();
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)((uint)in_ECX >> 0x18));
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad7c  OWL::TFile::vf20   (31 bytes)   [rtti:vtable virtual slot 20]
undefined2 __cdecl OWL::TFile::vf20(int *self)

{
  undefined2 local_6;
  
  FUN_0044ad18(self,&local_6,1,0);
  return local_6;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad9c  OWL::TFile::vf21   (30 bytes)   [rtti:vtable virtual slot 21]
undefined4 __cdecl OWL::TFile::vf21(int *self)

{
  undefined4 local_8;
  
  FUN_0044ad18(self,&local_8,2,0);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044adbc  OWL::TFile::vf22   (36 bytes)   [rtti:vtable virtual slot 22]
undefined4 __cdecl OWL::TFile::vf22(int *self)

{
  undefined4 local_c [2];
  
  FUN_0044ad18(self,local_c,5,0);
  return local_c[0];
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ade0  OWL::TFile::vf23   (30 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TFile::vf23(int *self)

{
  undefined1 local_8 [4];
  
  FUN_0044ad18(self,local_8,3,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae00  OWL::TFile::vf24   (33 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TFile::vf24(int *self)

{
  undefined1 local_c [8];
  
  FUN_0044ad18(self,local_c,4,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae24  OWL::TFile::vf26   (23 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TFile::vf26(int *self)

{
  (**(code **)(*self + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae3c  OWL::TFile::vf27   (25 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TFile::vf27(int *self)

{
  FUN_0044ad3c(self,&GHIDRA_STACK(0x00000008),1,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae58  OWL::TFile::vf28   (25 bytes)   [rtti:vtable virtual slot 28]
void __cdecl OWL::TFile::vf28(int *self)

{
  FUN_0044ad3c(self,&GHIDRA_STACK(0x00000008),2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae74  OWL::TFile::vf29   (25 bytes)   [rtti:vtable virtual slot 29]
void __cdecl OWL::TFile::vf29(int *self)

{
  FUN_0044ad3c(self,&GHIDRA_STACK(0x00000008),5,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae90  OWL::TFile::vf30   (25 bytes)   [rtti:vtable virtual slot 30]
void __cdecl OWL::TFile::vf30(int *self)

{
  FUN_0044ad3c(self,&GHIDRA_STACK(0x00000008),3,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aeac  OWL::TFile::vf31   (25 bytes)   [rtti:vtable virtual slot 31]
void __cdecl OWL::TFile::vf31(int *self)

{
  FUN_0044ad3c(self,&GHIDRA_STACK(0x00000008),4,0);
  return;
}

} // namespace tea
