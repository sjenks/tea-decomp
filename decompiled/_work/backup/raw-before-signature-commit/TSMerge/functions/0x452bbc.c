// name: FUN_00452bbc
// address: 0x452bbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00452bbc(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_0045075c(local_10,0);
  bVar1 = FUN_00451698(*param_2);
  if (bVar1) {
    FUN_0045075c(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_0044f24c(*param_2);
    FUN_0044f6a8(local_1c,piVar2);
    FUN_00452964(local_10,local_1c);
    FUN_00450800(param_1,local_10);
  }
  return param_1;
}

