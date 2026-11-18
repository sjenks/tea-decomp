// TSMerge.exe — runtime / library code "OWL_TXOutOfMemory"
// 5 functions, 0x004126a8..0x004188b0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004126a8  OWL::TXOutOfMemory::vf5   (12 bytes)   [rtti:vtable virtual slot 5; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004128c9) overlaps instruction at (ram,0x004128c8)
    */
/* WARNING: Removing unreachable block (ram,0x00412857) */
/* WARNING: Removing unreachable block (ram,0x00412890) */
/* WARNING: Removing unreachable block (ram,0x004128a4) */
/* WARNING: Removing unreachable block (ram,0x004128ab) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void OWL::TXOutOfMemory::vf5(char *self,byte *param_2,int *param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar17;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int iVar18;
  int unaff_EDI;
  undefined2 in_ES;
  undefined4 *sehChainHead;
  int in_GS_OFFSET;
  byte in_AF;
  undefined1 in_stack_ffffbec7;
  char acStack_4130 [2];
  char cStack_412c;
  char cStack_412b;
  undefined2 uStack_412a;
  undefined2 uStack_4128;
  undefined1 uStack_4126;
  undefined1 uStack_4125;
  undefined2 uStack_4124;
  undefined1 uStack_4122;
  undefined1 uStack_4121;
  undefined2 uStack_4120;
  undefined4 uStack_411e;
  char *pcStack_4116;
  char *pcStack_4112;
  uint *puStack_410e;
  int *piStack_410a;
  int aiStack_4106 [4160];
  
  *self = *self + (char)self;
  cVar9 = (char)param_3;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + cVar9;
  cStack_412c = (char)((uint)(unaff_EDI + -1) >> 0x18);
  out(*(undefined4 *)(unaff_ESI + 1),(short)param_2);
  out(*(undefined1 *)(unaff_ESI + 5),(short)param_2);
  if ((undefined4 *)(unaff_ESI + 1) != (undefined4 *)0x0) {
    piVar12 = (int *)(CONCAT31((int3)((uint)self >> 8),(char)self - *self) - *param_3);
    *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
    pbVar13 = (byte *)((int)piVar12 + *piVar12);
    *pbVar13 = *pbVar13 ^ (byte)pbVar13;
    pcVar14 = (char *)((uint)pbVar13 ^ 0x7f000000);
    *pcVar14 = *pcVar14 + (byte)pbVar13;
    *pcVar14 = *pcVar14 + cVar9;
    self = acStack_4130;
  }
  cVar8 = (char)self;
  *self = *self + cVar8;
  *self = *self + cVar8;
  cRam02000000 = cRam02000000 + cVar8;
  *self = *self + cVar8;
  *(undefined2 *)(CONCAT31((int3)((uint)self >> 8),cVar8 + cVar9) + -0x10043) = in_ES;
  bVar5 = *param_2;
  puVar1 = (ushort *)(in_GS_OFFSET + unaff_EDI + 0x70);
  sVar6 = -(*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
  pcVar14 = (char *)CONCAT13(in_stack_ffffbec7,(int3)((uint)&GHIDRA_STACK(0xffffbec7) >> 8));
  pcVar3 = (char *)CONCAT22(uStack_412a,CONCAT11(cStack_412b,cStack_412c));
  pcVar16 = (char *)CONCAT13(uStack_4121,CONCAT12(uStack_4122,uStack_4124));
  pbVar13 = (byte *)CONCAT22((undefined2)uStack_411e,uStack_4120);
  bVar10 = (byte)uStack_4120;
  if ((0 < sVar6) || ((byte)((uint)unaff_EBX >> 8) < bVar5)) {
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pcVar3 = *pcVar3 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pcVar16 = *pcVar16 + bVar10;
    *pbVar13 = *pbVar13 + bVar10;
    *pbVar13 = *pbVar13 + (char)uStack_4128;
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
  }
  else {
    pcVar3 = pcVar14 + 4;
    uVar4 = in(uStack_4128);
    *(undefined4 *)pcVar14 = uVar4;
    pbVar13[in_GS_OFFSET] = pbVar13[in_GS_OFFSET] + bVar10;
    bVar5 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar10;
    cVar9 = bVar10 + (9 < (bVar10 & 0xf) | in_AF) * '\x06' +
            (0x99 < bVar10 || CARRY1(bVar5,bVar10)) * '`';
    piVar12 = (int *)CONCAT31((int3)((uint)pbVar13 >> 8),cVar9);
    pcVar16 = pcVar16 + 1;
    *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) + cVar9;
    *(char *)piVar12 = (char)*piVar12 + cVar9;
    pcVar15 = (char *)((int)piVar12 + *piVar12);
    cVar9 = (char)pcVar15;
    *pcVar15 = *pcVar15 + cVar9;
    *pcVar15 = *pcVar15 + cVar9;
    *pcVar15 = *pcVar15 + cVar9;
    pcVar14 = pcVar15 + 1;
    cVar8 = (char)pcVar16;
    *pcVar14 = *pcVar14 + cVar8;
    *pcVar14 = *pcVar14 + (char)pcVar14;
    cRam28000000 = cRam28000000 + cVar8;
    pcVar15 = pcVar15 + 2;
    *(char *)((int)pcVar15 * 2) = *(char *)((int)pcVar15 * 2) + cVar8;
    *pcVar15 = *pcVar15 + (char)pcVar15;
    pcVar14 = (char *)(((uint)pcVar15 | 0x7c000000) + 1);
    *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) + (char)pcVar14;
    *pcVar14 = *pcVar14 + (char)pcVar14;
    piVar12 = (int *)(((uint)pcVar14 | 0x80000000) + 1);
    cVar9 = (char)piVar12;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *pcVar3 = *pcVar3 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    pcVar14 = (char *)CONCAT22(uStack_412a,CONCAT11(cStack_412b + cVar9,cStack_412c));
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *pcVar14 = *pcVar14 + cVar9;
    cVar17 = (char)((ushort)uStack_4128 >> 8);
    *(char *)piVar12 = *(char *)piVar12 + cVar17;
    *(char *)((int)piVar12 * 2) = *(char *)((int)piVar12 * 2) + cVar8;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar8;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    *(char *)piVar12 = *(char *)piVar12 + cVar9;
    pbVar13 = (byte *)((int)piVar12 + *piVar12);
    bVar10 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar10;
    *(byte **)pbVar13 = pbVar13 + *(int *)pbVar13;
    bVar5 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar10;
    pcVar14 = (char *)(CONCAT22((short)((uint)pcVar16 >> 0x10),
                                CONCAT11((char)((uint)pcVar16 >> 8) + cStack_412c +
                                         CARRY1(bVar5,bVar10),cVar8)) + 1);
    *pcVar14 = *pcVar14 + bVar10;
    *pbVar13 = *pbVar13 + cVar17;
    pcVar14 = pcVar3;
  }
  pcVar14 = pcVar14 + -1;
  uStack_4120 = SUB42(pcVar14,0);
  GH_PIECE(uStack_411e, 0, undefined2) = (undefined2)((uint)pcVar14 >> 0x10);
  uStack_4125 = SUB41(&uStack_4121,0);
  uStack_4124 = (undefined2)((uint)&uStack_4121 >> 8);
  uStack_4122 = (undefined1)((uint)&uStack_4121 >> 0x18);
  pcVar3 = (char *)CONCAT22(uStack_4124,CONCAT11(uStack_4125,uStack_4126));
  iVar18 = CONCAT22(uStack_4120,CONCAT11(uStack_4121,uStack_4122));
  iVar7 = CONCAT22(GH_PIECE(uStack_411e, 2, undefined2),(undefined2)uStack_411e);
  cVar8 = (char)((uint)puStack_410e >> 8);
  cVar9 = (char)puStack_410e;
  cVar17 = (char)((uint)pcStack_4112 >> 8);
  if ((int)&uStack_4126 < 0) {
    if (&GHIDRA_STACK(0x00000000) == (undefined1 *)0x4126) {
      *(char *)piStack_410a = (char)*piStack_410a + (char)piStack_410a;
      *(char *)piStack_410a = (char)*piStack_410a + (char)piStack_410a;
      pcVar14 = (char *)((int)piStack_410a + 1);
      cVar11 = (char)pcVar14;
      *(char *)((int)pcVar14 * 2) = *(char *)((int)pcVar14 * 2) + cVar11;
      *pcVar14 = *pcVar14 + cVar11;
      *pcVar14 = *pcVar14 + cVar11;
      *pcVar14 = *pcVar14 + cVar8;
      pcVar16 = (char *)((int)piStack_410a + 2);
      *pcVar16 = *pcVar16 + cVar9;
      cVar8 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar8;
      *(char *)(iVar18 + 1) = *(char *)(iVar18 + 1) + cVar9;
      *pcVar16 = *pcVar16 + cVar8;
      pcVar14 = (char *)(iVar18 + 0x41 + (int)pcVar16 * 2);
      *pcVar14 = *pcVar14 + (char)((uint)pcStack_4116 >> 8);
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar3 = *pcVar3 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      *pcVar16 = *pcVar16 + cVar8;
      cRam03000000 = cRam03000000 + cVar8;
      *pcVar16 = *pcVar16 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar12 = (int *)((uint)aiStack_4106 & *puStack_410e);
    *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
  }
  else {
    puVar2 = (undefined1 *)(iVar18 + 5);
    out(*(undefined4 *)(iVar18 + 1),(short)pcStack_4112);
    iVar18 = iVar18 + 6;
    out(*puVar2,(short)pcStack_4112);
    pcStack_4116[0x41] = pcStack_4116[0x41] + (char)pcStack_4112;
    piVar12 = piStack_410a;
    piStack_410a = aiStack_4106;
  }
  uStack_411e = &piStack_410a;
  *(char *)piVar12 = (char)*piVar12 + (char)piVar12;
  pcVar16 = (char *)((int)piVar12 + *piVar12);
  cVar11 = (char)pcVar16;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  uStack_4122 = (undefined1)((uint)pcVar14 >> 0x10);
  uStack_4121 = (undefined1)((uint)pcVar14 >> 0x18);
  uStack_4126 = (undefined1)iVar18;
  uStack_4125 = (undefined1)((uint)iVar18 >> 8);
  uStack_4124 = (undefined2)((uint)iVar18 >> 0x10);
  *pcVar16 = *pcVar16 + cVar11;
  *pcStack_4116 = *pcStack_4116 + cVar11;
  *pcVar16 = *pcVar16 + cVar17;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar3 = *pcVar3 + cVar17;
  *pcVar16 = *pcVar16 + cVar11;
  *(char *)((int)pcVar16 * 2) = *(char *)((int)pcVar16 * 2) + (char)pcStack_4112;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcStack_4112 = *pcStack_4112 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  *pcStack_4112 = *pcStack_4112 + cVar11;
  *pcVar16 = *pcVar16 + cVar11;
  piVar12 = (int *)CONCAT31((int3)((uint)pcVar16 >> 8),(cVar11 + cVar8) - (char)*puStack_410e);
  *piVar12 = *piVar12 + (int)piVar12;
  pcVar3[0x57] = pcVar3[0x57] + cVar9;
  *(undefined2 *)(iVar7 + -0x14) = 8;
  acStack_4130[0] = '\0';
  acStack_4130[1] = 0;
  puStack_410e = (uint *)pcVar16;
  OWL::TModule::TModule((undefined4 *)&DAT_00476b20,(uint *)"uxtheme.dll",'\x01','\0','\x01');
  *(int *)(iVar7 + -8) = *(int *)(iVar7 + -8) + 2;
  *sehChainHead = *(undefined4 *)(iVar7 + -0x24);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041864c  OWL::TXOutOfMemory::TXOutOfMemory   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXOutOfMemory's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXOutOfMemory::TXOutOfMemory(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466c14);
  OWL::TXOwl::TXOwl_417f7c(self,0x7ff9,DAT_00470a60);
  *self = &OWL::TXOutOfMemory::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004186bc  OWL::TXOutOfMemory::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXOutOfMemory::vf2(int *self)

{
  undefined4 *txOutOfMemory;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466c38);
  txOutOfMemory = (undefined4 *)operator_new();
  if (txOutOfMemory != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_417b88(txOutOfMemory,self);
    txOutOfMemory[2] = self[2];
    *txOutOfMemory = &OWL::TXOwl::vftable;
    *txOutOfMemory = &OWL::TXOutOfMemory::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txOutOfMemory;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041873c  OWL::TXOutOfMemory::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXOutOfMemory::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txOutOfMemory [2];
  int unused;
  
  __InitExceptBlockLDTC(0x466c68);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_0041880c;
  objectDtor = 0;
  OWL::TXBase::TXBase_417b88((undefined4*)txOutOfMemory,self);
  unused = self[2];
  txOutOfMemory[0] = &OWL::TXOutOfMemory::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_004187b0,(undefined4*)txOutOfMemory,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004188b0  OWL::TXOutOfMemory::~TXOutOfMemory   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXOutOfMemory::_dtor
void __cdecl OWL::TXOutOfMemory::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466cb4);
  if (self != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
