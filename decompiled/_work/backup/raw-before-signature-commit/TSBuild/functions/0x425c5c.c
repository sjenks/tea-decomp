// name: FUN_00425c5c
// address: 0x425c5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425c5c(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != *(char *)((int)param_1 + 0x35)) || ((char)param_1[0xd] != '\0')) {
    if (param_2 != *(char *)((int)param_1 + 0x35)) {
      uVar1 = *(undefined1 *)((int)param_1 + 0x31);
      *(undefined1 *)((int)param_1 + 0x31) = *(undefined1 *)((int)param_1 + 0x32);
      *(undefined1 *)((int)param_1 + 0x32) = uVar1;
      *(char *)((int)param_1 + 0x35) = (char)param_2;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    piVar3 = param_1;
    uVar2 = FUN_00425bf0(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar2,param_1[6],piVar3,param_1);
  }
  return;
}

