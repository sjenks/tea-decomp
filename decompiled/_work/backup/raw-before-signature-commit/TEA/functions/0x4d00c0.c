// name: FUN_004d00c0
// address: 0x4d00c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d00c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004d0158(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004d0164(param_1);
    iVar1 = FUN_004d0178(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004d0164(param_1);
      iVar1 = FUN_004d0184(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_004d0164(param_1);
    FUN_004d023c(local_c);
    FUN_004d0264();
    FUN_004d0334(param_1);
    FUN_004d0164(param_1);
    FUN_004d027c(local_14);
    FUN_004d02a4();
    local_18 = 0;
    FUN_004d02b4((int)local_28,param_1,&local_18);
  }
  return;
}

