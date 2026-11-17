// name: FUN_00435464
// address: 0x435464
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435464(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 9) == 0) {
    if (*(char *)((int)param_1 + 0x1f) == '\0') {
      pvVar1 = GlobalLock((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
    else {
      pvVar1 = LockResource((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
  }
  if (**(int **)((int)param_1 + 9) != 0x28) {
    GlobalUnlock((HGLOBAL)*param_1);
    FUN_0041cad0(0x7fdc,0);
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x10) == 3) {
    *(int *)((int)param_1 + 0xd) = *(int *)((int)param_1 + 9) + 0x28;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x34;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xd) = 0;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x28;
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x20) == 0) {
    iVar2 = FUN_004152b4(*(short *)(*(int *)((int)param_1 + 9) + 0xe));
  }
  else {
    iVar2 = *(int *)(*(int *)((int)param_1 + 9) + 0x20);
  }
  *(int *)((int)param_1 + 0x19) = iVar2;
  *(int *)((int)param_1 + 0x15) = *(int *)((int)param_1 + 0x19) * 4 + *(int *)((int)param_1 + 0x11);
  if (*(int *)((int)param_1 + 0x19) == 0) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x1d) = 0;
  return;
}

