// name: FUN_004252e4
// address: 0x4252e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004252e4(int *param_1,uint param_2)

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
      piVar1 = FUN_00416744(&local_18,6,1,0x7b6);
      FUN_004252b8(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_00416744(&local_14,0x17,2,0x7b7);
      FUN_004252b8(param_1,piVar1,iVar2);
    }
    else {
      FUN_00416744(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_004169a8(&local_10,&local_c,7);
      FUN_004252b8(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_00416744(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_004169a8(&local_20,&local_8,7);
    FUN_00416a5c(&local_1c,&local_20,iVar2);
    FUN_004252b8(param_1,&local_1c,iVar3);
  }
  return param_1;
}

