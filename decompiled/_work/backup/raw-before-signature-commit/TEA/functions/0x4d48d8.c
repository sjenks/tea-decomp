// name: FUN_004d48d8
// address: 0x4d48d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d48d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004cea6c(param_1);
  uVar2 = FUN_004cea6c(param_1);
  piVar3 = FUN_004cf7b0(param_1,uVar2,uVar1);
  uVar1 = FUN_004cea6c(param_1);
  puVar4 = (undefined4 *)FUN_004cffa0(param_1);
  puVar5 = (undefined4 *)FUN_004cfaa0((int)piVar3);
  FUN_004cf758(puVar5,puVar4,uVar1);
  FUN_004ce88c(param_1);
  local_8 = FUN_004cfaa0((int)piVar3);
  FUN_004cea90((int)local_18,param_1,&local_8);
  return;
}

