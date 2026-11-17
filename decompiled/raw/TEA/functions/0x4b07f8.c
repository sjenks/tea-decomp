// name: FUN_004b07f8
// address: 0x4b07f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b07f8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xffefffff;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_004a857c(*param_1,0x7fed);
  }
  DAT_0050cd7c = param_1;
  FUN_004a6da0(*param_1);
  FUN_004b07c8(param_1);
  (**(code **)(param_1[3] + 0x10))();
  if (*(int *)(*param_1 + 0xc) == 0) {
    FUN_004a857c(*param_1,0x7feb);
  }
  uVar2 = FUN_004a783c(*param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

