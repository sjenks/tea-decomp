// name: FUN_004bfdd8
// address: 0x4bfdd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bfdd8(int *param_1,LPARAM param_2,WPARAM param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x808) == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004a76a8(*param_1,0x191,param_3,param_2);
  return uVar2;
}

