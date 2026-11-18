// TEACON.exe — runtime / library code "rwstd_facet_imp"
// 4 functions, 0x0041c020..0x0041c68c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c020  __rwstd::facet_imp::facet_imp   (84 bytes)   [rtti:vtable-store constructor]
//   constructor: stores __rwstd::facet_imp's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl __rwstd::facet_imp::facet_imp(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4309dc);
  __rwstd::ref_counted::ref_counted(self,param_2);
  *self = &__rwstd::facet_imp::vftable;
  self[2] = 0;
  self[3] = param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c3ec  __rwstd::facet_imp::vf2   (48 bytes)   [rtti:vtable virtual slot 2; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0041c545) overlaps instruction at (ram,0x0041c544)
    */
/* WARNING: Removing unreachable block (ram,0x0041c480) */
/* WARNING: Removing unreachable block (ram,0x0041c48a) */
/* WARNING: Removing unreachable block (ram,0x0041c544) */
byte * __rwstd::facet_imp::vf2(int *self,byte *param_2,char *param_3,ushort param_4,undefined4 param_5, char *param_6,byte *param_7,char *param_8,byte *param_9,undefined4 *param_10, undefined4 *param_11,char *param_12,ushort param_13,undefined4 param_14, char *param_15,byte *param_16,char *param_17,byte *param_18)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  short sVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  undefined3 uVar9;
  char cVar11;
  undefined2 uVar10;
  byte bVar12;
  char *unaff_EBX;
  ushort unaff_BP;
  char *unaff_ESI;
  undefined4 *unaff_EDI;
  int in_GS_OFFSET;
  char in_CF;
  char *in_stack_00000000;
  
  *(char *)self = ((char)*self - (char)self) - in_CF;
  *(char *)self = (char)*self + (char)self;
  pbVar8 = (byte *)((int)self + *self);
  bVar6 = (byte)pbVar8;
  *pbVar8 = *pbVar8 ^ bVar6;
  *pbVar8 = *pbVar8 + bVar6;
  *pbVar8 = *pbVar8 + bVar6;
  *pbVar8 = *pbVar8 + bVar6;
  cVar11 = (char)((uint)param_2 >> 8);
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + cVar11;
  cVar7 = (char)in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + cVar7;
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  uVar9 = (undefined3)((uint)in_stack_00000000 >> 8);
  *in_stack_00000000 = *in_stack_00000000 + cVar7;
  cVar7 = *unaff_ESI;
  pbVar8 = (byte *)CONCAT31(uVar9,cVar7);
  out(0x41,pbVar8);
  *param_3 = *param_3 + cVar7;
  bVar6 = *pbVar8;
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  *pbVar8 = *pbVar8 + bVar12;
  uVar10 = SUB42(param_2,0);
  if (CARRY1(bVar6,bVar12)) {
    puVar1 = (ushort *)(unaff_EDI + 0x19);
    sVar4 = (unaff_BP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    puVar1 = (ushort *)(unaff_ESI + in_GS_OFFSET + 0x75);
    sVar4 = ((ushort)(unaff_ESI + 1) & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    if (cVar7 != 'c') {
      bVar6 = *param_2;
      uVar3 = in(uVar10);
      *unaff_EDI = uVar3;
      if (bVar12 != bVar6) {
        *param_9 = *param_9 + (char)param_9;
        return param_9 + 1;
      }
      goto code_r0x0041c4a4;
    }
    *pbVar8 = *pbVar8 + 99;
    *pbVar8 = *pbVar8 + 99;
    *pbVar8 = *pbVar8 + 99;
    param_9 = (byte *)CONCAT31(uVar9,99);
  }
  else {
    param_9 = pbVar8;
    if (*pbVar8 == 0) {
      uVar2 = in(uVar10);
      *(undefined1 *)unaff_EDI = uVar2;
      out(*(undefined4 *)(unaff_ESI + 1),uVar10);
      puVar1 = (ushort *)(param_3 + 0x74);
      *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
      out(*(undefined4 *)(unaff_ESI + 5),uVar10);
      if (CARRY1(bVar6,bVar12)) {
        pbVar8[0x890] = pbVar8[0x890] + (char)param_2;
        *unaff_EBX = *unaff_EBX + cVar7;
        *pbVar8 = *pbVar8 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar1 = (ushort *)(pbVar8 + 0x61);
      sVar4 = (unaff_BP & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
      unaff_ESI[9] = unaff_ESI[9] & bVar12;
      *pbVar8 = *pbVar8 + cVar7;
      *pbVar8 = *pbVar8 + cVar7;
      pcVar5 = (code *)swi(3);
      pbVar8 = (byte *)(*pcVar5)(pbVar8,param_2,param_3);
      return pbVar8;
    }
  }
  cVar7 = (char)param_9;
  *param_9 = *param_9 + cVar7;
  *param_9 = *param_9 + cVar7;
  *param_9 = *param_9 + cVar7;
  *param_9 = *param_9 + cVar7;
  *(char *)((int)param_9 * 2) = *(char *)((int)param_9 * 2) + (char)param_3;
  *param_9 = *param_9 + cVar7;
code_r0x0041c4a4:
  pbVar8 = param_9 + *(int *)param_9;
  *pbVar8 = *pbVar8 & (byte)pbVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c648  __rwstd::facet_imp::~facet_imp   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as __rwstd::facet_imp::_dtor
void __cdecl __rwstd::facet_imp::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430ba0);
  if (self != (undefined4 *)0x0) {
    __rwstd::ref_counted::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c68c  __rwstd::facet_imp::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall __rwstd::facet_imp::vf1(void)

{
  return;
}

} // namespace tea
