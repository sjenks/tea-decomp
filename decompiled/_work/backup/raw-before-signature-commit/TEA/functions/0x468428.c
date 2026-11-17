// name: FUN_00468428
// address: 0x468428
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00468428(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
  for (uVar2 = 0; uVar2 < (uint)param_1[0x46]; uVar2 = uVar2 + 1) {
    if (uVar1 != uVar2) {
      FUN_00468478(param_1,uVar2,0);
    }
  }
  FUN_00468478(param_1,uVar1,5);
  return;
}

