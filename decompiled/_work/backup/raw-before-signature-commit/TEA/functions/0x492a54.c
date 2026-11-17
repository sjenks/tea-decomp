// name: FUN_00492a54
// address: 0x492a54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492a54(int *param_1,int param_2)

{
  FUN_004a5774(*param_1);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    *(undefined4 *)(*param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x14);
    if (((char)param_1[0xd] != '\0') || (*(char *)((int)param_1 + 0x33) != '\0')) {
      (**(code **)(param_1[6] + 0x48))();
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    FUN_00491968(param_1);
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*param_1 + 0x28);
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*param_1 + 0x2c);
    }
  }
  return;
}

