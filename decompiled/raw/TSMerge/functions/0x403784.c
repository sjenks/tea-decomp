// name: FUN_00403784
// address: 0x403784
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403784(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x20),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0xd0),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x180),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x230),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x2e0),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xdd8) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xdd8) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xdd8) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xdd8) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdd8) = 0;
  }
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x390),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x440),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x4f0),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x5a0),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x650),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xddc) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xddc) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xddc) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xddc) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xddc) = 0;
  }
  FUN_00403920(param_1);
  return;
}

