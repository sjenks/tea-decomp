// name: FUN_004b56f4
// address: 0x4b56f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b56f4(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x1e) == 0) || (param_2 != *(uint **)(param_1 + 0x1e))) {
    FUN_004cc0cc();
    if (param_2 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00496d48(param_2);
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar1;
  }
  FUN_004b57a4(param_1);
  return;
}

