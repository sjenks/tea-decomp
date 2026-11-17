// name: FUN_004e3ae1
// address: 0x4e3ae1
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004e3ae1(void)

{
  ushort uVar1;
  undefined2 in_CX;
  short sVar2;
  longdouble in_ST0;
  longdouble lVar3;
  longdouble lVar4;
  
  sVar2 = CONCAT11((char)((ushort)in_CX >> 8),1);
  lVar4 = in_ST0;
  lVar3 = (longdouble)1.4426950408889634;
  if (sVar2 != 0) {
    lVar4 = (longdouble)1.4426950408889634;
    lVar3 = in_ST0;
  }
  if (in_ST0 != (longdouble)0) {
    if (sVar2 != 0) {
      lVar4 = lVar4 * lVar3;
    }
    lVar4 = ABS(lVar4);
    if ((longdouble)_DAT_00518988 < lVar4) {
      lVar3 = (longdouble)fscale(lVar4,(longdouble)1);
      uVar1 = (ushort)ROUND(ROUND(lVar3));
      lVar3 = (longdouble)fscale(ROUND(lVar3),-(longdouble)1);
      lVar4 = (longdouble)f2xm1(lVar4 - lVar3);
      lVar4 = (longdouble)1 + lVar4;
      if ((uVar1 & 1) != 0) {
        lVar4 = _DAT_0051898c * lVar4;
      }
      fscale(lVar4,(longdouble)(uVar1 >> 1));
    }
    else {
      f2xm1(lVar4);
    }
  }
  return;
}

