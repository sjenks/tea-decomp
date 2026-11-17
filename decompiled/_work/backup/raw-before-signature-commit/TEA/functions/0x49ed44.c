// name: FUN_0049ed44
// address: 0x49ed44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049ed44(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (((param_2 != (uint *)0x0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (iVar1 = FUN_004dc978((char *)param_2,*(char **)(param_1 + 0x44)), iVar1 == 0)) {
    return;
  }
  FUN_004cc0cc();
  if (param_2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar2 = FUN_00496d48(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    pcVar3 = FUN_004dc9f4(*(uint **)(param_1 + 0x44));
    *(char **)(param_1 + 0x48) = pcVar3;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  FUN_0049ed04(param_1);
  return;
}

