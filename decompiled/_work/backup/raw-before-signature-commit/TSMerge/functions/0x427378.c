// name: FUN_00427378
// address: 0x427378
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427378(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4696a4);
  if (param_1 != (uint *)0x0) {
    if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
      FUN_00411fc4(*(uint **)((int)param_1 + 0x11),3);
    }
    FUN_00431428(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

