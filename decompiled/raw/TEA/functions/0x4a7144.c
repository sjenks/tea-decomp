// name: FUN_004a7144
// address: 0x4a7144
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004a7144(int param_1)

{
  ATOM AVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  WNDCLASSA local_2c;
  
  if (DAT_0050ac36 == '\0') {
    puVar2 = FUN_0048751c();
    DAT_0050ac35 = *(int *)(puVar2 + 0x10) != 2;
    DAT_0050ac36 = DAT_0050ac36 + '\x01';
  }
  if (DAT_0050ac35 == '\0') {
    bVar4 = false;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004c1f08();
    bVar4 = iVar3 != 0;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004c1f08();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x70))();
      (**(code **)(*(int *)(param_1 + 8) + 0x74))();
      iVar3 = FUN_004c1f08();
      if (iVar3 == 0) {
        AVar1 = RegisterClassA(&local_2c);
        return AVar1 != 0;
      }
    }
  }
  return true;
}

