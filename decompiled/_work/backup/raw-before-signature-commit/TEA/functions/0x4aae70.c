// name: FUN_004aae70
// address: 0x4aae70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aae70(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  *(undefined4 *)(param_2 + 0x7e) = 0;
  if (*(int *)(param_1 + 0x67) == 0) {
    *(int *)(param_1 + 0x67) = param_2;
  }
  else {
    for (iVar1 = *(int *)(param_1 + 0x67); *(int *)(iVar1 + 0x7e) != 0;
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    *(int *)(iVar1 + 0x7e) = param_2;
  }
  return;
}

