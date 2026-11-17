// name: FUN_004ced58
// address: 0x4ced58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004ced58(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00513dc4);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,(uint *)&DAT_00513dc4,'\x01',0x80,FUN_004cedc4);
  }
  return piVar2;
}

