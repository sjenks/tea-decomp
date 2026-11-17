// name: FUN_004afb58
// address: 0x4afb58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004afb58(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))();
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(*(int *)((int)param_1 + 0x3f) + 0x10))();
    *(undefined4 *)(*piVar3 + 0x34) = 0x7d29;
  }
  cVar1 = (**(code **)(**(int **)(*param_1 + 0x25) + 4))();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)((int)param_1 + 0x43) + 0x10))();
  }
  return uVar4;
}

