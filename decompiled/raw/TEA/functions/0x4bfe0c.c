// name: FUN_004bfe0c
// address: 0x4bfe0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bfe0c(int *param_1,WPARAM param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x808) == 0) {
    uVar2 = FUN_004a76a8(*param_1,0x186,param_2,0);
    return uVar2;
  }
  return 0xffffffff;
}

