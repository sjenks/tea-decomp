// name: FUN_00440b78
// address: 0x440b78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00440b78(int *param_1,HMODULE param_2,LPCSTR param_3)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4800f8);
  FUN_0042790c(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_004800dc;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  bVar1 = FUN_00440c0c(param_1,param_2,param_3);
  if (!bVar1) {
    FUN_00427c44(0x7fe0,0);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

