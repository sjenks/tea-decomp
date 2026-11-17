// name: FUN_0042ba88
// address: 0x42ba88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ba88(int *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c070);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047c090;
    FUN_0042ba5c(param_1);
    FUN_00421ef4(param_1);
    FUN_0042ba5c(param_1);
    if ((char)param_1[1] == '\0') {
      iVar2 = *param_1;
      puVar1 = FUN_0042b6a4();
      FUN_0042b87c((int)puVar1,iVar2);
    }
    FUN_00421698(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

