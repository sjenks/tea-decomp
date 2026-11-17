// name: FUN_0045a810
// address: 0x45a810
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a810(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0045a8a8(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0045a8b4(param_1);
    iVar1 = FUN_0045a8c8(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0045a8b4(param_1);
      iVar1 = FUN_0045a8d4(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0045a8b4(param_1);
    FUN_0045a98c(local_c);
    FUN_0045a9b4();
    FUN_0045aa84(param_1);
    FUN_0045a8b4(param_1);
    FUN_0045a9cc(local_14);
    FUN_0045a9f4();
    local_18 = 0;
    FUN_0045aa04((int)local_28,param_1,&local_18);
  }
  return;
}

