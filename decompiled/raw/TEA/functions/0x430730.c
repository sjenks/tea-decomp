// name: FUN_00430730
// address: 0x430730
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430730(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [6];
  undefined4 local_c;
  
  local_c = *(undefined4 *)(*(int *)(*param_1 + 0x24) + 8);
  local_24[2] = local_c;
  piVar2 = local_24;
  piVar3 = param_1 + 2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (; (*(int *)(*param_1 + 0x24) != param_1[4] &&
         (iVar1 = *(int *)(param_1[4] + 0x14), -1 < param_2 - iVar1)); param_2 = param_2 - iVar1) {
    FUN_0042ba94((int)(param_1 + 2));
  }
  if (*(int *)(*param_1 + 0x24) != param_1[4]) {
    param_1[6] = param_2 + *(int *)(param_1[4] + 0x10);
  }
  return;
}

