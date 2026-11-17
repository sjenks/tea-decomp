// name: FUN_0045033c
// address: 0x45033c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045033c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044cc90((undefined4 *)&DAT_00473e6c);
  piVar2 = (int *)FUN_0044cc9c(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_00455140(param_1,(uint *)&DAT_00473e6c,'\x01',0x20,FUN_0044fbcc);
  }
  return piVar2;
}

