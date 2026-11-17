// name: FUN_00434dcc
// address: 0x434dcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00434dcc(int *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100000;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_0042e05c(*param_1,0x7fed);
  }
  DAT_0046c060 = param_1;
  FUN_00434ca8(param_1);
  iVar2 = (**(code **)(param_1[3] + 0x18))();
  if (iVar2 == -1) {
    FUN_0042e05c(*param_1,0x7fea);
  }
  return iVar2;
}

