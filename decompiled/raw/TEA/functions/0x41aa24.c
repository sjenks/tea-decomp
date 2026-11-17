// name: FUN_0041aa24
// address: 0x41aa24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041aa24(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0046960c(param_1);
  uVar1 = FUN_004693e8(param_1);
  if ((uVar1 & 0x4080001) != 0x4080001) {
    FUN_00469408(param_1,uVar1 | 0x4080001);
  }
  iVar2 = FUN_00469b1c('\0');
  if (1 < iVar2) {
    FUN_004a76a8(*param_1,0x45b,1,0);
  }
  return;
}

