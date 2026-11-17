// name: FUN_0042cc40
// address: 0x42cc40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0042cc40(int param_1)

{
  ATOM AVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  WNDCLASSA local_2c;
  
  if (DAT_0046a416 == '\0') {
    puVar2 = FUN_00410934();
    DAT_0046a415 = *(int *)(puVar2 + 0x10) != 2;
    DAT_0046a416 = DAT_0046a416 + '\x01';
  }
  if (DAT_0046a415 == '\0') {
    bVar4 = false;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_00445154();
    bVar4 = iVar3 != 0;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_00445154();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x70))();
      (**(code **)(*(int *)(param_1 + 8) + 0x74))();
      iVar3 = FUN_00445154();
      if (iVar3 == 0) {
        AVar1 = RegisterClassA(&local_2c);
        return AVar1 != 0;
      }
    }
  }
  return true;
}

