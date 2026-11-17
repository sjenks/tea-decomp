// name: FUN_00440590
// address: 0x440590
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440590(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  
  if (param_2[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = 0;
  }
  iVar1 = param_2[8];
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  pvVar3 = GlobalAlloc(2,iVar2 + iVar1 * 4 + param_2[5] + 0x28);
  *param_1 = (int)pvVar3;
  if (*param_1 == 0) {
    FUN_004239d4();
  }
  pvVar4 = GlobalLock((HGLOBAL)*param_1);
  *(LPVOID *)((int)param_1 + 9) = pvVar4;
  puVar5 = *(undefined4 **)((int)param_1 + 9);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004405f8(param_1);
  return;
}

