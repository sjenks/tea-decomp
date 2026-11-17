// name: FUN_00437dd4
// address: 0x437dd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00437dd4(int param_1)

{
  ATOM AVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  WNDCLASSA local_2c;
  
  if (DAT_0047e1f2 == '\0') {
    puVar2 = FUN_0041b958();
    DAT_0047e1f1 = *(int *)(puVar2 + 0x10) != 2;
    DAT_0047e1f2 = DAT_0047e1f2 + '\x01';
  }
  if (DAT_0047e1f1 == '\0') {
    bVar4 = false;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    bVar4 = iVar3 != 0;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 8) + 0x74))();
    iVar3 = FUN_004502e8();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x70))();
      (**(code **)(*(int *)(param_1 + 8) + 0x74))();
      iVar3 = FUN_004502e8();
      if (iVar3 == 0) {
        AVar1 = RegisterClassA(&local_2c);
        return AVar1 != 0;
      }
    }
  }
  return true;
}

