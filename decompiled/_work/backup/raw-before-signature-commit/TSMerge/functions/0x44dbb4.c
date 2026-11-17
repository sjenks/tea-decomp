// name: FUN_0044dbb4
// address: 0x44dbb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044dbb4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0044dc4c(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044dc58(param_1);
    iVar1 = FUN_0044dc6c(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0044dc58(param_1);
      iVar1 = FUN_0044dc78(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0044dc58(param_1);
    FUN_0044dd30(local_c);
    FUN_0044dd58();
    FUN_0044de28(param_1);
    FUN_0044dc58(param_1);
    FUN_0044dd70(local_14);
    FUN_0044dd98();
    local_18 = 0;
    FUN_0044dda8((int)local_28,param_1,&local_18);
  }
  return;
}

