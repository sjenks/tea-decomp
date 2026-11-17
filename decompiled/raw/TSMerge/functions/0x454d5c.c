// name: FUN_00454d5c
// address: 0x454d5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00454d5c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x473d1c);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)*param_2) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    iVar3 = *param_2;
    *param_1 = iVar3;
    piVar1 = (int *)(iVar3 + 4);
    *piVar1 = *piVar1 + 1;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

