// name: FUN_00457254
// address: 0x457254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00457254(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0x1112) {
    iVar1 = FUN_0041b280(param_1 + 0x143);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    iVar2 = FUN_0041b280(param_1 + 0x143);
    if (iVar1 != iVar2) {
      FUN_0041b218(param_1 + 0x143);
    }
    iVar2 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 < iVar2) {
      FUN_0041b218(param_1 + 0xb6);
    }
  }
  else if (param_3 == 0x111c) {
    iVar1 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    iVar2 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 != iVar2) {
      FUN_0041b218(param_1 + 0xb6);
    }
    iVar2 = FUN_0041b280(param_1 + 0x143);
    if (iVar2 < iVar1) {
      FUN_0041b218(param_1 + 0x143);
    }
  }
  if (param_1[0x19] != 2) {
    FUN_0045269c(param_1);
  }
  return;
}

