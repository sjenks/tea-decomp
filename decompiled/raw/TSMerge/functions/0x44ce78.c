// name: FUN_0044ce78
// address: 0x44ce78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044ce78(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_0044ca74(param_2);
    iVar2 = FUN_0044ca88(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_0044cf00(param_2);
      FUN_0044cf10(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_0044ca74(param_2);
      FUN_0044cee8(piVar1);
      FUN_0044c9d0(param_1);
      local_8 = FUN_0044ca68(param_2);
      FUN_0044cbd4((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

