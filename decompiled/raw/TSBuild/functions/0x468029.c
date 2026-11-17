// name: FUN_00468029
// address: 0x468029
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00468029(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_0046fe00(&DAT_00488e85,s_xxtype_cpp_00488e8a,0x515);
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (undefined4 *)(*param_4 + param_1[1]);
    if (param_2 != 0) {
      local_8 = (undefined4 *)*local_8;
    }
    iVar2 = FUN_00468104(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_00468029((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int *)&local_8), iVar2 != 0)) {
      *param_4 = (int)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int)local_8;
  return 1;
}

