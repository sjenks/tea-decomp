// name: FUN_004229b4
// address: 0x4229b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004229b4(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_004227b8(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00422970(param_1);
  }
  return uVar1;
}

