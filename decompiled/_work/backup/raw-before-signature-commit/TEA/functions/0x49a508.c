// name: FUN_0049a508
// address: 0x49a508
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a508(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0049a238(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_004dd5cc((int)param_2,iVar3,0x4027f0);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    FUN_0049a3c4(param_1,puVar2);
  }
  return;
}

