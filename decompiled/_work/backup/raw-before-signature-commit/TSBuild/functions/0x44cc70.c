// name: FUN_0044cc70
// address: 0x44cc70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044cc70(int *param_1,int param_2,char param_3)

{
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    *(undefined4 *)(*param_1 + 0x18) = 0x10cf0000;
    *(undefined4 *)(*param_1 + 0x28) = 0x80000000;
    *(undefined4 *)(*param_1 + 0x20) = 0x80000000;
    if (param_2 != 0) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x2000000;
    }
    if (param_3 != '\0') {
      *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 8;
    }
    FUN_0044ccc0(param_1,param_2);
  }
  return;
}

