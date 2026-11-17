// name: FUN_004ccd18
// address: 0x4ccd18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ccd18(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_00512cec;
  if (DAT_00512d10 < DAT_00512d0c) {
    uVar4 = DAT_00512ce8;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_00512cf0; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_004cc968(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_004cc660((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_00512d10 = DAT_00512d10 - SVar3;
          FUN_004cc678((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_004cc660((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_00512d10 = DAT_00512d10 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

