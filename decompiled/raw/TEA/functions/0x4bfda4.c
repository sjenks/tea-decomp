// name: FUN_004bfda4
// address: 0x4bfda4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bfda4(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x808) == 0) {
    uVar2 = FUN_004a76a8(*param_1,0x188,0,0);
    return uVar2;
  }
  return 0xffffffff;
}

