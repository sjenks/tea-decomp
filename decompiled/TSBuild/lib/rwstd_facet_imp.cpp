// TSBuild.exe — runtime / library code "rwstd_facet_imp"
// 3 functions, 0x0041c3b8..0x004631b0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c3b8  __rwstd::facet_imp::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall __rwstd::facet_imp::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c3c0  __rwstd::facet_imp::~facet_imp   (66 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::facet_imp::_dtor
void __cdecl __rwstd::facet_imp::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478dfc);
  if (param_1 != (undefined4 *)0x0) {
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004631b0  __rwstd::facet_imp::vf2   (48 bytes)   [rtti:vtable virtual slot 2; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004634f7) overlaps instruction at (ram,0x004634f6)
    */
/* WARNING: Removing unreachable block (ram,0x004634d6) */
/* WARNING: Removing unreachable block (ram,0x0046331e) */
/* WARNING: Removing unreachable block (ram,0x00463399) */
/* WARNING: Removing unreachable block (ram,0x00463325) */
/* WARNING: Removing unreachable block (ram,0x00463390) */
/* WARNING: Removing unreachable block (ram,0x00463327) */
/* WARNING: Removing unreachable block (ram,0x0046332c) */
/* WARNING: Removing unreachable block (ram,0x0046339a) */
/* WARNING: Removing unreachable block (ram,0x00463336) */
/* WARNING: Removing unreachable block (ram,0x0046339c) */
/* WARNING: Removing unreachable block (ram,0x0046333d) */
/* WARNING: Removing unreachable block (ram,0x0046333f) */
/* WARNING: Removing unreachable block (ram,0x0046334d) */
/* WARNING: Removing unreachable block (ram,0x004633b1) */
/* WARNING: Removing unreachable block (ram,0x00463440) */
/* WARNING: Removing unreachable block (ram,0x004633cd) */
/* WARNING: Removing unreachable block (ram,0x004633cf) */
/* WARNING: Removing unreachable block (ram,0x0046343f) */
/* WARNING: Removing unreachable block (ram,0x004633da) */
/* WARNING: Removing unreachable block (ram,0x00463446) */
/* WARNING: Removing unreachable block (ram,0x00463449) */
/* WARNING: Removing unreachable block (ram,0x004633e2) */
/* WARNING: Removing unreachable block (ram,0x004633f9) */
/* WARNING: Removing unreachable block (ram,0x0046345d) */
/* WARNING: Removing unreachable block (ram,0x004634ed) */
/* WARNING: Removing unreachable block (ram,0x004634f4) */
/* WARNING: Removing unreachable block (ram,0x00463481) */
/* WARNING: Removing unreachable block (ram,0x00463391) */
char * __rwstd::facet_imp::vf2(int *param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5, byte *param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10, byte *param_11,undefined4 param_12,byte *param_13,byte *param_14,byte *param_15, byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20, byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25, undefined4 param_26,byte *param_27,byte *param_28,byte *param_29,byte *param_30, byte *param_31,byte *param_32,byte *param_33,byte *param_34,byte *param_35, byte *param_36,byte *param_37,byte *param_38,undefined4 param_39, undefined4 param_40,byte *param_41,byte *param_42,undefined4 param_43, byte *param_44,byte *param_45,byte *param_46,byte *param_47)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  byte bVar10;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  undefined2 uVar12;
  char cVar14;
  byte *pbVar13;
  byte bVar16;
  byte *unaff_EBX;
  byte bVar17;
  byte *pbVar15;
  byte *unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  char *in_stack_00000000;
  undefined3 uVar11;
  
  pbVar19 = param_9;
  *(char *)param_1 = ((char)*param_1 - (char)param_1) - in_CF;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  pbVar7 = (byte *)((int)param_1 + *param_1);
  bVar6 = (byte)pbVar7;
  *pbVar7 = *pbVar7 ^ bVar6;
  *pbVar7 = *pbVar7 + bVar6;
  *pbVar7 = *pbVar7 + bVar6;
  *pbVar7 = *pbVar7 + bVar6;
  *(char *)((int)in_stack_00000000 * 2) =
       *(char *)((int)in_stack_00000000 * 2) + (char)((uint)param_2 >> 8);
  cVar5 = (char)in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  *in_stack_00000000 = *in_stack_00000000 + cVar5;
  cVar5 = cVar5 + 'h';
  pbVar7 = (byte *)CONCAT31((int3)((uint)in_stack_00000000 >> 8),cVar5);
  puVar18 = (undefined1 *)(unaff_ESI + 1);
  *param_3 = *param_3 + cVar5;
  bVar6 = *pbVar7;
  bVar16 = (byte)((uint)unaff_EBX >> 8);
  *pbVar7 = *pbVar7 + bVar16;
  bVar17 = (byte)((uint)param_21 >> 8);
  if (CARRY1(bVar6,bVar16)) {
    puVar1 = (ushort *)(unaff_EDI + 100);
    sVar4 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    puVar1 = (ushort *)(in_GS_OFFSET + unaff_ESI + 0x75);
    sVar4 = ((ushort)puVar18 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    if (cVar5 == 'c') {
      bVar6 = param_2[in_FS_OFFSET];
      bVar23 = bVar16 < bVar6;
      bVar25 = SBORROW1(bVar16,bVar6);
      bVar24 = bVar16 == bVar6;
      param_7 = param_2;
      param_6 = unaff_EBX;
      goto code_r0x00463261;
    }
    bVar6 = *param_2;
    uVar2 = in((short)param_2);
    *(undefined4 *)unaff_EDI = uVar2;
    cVar5 = (char)param_9;
    cVar14 = (char)((uint)param_7 >> 8);
    if (bVar16 != bVar6) {
      *param_9 = *param_9 + cVar5;
      pbVar7 = (byte *)((uint)param_9 ^ 0xc2);
      param_3 = param_8 + 1;
      cVar5 = (char)pbVar7;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *param_6 = *param_6 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      param_10[0x632c7261] = param_10[0x632c7261] + (char)param_3;
      puVar18 = (undefined1 *)0x632c7262;
      *pbVar7 = *pbVar7 + (char)param_7;
      *pbVar7 = *pbVar7 + cVar5;
      *param_6 = *param_6 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + (char)param_7;
      *pbVar7 = *pbVar7 + cVar5;
      *param_6 = *param_6 + cVar5;
      *pbVar7 = *pbVar7 + cVar14;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      *param_10 = *param_10 + cVar14;
      *pbVar7 = *pbVar7 + cVar5;
      *(undefined2 *)pbVar7 = in_ES;
      *pbVar7 = *pbVar7 + cVar5;
      *pbVar7 = *pbVar7 + cVar5;
      unaff_EDI = param_10;
      goto code_r0x00463244;
    }
    if (cVar5 == 'c') {
      *param_9 = *param_9 + 99;
      *param_9 = *param_9 + 99;
      *param_9 = *param_9 + 99;
      *param_9 = *param_9 + 99;
code_r0x004632dd:
      param_9 = (byte *)0x732c7261;
      unaff_EDI = (byte *)0x732c7261;
      *pbVar19 = *pbVar19 + cVar5;
      param_6[0x74] = param_6[0x74] + cVar14;
      goto code_r0x004632e2;
    }
    bVar6 = (byte)((uint)param_6 >> 8);
    bVar23 = bVar6 < param_7[in_FS_OFFSET];
    bVar24 = bVar6 == param_7[in_FS_OFFSET];
    out(uRam632c7261,(short)param_7);
    pbVar22 = param_8;
    pbVar13 = param_7;
    pbVar15 = param_6;
    pbVar20 = (byte *)0x632c7265;
    param_9 = (byte *)0x732c7261;
    if (!bVar23) goto code_r0x004632ea;
    if (bVar23) goto code_r0x004632dd;
    uRam732c7261 = in((short)param_14);
    cVar5 = (char)param_16;
    if (cVar5 != 'c') {
      bVar6 = *param_14;
      puVar1 = (ushort *)(param_16 + 0x61);
      sVar4 = ((ushort)param_11 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
      if ((byte)((uint)param_13 >> 8) < bVar6) goto code_r0x004632f5;
      if (0 >= sVar4) {
        pbVar19 = (byte *)(*(int *)(param_21 + (int)param_18 * 2 + 0x3c) * 0x72616863);
        *pbVar19 = *pbVar19 & bVar17;
        *pbVar19 = *pbVar19 & bVar17;
        pbVar7 = param_24;
        param_6 = param_21;
        goto code_r0x004632a6;
      }
      *param_16 = *param_16 + cVar5;
      *param_16 = *param_16 + cVar5;
      *param_16 = *param_16 + cVar5;
      *param_16 = *param_16 + cVar5;
      *param_16 = *param_16 + cVar5;
      *param_16 = *param_16 + cVar5;
      pbVar7 = param_16;
      param_7 = param_14;
      goto code_r0x0046331a;
    }
code_r0x004632f3:
    *param_16 = *param_16 + (char)param_16;
code_r0x004632f5:
    *param_16 = *param_16 + (char)param_16;
    *(char *)((int)param_16 * 2) = *(char *)((int)param_16 * 2) + (char)param_15;
    *param_16 = *param_16 + (char)param_16;
    pbVar19 = param_16 + *(int *)param_16;
    *pbVar19 = *pbVar19 & (byte)pbVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_4 = unaff_EBP + 1;
  *param_3 = *param_3 + cVar5;
  param_7 = param_2;
  param_6 = unaff_EBX;
code_r0x00463244:
  cVar5 = (char)pbVar7;
  *pbVar7 = *pbVar7 + cVar5;
  *pbVar7 = *pbVar7 + cVar5;
  *pbVar7 = *pbVar7 + cVar5;
  *pbVar7 = *pbVar7 + cVar5;
  *pbVar7 = *pbVar7 + cVar5;
  *pbVar7 = *pbVar7 + cVar5;
  pbVar7[0x64747300] = pbVar7[0x64747300] + (char)param_7;
  bVar6 = *param_7;
  bVar16 = (byte)((uint)param_6 >> 8);
  bVar23 = bVar16 < bVar6;
  bVar25 = SBORROW1(bVar16,bVar6);
  bVar24 = bVar16 == bVar6;
  unaff_EBP = param_4;
code_r0x00463261:
  pbVar21 = puVar18 + 1;
  out(*puVar18,(short)param_7);
  bVar6 = (byte)pbVar7;
  if (bVar24) {
    unaff_EDI = param_8;
    if (bVar25) goto code_r0x004632dc;
    if (bVar24) {
      *pbVar7 = *pbVar7 + bVar6;
      goto code_r0x004632a8;
    }
    puVar1 = (ushort *)(pbVar7 + 0x61);
    sVar4 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    bVar16 = (byte)((uint)param_6 >> 8);
    if (bVar23) {
      if (0 >= sVar4) {
        *pbVar21 = *pbVar21 & bVar16;
code_r0x004632a6:
        *pbVar7 = *pbVar7 + (char)pbVar7;
code_r0x004632a8:
        piVar8 = (int *)((uint)pbVar7 ^ 0xc2);
        cVar5 = (char)piVar8;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *param_6 = *param_6 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        *(char *)((int)piVar8 * 2) = *(char *)((int)piVar8 * 2) + cVar5;
        *(char *)piVar8 = (char)*piVar8 + cVar5;
        pbVar19 = (byte *)((int)piVar8 + *piVar8);
        *pbVar19 = *pbVar19 & (byte)pbVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pbVar7 = *pbVar7 + bVar6;
      *pbVar7 = *pbVar7 + bVar6;
      *pbVar7 = *pbVar7 + bVar6;
      *pbVar7 = *pbVar7 + bVar6;
      param_8[0x5f] = param_8[0x5f] + (char)param_6;
code_r0x0046331a:
      puVar3 = (undefined4 *)segment(in_SS,(short)&param_17);
      param_6 = (byte *)*puVar3;
      goto code_r0x00463395;
    }
    bVar6 = (byte)((uint)param_3 >> 8);
    bVar24 = bVar6 == unaff_EBP[0x62];
    bVar23 = true;
    pbVar19 = param_16;
    pbVar22 = param_15;
    pbVar13 = param_14;
    pbVar15 = param_13;
    param_4 = param_11;
    pbVar20 = param_10;
    if (bVar6 < unaff_EBP[0x62]) goto code_r0x004632ea;
    *pbVar21 = *pbVar21 & bVar16;
  }
  else {
    *(char *)((int)pbVar7 * 2) = *(char *)((int)pbVar7 * 2) + (char)((uint)param_7 >> 8);
    *pbVar7 = *pbVar7 + bVar6;
    *pbVar7 = *pbVar7 + bVar6;
    *pbVar7 = *pbVar7 + bVar6;
    *pbVar7 = *pbVar7 + bVar6;
code_r0x004632dc:
    *pbVar7 = *pbVar7 + bVar6;
    bVar16 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar6;
    bVar23 = false;
    pbVar19 = pbVar21;
    param_8 = unaff_EDI;
    if (CARRY1(bVar16,bVar6)) {
code_r0x004632e2:
      bVar6 = (byte)((uint)param_6 >> 8);
      bVar23 = bVar6 < param_7[in_FS_OFFSET];
      bVar24 = bVar6 == param_7[in_FS_OFFSET];
      uVar2 = in((short)param_7);
      *(undefined4 *)unaff_EDI = uVar2;
      pbVar19 = param_16;
      pbVar22 = param_15;
      pbVar13 = param_14;
      pbVar15 = param_13;
      param_4 = param_11;
      pbVar20 = param_10;
code_r0x004632ea:
      param_15 = pbVar22;
      param_16 = pbVar19;
      if (!bVar24) {
        *param_16 = *param_16 + (char)param_16;
        *param_16 = *param_16 + (char)param_16;
        goto code_r0x004632f3;
      }
      bVar6 = in((short)pbVar13);
      *param_9 = bVar6;
      out(*(undefined4 *)pbVar20,(short)pbVar13);
      puVar1 = (ushort *)(param_15 + 0x74);
      *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
      pbVar7 = param_16;
      param_3 = param_15;
      param_7 = pbVar13;
      param_6 = pbVar15;
      unaff_EBP = param_4;
      pbVar19 = pbVar20 + 4;
      param_8 = param_9 + 1;
    }
    pbVar21 = pbVar19 + 4;
    out(*(undefined4 *)pbVar19,(short)param_7);
    if (bVar23) {
code_r0x00463395:
      pbVar7[0x890] = pbVar7[0x890] + (char)param_7;
      *param_6 = *param_6 + (char)pbVar7;
      *pbVar7 = *pbVar7 + (char)((uint)param_7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (ushort *)(pbVar7 + 0x61);
    sVar4 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    *pbVar21 = *pbVar21 & (byte)((uint)param_6 >> 8);
  }
  *pbVar7 = *pbVar7 + (char)pbVar7;
  *pbVar7 = *pbVar7 + (char)pbVar7;
  uVar11 = (undefined3)((uint)pbVar7 >> 8);
  pcVar9 = (char *)CONCAT31(uVar11,0x36);
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *param_6 = *param_6 + 0x36;
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  *pcVar9 = *pcVar9 + '6';
  pbVar19 = (byte *)CONCAT31(uVar11,0x46);
  bVar16 = (byte)((uint)param_6 >> 8);
  pbVar19[0x4022] = pbVar19[0x4022] + bVar16;
  *pbVar19 = *pbVar19 + 0x46;
  param_6[0x74] = param_6[0x74] + (char)((uint)param_7 >> 8);
  bVar6 = (byte)param_24;
  pbVar22 = pbVar21 + 1;
  if (bVar16 < param_7[in_FS_OFFSET]) {
    bVar16 = param_6[0x68];
    bVar10 = (byte)((uint)pbVar7 >> 8);
    bVar23 = bVar10 == bVar16;
    bVar24 = (char)(bVar10 - bVar16) < '\0';
    if (bVar16 <= bVar10) {
      bVar25 = false;
      pbVar19 = param_24;
      param_3 = param_23;
      param_7 = param_22;
      param_6 = param_21;
      unaff_EBP = param_19;
      pbVar22 = param_18;
      pbVar7 = param_18;
      param_8 = param_17;
      if (!bVar23) goto code_r0x00463403;
      goto code_r0x00463474;
    }
    *param_23 = *param_23 + bVar6;
    bVar6 = (byte)((uint)param_23 >> 8);
    bVar25 = CARRY1(*param_24,bVar6);
    *param_24 = *param_24 + bVar6;
    bVar24 = (char)*param_24 < '\0';
    bVar23 = *param_24 == 0;
    param_38 = param_24;
    param_37 = param_23;
    param_36 = param_22;
    param_35 = param_21;
    param_33 = param_19;
    param_32 = param_18;
code_r0x004634de:
    bVar6 = (byte)param_38;
    cVar5 = (char)((uint)param_36 >> 8);
    if (bVar25 || bVar23) {
      param_22 = param_28;
      param_21 = param_27;
      param_19 = param_25;
      if (!bVar24) {
        *param_35 = *param_35 + bVar6;
        *param_38 = *param_38 + bVar6;
        param_38[0x31] = param_38[0x31] + (char)param_37;
        *param_38 = *param_38 + (char)param_36;
        *param_38 = *param_38 + bVar6;
        *param_35 = *param_35 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + bVar6;
        *param_38 = *param_38 + (char)param_35;
        *param_38 = *param_38 + bVar6;
        *param_35 = *param_35 + bVar6;
        *param_38 = *param_38 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x0046354a:
      uVar2 = in((short)param_22);
      *(undefined4 *)param_23 = uVar2;
      param_38 = param_30;
      param_37 = param_29;
      pbVar19 = param_24;
      goto code_r0x0046354b;
    }
    puVar1 = (ushort *)(param_22 + (int)param_33 * 2 + 0x72);
    sVar4 = ((ushort)param_32 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
    if (bVar6 < 0x5f) {
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + cVar5;
      *param_38 = *param_38 + bVar6;
      *param_38 = *param_38 + bVar6;
      *param_23 = *param_23 + cVar5;
      goto code_r0x0046357a;
    }
  }
  else {
code_r0x00463403:
    bVar25 = (byte)pbVar19 < 0x73;
    cVar5 = (byte)pbVar19 + 0x8d;
    bVar24 = cVar5 < '\0';
    bVar23 = true;
    pbVar19 = (byte *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar5);
    pbVar7 = (byte *)(*(int *)(param_6 + (int)pbVar22 * 2 + 0x3c) * 0x72616863);
    if (cVar5 == '\0') {
code_r0x00463474:
      param_32 = pbVar7;
      param_33 = unaff_EBP;
      param_35 = param_6;
      param_36 = param_7;
      param_37 = param_3;
      param_38 = pbVar19;
      if (!bVar25 && !bVar23) {
        puVar1 = (ushort *)(param_8 + (int)param_33 * 2 + 0x72);
        sVar4 = ((ushort)param_32 & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
        pbVar19 = param_38;
        if (0x5e < (byte)param_38) {
          pbVar19 = param_25;
          param_37 = param_24;
          param_36 = param_23;
          param_35 = param_22;
          param_32 = param_19;
          param_17 = param_18;
        }
        cVar14 = (char)((uint)param_36 >> 8);
        cVar5 = (char)pbVar19;
        if ((byte)param_38 != 0x5f) {
          param_35 = (byte *)CONCAT22((short)((uint)param_35 >> 0x10),
                                      CONCAT11((char)((uint)param_35 >> 8) - *param_32,
                                               (char)param_35));
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar14;
          *pbVar19 = *pbVar19 + cVar5;
          *pbVar19 = *pbVar19 + cVar5;
          *param_17 = *param_17 + cVar14;
          *pbVar19 = *pbVar19 + cVar5;
        }
        *(char *)((int)pbVar19 * 2) = *(char *)((int)pbVar19 * 2) + (char)param_35;
        *pbVar19 = *pbVar19 + cVar5;
        *pbVar19 = *pbVar19 + cVar5;
        *pbVar19 = *pbVar19 + cVar5;
        *pbVar19 = *pbVar19 + cVar5;
        *pbVar19 = *pbVar19 + cVar5;
        *param_35 = *param_35 + (char)param_37;
        *pbVar19 = *pbVar19 + cVar5;
        *param_35 = *param_35 + (char)param_37;
        *pbVar19 = *pbVar19 + cVar5;
        return (char *)CONCAT31((int3)((uint)pbVar19 >> 8),cVar5 + cVar14);
      }
      puVar1 = (ushort *)(param_37 + 0x6c);
      bVar23 = 0 < (short)-(*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)bVar23 * -(*puVar1 & 3);
      goto code_r0x004634de;
    }
    bVar10 = *param_7;
    uVar12 = SUB42(param_22,0);
    bVar16 = in(uVar12);
    *param_17 = bVar16;
    bVar16 = in(uVar12);
    param_17[1] = bVar16;
    out(*(undefined4 *)param_18,uVar12);
    puVar1 = (ushort *)(param_23 + 0x74);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
    pbVar19 = param_18 + 8;
    out(*(undefined4 *)(param_18 + 4),uVar12);
    if (bVar10 <= (byte)((uint)param_6 >> 8)) {
      puVar1 = (ushort *)(param_24 + 0x61);
      sVar4 = ((ushort)param_19 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
      *pbVar19 = *pbVar19 & bVar17;
      *pbVar19 = *pbVar19 & bVar17;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + bVar6;
      *param_24 = *param_24 + (char)param_23;
      *param_24 = *param_24 + bVar6;
      *param_21 = *param_21 + bVar6;
      *param_24 = *param_24 + (char)((uint)param_22 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte **)param_24 = param_24 + *(int *)param_24;
    bVar25 = CARRY1(*param_24,bVar6);
    *param_24 = *param_24 + bVar6;
    bVar6 = *param_24;
    bVar16 = *param_24;
    *(undefined2 *)(param_22 + 0x10045) = in_DS;
    bVar24 = (char)bVar6 < '\0';
    bVar23 = bVar16 == 0;
    if (!bVar25 && !bVar23) {
      uRam725f5f00 = in((short)param_36);
      goto code_r0x004634de;
    }
    if (!bVar23) {
      param_31 = (byte *)0x725f5f00;
      bVar25 = bVar17 < param_22[in_FS_OFFSET];
      bVar24 = (char)(bVar17 - param_22[in_FS_OFFSET]) < '\0';
      bVar6 = in(uVar12);
      param_17[2] = bVar6;
      out(*(undefined4 *)pbVar19,uVar12);
      puVar1 = (ushort *)(param_23 + 0x6c);
      bVar23 = 0 < (short)-(*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)bVar23 * -(*puVar1 & 3);
      pbVar19 = param_24;
      param_3 = param_23;
      param_7 = param_22;
      param_6 = param_21;
      unaff_EBP = param_19;
      pbVar7 = param_18 + 0xc;
      param_8 = param_31;
      goto code_r0x00463474;
    }
    pbVar7 = param_17 + 0x61;
    bVar6 = *pbVar7;
    *pbVar7 = *pbVar7 + (byte)param_21;
    param_30 = param_24;
    param_38 = param_24;
    param_29 = param_23;
    param_37 = param_23;
    param_24 = pbVar19;
    param_23 = param_17 + 2;
    if (!CARRY1(bVar6,(byte)param_21)) goto code_r0x0046354a;
code_r0x0046354b:
    (param_19 + 0x46)[(int)pbVar19] = (param_19 + 0x46)[(int)pbVar19] + (char)((uint)param_37 >> 8);
    cVar5 = (char)param_38;
    *param_38 = *param_38 + cVar5;
    *param_38 = *param_38 + cVar5;
    *param_21 = *param_21 + cVar5;
    *param_38 = *param_38 + cVar5;
    *param_38 = *param_38 + cVar5;
  }
  cVar5 = (char)param_38;
  *param_38 = *param_38 + cVar5;
  *param_38 = *param_38 + cVar5;
  *param_38 = *param_38 + cVar5;
  *param_38 = *param_38 + cVar5;
  *param_38 = *param_38 + cVar5;
  *param_38 = *param_38 + (char)((uint)param_37 >> 8);
  *param_38 = *param_38 + cVar5;
  param_38 = param_38 + *(int *)param_38;
  bVar6 = (byte)param_38;
  *param_38 = *param_38 ^ bVar6;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
code_r0x0046357a:
  bVar6 = (byte)param_38;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + (char)((uint)param_38 >> 8);
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
  *param_38 = *param_38 + bVar6;
  uVar11 = (undefined3)((uint)param_38 >> 8);
  bVar6 = bVar6 | *param_38;
  pbVar19 = (byte *)CONCAT31(uVar11,bVar6);
  *pbVar19 = *pbVar19 + bVar6;
  pcVar9 = (char *)CONCAT31(uVar11,bVar6 | *pbVar19);
  *pcVar9 = *pcVar9 + (bVar6 | *pbVar19);
  return pcVar9;
}

} // namespace tea
