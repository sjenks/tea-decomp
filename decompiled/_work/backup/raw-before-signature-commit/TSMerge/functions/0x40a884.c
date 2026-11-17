// name: FUN_0040a884
// address: 0x40a884
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040a884(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0xf) {
    FUN_0040a094(param_1,param_2,param_3);
  }
  else {
    iVar4 = iVar1 >> 5;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((iVar1 >> 4 & 1U) != 0);
    }
    iVar4 = iVar4 * 0x10 + param_1;
    iVar1 = iVar4 - param_1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < 0xf) {
      FUN_0040a094(param_1,iVar4,param_3);
    }
    else {
      iVar1 = iVar4 - param_1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar3 = iVar1 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iVar1 >> 4 & 1U) != 0);
      }
      iVar1 = iVar3 * 0x10 + param_1;
      FUN_0040a884(param_1,iVar1,param_3);
      FUN_0040a884(iVar1,iVar4,param_3);
      iVar3 = iVar4 - iVar1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = iVar1 - param_1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040a4c0(param_1,iVar1,iVar4,iVar2 >> 4,iVar3 >> 4,param_3);
    }
    iVar1 = param_2 - iVar4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < 0xf) {
      FUN_0040a094(iVar4,param_2,param_3);
    }
    else {
      iVar1 = param_2 - iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar3 = iVar1 >> 5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iVar1 >> 4 & 1U) != 0);
      }
      iVar1 = iVar3 * 0x10 + iVar4;
      FUN_0040a884(iVar4,iVar1,param_3);
      FUN_0040a884(iVar1,param_2,param_3);
      iVar3 = param_2 - iVar1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      iVar2 = iVar1 - iVar4;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040a4c0(iVar4,iVar1,param_2,iVar2 >> 4,iVar3 >> 4,param_3);
    }
    iVar1 = param_2 - iVar4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    iVar3 = iVar4 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0040a4c0(param_1,iVar4,param_2,iVar3 >> 4,iVar1 >> 4,param_3);
  }
  return;
}

