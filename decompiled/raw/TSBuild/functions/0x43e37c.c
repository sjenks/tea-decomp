// name: FUN_0043e37c
// address: 0x43e37c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043e37c(int *param_1,LPMSG param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1[1] + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1[1] + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((((iVar4 != *(int *)(*param_1 + 0x15)) && (*(int *)(iVar4 + 0xc) != 0)) &&
          (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x10000000) != 0)) &&
         (uVar3 = (**(code **)(*(int *)(iVar4 + 8) + 0x28))(), (char)uVar3 != '\0')) {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  uVar3 = FUN_0044d15c((int *)*param_1,param_2);
  return uVar3;
}

