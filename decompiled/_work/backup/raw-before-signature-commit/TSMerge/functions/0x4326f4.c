// name: FUN_004326f4
// address: 0x4326f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004326f4(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    piVar1 = FUN_0042dd74(puVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(*piVar1,extraout_EDX,puVar2,piVar1,param_2);
    }
  }
  return;
}

