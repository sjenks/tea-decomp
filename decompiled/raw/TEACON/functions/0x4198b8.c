// name: FUN_004198b8
// address: 0x4198b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004198b8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0041695c((undefined4 *)&DAT_0043187c);
  piVar2 = (int *)FUN_00416968(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_0041e54c(param_1,(uint *)&DAT_0043187c,'\x01',0x20,FUN_00419170);
  }
  return piVar2;
}

