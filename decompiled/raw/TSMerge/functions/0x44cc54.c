// name: FUN_0044cc54
// address: 0x44cc54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044cc54(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044cc90((undefined4 *)&DAT_004733a0);
  piVar2 = (int *)FUN_0044cc9c(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_00455140(param_1,(uint *)&DAT_004733a0,'\x01',0x20,&LAB_00410f50);
  }
  return piVar2;
}

