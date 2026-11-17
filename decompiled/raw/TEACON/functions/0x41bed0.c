// name: FUN_0041bed0
// address: 0x41bed0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041bed0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00416b00(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_00416b0c((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

