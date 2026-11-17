// name: FUN_00434cd8
// address: 0x434cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00434cd8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xffefffff;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_0042e05c(*param_1,0x7fed);
  }
  DAT_0046c060 = param_1;
  FUN_0042c89c(*param_1);
  FUN_00434ca8(param_1);
  (**(code **)(param_1[3] + 0x10))();
  if (*(int *)(*param_1 + 0xc) == 0) {
    FUN_0042e05c(*param_1,0x7feb);
  }
  uVar2 = FUN_0042d338(*param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

