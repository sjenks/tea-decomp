// name: FUN_004d35a0
// address: 0x4d35a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d35a0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00516ab8);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,(uint *)&DAT_00516ab8,'\x01',0x20,FUN_004d2cd8);
  }
  return piVar2;
}

