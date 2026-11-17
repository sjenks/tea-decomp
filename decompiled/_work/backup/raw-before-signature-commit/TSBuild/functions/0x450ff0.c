// name: FUN_00450ff0
// address: 0x450ff0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00450ff0(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_0043fc98(param_1,param_2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else if (param_2 == DAT_004834ec) {
    iVar2 = (**(code **)(param_1[3] + 0x3c))();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

