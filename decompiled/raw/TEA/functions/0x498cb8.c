// name: FUN_00498cb8
// address: 0x498cb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00498cb8(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508338);
  *(undefined4 *)((int)param_1 + 5) = 0;
  while ((char)param_1[1] == '\0') {
    cVar2 = (**(code **)(*param_1 + 4))();
    if (cVar2 == '\0') {
      WaitMessage();
    }
    FUN_00498d7c(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = *(undefined4 *)((int)param_1 + 5);
  *in_FS_OFFSET = local_28;
  return uVar1;
}

