// name: FUN_004ce88c
// address: 0x4ce88c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ce88c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004ce924(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004ce930(param_1);
    iVar1 = FUN_004ce944(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004ce930(param_1);
      iVar1 = FUN_004ce950(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_004ce930(param_1);
    FUN_004cea04(local_c);
    FUN_004cea2c();
    FUN_004cea6c(param_1);
    FUN_004ce930(param_1);
    FUN_004cea44(local_14);
    FUN_004cea80();
    local_18 = 0;
    FUN_004cea90((int)local_28,param_1,&local_18);
  }
  return;
}

