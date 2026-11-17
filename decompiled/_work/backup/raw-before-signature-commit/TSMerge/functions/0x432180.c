// name: FUN_00432180
// address: 0x432180
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00432180(int *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_0042d1a4(*param_1,0xf0,0,0);
    *param_2 = uVar1;
  }
  else if (param_3 == 1) {
    FUN_004321c4(param_1,(uint)*param_2);
  }
  return 2;
}

