// name: FUN_0049c02c
// address: 0x49c02c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c02c(undefined4 *param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x18))();
  if ((param_2 - 10U < 5) || (param_2 - 10U == 6)) {
    pvVar1 = GetStockObject(param_2);
    if (pvVar1 != *(HGDIOBJ *)((int)param_1 + 0x39)) {
      *(HGDIOBJ *)((int)param_1 + 0x39) = pvVar1;
      (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
    }
  }
  else {
    FUN_0048da0c(param_1,param_2);
  }
  return;
}

