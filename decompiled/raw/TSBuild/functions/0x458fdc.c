// name: FUN_00458fdc
// address: 0x458fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00458fdc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_00459074(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00459080(param_1);
    iVar1 = FUN_00459094(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00459080(param_1);
      iVar1 = FUN_004590a0(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_00459080(param_1);
    FUN_00459154(local_c);
    FUN_0045917c();
    FUN_004591bc(param_1);
    FUN_00459080(param_1);
    FUN_00459194(local_14);
    FUN_004591d0();
    local_18 = 0;
    FUN_004591e0((int)local_28,param_1,&local_18);
  }
  return;
}

