// name: FUN_00425520
// address: 0x425520
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00425520(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_00475ffc != 0) {
    piVar1 = FUN_004166f4(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_00416a34(piVar1);
    FUN_004252e4((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_004253d4((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

