// name: FUN_004d6d58
// address: 0x4d6d58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d6d58(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004cea6c(param_1);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  piVar2 = FUN_004cf7b0(param_1,param_2,uVar1);
  uVar1 = FUN_004cea6c(param_1);
  puVar3 = (undefined4 *)FUN_004cffa0(param_1);
  puVar4 = (undefined4 *)FUN_004cfaa0((int)piVar2);
  FUN_004cf758(puVar4,puVar3,uVar1);
  FUN_004ce88c(param_1);
  local_8 = FUN_004cfaa0((int)piVar2);
  FUN_004cea90((int)local_18,param_1,&local_8);
  return;
}

