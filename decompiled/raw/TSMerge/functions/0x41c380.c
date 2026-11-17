// name: FUN_0041c380
// address: 0x41c380
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041c380(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  local_8 = 0;
  cVar2 = (**(code **)(param_1[6] + 0x68))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*param_1 + 0x14);
    if ((iVar1 != 0) && (*(int *)(*param_1 + 0xc) == *(int *)(param_2 + 8))) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0xc);
      (**(code **)(*(int *)(iVar1 + 8) + 0x50))();
      if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
        return;
      }
    }
    FUN_0042b62c((undefined4 *)*param_1,param_2);
  }
  else {
    FUN_004179cc(param_1[4],(int)&local_14);
  }
  return;
}

