// name: FUN_0041790c
// address: 0x41790c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041790c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004179a4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004179b0(param_1);
    iVar1 = FUN_004179c4(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004179b0(param_1);
      iVar1 = FUN_004179d0(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_004179b0(param_1);
    FUN_00417a88(local_c);
    FUN_00417ab0();
    FUN_00417b80(param_1);
    FUN_004179b0(param_1);
    FUN_00417ac8(local_14);
    FUN_00417af0();
    local_18 = 0;
    FUN_00417b00((int)local_28,param_1,&local_18);
  }
  return;
}

