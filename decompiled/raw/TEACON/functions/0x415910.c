// name: FUN_00415910
// address: 0x415910
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00415910(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *local_8;
  uint uVar4;
  
  uVar7 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_0042eaa8 == 0) {
    DAT_0042eaa8 = FUN_00416038();
  }
  puVar1 = DAT_0042ea8c;
  if (DAT_0042ea94 == 0) {
    uVar7 = uVar7 + (DAT_0042ea80 * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_0042ea78;
      if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
        iVar3 = DAT_0042ea74;
      }
      iVar6 = DAT_0042ea78;
      if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
        iVar6 = DAT_0042ea74;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_0042ea78;
        if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
          iVar3 = DAT_0042ea74;
        }
        iVar6 = DAT_0042ea78;
        if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
          iVar6 = DAT_0042ea74;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        DAT_0042eaac = DAT_0042eaac + (uVar7 - *puVar1);
        FUN_00415824(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        DAT_0042eaac = DAT_0042eaac + 0x1000;
        FUN_00415824(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_0042ea70;
  if (DAT_0042ea70 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_0041543c(uVar4,&local_8,&local_c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_0042ea78;
    if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
      iVar3 = DAT_0042ea74;
    }
    iVar6 = DAT_0042ea78;
    if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
      iVar6 = DAT_0042ea74;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_0042ea8c; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == local_8) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          DAT_0042eaac = DAT_0042eaac + iVar3;
          FUN_00415824(puVar1,puVar1[1]);
        }
        iVar6 = FUN_004154d0(local_8,uVar7 - iVar3);
        if (iVar6 != 0) {
          DAT_0042eaac = DAT_0042eaac + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)local_8;
          puVar1[1] = puVar1[1] + local_c;
          FUN_00415824(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_004154d0(local_8,uVar7);
    if (iVar3 == 0) {
      FUN_00415534(local_8);
      uVar5 = 0xffffffff;
    }
    else {
      DAT_0042eaac = DAT_0042eaac + uVar7;
      FUN_00415724(local_8,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

