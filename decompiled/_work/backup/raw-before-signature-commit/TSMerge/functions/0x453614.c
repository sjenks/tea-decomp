// name: FUN_00453614
// address: 0x453614
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00453614(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_004775c0 = DAT_004775c0 + -1;
    if (DAT_004775c0 == 0) {
      FUN_0044f200((int *)&DAT_004774f8);
      FUN_0044f200(&DAT_00477538);
      FUN_0044f200(&DAT_00477578);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

