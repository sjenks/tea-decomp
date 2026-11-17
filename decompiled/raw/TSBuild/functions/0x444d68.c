// name: FUN_00444d68
// address: 0x444d68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00444d68(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x1e) == 0) || (param_2 != *(uint **)(param_1 + 0x1e))) {
    FUN_0045681c();
    if (param_2 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0042aea0(param_2);
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar1;
  }
  FUN_00444e18(param_1);
  return;
}

