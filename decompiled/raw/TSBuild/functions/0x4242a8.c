// name: FUN_004242a8
// address: 0x4242a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004242a8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((((*param_2 == *(int *)((int)param_1 + 10)) && (param_2[1] == *(int *)((int)param_1 + 0xe)))
      && (param_2[2] == *(int *)((int)param_1 + 0x12))) &&
     (param_2[3] == *(int *)((int)param_1 + 0x16))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    piVar3 = (int *)((int)param_1 + 10);
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return;
}

