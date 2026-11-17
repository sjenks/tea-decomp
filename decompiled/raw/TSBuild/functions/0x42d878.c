// name: FUN_0042d878
// address: 0x42d878
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042d878(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c [2];
  
  local_c[0] = param_2 + 1;
  local_c[1] = 0;
  uVar1 = FUN_0042d8bc(*(int *)(param_1 + 4),local_c);
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 9) + uVar1 * 4) + 4);
  }
  return uVar2;
}

