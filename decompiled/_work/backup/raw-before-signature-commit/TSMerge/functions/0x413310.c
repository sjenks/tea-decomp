// name: FUN_00413310
// address: 0x413310
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413310(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((DAT_00467240 & 1) == 0) {
    if (((*(byte *)(param_1 + 0x56) & 2) == 0) &&
       ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c != 1)) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
    *(undefined4 *)(param_1 + 0x1a) = uVar3;
    FUN_0041967c(param_1,param_2);
  }
  else {
    bVar4 = (*(byte *)(param_1 + 0x42) & 1) == 0;
    if ((bVar4) ||
       (((*(byte *)(param_1 + 0x56) & 2) == 0 &&
        ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c != 1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar4) ||
       ((*(char *)(param_1 + 0x39) == '\0' && (param_1 != *(int *)(*(int *)(param_1 + 6) + 0x20)))))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar1) {
      uVar3 = 3;
    }
    else if (bVar4) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x1a) = uVar3;
    if ((DAT_00467240 & 0x10) == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00413498();
    }
    if (puVar2 == (undefined4 *)0x0) {
      if (bVar1) {
        uVar3 = 3;
      }
      else if (bVar4) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(param_1 + 0x1a) = uVar3;
      FUN_0041967c(param_1,param_2);
    }
    else {
      (*(code *)*puVar2)();
      (*(code *)puVar2[2])();
      (*(code *)puVar2[1])();
    }
  }
  return;
}

