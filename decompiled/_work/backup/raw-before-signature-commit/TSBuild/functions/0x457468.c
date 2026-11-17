// name: FUN_00457468
// address: 0x457468
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00457468(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_00484b60;
  if (DAT_00484b84 < DAT_00484b80) {
    uVar4 = DAT_00484b5c;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_00484b64; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_004570b8(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_00456db0((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_00484b84 = DAT_00484b84 - SVar3;
          FUN_00456dc8((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_00456db0((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_00484b84 = DAT_00484b84 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

