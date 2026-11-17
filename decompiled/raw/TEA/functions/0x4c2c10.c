// name: FUN_004c2c10
// address: 0x4c2c10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004c2c10(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_004b0624(param_1,param_2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else if (param_2 == DAT_005108a0) {
    iVar2 = (**(code **)(param_1[3] + 0x3c))();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

