// name: FUN_0043f204
// address: 0x43f204
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f204(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    iVar1 = param_1[2];
    (&DAT_0051993c)[iVar1] = param_1[5];
    (&DAT_00519d3c)[iVar1] = (char)param_1[4];
  }
  else {
    FUN_0043f204((int *)*param_1);
    FUN_0043f204((int *)param_1[1]);
  }
  FUN_004cc0bc();
  return;
}

