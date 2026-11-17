// name: FUN_00451ab8
// address: 0x451ab8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00451ab8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar3 = 1;
    iVar2 = param_1;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x30))
              (iVar1,*(int *)(param_1 + 0xc),iVar2,param_1,param_2 + iVar1,uVar3);
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
  return;
}

