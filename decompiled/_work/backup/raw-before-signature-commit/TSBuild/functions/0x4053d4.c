// name: FUN_004053d4
// address: 0x4053d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004053d4(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    iVar1 = param_1[2];
    (&DAT_0048b450)[iVar1] = param_1[5];
    (&DAT_0048b850)[iVar1] = (char)param_1[4];
  }
  else {
    FUN_004053d4((int *)*param_1);
    FUN_004053d4((int *)param_1[1]);
  }
  FUN_0045680c();
  return;
}

