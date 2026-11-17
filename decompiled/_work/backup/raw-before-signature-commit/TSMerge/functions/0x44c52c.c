// name: FUN_0044c52c
// address: 0x44c52c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0044c52c(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_0044c18c(param_2);
      if (puVar1 != (uint *)0x0) {
        FUN_004559d0(puVar1,param_1,uVar3);
        FUN_0044c01c((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_0044c18c(param_2);
      if (puVar1 != (uint *)0x0) {
        FUN_004559d0(puVar1,param_1,param_2);
        FUN_0044c01c((int)param_1);
      }
    }
    else {
      FUN_0044b870((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}

