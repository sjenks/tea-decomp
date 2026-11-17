// name: FUN_00422f74
// address: 0x422f74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422f74(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00422ca4(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_0045666c((int)param_2,iVar3,0x404628);
    puVar2 = (uint *)FUN_0045677c((int)puVar1);
    FUN_00422e30(param_1,puVar2);
  }
  return;
}

