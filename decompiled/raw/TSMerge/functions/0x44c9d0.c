// name: FUN_0044c9d0
// address: 0x44c9d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044c9d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0044ca68(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044ca74(param_1);
    iVar1 = FUN_0044ca88(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0044ca74(param_1);
      iVar1 = FUN_0044ca94(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0044ca74(param_1);
    FUN_0044cb48(local_c);
    FUN_0044cb70();
    FUN_0044cbb0(param_1);
    FUN_0044ca74(param_1);
    FUN_0044cb88(local_14);
    FUN_0044cbc4();
    local_18 = 0;
    FUN_0044cbd4((int)local_28,param_1,&local_18);
  }
  return;
}

