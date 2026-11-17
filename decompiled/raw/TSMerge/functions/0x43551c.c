// name: FUN_0043551c
// address: 0x43551c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043551c(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  SIZE_T dwBytes;
  
  dwBytes = (*(int *)(*(int *)((int)param_1 + 9) + 0x14) + *(int *)((int)param_1 + 0x15)) -
            *(int *)((int)param_1 + 9);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    FUN_00418860();
  }
  puVar1 = GlobalLock(hMem);
  FUN_004559d0(puVar1,*(undefined4 **)((int)param_1 + 9),dwBytes);
  *param_1 = hMem;
  *(undefined4 **)((int)param_1 + 9) = puVar1;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  FUN_00435464(param_1);
  return;
}

