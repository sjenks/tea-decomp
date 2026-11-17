// name: FUN_00461634
// address: 0x461634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00461634(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_0045e370(local_10,0);
  bVar1 = FUN_0045f6dc(*param_2);
  if (bVar1) {
    FUN_0045e370(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_0045bea8(*param_2);
    FUN_0045c418(local_1c,piVar2);
    FUN_004613dc(local_10,local_1c);
    FUN_0045e414(param_1,local_10);
  }
  return param_1;
}

