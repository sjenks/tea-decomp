// name: FUN_0042e108
// address: 0x42e108
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e108(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042de38(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar3,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    FUN_0042dfc4(param_1,puVar2);
  }
  return;
}

