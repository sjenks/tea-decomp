// name: FUN_00461204
// address: 0x461204
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00461204(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_004156f4(param_1);
  iVar3 = 0;
  piVar2 = param_1 + 0x19;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
    }
    piVar1 = (int *)piVar2[0xc];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_004e39d0(*(char **)(*piVar1 + 0x30));
      FUN_0041c1cc((int)(piVar1 + 0xc4));
    }
    piVar1 = (int *)piVar2[4];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_0041b1ec(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      FUN_0041b1ec(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      FUN_0041b1ec(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      FUN_0041b1ec(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  FUN_0046136c((int)param_1);
  FUN_0041b474(param_1 + 0x5c,param_1[0x18] + 0x10);
  return;
}

