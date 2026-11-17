// name: FUN_00457b24
// address: 0x457b24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00457b24(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_0045755c((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_004576cc(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_00457944((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_004576cc(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_004675a4(puVar1,param_1,param_2);
        FUN_0045755c((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_00457a6c(param_1,param_2);
  }
  return puVar1;
}

