// name: FUN_00457690
// address: 0x457690
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00457690(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar2 = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_00456d3c(&local_8,uVar2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *local_8 = uVar2 - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}

