// name: FUN_0041669c
// address: 0x41669c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041669c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_00416734(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00416740(param_1);
    iVar1 = FUN_00416754(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00416740(param_1);
      iVar1 = FUN_00416760(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_00416740(param_1);
    FUN_00416814(local_c);
    FUN_0041683c();
    FUN_0041687c(param_1);
    FUN_00416740(param_1);
    FUN_00416854(local_14);
    FUN_00416890();
    local_18 = 0;
    FUN_004168a0((int)local_28,param_1,&local_18);
  }
  return;
}

