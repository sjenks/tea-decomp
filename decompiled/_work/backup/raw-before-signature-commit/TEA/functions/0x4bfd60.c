// name: FUN_004bfd60
// address: 0x4bfd60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bfd60(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  
  iVar2 = *param_1;
  uVar1 = FUN_004a78f0(iVar2);
  if ((uVar1 & 0x808) == 0) {
    iVar2 = (**(code **)(param_1[3] + 0x6c))(param_1[3],extraout_EDX,iVar2,param_1);
    if (-1 < iVar2) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a76a8(*param_1,400,0,0);
  }
  return uVar3;
}

