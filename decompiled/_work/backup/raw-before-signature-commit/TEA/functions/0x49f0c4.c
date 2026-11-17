// name: FUN_0049f0c4
// address: 0x49f0c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049f0c4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 < 0x7c3) {
    if (param_2 == 0x7b6) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_18,6,1,0x7b6);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_14,0x17,2,0x7b7);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else {
      FUN_0048d474(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_0048d6d8(&local_10,&local_c,7);
      FUN_0049f098(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_0048d474(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_0048d6d8(&local_20,&local_8,7);
    FUN_0048d78c(&local_1c,&local_20,iVar2);
    FUN_0049f098(param_1,&local_1c,iVar3);
  }
  return param_1;
}

