// name: FUN_0049f300
// address: 0x49f300
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0049f300(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_00518fb8 != 0) {
    piVar1 = FUN_0048d424(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_0048d764(piVar1);
    FUN_0049f0c4((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_0049f1b4((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

