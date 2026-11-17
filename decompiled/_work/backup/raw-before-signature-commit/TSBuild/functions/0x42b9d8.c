// name: FUN_0042b9d8
// address: 0x42b9d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042b9d8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC pHVar3;
  
  puVar1 = FUN_0042b6a4();
  iVar2 = FUN_0042b824((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)pHVar3;
    FUN_00427974(param_1,0x7fe3);
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  return;
}

