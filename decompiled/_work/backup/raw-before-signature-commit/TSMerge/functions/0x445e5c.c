// name: FUN_00445e5c
// address: 0x445e5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00445e5c(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00434b04(param_1,param_2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else if (param_2 == DAT_0046f710) {
    iVar2 = (**(code **)(param_1[3] + 0x3c))();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

