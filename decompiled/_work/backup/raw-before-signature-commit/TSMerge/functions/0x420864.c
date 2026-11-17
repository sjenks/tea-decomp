// name: FUN_00420864
// address: 0x420864
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420864(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC pHVar3;
  
  puVar1 = FUN_00420530();
  iVar2 = FUN_004206b0((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)pHVar3;
    FUN_0041c800(param_1,0x7fe3);
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  return;
}

