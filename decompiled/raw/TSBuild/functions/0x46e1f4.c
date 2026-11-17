// name: FUN_0046e1f4
// address: 0x46e1f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046e2b6) */

void __cdecl FUN_0046e1f4(double param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  longdouble lVar8;
  ushort uStack_10;
  undefined2 uStack_e;
  
  lVar8 = (longdouble)param_1;
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (ushort)(param_3 >> 0x10);
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    if (0xffff < (int)param_3) {
      return;
    }
    iVar6 = 1;
    if (uVar3 == 0) {
      puVar5 = &DAT_0048a750;
    }
    else {
      puVar5 = &DAT_0048a668;
    }
  }
  else {
    if ((uVar1 & 0x7ff0) == 0x7ff0) {
      if ((int)param_3 < 0) {
        iVar6 = 4;
        puVar5 = &DAT_0048a748;
        goto LAB_0046e27b;
      }
    }
    else {
      uVar3 = uVar3 & 0x7ff0;
      if ((param_3 & 0x7ff00000) == 0) {
        return;
      }
      if (uVar3 != 0x7ff0) {
        uVar3 = uVar3 >> 4;
        if ((ushort)(uVar3 - 0x3ff) < 0x3f) {
          if (((byte)(uVar3 - 0x3ff) < 0xc) &&
             (sVar7 = uVar1 * 2 + -0x7fe0, bVar4 = (char)uVar3 + 2, uVar3 = uVar3 - 0x3ff,
             (short)(sVar7 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f) == sVar7)) {
            do {
              cVar2 = (char)uVar3;
              uVar3 = (ushort)(byte)(cVar2 - 1);
            } while ('\0' < cVar2);
            return;
          }
          if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
            lVar8 = -lVar8;
          }
        }
        if (lVar8 < (longdouble)0) {
          iVar6 = 1;
          puVar5 = &DAT_0048a740;
          goto LAB_0046e27b;
        }
        FUN_0046dd54();
        lVar8 = lVar8 * (longdouble)
                        (double)CONCAT17(param_3._3_1_,
                                         CONCAT16(param_3._2_1_,
                                                  CONCAT24((undefined2)param_3,param_2)));
        uStack_e = (ushort)((unkuint10)lVar8 >> 0x40);
        if ((uStack_e & 0x7fff) < 0x4008) {
LAB_0046e327:
          FUN_0046dc89();
          return;
        }
        uStack_10 = 0xffff;
        if ((uStack_e & 0x7fff) < 0x4009) {
          uStack_10 = (ushort)((unkuint10)lVar8 >> 0x30);
        }
        uStack_e._1_1_ = (byte)((unkuint10)lVar8 >> 0x48);
        if ((uStack_e._1_1_ & 0x80) == 0) {
          if (uStack_10 < 0xb172) goto LAB_0046e327;
          iVar6 = 3;
          puVar5 = &DAT_0048a668;
        }
        else {
          if (uStack_10 < 0xb172) goto LAB_0046e327;
          iVar6 = 4;
          puVar5 = &DAT_0048a748;
        }
        goto LAB_0046e27b;
      }
    }
    iVar6 = 3;
    puVar5 = &DAT_0048a668;
  }
LAB_0046e27b:
  FUN_0046d940(iVar6,&DAT_0048a758,&param_1,(undefined8 *)&param_2,*puVar5,puVar5[1]);
  return;
}

