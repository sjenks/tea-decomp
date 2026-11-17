// name: FUN_004594a8
// address: 0x4594a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004594a8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_00485c38);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_00485c38,'\x01',0x80,FUN_00459514);
  }
  return piVar2;
}

