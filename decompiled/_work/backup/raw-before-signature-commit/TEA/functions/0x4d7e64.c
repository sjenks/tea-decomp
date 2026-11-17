// name: FUN_004d7e64
// address: 0x4d7e64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d7e64(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_004d2f64((int)param_1);
  if (cVar1 != '\0') {
    piVar2 = FUN_004d08c4(param_1 + 2);
    if (piVar2 == (int *)0x0) {
      FUN_004d1084(*param_1,4);
      return;
    }
    FUN_004d0cac(*param_1,0);
  }
  return;
}

