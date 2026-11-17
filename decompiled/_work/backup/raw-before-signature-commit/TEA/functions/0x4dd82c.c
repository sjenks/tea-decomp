// name: FUN_004dd82c
// address: 0x4dd82c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004dd82c(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_004dd2e5((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_004dd2e5((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_004e5ce8(s___Can_t_adjust_class_address__no_00517198,s_xxtype_cpp_005171d2,0x57e);
    param_1 = 0;
  }
  return param_1;
}

