// name: FUN_0043fe6c
// address: 0x43fe6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043fe6c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xffefffff;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_004391f0(*param_1,0x7fed);
  }
  DAT_0047fe3c = param_1;
  FUN_00437a30(*param_1);
  FUN_0043fe3c(param_1);
  (**(code **)(param_1[3] + 0x10))();
  if (*(int *)(*param_1 + 0xc) == 0) {
    FUN_004391f0(*param_1,0x7feb);
  }
  uVar2 = FUN_004384cc(*param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

