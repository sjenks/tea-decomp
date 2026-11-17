// name: FUN_00444138
// address: 0x444138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00444138(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if ((piVar1 != (int *)0x0) && (*(int *)((int)piVar1 + 0x2e) != 0)) {
    piVar3 = piVar1;
    uVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((char)uVar2 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))
                (uVar2,*(int *)(param_1 + 8),piVar3,param_1,piVar1,0x7efd,0);
    }
    else {
      (**(code **)(*piVar1 + 0x18))();
    }
  }
  return;
}

