// name: FUN_004d6cac
// address: 0x4d6cac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d6cac(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_004d39c0(local_10,0);
  bVar1 = FUN_004d4be0(*param_2);
  if (bVar1) {
    FUN_004d39c0(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_004d1758(*param_2);
    FUN_004d1bb4(local_1c,piVar2);
    FUN_004d6a54(local_10,local_1c);
    FUN_004d3a64(param_1,local_10);
  }
  return param_1;
}

