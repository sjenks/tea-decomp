// name: FUN_004cf384
// address: 0x4cf384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004cf384(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_004ce930(param_2);
    iVar2 = FUN_004ce944(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_004cf40c(param_2);
      FUN_004cf41c(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_004ce930(param_2);
      FUN_004cf3f4(piVar1);
      FUN_004ce88c(param_1);
      local_8 = FUN_004ce924(param_2);
      FUN_004cea90((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

