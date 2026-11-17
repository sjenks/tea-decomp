// name: FUN_00469e2c
// address: 0x469e2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00469e2c(void)

{
  bool bVar1;
  UINT UVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  UVar2 = SetHandleCount(DAT_00489524);
  if (UVar2 < DAT_00489524) {
    DAT_00489524 = UVar2;
  }
  PTR_FUN_00489068 = FUN_00469d90;
  bVar1 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_00489528;
      if (0 < (int)uVar7) {
        do {
          uVar6 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar3 = 0;
          if ((uVar6 & 0x20) != 0) {
            uVar3 = 0x800;
          }
          if ((uVar6 & 0x40) != 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar3 | 0x8000;
          }
          else {
            uVar3 = uVar3 | 0x4000;
          }
          iVar5 = iVar5 + 1;
          *puVar9 = *puVar9 & 3 | uVar3;
          puVar9 = puVar9 + 1;
        } while (iVar5 < (int)uVar7);
      }
      puVar4 = &DAT_00489528 + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_00489524; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_004675a4((undefined4 *)&DAT_0048d570,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_0048d570 = GetStdHandle(0xfffffff6);
    DAT_0048d574 = GetStdHandle(0xfffffff5);
    _DAT_0048d578 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_00489528;
    do {
      bVar1 = FUN_00468bbc(uVar7);
      if ((CONCAT31(extraout_var,bVar1) == 0) && (DAT_0048aa90 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_0048aa90 != 0) {
          *puVar8 = *puVar8 | 0x10000;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}

