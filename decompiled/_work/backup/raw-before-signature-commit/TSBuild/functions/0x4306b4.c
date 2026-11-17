// name: FUN_004306b4
// address: 0x4306b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004306b4(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_0048aa9c != 0) {
    piVar1 = FUN_00421718(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_00421a58(piVar1);
    FUN_00430478((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_00430568((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

