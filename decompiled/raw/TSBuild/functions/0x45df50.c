// name: FUN_0045df50
// address: 0x45df50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045df50(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_004887ec);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_004887ec,'\x01',0x20,FUN_0045d6b0);
  }
  return piVar2;
}

