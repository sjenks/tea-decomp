// name: FUN_0042197c
// address: 0x42197c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042197c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x468804);
  piVar1 = DAT_004687f0;
  if ((DAT_004687f0 == (int *)0x0) && (piVar1 = (int *)FUN_0044b300(), piVar1 != (int *)0x0)) {
    FUN_00421d9c(piVar1);
  }
  DAT_004687f0 = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

