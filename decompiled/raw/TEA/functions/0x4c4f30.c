// name: FUN_004c4f30
// address: 0x4c4f30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004c4f30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar3 = FUN_00487e08(puVar1,iVar3);
  if (iVar3 != 0) {
    FUN_00498d7c((int *)(iVar3 + 0x11));
  }
  if ((DAT_00510fdc == param_1) || (DAT_00510fdc == -1)) {
    DAT_00510fdc = 0;
    uVar2 = 0;
  }
  else if ((param_2 == 0) || (param_2 == -4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

