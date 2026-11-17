// name: FUN_004cd3d4
// address: 0x4cd3d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004cd3d4(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_004cce0c((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_004ccf7c(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_004cd1f4((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_004ccf7c(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_004dc7f8(puVar1,param_1,param_2);
        FUN_004cce0c((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_004cd31c(param_1,param_2);
  }
  return puVar1;
}

