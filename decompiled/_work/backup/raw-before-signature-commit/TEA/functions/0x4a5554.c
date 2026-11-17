// name: FUN_004a5554
// address: 0x4a5554
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a5554(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
  }
  if (iVar4 != 0) {
    do {
      if ((param_2 == 0) || ((*(byte *)(iVar4 + 0x75) & 0x10) != 0)) {
        cVar1 = (**(code **)(*(int *)(iVar4 + 8) + 0x2c))();
        if (cVar1 == '\0') {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0xffffefff;
        }
        else {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) | 0x1000;
          uVar3 = 1;
        }
      }
      iVar4 = *(int *)(iVar4 + 0x7e);
      if (iVar4 == 0) {
        return uVar3;
      }
      if (*(int *)(param_1 + 0x7a) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
      }
    } while (iVar4 != iVar2);
  }
  return uVar3;
}

