// name: FUN_0045eda9
// address: 0x45eda9
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045eda9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_00401140();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_00456ae0();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x52);
  }
  FUN_0045eb24(*(uint **)(iVar1 + 4),puVar3,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),param_1,param_2,
               in_stack_00000000);
  return;
}

