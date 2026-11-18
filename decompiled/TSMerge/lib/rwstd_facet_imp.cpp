// TSMerge.exe — runtime / library code "rwstd_facet_imp"
// 4 functions, 0x00411394..0x00453060. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411394  __rwstd::facet_imp::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall __rwstd::facet_imp::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041139c  __rwstd::facet_imp::~facet_imp   (66 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::facet_imp::_dtor
void __cdecl __rwstd::facet_imp::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465048);
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
// 0x00452ef0  __rwstd::facet_imp::facet_imp   (84 bytes)   [rtti:vtable-store constructor]
//   constructor: stores __rwstd::facet_imp's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl __rwstd::facet_imp::facet_imp(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472f64);
  __rwstd::ref_counted::ref_counted(self,param_2);
  *self = &__rwstd::facet_imp::vftable;
  self[2] = 0;
  self[3] = param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453060  __rwstd::facet_imp::vf2   (48 bytes)   [rtti:vtable virtual slot 2; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004533d8) overlaps instruction at (ram,0x004533d6)
    */
/* WARNING: Removing unreachable block (ram,0x0045329d) */
/* WARNING: Removing unreachable block (ram,0x00453328) */
/* WARNING: Removing unreachable block (ram,0x00453371) */
/* WARNING: Removing unreachable block (ram,0x00453335) */
/* WARNING: Removing unreachable block (ram,0x0045333a) */
/* WARNING: Removing unreachable block (ram,0x00453286) */
/* WARNING: Removing unreachable block (ram,0x004530f4) */
/* WARNING: Removing unreachable block (ram,0x004530fe) */
/* WARNING: Removing unreachable block (ram,0x004531b8) */
/* WARNING: Removing unreachable block (ram,0x0045331b) */
/* WARNING: Removing unreachable block (ram,0x00453324) */
/* WARNING: Removing unreachable block (ram,0x00453326) */
/* WARNING: Removing unreachable block (ram,0x00453362) */
/* WARNING: Removing unreachable block (ram,0x004533d8) */
/* WARNING: Removing unreachable block (ram,0x00453364) */
/* WARNING: Removing unreachable block (ram,0x004531ad) */
undefined4 __rwstd::facet_imp::vf2(int *self,undefined **param_2,byte *param_3,byte *param_4,undefined4 param_5, char *param_6,undefined **param_7,byte *param_8,byte *param_9,byte *param_10, undefined4 *param_11,undefined4 *param_12,byte *param_13,undefined4 param_14, char *param_15,undefined **param_16,byte *param_17,byte *param_18,byte *param_19, byte *param_20,byte *param_21,undefined4 param_22,char *param_23,undefined **param_24, byte *param_25,uint *param_26,byte *param_27,byte *param_28,byte *param_29, undefined4 param_30,char *param_31,undefined **param_32,byte *param_33,byte *param_34)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int refs;
  short sVar8;
  uint uVar9;
  byte *pbVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  byte bVar17;
  byte *pbVar14;
  undefined3 uVar18;
  char *pcVar15;
  byte *pbVar19;
  int extraout_ECX;
  undefined2 uVar20;
  undefined **exception_;
  char *unaff_EBX;
  int iVar22;
  byte *unaff_EBP;
  byte *pbVar23;
  undefined4 *unaff_ESI;
  byte *pbVar24;
  undefined4 *unaff_EDI;
  byte *pbVar26;
  int *piVar27;
  undefined4 *sehChainHead;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar28;
  bool bVar29;
  char *in_stack_00000000;
  uint *puVar16;
  byte *pbVar25;
  
  *(char *)self = ((char)*self - (char)self) - in_CF;
  *(char *)self = (char)*self + (char)self;
  pbVar14 = (byte *)((int)self + *self);
  bVar12 = (byte)pbVar14;
  *pbVar14 = *pbVar14 ^ bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  cVar13 = (char)((uint)param_2 >> 8);
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + cVar13;
  cVar11 = (char)in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + cVar11;
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  uVar18 = (undefined3)((uint)in_stack_00000000 >> 8);
  *in_stack_00000000 = *in_stack_00000000 + cVar11;
  cVar11 = DAT_01004553;
  pbVar14 = (byte *)CONCAT31(uVar18,DAT_01004553);
  bVar12 = *pbVar14;
  bVar17 = (byte)((uint)unaff_EBX >> 8);
  *pbVar14 = *pbVar14 + bVar17;
  uVar20 = SUB42(param_2,0);
  if (CARRY1(bVar12,bVar17)) {
    puVar1 = (ushort *)(unaff_EDI + 0x19);
    sVar8 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar8) * sVar8;
    puVar1 = (ushort *)((int)unaff_ESI + in_GS_OFFSET + 0x74);
    sVar8 = ((ushort)unaff_ESI & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar8) * sVar8;
    if (cVar11 != 'c') {
      bVar12 = *(byte *)param_2;
      uVar3 = in(uVar20);
      *unaff_EDI = uVar3;
      if (bVar17 != bVar12) {
        bVar17 = (byte)param_9;
        bVar12 = *param_9;
        *param_9 = *param_9 + bVar17;
        *(char *)param_7 = *(char *)param_7 + (char)param_7 + CARRY1(bVar12,bVar17);
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_6 = *param_6 + bVar17;
        *param_9 = *param_9 + bVar17;
        param_9[0x33] = param_9[0x33] + (char)param_8 + '\x01';
        *param_9 = *param_9 + (char)param_7;
        *param_9 = *param_9 + bVar17;
        *param_6 = *param_6 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *param_9 = *param_9 + bVar17;
        *(char *)((int)param_9 * 2) = *(char *)((int)param_9 * 2) + bVar17;
        *param_9 = *param_9 + bVar17;
        pbVar14 = param_9 + *(int *)param_9;
        *pbVar14 = *pbVar14 & (byte)pbVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00453118;
    }
    *pbVar14 = *pbVar14 + 99;
    *pbVar14 = *pbVar14 + 99;
    *pbVar14 = *pbVar14 + 99;
    param_9 = (byte *)CONCAT31(uVar18,99);
  }
  else {
    param_9 = pbVar14;
    if (*pbVar14 == 0) {
      uVar2 = in(uVar20);
      *(undefined1 *)unaff_EDI = uVar2;
      out(*unaff_ESI,uVar20);
      puVar1 = (ushort *)(param_3 + 0x74);
      *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
      pbVar25 = (byte *)(unaff_ESI + 2);
      out(unaff_ESI[1],uVar20);
      if (CARRY1(bVar12,bVar17)) {
        pbVar14[0x890] = pbVar14[0x890] + (char)param_2;
        *unaff_EBX = *unaff_EBX + cVar11;
        *pbVar14 = *pbVar14 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar1 = (ushort *)(pbVar14 + 0x61);
      sVar8 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar8) * sVar8;
      *pbVar25 = *pbVar25 & bVar17;
      *pbVar14 = *pbVar14 + cVar11;
      *pbVar14 = *pbVar14 + cVar11;
      bVar12 = in(uVar20);
      bVar12 = bVar12 ^ *unaff_EBP;
      piVar27 = (int *)CONCAT31(uVar18,bVar12);
      *(byte *)piVar27 = (char)*piVar27 + bVar12;
      *(byte *)piVar27 = (char)*piVar27 + bVar12;
      pcVar15 = (char *)((int)piVar27 + *piVar27);
      cVar11 = (char)pcVar15;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      *pcVar15 = *pcVar15 + cVar11;
      pcVar15[(int)param_2] = pcVar15[(int)param_2] + cVar11;
      pcVar15[0x31] = pcVar15[0x31] + (char)((uint)pcVar15 >> 8);
      pbVar14 = (byte *)(pcVar15 + 1);
      *pbVar14 = *pbVar14 + (char)pbVar14;
      *pbVar14 = *pbVar14 + (char)pbVar14;
      unaff_EBX[0x74] = unaff_EBX[0x74] + cVar13;
      bVar12 = (byte)((uint)param_23 >> 8);
      cVar11 = (char)param_26;
      pbVar26 = (byte *)((int)unaff_EDI + 1);
      if (bVar17 < *(byte *)((int)sehChainHead + (int)param_2)) {
        bVar17 = (byte)((uint)pbVar14 >> 8);
        bVar29 = bVar17 == unaff_EBX[0x68];
        if (bVar17 < (byte)unaff_EBX[0x68]) goto code_r0x0045327b;
        bVar28 = false;
        pbVar14 = param_34;
        puVar16 = param_26;
        param_3 = param_33;
        pbVar19 = param_25;
        param_2 = param_32;
        exception_ = param_24;
        unaff_EBX = param_31;
        pcVar15 = param_23;
        unaff_EBP = param_29;
        pbVar23 = param_21;
        pbVar25 = param_28;
        pbVar24 = param_20;
        pbVar26 = param_27;
        pbVar10 = param_19;
        if (!bVar29) goto code_r0x0045321f;
code_r0x00453290:
        param_17 = pbVar10;
        bVar12 = (byte)puVar16;
        param_21 = pbVar23;
        if (bVar28 || bVar29) {
          *(int *)pbVar19 = *(int *)pbVar19 + 1;
          *(byte *)puVar16 = (char)*puVar16 + bVar12;
          param_26 = puVar16;
          param_25 = pbVar19;
          param_24 = exception_;
          param_23 = pcVar15;
          goto code_r0x004532fb;
        }
        puVar1 = (ushort *)(param_17 + (int)pbVar23 * 2 + 0x72);
        sVar8 = ((ushort)pbVar24 & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar8) * sVar8;
        bVar17 = (byte)((uint)pcVar15 >> 8);
        if (bVar12 < 0x5f) {
          bVar12 = *(byte *)((int)sehChainHead + (int)exception_);
code_r0x00453315:
          if (bVar17 < bVar12) {
            *(byte *)(exception_ + 0x1187fa) = *(byte *)(exception_ + 0x1187fa) + bVar17;
            goto code_r0x0045338a;
          }
        }
        else {
          if (bVar12 != 0x5f) {
            bVar12 = *(byte *)exception_;
            goto code_r0x00453315;
          }
          __InitExceptBlockLDTC((int)puVar16);
          pbVar23[-0xffffffff00000014] = 8;
          pbVar23[-0xffffffff00000013] = 0;
          exception_ = &std::exception::vftable;
code_r0x0045338a:
          pbVar19 = *(byte **)(pbVar23 + 8);
        }
        *(undefined ***)pbVar19 = exception_;
      }
      else {
code_r0x0045321f:
        pbVar24 = (byte *)(*(int *)(unaff_EBX + (int)pbVar25 * 2 + 0x3c) * 0x72616863);
        bVar28 = (byte)pbVar14 < 0x73;
        cVar13 = (byte)pbVar14 + 0x8d;
        puVar16 = (uint *)CONCAT31((int3)((uint)pbVar14 >> 8),cVar13);
        bVar29 = true;
        pbVar19 = param_3;
        exception_ = param_2;
        pcVar15 = unaff_EBX;
        pbVar23 = unaff_EBP;
        pbVar10 = pbVar26;
        if (cVar13 == '\0') goto code_r0x00453290;
        bVar4 = *(byte *)param_2;
        bVar17 = in(GH_PIECE(param_24, 0, undefined2));
        *param_19 = bVar17;
        bVar17 = in(GH_PIECE(param_24, 0, undefined2));
        param_19[1] = bVar17;
        out(*(undefined4 *)param_20,GH_PIECE(param_24, 0, undefined2));
        puVar1 = (ushort *)(param_25 + 0x74);
        *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
        pbVar14 = param_20 + 8;
        out(*(undefined4 *)(param_20 + 4),GH_PIECE(param_24, 0, undefined2));
        if (bVar4 <= (byte)((uint)unaff_EBX >> 8)) {
          puVar1 = (ushort *)((int)param_26 + 0x61);
          sVar8 = ((ushort)param_21 & 3) - (*puVar1 & 3);
          *puVar1 = *puVar1 + (ushort)(0 < sVar8) * sVar8;
          *pbVar14 = *pbVar14 & bVar12;
          *pbVar14 = *pbVar14 & bVar12;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + (char)param_25;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *param_23 = *param_23 + cVar11;
          *(char *)param_26 = (char)*param_26 + (char)((uint)param_24 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_26 = *param_26 + (int)param_26;
        *(char *)param_26 = (char)*param_26 + cVar11;
        param_24 = (undefined **)((uint)param_24 & 0xff);
code_r0x0045327b:
        *param_25 = *param_25 + cVar11;
        uVar9 = *param_26;
        bVar12 = (byte)((uint)param_25 >> 8);
        *(byte *)param_26 = (char)*param_26 + bVar12;
        if (!CARRY1((byte)uVar9,bVar12)) {
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + (char)param_23;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          *(char *)param_26 = (char)*param_26 + cVar11;
          param_17 = param_19;
        }
code_r0x004532fb:
        pcVar15 = (char *)((int)param_26 * 2 + 0x58);
        *pcVar15 = *pcVar15 + (char)param_24;
        cVar11 = (char)param_26;
        *(char *)param_26 = (char)*param_26 + cVar11;
        *(char *)param_26 = (char)*param_26 + cVar11;
        *(char *)param_26 = (char)*param_26 + cVar11;
        *(char *)param_26 = (char)*param_26 + cVar11;
        *(char *)param_26 = (char)*param_26 + cVar11;
        *(char *)param_26 = (char)*param_26 + cVar11;
        pbVar14 = param_17 + 0x5f;
        bVar12 = *pbVar14;
        *pbVar14 = *pbVar14 + (byte)param_23;
        if (!CARRY1(bVar12,(byte)param_23)) {
          func_0x8b4579aa();
          param_21 = param_21 + -1;
          *(byte *)(extraout_ECX + -0x7ba00ef) =
               *(byte *)(extraout_ECX + -0x7ba00ef) | (byte)extraout_ECX;
          goto code_r0x00453392;
        }
        param_23[0x1189084d] = param_23[0x1189084d] + (char)param_25;
      }
      *(int *)(param_21 + -8) = *(int *)(param_21 + -8) + 1;
code_r0x00453392:
      **(undefined4 **)(param_21 + 8) = &std::ios_base::failure::vftable;
      iVar5 = *(int *)(param_21 + 0xc);
      iVar6 = *(int *)(param_21 + 8);
      iVar22 = iVar6 + 8;
      *(undefined4 *)(iVar6 + 0x10) = 0;
      param_21[-0xffffffff00000014] = 0x14;
      param_21[-0xffffffff00000013] = 0;
      refs = *(int *)(*(int *)(iVar5 + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        uVar9 = *(uint *)(*(int *)(iVar5 + 8) + -4);
        piVar27 = std::string::__getRep(iVar22,uVar9,uVar9);
        *(int **)(param_21 + -0x34) = piVar27;
        *(int *)(param_21 + -0x30) = *(int *)(param_21 + -0x34) + 0xc;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_21 + -0x30);
        *(int *)(param_21 + -0x38) = iVar22;
        *(undefined4 *)(param_21 + -0x5c) = *(undefined4 *)(*(int *)(param_21 + -0x38) + 8);
        *(uint *)(param_21 + -0x3c) = uVar9;
        *(undefined4 *)(param_21 + -0x40) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(param_21 + -0x44) = *(undefined4 *)(iVar6 + 0x10);
        memcpy(*(undefined4 **)(param_21 + -0x44),*(undefined4 **)(param_21 + -0x40),
                     *(uint *)(param_21 + -0x3c));
      }
      else {
        *(undefined4 *)(param_21 + -0x28) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_21 + -0x28);
        *(int *)(param_21 + -0x2c) = iVar22;
        *(undefined4 *)(param_21 + -0x4c) = *(undefined4 *)(*(int *)(param_21 + -0x2c) + 8);
        piVar27 = (int *)(*(int *)(iVar6 + 0x10) + -0xc);
        if (piVar27 != &g_nullStringRep) {
          *piVar27 = *piVar27 + 1;
        }
      }
      *(int *)(param_21 + -8) = *(int *)(param_21 + -8) + 1;
      param_21[-0xffffffff00000014] = 8;
      param_21[-0xffffffff00000013] = 0;
      *sehChainHead = *(undefined4 *)(param_21 + -0x24);
      return *(undefined4 *)(param_21 + 8);
    }
  }
  cVar11 = (char)param_9;
  *param_9 = *param_9 + cVar11;
  *param_9 = *param_9 + cVar11;
  *param_9 = *param_9 + cVar11;
  *param_9 = *param_9 + cVar11;
  *(char *)((int)param_9 * 2) = *(char *)((int)param_9 * 2) + (char)param_3;
  *param_9 = *param_9 + cVar11;
code_r0x00453118:
  pbVar14 = param_9 + *(int *)param_9;
  *pbVar14 = *pbVar14 & (byte)pbVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

} // namespace tea
