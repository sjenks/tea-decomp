// name: FUN_00410704
// address: 0x410704
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00410704(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  do {
    if (param_1[2] == param_1[6]) {
      return 0;
    }
    piVar1 = (int *)param_1[2];
    param_1[2] = param_1[2] + 4;
    iVar2 = *piVar1;
  } while ((iVar2 < *(int *)(*param_1 + 0x2404)) || (*(int *)(*param_1 + 0x2408) <= iVar2));
  FUN_0040ca04(param_1[1],iVar2,param_2);
  return 1;
}

