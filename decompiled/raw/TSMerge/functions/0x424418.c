// name: FUN_00424418
// address: 0x424418
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424418(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468e80);
  if (param_1 != (int *)0x0) {
    FUN_00420b3c((undefined4 *)((int)param_1 + 0x86),0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
    FUN_0042ade0(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
    if ((param_2 & 2) != 0) {
      FUN_00413978((undefined4 *)((int)param_1 + 0x9f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

