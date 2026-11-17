// name: FUN_00459ad4
// address: 0x459ad4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00459ad4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_00459080(param_2);
    iVar2 = FUN_00459094(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_00459b5c(param_2);
      FUN_00459b6c(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_00459080(param_2);
      FUN_00459b44(piVar1);
      FUN_00458fdc(param_1);
      local_8 = FUN_00459074(param_2);
      FUN_004591e0((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

